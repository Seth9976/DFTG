// 函数名称: sub_469230
// 虚拟地址: 0x469230
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_469230(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59dfa0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1dc = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx = data_6cfe4c
    
    if (ecx == 0)
        sub_489550(&ExceptionList, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_4 = sub_452b90(*(ecx + 0xa68))
    void* var_14 = eax_4
    int32_t var_1e0 = 0xffffffff
    char* result_1
    
    if (sub_4659a0(&result_1) == 0)
        sub_4a8570(arg1)
        data_151194c
    else
        sub_4a8570(arg1)
        char* result_2 = result_1
        int32_t* eax_6 = sub_452c30(*(result_2 + 0x54))
        int32_t* eax_7 = sub_452c30(*(result_2 + 0x50))
        int32_t var_ac
        int32_t* eax_8
        int32_t edx_2
        eax_8, edx_2 = sub_461720(eax_7, eax_7, eax_4, &var_ac, eax_6)
        int32_t var_13c
        __builtin_memcpy(&var_13c, eax_8, 0x90)
        uint32_t var_1cc[0x9][0x4]
        uint32_t (* eax_10)[0x4] = sub_461900(&var_1cc, edx_2, var_14, &var_1cc, eax_6, 0)
        int32_t eax_11 = var_13c
        __builtin_memcpy(&var_ac, eax_10, 0x90)
        data_1511950 = eax_11
        data_1511948 = var_ac
        int32_t var_138
        data_151194c = var_138
        int32_t var_a8
        data_1511944 = var_a8
    
    if (data_1511950 != 0)
        int32_t var_1e0_2 = 0xffffffff
        sub_4a8570(arg1)
    
    if (data_1511948 == 0)
        if (data_1511944 != 0)
        label_469387:
            int32_t var_1e0_3 = 0xffffffff
            sub_4a8570(arg1)
            int32_t var_1e0_4 = 0xffffffff
            sub_4a8570(arg1)
    else if (data_1511944 != 0)
        goto label_469387
    
    int32_t var_1e0_5 = data_1511950
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_1 = 0
    sub_4a8930(&var_14, &data_6382d0, arg1, &var_14, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        void* eax_15 = var_14
        
        if (eax_15 != 0 && *eax_15 != 0)
            char* eax_16 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0xffffffff
    int32_t var_1e0_6 = data_151194c
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_4 = 2
    sub_4a8930(&var_14, &data_6382ec, arg1, &var_14, 0xffffffff)
    int32_t var_8_5 = 3
    
    if (data_aca1f4 != 0)
        void* eax_18 = var_14
        
        if (eax_18 != 0 && *eax_18 != 0)
            char* eax_19 = sub_48a080(&var_14)
            int32_t temp1_1 = *(eax_19 + 4)
            *(eax_19 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
    
    int32_t var_8_6 = 0xffffffff
    int32_t var_1e0_7 = data_1511948
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_7 = 4
    sub_4a8930(&var_14, &data_638340, arg1, &var_14, 0xffffffff)
    int32_t var_8_8 = 5
    
    if (data_aca1f4 != 0)
        void* eax_21 = var_14
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_48a080(&var_14)
            int32_t temp2_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
    
    int32_t var_8_9 = 0xffffffff
    int32_t var_1e0_8 = data_1511944
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_10 = 6
    sub_4a8930(&var_14, &data_63835c, arg1, &var_14, 0xffffffff)
    int32_t var_8_11 = 7
    
    if (data_aca1f4 != 0)
        void* eax_24 = var_14
        
        if (eax_24 != 0 && *eax_24 != 0)
            char* eax_25 = sub_48a080(&var_14)
            int32_t temp3_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
    
    int32_t var_8_12 = 0xffffffff
    int32_t var_1e0_9 = data_1511948 + 1
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_13 = 8
    sub_4a8930(&var_14, &data_6383b0, arg1, &var_14, 0xffffffff)
    int32_t var_8_14 = 9
    
    if (data_aca1f4 != 0)
        void* eax_29 = var_14
        
        if (eax_29 != 0 && *eax_29 != 0)
            char* eax_30 = sub_48a080(&var_14)
            int32_t temp4_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_4984f0(eax_30, *(eax_30 + 0xc) + 0x10)
    
    int32_t var_8_15 = 0xffffffff
    int32_t var_1e0_10 = data_1511944 - 1
    sub_48a9d0(&result_1, &data_5efc90)
    int32_t var_8_16 = 0xa
    char* result = sub_4a8930(&result_1, &data_6383cc, arg1, &result_1, 0xffffffff)
    int32_t var_8_17 = 0xb
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp5_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp5_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
