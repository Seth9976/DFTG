// 函数名称: sub_4316d0
// 虚拟地址: 0x4316d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4316d0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg4, sub_431180)
    sub_4b24c0(arg4, sub_431120)
    char* eax_3
    
    if (data_62c40c.b == 0)
        var_14 = &data_5b2591
        int32_t var_8_1 = 0
        
        if (sub_4bb1d0(arg4, &var_14) == 0)
            sub_48a560(&var_14, &data_62c408)
        
        char* const esi_1 = var_14
        char* const ebx_1 = &data_5b2591
        
        if (esi_1 != 0)
            ebx_1 = esi_1
        
        char* eax_5 = sub_4cfa30(ebx_1, U"@.")
        int32_t var_28_2
        
        if (eax_5 == 0 || eax_5 == ebx_1)
            var_28_2 = 0xffffffff
            sub_4a8570(arg4)
        else
            char* ecx_7 = sub_4cfa30(eax_5, &data_5b3a68)
            
            if (ecx_7 == 0)
                var_28_2 = 0xffffffff
                sub_4a8570(arg4)
            else
                char* eax_6
                
                do
                    eax_6.b = *ecx_7
                    ecx_7 = &ecx_7[1]
                while (eax_6.b != 0)
                
                if (ecx_7 - &ecx_7[1] u< 3)
                    var_28_2 = 0xffffffff
                    sub_4a8570(arg4)
        int32_t var_28_3 = 0xffffffff
        data_62c40c:1
        eax_3 = sub_4a8570(arg4)
        int32_t var_8_2 = 1
        
        if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
            eax_3 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_3 = sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
    else
        int32_t var_28_1 = 0xffffffff
        sub_4a8570(arg4)
        int32_t var_2c_1 = 0xffffffff
        eax_3 = sub_4a8570(arg4)
    
    void* result = sub_4a8930(eax_3, &data_62c42c, arg4, &data_62c408, 0xffffffff)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
