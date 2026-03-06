// 函数名称: sub_42f940
// 虚拟地址: 0x42f940
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_42f940(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg4, sub_429cc0)
    sub_4b24c0(arg4, sub_42a220)
    void* eax_3 = sub_437f10(*(data_6d00d8 + 0xbe4))
    sub_465a40(*(eax_3 + 8))
    int32_t var_28 = 0xffffffff
    int32_t ecx_6 = sub_4a8570(arg4)
    var_14 = &data_5b2591
    int32_t var_8_1 = 0
    uint32_t eax_5 = sub_4bb1d0(ecx_6, &var_14)
    char* const esi = var_14
    
    if (eax_5.b == 0)
        sub_4a8930(eax_5, &data_62b2c0, arg4, eax_3, 0xffffffff)
    else
        char* eax_6
        
        if (esi != 0 && *esi != 0)
            eax_6 = sub_48a080(&var_14)
        
        if (esi == 0 || *esi == 0 || *(eax_6 + 8) s<= 0)
            int32_t var_28_1 = 0xffffffff
            sub_4a8570(arg4)
    
    int32_t eax_7 = sub_42a2b0()
    
    if (eax_7 u> 3)
        sub_489550(eax_7, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x1108, "GameProfileUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_2c_2
    char* result
    
    switch (eax_7)
        case 0
            int32_t var_28_2 = 0xffffffff
            result = sub_4a8570(arg4)
        case 1
            int32_t var_28_3 = 0xffffffff
            result = sub_4a8570(arg4)
        case 2
            int32_t var_28_4 = 0xffffffff
            sub_4a8570(arg4)
            var_2c_2 = 0xffffffff
            result = sub_4a8570(arg4)
        case 3
            int32_t var_28_5 = 0xffffffff
            sub_4a8570(arg4)
            var_2c_2 = 0xffffffff
            result = sub_4a8570(arg4)
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        result = sub_48a080(&var_14)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
