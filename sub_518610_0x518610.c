// 函数名称: sub_518610
// 虚拟地址: 0x518610
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_518610()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_94 = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_1150f78 != 0)
        WINDOWPLACEMENT lpwndpl
        lpwndpl.length = 0x2c
        WINDOWPLACEMENT lpwndpl_1
        lpwndpl_1.length = 0x2c
        GetWindowPlacement(data_1150b8c, &lpwndpl)
        GetWindowPlacement(data_11518c4, &lpwndpl_1)
        void* eax_3 = data_1150eec
        char* var_88
        int32_t* ecx_1 = &var_88
        char* const esi_1 = &data_5b2591
        char* edx_1 = &data_5b2591
        
        if (eax_3 != 0)
            char* eax_4 = *(eax_3 + 0x20)
            
            if (eax_4 != 0)
                edx_1 = eax_4
            
            sub_4e5530(ecx_1, edx_1)
        else
            sub_48a2c0(ecx_1, &data_5b2591)
        
        int32_t var_8_1 = 0
        char* eax_5 = var_88
        char* edx_2 = &data_5b2591
        
        if (eax_5 != 0)
            edx_2 = eax_5
        
        void var_84
        sub_4ceb40(&var_84, edx_2)
        int32_t var_8_2 = 1
        
        if (data_aca1f4 != 0)
            char* eax_6 = var_88
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_48a080(&var_88)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
        char** ecx_5 = &var_88
        void* eax_8 = data_1150ef0
        char* edx_5 = &data_5b2591
        
        if (eax_8 != 0)
            char* eax_9 = *(eax_8 + 0x20)
            
            if (eax_9 != 0)
                edx_5 = eax_9
            
            sub_4e5530(ecx_5, edx_5)
        else
            sub_48a2c0(ecx_5, &data_5b2591)
        
        int32_t var_8_4 = 2
        char* eax_10 = var_88
        char* edx_6 = &data_5b2591
        
        if (eax_10 != 0)
            edx_6 = eax_10
        
        void* var_7c
        sub_4ceb40(&var_7c, edx_6)
        int32_t var_8_5 = 3
        
        if (data_aca1f4 != 0)
            char* eax_11 = var_88
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_12 = sub_48a080(&var_88)
                int32_t temp1_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
        
        int32_t var_8_6 = 0xffffffff
        char* var_8c
        char** ecx_9 = &var_8c
        void* eax_13 = data_1150ef4
        char* edx_9 = &data_5b2591
        
        if (eax_13 != 0)
            char* eax_14 = *(eax_13 + 0x20)
            
            if (eax_14 != 0)
                edx_9 = eax_14
            
            sub_4e5530(ecx_9, edx_9)
        else
            sub_48a2c0(ecx_9, &data_5b2591)
        
        int32_t var_8_7 = 4
        char* eax_15 = var_8c
        
        if (eax_15 != 0)
            esi_1 = eax_15
        
        void* var_74
        sub_4ceb40(&var_74, esi_1)
        int32_t var_8_8 = 5
        
        if (data_aca1f4 != 0)
            char* eax_16 = var_8c
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_48a080(&var_8c)
                int32_t temp2_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_8c = &data_5b2591
        
        int32_t var_8_9 = 0xffffffff
        int32_t* eax_18 = sub_4d78e0(&var_84, data_12bad38)
        sub_4d7b70(eax_18, data_12bad38, eax_18, &data_1150f78)
        result = sub_4cea80(sub_4d4bb0(eax_18), data_12bad38, &var_84, 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
