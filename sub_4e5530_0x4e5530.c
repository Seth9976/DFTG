// 函数名称: sub_4e5530
// 虚拟地址: 0x4e5530
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4e5530(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0c61
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    int32_t var_18 = 0
    *arg1 = &data_5b2591
    int32_t var_8_1 = 0
    int32_t var_18_1 = 1
    
    if (_strchr(arg2, 0x3a) != 0)
        sub_48a5e0(arg1, arg2)
    else
        char* var_14
        int32_t var_8_3
        
        if (__strnicmp(arg2, "sys", 3) != 0)
            uint32_t eax_6 = __strnicmp(arg2, "res", 3)
            uint32_t eax_7
            
            if (eax_6 != 0)
                eax_7 = __strnicmp(arg2, "xbin", 4)
            
            if (eax_6 != 0 && eax_7 != 0)
                char* var_30_2 = arg2
                sub_4892e0("Non standard asset path %s")
                char* var_38_4 = arg2
                char* var_3c_2 = &data_1150ca0
                int32_t var_8_4 = 5
                sub_48a560(arg1, sub_48a9d0(&var_14, "%s/%s"))
                var_8_3 = 6
                goto label_4e5671
            
            if (data_1150ca0 != 0)
                char* var_34_2 = &data_1150ca0
                int32_t var_8_5 = 3
                sub_48a560(arg1, sub_48a9d0(&var_14, "%s/%s"))
                var_8_3 = 4
                goto label_4e5671
            
            sub_48a5e0(arg1, arg2)
        else
            char* var_30 = arg2
            int32_t var_34_1 = 0x1150b98
            int32_t var_8_2 = 1
            sub_48a560(arg1, sub_48a9d0(&var_14, "%s/%s"))
            var_8_3 = 2
        label_4e5671:
            
            if (data_aca1f4 != 0)
                char* eax_10 = var_14
                
                if (eax_10 != 0 && *eax_10 != 0)
                    char* eax_11 = sub_48a080(&var_14)
                    int32_t temp0_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
            
            var_8_3.b = 0
    
    char* esi_1 = nullptr
    
    while (true)
        char* eax_12 = *arg1
        int32_t eax_14
        
        if (eax_12 == 0 || *eax_12 == 0)
            eax_14 = 0
        else
            eax_14 = *(sub_48a080(arg1) + 8)
        
        if (esi_1 s>= eax_14)
            break
        
        char* eax_15 = *arg1
        char* const ecx_7 = &data_5b2591
        
        if (eax_15 != 0)
            ecx_7 = eax_15
        
        if (*(ecx_7 + esi_1) == 0x2f)
            sub_48a790(arg1, esi_1, 0x5c)
        
        esi_1 = &esi_1[1]
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
