// 函数名称: sub_517130
// 虚拟地址: 0x517130
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_517130()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fe08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    BOOL hWnd = data_1151080
    
    if (hWnd != 0)
        hWnd = DestroyWindow(hWnd)
        data_1151080 = 0
    
    if (data_11518c4 != 0)
        hWnd = data_1151ad8
        BOOL hWnd_7 = hWnd
        
        if (hWnd != 0)
            hWnd = *(hWnd + 4)
            
            if (hWnd == 0x1e)
                HWND eax_4 =
                    CreateDialogParamA(GetModuleHandleA(nullptr), 0xaa, data_11518c4, sub_514920, 0)
                data_1151080 = eax_4
                HWND hWnd_1 = sub_558a90(eax_4)
                HDC eax_5 = GetDC(nullptr)
                int32_t eax_6 = GetDeviceCaps(eax_5, 0x58)
                int32_t eax_7 = GetDeviceCaps(eax_5, 0x5a)
                ReleaseDC(nullptr, eax_5)
                MoveWindow(hWnd_1, eax_6 s/ 0x60, eax_7 * 0x15e s/ 0x60, eax_6 * 0x12c s/ 0x60, 
                    eax_7 * 0x12c s/ 0x60, 1)
                ShowWindow(hWnd_1, SW_SHOW)
                sub_516090()
                sub_5151c0(data_1151ad8)
                ShowWindow(data_1151080, SW_SHOW)
                hWnd = sub_50c690()
            else if (hWnd == 0x20)
                HWND eax_22 =
                    CreateDialogParamA(GetModuleHandleA(nullptr), 0xaa, data_11518c4, sub_514d00, 0)
                data_1151080 = eax_22
                HWND hWnd_2 = sub_558a90(eax_22)
                HDC eax_23 = GetDC(nullptr)
                int32_t eax_24 = GetDeviceCaps(eax_23, 0x58)
                int32_t eax_25 = GetDeviceCaps(eax_23, 0x5a)
                ReleaseDC(nullptr, eax_23)
                MoveWindow(hWnd_2, eax_24 s/ 0x60, eax_25 * 0x15e s/ 0x60, eax_24 * 0x12c s/ 0x60, 
                    eax_25 * 0x12c s/ 0x60, 1)
                ShowWindow(hWnd_2, SW_SHOW)
                sub_515670()
                sub_514e80(data_1151ad8)
                ShowWindow(data_1151080, SW_SHOW)
                hWnd = sub_50c690()
            else if (hWnd != 0x1d && hWnd != 0x22 && (hWnd == 0x19 || hWnd == 0x1b))
                HWND hWnd_3 =
                    CreateDialogParamA(GetModuleHandleA(nullptr), 0x75, data_11518c4, sub_511660, 0)
                data_1151080 = hWnd_3
                ShowWindow(hWnd_3, SW_SHOW)
                HWND hWnd_4 = GetDlgItem(data_1151080, 0x8c)
                SendMessageA(hWnd_4, 0x180, 0, "True")
                SendMessageA(hWnd_4, 0x180, 0, "False")
                HWND hWnd_5 = GetDlgItem(data_1151080, 0x91)
                char const* const lParam = "Constant"
                void* const esi_6 = &data_5d37b8
                
                do
                    SendMessageA(hWnd_5, 0x151, SendMessageA(hWnd_5, 0x143, 0, lParam), *esi_6)
                    lParam = *(esi_6 + 0xc)
                    esi_6 += 8
                while (lParam != 0)
                
                HWND hWnd_6 = GetDlgItem(data_1151080, 0x90)
                char const* const lParam_1 = "Uniform"
                void* const esi_7 = &data_5d3788
                
                do
                    SendMessageA(hWnd_6, 0x151, SendMessageA(hWnd_6, 0x143, 0, lParam_1), *esi_7)
                    lParam_1 = *(esi_7 + 0xc)
                    esi_7 += 8
                while (lParam_1 != 0)
                
                *(hWnd_7 + 0x1c) -= 1
                sub_4d11a0(hWnd_7)
                int32_t* eax_45 = sub_488f70(hWnd_7)
                
                if (*(hWnd_7 + 4) == 0x19)
                    int32_t* ecx_16 = data_1151ad8
                    int32_t* var_18_3
                    
                    if (ecx_16 != 0 && ecx_16[1] == 0x19)
                        eax_45 = sub_4981f0(ecx_16)
                        var_18_3 = eax_45
                    
                    if (ecx_16 == 0 || ecx_16[1] != 0x19 || eax_45 == 0)
                        sub_489550(eax_45, &data_5b2591, "pParticleDef", 
                            "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xd9d, 
                            "MakeSureAllEmittersHaveNames")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    int32_t i = 0
                    
                    if (eax_45[2] s> 0)
                        int32_t ebx_6 = 0
                        
                        do
                            int32_t ecx_17 = 0
                            int32_t* esi_9 = *eax_45 + ebx_6
                            int32_t edx_17 = *esi_9
                            
                            if (edx_17 s<= 0)
                            label_5174f9:
                                char* const var_14
                                sub_510e80(&var_14)
                                int32_t var_8_1 = 0
                                char* const ecx_19 = &data_5b2591
                                char* eax_47 = var_14
                                
                                if (eax_47 != 0)
                                    ecx_19 = eax_47
                                
                                char* const var_30_8 = ecx_19
                                sub_4f0a90(eax_47, esi_9, &data_626728, 1)
                                int32_t var_8_2 = 1
                                
                                if (data_aca1f4 != 0)
                                    char* eax_48 = var_14
                                    
                                    if (eax_48 != 0 && *eax_48 != 0)
                                        char* eax_49 = sub_48a080(&var_14)
                                        int32_t temp0_1 = *(eax_49 + 4)
                                        *(eax_49 + 4) -= 1
                                        
                                        if (temp0_1 == 1)
                                            sub_4984f0(eax_49, *(eax_49 + 0xc) + 0x10)
                                            var_14 = &data_5b2591
                                
                                int32_t var_8_3 = 0xffffffff
                            else
                                int32_t* eax_46 = esi_9[2]
                                
                                while (*eax_46 != 1)
                                    ecx_17 += 1
                                    eax_46 = &eax_46[4]
                                    
                                    if (ecx_17 s>= edx_17)
                                        goto label_5174f9
                            
                            eax_45 = var_18_3
                            i += 1
                            ebx_6 += 0x168
                        while (i s< eax_45[2])
                
                for (int32_t i_1 = 0; i_1 s< 0x100; i_1 += 1)
                    *((i_1 << 3) + &data_11510c4) = i_1
                    *((i_1 << 3) + &data_11510c8) = 0
                
                sub_50f800()
                hWnd = sub_50c690()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return hWnd
}
