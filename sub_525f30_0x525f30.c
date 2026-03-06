// 函数名称: sub_525f30
// 虚拟地址: 0x525f30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char**sub_525f30(char* arg1, char*** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a27b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_2c = 0x10
    int32_t var_8_1 = 0
    char* eax_3 = sub_586f5f(0x50, var_2c)
    char* result_6
    
    if (eax_3 == 0)
        var_2c = "XMalloc"
        int32_t var_30_4 = 0x57
        result_6 = "d:\ax\trunk\ax2017\engine\xmemory.cpp"
        sub_489550(eax_3, &data_5b2591, "pBuffer", result_6, var_30_4, var_2c)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_4ce680(eax_3, data_12baafc)
    int32_t* eax_4
    char* ecx_3
    eax_4, ecx_3 = sub_4d60d0(arg2[1], data_12baaf4)
    var_2c = ecx_3
    
    if (arg1 == 0)
        char const* const var_30_5 = "XString::XString"
        result_6 = 0x94
        sub_489550(arg1, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", result_6, 
            var_30_5)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_2c, arg1)
    char* result_1
    sub_48adf0(&result_1)
    var_8_1.b = 1
    char* const result_8 = &data_5b2591
    char* result_3 = result_1
    char* const result_7 = &data_5b2591
    int32_t var_30_1 = 7
    
    if (result_3 != 0)
        result_7 = result_3
    
    result_6 = "skybox_"
    int32_t eax_6
    char* result_9
    int32_t edx_3
    eax_6, result_9, edx_3 = _strncmp(result_7, result_6, var_30_1)
    int32_t eax_7
    
    if (eax_6 != 0)
        char* result_4 = result_1
        var_2c = 8
        
        if (result_4 != 0)
            result_8 = result_4
        
        char* var_30_2 = "cubemap_"
        result_6 = result_8
        eax_7, result_9, edx_3 = _strncmp(result_6, var_30_2, var_2c)
    
    if (eax_6 == 0 || eax_7 == 0)
        eax_4[4] = 1
    
    char* result_2
    char* result_5 = result_2
    var_2c = eax_4
    int32_t* var_30_3 = eax_3
    result_6 = result_9
    result_6 = result_5
    
    if (result_5 != 0 && *result_5 != 0)
        result_5 = sub_48a080(&result_6)
        *(result_5 + 4) += 1
    
    char eax_8 = sub_525db0(result_5, edx_3, arg1, result_6, var_30_3)
    data_12baaf4
    result_8.b = eax_8
    sub_4cead0(eax_4)
    
    if (result_8.b != 0)
        result_8.b = 1
        **arg2 = eax_3
    else
        var_2c = eax_3
        _aligned_free_base(var_2c)
    
    var_8_1.b = 4
    char** result
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = result[1]
            result[1] = &result[1][0xffffffff]
            
            if (temp0_1 == 1)
                sub_4984f0(result, &result[3][0x10])
                result_1 = &data_5b2591
    
    int32_t var_8_2 = 5
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp1_1 = result[1]
            result[1] = &result[1][0xffffffff]
            
            if (temp1_1 == 1)
                sub_4984f0(result, &result[3][0x10])
    
    result.b = result_8.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
