// 函数名称: sub_4e2320
// 虚拟地址: 0x4e2320
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4e2320(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fad8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14
    char** result
    int32_t xmm0[0x4]
    result, xmm0 = sub_4e1cb0(&var_14, arg1)
    int32_t var_8_1 = 0
    char* esi = var_14
    
    if (esi != 0)
        result.b = *esi
        
        if (result.b != 0 && result.b != 0x21)
            void* var_28 = &data_5f8548
            int32_t xmm0_1[0x4]
            result, xmm0_1 = _strstr(xmm0, esi, var_28)
            
            if (result == 0)
                var_28 = &data_5f854c
                void* ecx_1
                result, ecx_1 = _strstr(xmm0_1, esi, var_28)
                
                if (result == 0)
                    void* eax_3 = var_14
                    var_28 = ecx_1
                    void** ecx_2 = &var_28
                    var_28 = eax_3
                    
                    if (eax_3 != 0 && *eax_3 != 0)
                        char* eax_4 = sub_48a080(ecx_2)
                        *(eax_4 + 4) += 1
                    
                    void* eax_5 = sub_4d0a60(ecx_2)
                    
                    if (eax_5 == 0)
                    label_4e23d3:
                        void* eax_6 = var_14
                        void* esi_1 = &data_5b2591
                        void* ecx_3 = &data_5b2591
                        
                        if (eax_6 != 0)
                            ecx_3 = eax_6
                        
                        int32_t eax_7
                        void* ecx_4
                        eax_7, ecx_4 = sub_4dfc80(ecx_3)
                        
                        if (data_a9fb7f == 0)
                            void* eax_9 = var_14
                            var_28 = ecx_4
                            var_28 = eax_9
                            
                            if (eax_9 != 0 && *eax_9 != 0)
                                char* eax_10 = sub_48a080(&var_28)
                                *(eax_10 + 4) += 1
                            
                            result = sub_4d1630(eax_7, 0)
                        else
                            void* edx_1 = var_14
                            
                            if (edx_1 != 0)
                                esi_1 = edx_1
                            
                            result = sub_4e6fe0(sub_4d0b50(esi_1, eax_7), 0)
                    else
                        result = *(eax_5 + 8)
                        
                        if (result != 1 && result != 2)
                            goto label_4e23d3
            
            esi = var_14
    
    int32_t var_8_2 = 4
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        result = sub_48a080(&var_14)
        int32_t temp0_1 = result[1]
        result[1] = &result[1][0xffffffff]
        
        if (temp0_1 == 1)
            result = sub_4984f0(result, &result[3][0x10])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
