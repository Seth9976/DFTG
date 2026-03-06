// 函数名称: sub_4836d0
// 虚拟地址: 0x4836d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4836d0(int32_t arg1, char* arg2, char** arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e3b9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_68 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_48 = arg2
    char** result_2 = arg3
    char** result_1 = result_2
    char** result_4 = result_2
    int32_t var_8_1 = 0
    char** result_3 = result_2
    int32_t var_54 = 0
    uint32_t var_40[0x2][0x4]
    _memset(&var_40, 0, 0x2c)
    int32_t esi = 0
    int32_t var_50 = 0
    int32_t edx = 0
    
    if (arg4 s> 0)
        char* ebx = var_48
        
        do
            int32_t eax_3 = *(ebx + (edx << 2))
            int32_t ecx = esi + 1
            var_40[0][eax_3] += 1
            
            if (var_40[0][eax_3] != 1)
                ecx = esi
            
            edx += 1
            esi = ecx
        while (edx s< arg4)
        
        result_2 = result_1
        var_50 = esi
    
    sub_48a2c0(result_2, &data_5b2591)
    int32_t var_8_2 = 0
    int32_t ebx_1 = 0
    int32_t var_54_1 = 1
    char** result
    
    for (int32_t i = 0; i s< 0xb; i += 1)
        int32_t edi_1 = var_40[0][i]
        
        if (edi_1 == 0)
            result = result_1
        else
            if (ebx_1 != 0)
                char* var_6c_1
                
                if (ebx_1 != var_50 - 1)
                    var_6c_1 = &data_5ee4a4
                else
                    var_6c_1 = " and "
                
                sub_48a670(result_1, var_6c_1)
            
            ebx_1 += 1
            int32_t var_6c_2 = sub_483110(i)
            
            if (edi_1 != 1)
                int32_t var_70_1 = edi_1
                int32_t var_8_5 = 3
                char* ecx_8 = &data_5b2591
                char* eax_12 = *sub_48a9d0(&var_48, "%d %s dice")
                result = result_1
                
                if (eax_12 != 0)
                    ecx_8 = eax_12
                
                sub_48a670(result, ecx_8)
                int32_t var_8_6 = 4
                
                if (data_aca1f4 != 0)
                    char* eax_13 = var_48
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        char* eax_14 = sub_48a080(&var_48)
                        int32_t temp0_1 = *(eax_14 + 4)
                        *(eax_14 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                            var_48 = &data_5b2591
                
                var_8_6.b = 0
            else
                int32_t var_8_3 = edi_1
                char* ecx_4 = &data_5b2591
                char* var_4c
                char* eax_8 = *sub_48a9d0(&var_4c, "a %s die")
                result = result_1
                
                if (eax_8 != 0)
                    ecx_4 = eax_8
                
                sub_48a670(result, ecx_4)
                int32_t var_8_4 = 2
                
                if (data_aca1f4 != 0)
                    char* eax_9 = var_4c
                    
                    if (eax_9 != 0 && *eax_9 != 0)
                        char* eax_10 = sub_48a080(&var_4c)
                        int32_t temp1_1 = *(eax_10 + 4)
                        *(eax_10 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                            var_4c = &data_5b2591
                
                var_8_4.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
