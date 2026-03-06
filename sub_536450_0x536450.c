// 函数名称: sub_536450
// 虚拟地址: 0x536450
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_536450(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2a98
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char* const result_24 = &data_5b2591
    char* const var_20
    char* eax_4 = *sub_4e5da0(&var_20, arg1)
    char* ecx_1 = &data_5b2591
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    char* var_38 = ecx_1
    char* result_3
    sub_48a9d0(&result_3, "%s.mp3")
    var_8_1.b = 4
    
    if (data_aca1f4 != 0)
        char* eax_5 = var_20
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_48a080(&var_20)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
                var_20 = &data_5b2591
    
    int32_t var_38_1 = 0x1150b98
    var_8_1.b = 3
    char* result_1
    sub_48a9d0(&result_1, "%s/ExternalCode/lame/lame.exe")
    var_8_1.b = 5
    char* const result_16 = &data_5b2591
    char* result_5 = result_3
    
    if (result_5 != 0)
        result_16 = result_5
    
    char* const result_29 = result_16
    sub_587ff6()
    char* result_6 = result_3
    char* const result_17 = &data_5b2591
    
    if (result_6 != 0)
        result_17 = result_6
    
    sub_4cf720(result_17)
    char* result_4
    char* result_7 = result_4
    char* const result_18 = &data_5b2591
    
    if (result_7 != 0)
        result_18 = result_7
    
    char* const result_28 = result_18
    sub_4892e0("converting to mp3: %s")
    char* result_8 = result_3
    char* const result_23 = &data_5b2591
    char* const result_22 = &data_5b2591
    char* const result_19 = &data_5b2591
    
    if (result_8 != 0)
        result_23 = result_8
    
    char* result_9 = result_4
    char* const result_27 = result_23
    
    if (result_9 != 0)
        result_22 = result_9
    
    char* result_10 = result_1
    char* const result_26 = result_22
    
    if (result_10 != 0)
        result_19 = result_10
    
    char* const result_25 = result_19
    char* result_2
    sub_48a9d0(&result_2, ""%s" "%s" "%s"")
    var_8_1.b = 6
    char* const result_20 = &data_5b2591
    char* result_11 = result_2
    
    if (result_11 != 0)
        result_20 = result_11
    
    sub_4cfd80(result_20)
    char* result_12 = result_3
    char* const result_21 = &data_5b2591
    
    if (result_12 != 0)
        result_21 = result_12
    
    int32_t* eax_7 = _fopen(result_21, "rb")
    int32_t* ebx
    
    if (eax_7 != 0)
        _fseek(eax_7, 0, 2)
        int32_t* var_44 = eax_7
        int32_t eax_8 = sub_587c01()
        _fseek(eax_7, 0, 0)
        uint32_t eax_11
        
        if (eax_8 != 0)
            arg2[4] = 5
            arg2[5] = eax_8
            uint32_t (* eax_10)[0x4] = sub_4c2e40(eax_8)
            arg2[6] = eax_10
            eax_11 = _fread(eax_10, arg2[5], 1, eax_7)
        
        if (eax_8 != 0 && eax_11 == 1)
            arg2[1] = 0
            arg2[2] = 0
            *arg2 = 0
            arg2[3] = 0
            _fclose(eax_7)
            char* result_15 = result_3
            
            if (result_15 != 0)
                result_24 = result_15
            
            char* const result_31 = result_24
            sub_587ff6()
            ebx.b = 1
        else
            _fclose(eax_7)
            char* result_14 = result_3
            
            if (result_14 != 0)
                result_24 = result_14
            
            char* const result_30 = result_24
            sub_587ff6()
            ebx.b = 0
    else
        char* result_13 = result_4
        
        if (result_13 != 0)
            result_24 = result_13
        
        char* const result_32 = result_24
        sub_4892e0("failed to convert to mp3: %s")
        ebx.b = 0
    
    var_8_1.b = 0x13
    char* result
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
                result_2 = &data_5b2591
    
    var_8_1.b = 0x14
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
                result_1 = &data_5b2591
    
    var_8_1.b = 0x15
    
    if (data_aca1f4 != 0)
        result = result_3
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_3)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
                result_3 = &data_5b2591
    
    int32_t var_8_2 = 0x16
    
    if (data_aca1f4 != 0)
        result = result_4
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_4)
            int32_t temp4_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp4_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
