// 函数名称: sub_4856b0
// 虚拟地址: 0x4856b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4856b0(int32_t arg1, int32_t arg2, char** arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e691
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = arg2
    char** var_20 = arg3
    int32_t var_1c = 0
    *arg3 = &data_5b2591
    int32_t var_8_1 = 0
    char* arg_4
    int32_t* ebx = arg_4
    int32_t var_1c_1 = 1
    int32_t ecx = *ebx
    struct _EXCEPTION_REGISTRATION_RECORD** var_14
    
    if (ecx s> 0)
        void* const eax_4 = &data_5d59fc
        
        if (ecx s> 1)
            eax_4 = "dice"
        
        void* const var_34_1 = eax_4
        int32_t var_38_1 = ecx
        int32_t var_3c_1 = arg2
        int32_t var_8_2 = 1
        char* ecx_1 = &data_5b2591
        char* eax_6 = *sub_48a9d0(&var_14, "{normal_log}%s develops with %d %s {die_any}.{br}")
        
        if (eax_6 != 0)
            ecx_1 = eax_6
        
        eax_3 = sub_48a670(arg3, ecx_1)
        int32_t var_8_3 = 2
        
        if (data_aca1f4 != 0)
            eax_3 = var_14
            
            if (eax_3 != 0 && *eax_3 != 0)
                eax_3 = sub_48a080(&var_14)
                int32_t temp1_1 = eax_3[1]
                eax_3[1] -= 1
                
                if (temp1_1 == 1)
                    eax_3 = sub_4984f0(eax_3, &eax_3[3][2])
        
        arg2 = var_18
        var_8_3.b = 0
    
    int32_t i = 0
    
    if (ebx[0x745] s> 0)
        void* ebx_1 = &ebx[1]
        
        do
            int32_t var_8_4 = 3
            char* ecx_6 = &data_5b2591
            char* eax_8 = *sub_4842a0(eax_3, arg2, &var_14, ebx_1, arg4)
            
            if (eax_8 != 0)
                ecx_6 = eax_8
            
            sub_48a670(arg3, ecx_6)
            int32_t var_8_5 = 4
            
            if (data_aca1f4 != 0)
                struct _EXCEPTION_REGISTRATION_RECORD** eax_9 = var_14
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_48a080(&var_14)
                    int32_t temp2_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_14 = &data_5b2591
            
            arg2 = var_18
            i += 1
            var_8_5.b = 0
            ebx_1 += 0xf8
            eax_3 = arg_4
        while (i s< eax_3[0x745])
        
        ebx = eax_3
    
    int32_t var_34_5 = ebx[0x764]
    int32_t var_8_6 = 5
    char* ecx_11 = &data_5b2591
    char* eax_13 = *sub_485110(&ebx[0x746], var_18, &arg_4, &ebx[0x746])
    
    if (eax_13 != 0)
        ecx_11 = eax_13
    
    sub_48a670(arg3, ecx_11)
    int32_t var_8_7 = 6
    
    if (data_aca1f4 != 0)
        char* eax_14 = arg_4
        
        if (eax_14 != 0 && *eax_14 != 0)
            char* eax_15 = sub_48a080(&arg_4)
            int32_t temp0_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
