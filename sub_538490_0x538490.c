// 函数名称: sub_538490
// 虚拟地址: 0x538490
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_538490(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1858
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* eax_3 = sub_586f5f(0x20, 0x10)
    
    if (eax_3 == 0)
        sub_489550(eax_3, &data_5b2591, "pBuffer", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 0x57, 
            "XMalloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_4ce680(eax_3, data_12bac60)
    int32_t result_1
    int32_t result_2 = result_1
    char* const result_5 = &data_5b2591
    char* const result_4 = &data_5b2591
    
    if (result_2 != 0)
        result_4 = result_2
    
    int32_t ebx
    
    if (sub_537f70(result_4, eax_3) != 0)
        ebx.b = 1
        *(*arg1 + 0x18) = eax_3
    else
        int32_t result_3 = result_1
        
        if (result_3 != 0)
            result_5 = result_3
        
        char* const result_6 = result_5
        sub_4892e0("anim reimport reading xan '%s'")
        _aligned_free_base(eax_3)
        ebx.b = 0
    
    int32_t var_8_2 = 2
    int32_t result
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
