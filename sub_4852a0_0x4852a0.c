// 函数名称: sub_4852a0
// 虚拟地址: 0x4852a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4852a0(int32_t arg1, int32_t arg2, char** arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e641
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg3
    int32_t var_8_1 = 0
    int32_t var_18 = 0
    sub_48a2c0(arg3, &data_5b2591)
    int32_t var_8_2 = 0
    int32_t var_18_1 = 1
    int32_t ecx = *arg4
    char* var_14
    
    if (ecx != 0)
        char const* const eax_3 = "good"
        
        if (ecx s> 1)
            eax_3 = "goods"
        
        char const* const var_30_1 = eax_3
        int32_t var_34_1 = ecx
        int32_t var_38_1 = arg2
        int32_t var_8_3 = 1
        char* ecx_1 = &data_5b2591
        char* eax_5 = *sub_48a9d0(&var_14, "{normal_log}%s produces %d %s.{br}")
        
        if (eax_5 != 0)
            ecx_1 = eax_5
        
        sub_48a670(arg3, ecx_1)
        int32_t var_8_4 = 2
        
        if (data_aca1f4 != 0)
            char* eax_6 = var_14
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_48a080(&var_14)
                int32_t temp1_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
        
        var_8_4.b = 0
    
    if (arg4[0xd] != 0)
        int32_t var_30_3 = arg2
        int32_t var_8_5 = 3
        char* ecx_5 = &data_5b2591
        char* eax_9 = *sub_48a9d0(&var_14, "{normal_log}%s")
        
        if (eax_9 != 0)
            ecx_5 = eax_9
        
        sub_48a670(arg3, ecx_5)
        int32_t var_8_6 = 4
        
        if (data_aca1f4 != 0)
            char* eax_10 = var_14
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_48a080(&var_14)
                int32_t temp0_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
        
        var_8_6.b = 0
        int32_t esi_1 = 0
        int32_t eax_12 = arg4[0xd]
        
        if (eax_12 s> 0)
            do
                int16_t* const var_30_5
                
                if (esi_1 == 0)
                    var_30_5 = &data_5d59f8
                else if (esi_1 != eax_12 - 1)
                    var_30_5 = &data_5ee4a4
                else
                    var_30_5 = " and "
                
                sub_4834f0(sub_48a670(arg3, var_30_5), arg4[esi_1 * 2 + 1], &var_14, 
                    arg4[esi_1 * 2 + 2])
                int32_t var_8_7 = 5
                char* ecx_11 = &data_5b2591
                char* eax_15 = var_14
                
                if (eax_15 != 0)
                    ecx_11 = eax_15
                
                sub_48a670(arg3, ecx_11)
                int32_t var_8_8 = 6
                
                if (data_aca1f4 != 0)
                    char* eax_16 = var_14
                    
                    if (eax_16 != 0 && *eax_16 != 0)
                        char* eax_17 = sub_48a080(&var_14)
                        int32_t temp2_1 = *(eax_17 + 4)
                        *(eax_17 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                            var_14 = &data_5b2591
                
                var_8_8.b = 0
                esi_1 += 1
                eax_12 = arg4[0xd]
            while (esi_1 s< eax_12)
        
        sub_48a670(arg3, ".{br}")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
