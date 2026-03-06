// 函数名称: sub_485110
// 虚拟地址: 0x485110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_485110(int32_t arg1, int32_t arg2, char** arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e5e9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_18 = arg3
    int32_t var_14 = 0
    *arg3 = &data_5b2591
    int32_t var_8_1 = 0
    char* arg_8
    char* ebx = arg_8
    int32_t var_14_1 = 1
    
    if (ebx s> 0)
        int32_t var_2c_1 = arg2
        int32_t var_8_2 = 1
        sub_48a560(arg3, sub_48a9d0(&arg_8, "{normal_log}%s gains"))
        int32_t var_8_3 = 2
        
        if (data_aca1f4 != 0)
            char* eax_4 = arg_8
            
            if (eax_4 != 0 && *eax_4 != 0)
                char* eax_5 = sub_48a080(&arg_8)
                int32_t temp0_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
        
        int32_t esi_1 = 0
        var_8_3.b = 0
        
        if (ebx s> 0)
            int32_t* eax_6 = arg4
            
            do
                sub_483460(&arg_8, eax_6)
                int32_t var_8_4 = 3
                char const* const var_2c_3
                
                if (ebx == 1 || esi_1 == 0)
                    var_2c_3 = &data_5d59f8
                else if (ebx s< 2 || esi_1 != &ebx[0xffffffff])
                    var_2c_3 = &data_5ee4a4
                else
                    var_2c_3 = " and "
                
                sub_48a670(arg3, var_2c_3)
                char* eax_8 = arg_8
                char* ecx_5 = &data_5b2591
                
                if (eax_8 != 0)
                    ecx_5 = eax_8
                
                sub_48a670(arg3, ecx_5)
                int32_t var_8_5 = 4
                
                if (data_aca1f4 != 0)
                    char* eax_9 = arg_8
                    
                    if (eax_9 != 0 && *eax_9 != 0)
                        char* eax_10 = sub_48a080(&arg_8)
                        int32_t temp1_1 = *(eax_10 + 4)
                        *(eax_10 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                            arg_8 = &data_5b2591
                
                esi_1 += 1
                eax_6 = &arg4[2]
                var_8_5.b = 0
                arg4 = eax_6
            while (esi_1 s< ebx)
        
        sub_48a670(arg3, ".{br}")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
