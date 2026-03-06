// 函数名称: sub_514e80
// 虚拟地址: 0x514e80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULT __fastcallsub_514e80(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a221a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c = 0
    HWND hWnd = GetDlgItem(data_1151080, 0xab)
    LRESULT eax_3 = SendMessageA(hWnd, 0x184, 0, 0)
    
    if (arg1[1] != 0x20)
        sub_489550(eax_3, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
            "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    LRESULT result = sub_4981f0(arg1)
    LRESULT result_1 = result
    int32_t i_1 = 0
    LRESULT result_2 = result_1
    
    if (*(result_1 + 8) s> 0)
        int32_t ebx_1 = 0
        int32_t i
        
        do
            int32_t eax_4 = *result_1
            char* edx_1 = *(ebx_1 + eax_4 + 8)
            
            if (edx_1 == 0)
                sub_489550(eax_4, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                    "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char* lParam_2
            sub_48a2c0(&lParam_2, edx_1)
            int32_t var_8_1 = 0
            int32_t eax_5 = *result_1
            char* const var_18
            
            if (*(ebx_1 + eax_5 + 0x38) != 0)
                char* const var_20
                sub_48a2c0(&var_20, U"-")
                var_8_1.b = 2
                char* esi_1 = var_20
                var_18 = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_6 = sub_48a080(&var_18)
                    *(eax_6 + 4) += 1
                
                char* lParam_3 = lParam_2
                int32_t var_1c_1 = 1
                char* const lParam_5 = &data_5b2591
                
                if (lParam_3 != 0)
                    lParam_5 = lParam_3
                
                sub_48a670(&var_18, lParam_5)
                sub_48a560(&lParam_2, &var_18)
                int32_t var_1c_2 = 0
                var_8_1.b = 3
                
                if (data_aca1f4 != 0)
                    char* eax_7 = var_18
                    
                    if (eax_7 != 0 && *eax_7 != 0)
                        char* eax_8 = sub_48a080(&var_18)
                        int32_t temp1_1 = *(eax_8 + 4)
                        *(eax_8 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
                            var_18 = &data_5b2591
                
                var_8_1.b = 4
                
                if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_9 = sub_48a080(&var_20)
                    int32_t temp3_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
                        var_20 = &data_5b2591
                
                var_8_1.b = 0
                eax_5 = *result_2
            
            if (*(ebx_1 + eax_5 + 0x39) != 0)
                char* var_24
                sub_48a2c0(&var_24, U"*")
                var_8_1.b = 6
                char* esi_2 = var_24
                var_18 = esi_2
                
                if (esi_2 != 0 && *esi_2 != 0)
                    char* eax_11 = sub_48a080(&var_18)
                    *(eax_11 + 4) += 1
                
                char* lParam_4 = lParam_2
                int32_t var_1c_3 = 2
                char* const lParam_6 = &data_5b2591
                
                if (lParam_4 != 0)
                    lParam_6 = lParam_4
                
                sub_48a670(&var_18, lParam_6)
                sub_48a560(&lParam_2, &var_18)
                int32_t var_1c_4 = 0
                var_8_1.b = 7
                
                if (data_aca1f4 != 0)
                    char* const eax_12 = var_18
                    
                    if (eax_12 != 0 && *eax_12 != 0)
                        char* eax_13 = sub_48a080(&var_18)
                        int32_t temp2_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
                            var_18 = &data_5b2591
                
                var_8_1.b = 8
                
                if (data_aca1f4 != 0 && esi_2 != 0 && *esi_2 != 0)
                    char* eax_14 = sub_48a080(&var_24)
                    int32_t temp4_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                        var_24 = &data_5b2591
            
            char* lParam_1 = lParam_2
            char* lParam = &data_5b2591
            
            if (lParam_1 != 0)
                lParam = lParam_1
            
            result = SendMessageA(hWnd, 0x180, 0, lParam)
            int32_t var_8_2 = 9
            
            if (data_aca1f4 != 0 && lParam_1 != 0 && *lParam_1 != 0)
                result = sub_48a080(&lParam_2)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                    lParam_2 = &data_5b2591
            
            ebx_1 += 0xe0
            result_1 = result_2
            i = i_1 + 1
            int32_t var_8_3 = 0xffffffff
            i_1 = i
        while (i s< *(result_1 + 8))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
