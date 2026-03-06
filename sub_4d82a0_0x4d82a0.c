// 函数名称: sub_4d82a0
// 虚拟地址: 0x4d82a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t** __fastcallsub_4d82a0(char* arg1, char* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a0418
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** edi = arg1
    char* var_40 = arg1
    
    if (arg2 == 0)
        sub_489550(&ExceptionList, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_40, arg2)
    void var_2c
    sub_4cfce0(&var_2c, 3)
    int32_t var_14_1 = 0
    int32_t* eax_4 = sub_4d8120(edi, &var_2c)
    int32_t** result
    
    if (eax_4 != 0)
        result = sub_4c2e40(0x10)
        *result = zx.o(0)
        result[3] = edi
        result[1] = eax_4
        *result = sub_4d60d0(eax_4, edi)
    else
        result = nullptr
    
    int32_t var_14_2 = 2
    
    if (data_aca1f4 != 0)
        char* var_28
        char* eax_7 = var_28
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_48a080(&var_28)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
