// 函数名称: sub_48d6e0
// 虚拟地址: 0x48d6e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_48d6e0(int32_t arg1, int32_t arg2, void* arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edx = arg4
    *(arg3 + 0x14) = 2
    *(arg3 + 0x24) = 1
    *(arg3 + 0x28) = 3
    char i
    
    do
        i = *edx
        edx = &edx[1]
    while (i != 0)
    char* var_28 = arg4
    void* var_2c = edx - &edx[1]
    char const* const var_30 = "www.google-analytics.com"
    char const* const var_34 = "/collect"
    char* result_1
    int32_t* eax_3 =
        sub_48a9d0(&result_1, "POST %s HTTP/1.1\r\nHost: %s\r\nContent-Length: %d\r\n\r\n%s")
    int32_t var_8_1 = 0
    char* const result_2 = result_1
    void* edx_2
    
    if (result_2 == 0)
        result_2 = &data_5b2591
        edx_2 = nullptr
    else if (*result_2 != 0)
        eax_3 = sub_48a080(&result_1)
        edx_2 = eax_3[2]
    else
        edx_2 = nullptr
    
    void* result = sub_48bc20(eax_3, edx_2, arg3 + 0x3c, result_2)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
