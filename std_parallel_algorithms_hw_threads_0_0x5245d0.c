// 函数名称: ___std_parallel_algorithms_hw_threads@0
// 虚拟地址: 0x5245d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")___std_parallel_algorithms_hw_threads@0(int32_t arg1, void* arg2, char* arg3, int32_t* arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2750
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t var_48
    __builtin_memset(&var_48, 0, 0x14)
    char eax_3 = sub_524930(&var_48, arg5)
    
    if (eax_3 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    int32_t eax_4 = var_48.d
    
    if (eax_4 != 0)
        _aligned_free_base(eax_4)
    
    int32_t var_8_1 = 0
    char* const edi_1 = &data_5b2591
    char* const var_24
    char* eax_6 = *sub_4e5da0(&var_24, arg3)
    char* ecx_4 = &data_5b2591
    
    if (eax_6 != 0)
        ecx_4 = eax_6
    
    char* var_58_2 = ecx_4
    char* var_18
    sub_48a9d0(&var_18, "%s.astc")
    var_8_1.b = 3
    
    if (data_aca1f4 != 0)
        char* eax_7 = var_24
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_48a080(&var_24)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
                var_24 = &data_5b2591
    
    int32_t var_58_3 = 0x1150b98
    var_8_1.b = 2
    char* var_20
    sub_48a9d0(&var_20, "%s/ExternalCode/astc/astcenc.exe")
    var_8_1.b = 4
    char* const ecx_7 = &data_5b2591
    char* eax_9 = var_18
    
    if (eax_9 != 0)
        ecx_7 = eax_9
    
    char* const var_64 = ecx_7
    sub_587ff6()
    char* eax_10 = var_18
    char* const ecx_8 = &data_5b2591
    
    if (eax_10 != 0)
        ecx_8 = eax_10
    
    sub_4cf720(ecx_8)
    char* var_68 = arg5
    sub_4892e0("compressing to astc: %s")
    char* eax_11 = var_18
    char* const edx_4 = &data_5b2591
    char* const ecx_9 = &data_5b2591
    
    if (eax_11 != 0)
        edx_4 = eax_11
    
    char* eax_12 = var_20
    char* const var_70 = edx_4
    char* var_74 = arg5
    
    if (eax_12 != 0)
        ecx_9 = eax_12
    
    char* const var_78 = ecx_9
    char* var_1c
    sub_48a9d0(&var_1c, ""%s" -c "%s" "%s" 4x4 -medium -alphablend")
    var_8_1.b = 5
    char* const ecx_10 = &data_5b2591
    char* eax_13 = var_1c
    
    if (eax_13 != 0)
        ecx_10 = eax_13
    
    sub_4cfd80(ecx_10)
    char* eax_14 = var_18
    char* const ecx_11 = &data_5b2591
    
    if (eax_14 != 0)
        ecx_11 = eax_14
    
    int32_t* eax_15 = _fopen(ecx_11, "rb")
    char var_11
    
    if (eax_15 != 0)
        _fseek(eax_15, 0, 2)
        int32_t* var_64_1 = eax_15
        uint32_t eax_18 = sub_587c01()
        _fseek(eax_15, 0, 0)
        
        if (eax_18 != 0)
            uint32_t (* eax_21)[0x4] = sub_4c2e40(eax_18)
            uint32_t eax_22 = _fread(eax_21, 1, eax_18, eax_15)
            _fclose(eax_15)
            char* ecx_13 = var_18
            
            if (ecx_13 != 0)
                edi_1 = ecx_13
            
            char* const var_6c_1 = edi_1
            sub_587ff6()
            
            if (eax_22 == eax_18)
                *arg4 = var_48:4.d
                arg4[1] = var_48:8.d
                arg4[4] = 1
                arg4[0xf] = 1
                uint32_t* eax_26 = sub_4c2e40(0x10)
                var_11 = 1
                *eax_26 = zx.o(0)
                arg4[0x12] = eax_26
                arg4[5] = 9
                arg4[6] = 0x15
                arg4[7] = 0
                *eax_26 = eax_18
                *(arg4[0x12] + 8) = eax_21
                arg4[8] = *(arg2 + 8)
                arg4[9] = *(arg2 + 0xc)
            else
                char* var_58_7 = arg5
                sub_4892e0("failed to read: %s")
                
                if (eax_21 != 0)
                    _aligned_free_base(eax_21)
                
                var_11 = 0
        else
            _fclose(eax_15)
            char* eax_20 = var_18
            
            if (eax_20 != 0)
                edi_1 = eax_20
            
            char* const var_5c_1 = edi_1
            sub_587ff6()
            var_11 = 0
    else
        char* var_58_4 = arg5
        sub_4892e0("failed to convert to astc: %s")
        var_11 = 0
    
    var_8_1.b = 0xf
    char* eax_17
    
    if (data_aca1f4 != 0)
        eax_17 = var_1c
        
        if (eax_17 != 0 && *eax_17 != 0)
            eax_17 = sub_48a080(&var_1c)
            int32_t temp1_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                var_1c = &data_5b2591
    
    var_8_1.b = 0x10
    
    if (data_aca1f4 != 0)
        eax_17 = var_20
        
        if (eax_17 != 0 && *eax_17 != 0)
            eax_17 = sub_48a080(&var_20)
            int32_t temp2_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                var_20 = &data_5b2591
    
    int32_t var_8_2 = 0x11
    
    if (data_aca1f4 != 0)
        eax_17 = var_18
        
        if (eax_17 != 0 && *eax_17 != 0)
            eax_17 = sub_48a080(&var_18)
            int32_t temp3_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
    
    eax_17.b = var_11
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_17
}
