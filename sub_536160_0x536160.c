// 函数名称: sub_536160
// 虚拟地址: 0x536160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_536160(char* arg1, void** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2a50
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result_4 = 0x10
    int32_t var_8_1 = 0
    int32_t* eax_3 = sub_586f5f(0x40, result_4)
    
    if (eax_3 == 0)
        result_4 = "XMalloc"
        sub_489550(eax_3, &data_5b2591, "pBuffer", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 0x57, 
            result_4)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* edx = data_12bac34
    *arg2 = eax_3
    sub_4ce680(eax_3, edx)
    char* ecx_1 = arg1
    uint32_t (* eax_5)[0x4]
    
    do
        eax_5.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_5.b != 0)
    
    if (arg1 == 0)
        result_4 = "XString::XString"
        sub_489550(eax_5, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x9a, result_4)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* const var_1c = &data_5b2591
    result_4 = ecx_1 - &ecx_1[1] - 4
    sub_48a6e0(&var_1c, arg1, result_4)
    var_8_1.b = 1
    char* result_5
    sub_48a2c0(&result_5, ".texture")
    var_8_1.b = 2
    result_4 = &result_5
    int32_t* result_1
    sub_48a860(&var_1c, &result_1, result_4)
    var_8_1.b = 5
    
    if (data_aca1f4 != 0)
        char* result_8 = result_5
        
        if (result_8 != 0 && *result_8 != 0)
            char* eax_7 = sub_48a080(&result_5)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    var_8_1.b = 4
    int32_t** result_9
    void* result_6
    result_9, result_6 = sub_4d30b0(3)
    result_4 = result_6
    int32_t* result_2
    void* result_3 = result_2
    result_5 = result_9
    result_4 = result_3
    
    if (result_3 != 0 && *result_3 != 0)
        char* eax_8 = sub_48a080(&result_4)
        *(eax_8 + 4) += 1
    
    char* const esi_1 = var_1c
    char* const ebx = &data_5b2591
    char* const eax_9 = &data_5b2591
    
    if (esi_1 != 0)
        eax_9 = esi_1
    
    if (sub_525f30(eax_9, result_5).b != 0)
        result_4 = result_5
        int32_t* result_10 = sub_4d1350(result_4)
        result_5 = result_10
        int32_t* var_20
        result_4 = &var_20
        int32_t* var_24
        sub_4889e0(&var_24, result_10, 3)
        int32_t ecx_12 = *(*var_20 + 0x1c)
        int32_t* eax_13 = var_24
        
        if (eax_13 != 0)
            eax_13[7] -= 1
        
        int32_t* result_11
        
        if (ecx_12 != 1)
            result_4 = result_5
            char* const edx_5 = &data_5b2591
            
            if (esi_1 != 0)
                edx_5 = esi_1
            
            result_11 = sub_5349d0(eax_13, edx_5, eax_3)
            result_5 = result_11
        else
            result_11 = result_5
        
        int32_t eax_14 = sub_4d2ff0(result_11)
        result_4 = result_5
        eax_3[0xa] = 0
        char* const edx_6 = &data_5b2591
        
        if (esi_1 != 0)
            edx_6 = esi_1
        
        int32_t* eax_15 = sub_534ae0(eax_14, edx_6, eax_3)
        char* result_7 = result_5
        eax_3[0xc] = eax_15
        
        if (esi_1 != 0)
            ebx = esi_1
        
        eax_3[0xe] = sub_535830(eax_15, ebx, eax_3, result_7)
        ebx.b = 1
    else
        ebx.b = 0
    
    var_8_1.b = 9
    int32_t* result
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(result, result[3] + 0x10)
                result_1 = &data_5b2591
    
    var_8_1.b = 0xa
    
    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_48a080(&var_1c)
        int32_t temp2_1 = result[1]
        result[1] -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(result, result[3] + 0x10)
    
    int32_t var_8_2 = 0xb
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp3_1 = result[1]
            result[1] -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(result, result[3] + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
