// 函数名称: sub_4356d0
// 虚拟地址: 0x4356d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4356d0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg1, sub_4356c0)
    void* eax_3 = data_6cfe4c
    
    if (eax_3 == 0)
        sub_489550(eax_3, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_3 + 0xa68) == 0xffffffff)
        int32_t var_28 = 0xffffffff
        int32_t eax_4 = sub_4a8570(arg1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    int32_t* eax_5 = sub_425de0()
    void* edx_1 = data_6cfe4c
    
    if (edx_1 == 0)
        sub_489550(eax_5, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_18
    int32_t* var_28_1 = &var_18
    void* eax_6 = sub_425fe0(&eax_5[2], *(edx_1 + 0xa68))
    char* var_14
    sub_421310(eax_6, &eax_5[2], &var_14, eax_6)
    int32_t var_8_1 = 0
    sub_4a8930(&var_14, &data_62b2dc, arg1, &var_14, 0xffffffff)
    sub_465a40(var_18)
    int32_t var_38 = 0xffffffff
    char* eax_9 = sub_4a8570(arg1)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        eax_9 = var_14
        
        if (eax_9 != 0 && *eax_9 != 0)
            eax_9 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_9 = sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_9
}
