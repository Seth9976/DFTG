// 函数名称: sub_50e390
// 虚拟地址: 0x50e390
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_50e390(LRESULT arg1, LRESULT arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1f40
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    LRESULT wParam = arg2
    LRESULT wParam_1 = arg1
    int32_t* ecx = data_1151ad8
    int32_t* var_34
    int32_t* esi
    
    if (ecx == 0 || ecx[1] != 0x19)
        esi = nullptr
        var_34 = nullptr
    else
        int32_t* eax_3 = sub_4981f0(ecx)
        esi = eax_3
        var_34 = eax_3
    
    HWND hWnd = GetDlgItem(data_1151080, 0x76)
    HWND hWnd_1 = GetDlgItem(data_1151080, 0x7b)
    
    if (arg1 == 0xffffffff || wParam_1 s>= esi[2])
        LRESULT wParam_4 = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam_4 == 0xffffffff)
            wParam_4 = 0
        
        wParam_1 = wParam_4
    
    WPARAM wParam_2 = SendMessageA(hWnd, 0x18e, 0, 0)
    LRESULT eax_5 = SendMessageA(hWnd, 0x184, 0, 0)
    int32_t i = 0
    char* lParam_4
    
    if (esi[2] s> 0)
        int32_t ecx_1 = 0
        int32_t var_30_1 = 0
        
        do
            int32_t* esi_2 = *esi + ecx_1
            void* eax_6 = sub_4f0ef0(eax_5, esi_2, &data_626728, 5)
            void* eax_7 = sub_4f0ef0(eax_6, esi_2, &data_626728, 8)
            char* eax_8 = sub_4f0df0(eax_7, esi_2, &data_626728, 1)
            int32_t j_1 = sub_50d180(i)
            LPARAM lParam_5 = &data_5b2591
            int32_t var_8_1 = 0
            
            if (j_1 s> 0)
                int32_t j
                
                do
                    sub_48a670(&lParam_5, "   ")
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            if (eax_8 == 0 || *eax_8 == 0)
                int32_t var_58_2 = i + 1
                var_8_1.b = 1
                char* ecx_5 = &data_5b2591
                char* var_24
                char* eax_12 = *sub_48a9d0(&var_24, "Particle %d")
                
                if (eax_12 != 0)
                    ecx_5 = eax_12
                
                sub_48a670(&lParam_5, ecx_5)
                var_8_1.b = 2
                
                if (data_aca1f4 != 0)
                    char* eax_13 = var_24
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        char* eax_14 = sub_48a080(&var_24)
                        int32_t temp1_1 = *(eax_14 + 4)
                        *(eax_14 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                            var_24 = &data_5b2591
                
                var_8_1.b = 0
            else
                sub_48a670(&lParam_5, eax_8)
            
            if (eax_6 != 0)
                char* const var_18
                sub_50d560(&var_18, eax_6)
                var_8_1.b = 3
                sub_48a670(&lParam_5, " - ")
                char* const eax_16 = var_18
                char* const ecx_11 = &data_5b2591
                
                if (eax_16 != 0)
                    ecx_11 = eax_16
                
                sub_48a670(&lParam_5, ecx_11)
                var_8_1.b = 4
                
                if (data_aca1f4 != 0)
                    char* eax_17 = var_18
                    
                    if (eax_17 != 0 && *eax_17 != 0)
                        char* eax_18 = sub_48a080(&var_18)
                        int32_t temp3_1 = *(eax_18 + 4)
                        *(eax_18 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                            var_18 = &data_5b2591
                
                var_8_1.b = 0
            
            if (eax_7 != 0)
                sub_50d560(&lParam_4, eax_7)
                var_8_1.b = 5
                sub_48a670(&lParam_5, " - ")
                char* lParam_6 = lParam_4
                char* lParam_9 = &data_5b2591
                
                if (lParam_6 != 0)
                    lParam_9 = lParam_6
                
                sub_48a670(&lParam_5, lParam_9)
                var_8_1.b = 6
                
                if (data_aca1f4 != 0)
                    char* lParam_7 = lParam_4
                    
                    if (lParam_7 != 0 && *lParam_7 != 0)
                        char* eax_20 = sub_48a080(&lParam_4)
                        int32_t temp4_1 = *(eax_20 + 4)
                        *(eax_20 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_4984f0(eax_20, *(eax_20 + 0xc) + 0x10)
                            lParam_4 = &data_5b2591
                
                var_8_1.b = 0
            
            if (*((i << 3) + &data_11510c8) != 0)
                sub_48a670(&lParam_5, " (hidden)")
            
            LPARAM lParam_3 = lParam_5
            LPARAM lParam = &data_5b2591
            
            if (lParam_3 != 0)
                lParam = lParam_3
            
            eax_5 = SendMessageA(hWnd, 0x180, 0, lParam)
            int32_t var_8_2 = 7
            
            if (data_aca1f4 != 0 && lParam_3 != 0 && *lParam_3 != 0)
                eax_5 = sub_48a080(&lParam_5)
                int32_t temp5_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp5_1 == 1)
                    eax_5 = sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            
            esi = var_34
            i += 1
            ecx_1 = var_30_1 + 0x168
            int32_t var_8_3 = 0xffffffff
            var_30_1 = ecx_1
        while (i s< esi[2])
    
    ShowWindow(GetDlgItem(data_1151080, 0x77), SW_HIDE)
    ShowWindow(GetDlgItem(data_1151080, 0x78), SW_HIDE)
    ShowWindow(GetDlgItem(data_1151080, 0x79), SW_HIDE)
    ShowWindow(GetDlgItem(data_1151080, 0x7a), SW_HIDE)
    ShowWindow(GetDlgItem(data_1151080, 0x8d), SW_HIDE)
    SendMessageA(hWnd, 0x186, wParam_1, 0)
    SendMessageA(hWnd, 0x197, wParam_2, 0)
    HWND hWnd_2 = hWnd_1
    ShowWindow(hWnd_2, SW_SHOW)
    ShowWindow(GetDlgItem(data_1151080, 0x7c), SW_SHOW)
    ShowWindow(GetDlgItem(data_1151080, 0x7d), SW_SHOW)
    ShowWindow(GetDlgItem(data_1151080, 0x7e), SW_SHOW)
    ShowWindow(GetDlgItem(data_1151080, 0x7f), SW_SHOW)
    ShowWindow(GetDlgItem(data_1151080, 0x9e), SW_SHOW)
    int32_t* esi_3 = sub_50c7a0()
    int32_t* var_44_1 = esi_3
    
    if (wParam == 0xffffffff || esi_3 == 0 || wParam s>= *esi_3)
        LRESULT wParam_5 = SendMessageA(hWnd_2, 0x188, 0, 0)
        
        if (wParam_5 == 0xffffffff)
            wParam_5 = 0
        
        wParam = wParam_5
    
    LRESULT wParam_3 = SendMessageA(hWnd_2, 0x18e, 0, 0)
    SendMessageA(hWnd_2, 0x184, 0, 0)
    
    if (esi_3 != 0)
        int32_t i_1 = 0
        
        if (*esi_3 s> 0)
            int32_t ebx_2 = 0
            
            do
                LPARAM* esi_5 = esi_3[2] + ebx_2
                sub_50e090(&lParam_4, esi_5)
                char* lParam_2 = lParam_4
                char* lParam_1 = &data_5b2591
                
                if (lParam_2 != 0)
                    lParam_1 = lParam_2
                
                SendMessageA(hWnd_1, 0x19a, SendMessageA(hWnd_1, 0x180, 0, lParam_1), *esi_5)
                int32_t var_8_4 = 8
                
                if (data_aca1f4 != 0)
                    char* lParam_8 = lParam_4
                    
                    if (lParam_8 != 0 && *lParam_8 != 0)
                        char* eax_34 = sub_48a080(&lParam_4)
                        int32_t temp2_1 = *(eax_34 + 4)
                        *(eax_34 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_4984f0(eax_34, *(eax_34 + 0xc) + 0x10)
                            lParam_4 = &data_5b2591
                
                esi_3 = var_44_1
                i_1 += 1
                int32_t var_8_5 = 0xffffffff
                ebx_2 += 0x10
            while (i_1 s< *esi_3)
            
            hWnd_2 = hWnd_1
    
    SendMessageA(hWnd_2, 0x186, wParam, 0)
    SendMessageA(hWnd_2, 0x197, wParam_3, 0)
    InvalidateRect(data_1151080, nullptr, 0)
    sub_50db60()
    
    if (sub_50ca90() != 0)
        sub_50cbd0(&data_1151094, &data_1151090)
    
    sub_50d680()
    sub_50d910(sub_50d840())
    sub_50da90()
    BOOL result = EnableWindow(GetDlgItem(data_1151080, 0x8e), zx.d(data_11510ac))
    data_1151088 = 0xffffffff
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
