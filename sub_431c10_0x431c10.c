// 函数名称: sub_431c10
// 虚拟地址: 0x431c10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_431c10(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const result_1 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result = sub_4a8830(sub_4b2440(arg4, sub_431850), &data_62c480, arg4, 3, 0xffffffff)
    void* ebx = &data_1512860
    int32_t edi = 0
    
    for (void* const i = &data_5b5690; i s< &data_5b56d8; )
        char* edx = *(i + 4)
        
        if (edx == 0)
            sub_489550(result, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_48a2c0(&result_1, edx)
        int32_t var_8_1 = 0
        result = sub_4a8930(&result_1, &data_62c49c, arg4, &result_1, edi)
        int32_t var_8_2 = 1
        
        if (data_aca1f4 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_48a080(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5b2591
        
        int32_t var_8_3 = 0xffffffff
        
        if (*i != 0)
            int32_t eax_5 = sub_426ed0(ebx, arg4, "tblRulesItem", edi)
            *i
            int32_t var_28_3 = 0xffffffff
            result = sub_4a8570(eax_5)
        
        if (*(i + 8) == 0)
            int32_t var_28_4 = edi
            result = sub_4a8570(arg4)
        
        i += 0x18
        edi += 1
        ebx += 0x24
    
    if (data_62b1ac == 0x21)
        result = data_62b1b0
    label_431d42:
        
        if (result != 0)
            int32_t var_28_5 = 0xffffffff
            result = sub_4a8570(arg4)
    else if (data_62b1bc == 0x21)
        result = data_62b1c0
        goto label_431d42
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
