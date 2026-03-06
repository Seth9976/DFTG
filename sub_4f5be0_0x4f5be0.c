// 函数名称: sub_4f5be0
// 虚拟地址: 0x4f5be0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4f5be0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1379
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    char* esi
    int64_t xmm0
    
    if (_strncmp("NULL", *(arg2 + 4), 4) == 0)
        *(arg2 + 4) += 4
        sub_4f59f0(arg2)
        xmm0 = data_6ca2b4.q
        esi = data_6ca2bc
    else
        xmm0 = data_12bacb8.q
        esi = data_12bacc0
    
    char* var_18 = esi
    
    if (esi != 0 && *esi != 0)
        char* eax_4 = sub_48a080(&var_18)
        *(eax_4 + 4) += 1
    
    int32_t var_14_1 = 2
    int32_t var_8_1 = 1
    int32_t eax_5 = xmm0.d
    int32_t* edi_1
    
    if (eax_5 == 2 || eax_5 == 3 || eax_5 == 4)
        void var_2c
        int32_t* eax_10 = sub_4f5a70(eax_5.b, arg2, &var_2c, "null")
        var_8_1.b = 3
        int64_t var_20
        var_20.d = *eax_10
        var_20:4.d = eax_10[1]
        sub_48a560(&var_18, &eax_10[2])
        var_8_1.b = 4
        
        if (data_aca1f4 != 0)
            char* var_24
            char* eax_12 = var_24
            
            if (eax_12 != 0 && *eax_12 != 0)
                char* eax_13 = sub_48a080(&var_24)
                int32_t temp0_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
        
        var_8_1.b = 1
        int32_t eax_14 = var_20.d
        
        if (eax_14 == 2 || eax_14 == 3 || eax_14 == 4)
            int32_t var_14_4 = 3
            arg1[2] = &data_5b2591
            *arg1 = 3
            arg1[1] = 0x5d35b4
            int32_t var_8_4 = 6
            
            if (data_aca1f4 != 0)
                char* eax_17 = var_18
                
                if (eax_17 != 0 && *eax_17 != 0)
                    char* eax_18 = sub_48a080(&var_18)
                    int32_t temp1_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        edi_1 = arg1
        esi = var_18
        *edi_1 = eax_14
        edi_1[1] = var_20:4.d
        edi_1[2] = esi
        
        if (esi != 0 && *esi != 0)
            char* eax_16 = sub_48a080(&edi_1[2])
            *(eax_16 + 4) += 1
        
        int32_t var_14_3 = 3
        int32_t var_8_3 = 5
    else
        edi_1 = arg1
        *edi_1 = eax_5
        edi_1[1] = xmm0:4.d
        edi_1[2] = esi
        
        if (esi != 0 && *esi != 0)
            char* eax_7 = sub_48a080(&edi_1[2])
            *(eax_7 + 4) += 1
        
        int32_t var_14_2 = 3
        int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        char* eax_8 = sub_48a080(&var_18)
        int32_t temp2_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return edi_1
}
