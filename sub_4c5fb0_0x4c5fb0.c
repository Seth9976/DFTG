// 函数名称: sub_4c5fb0
// 虚拟地址: 0x4c5fb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4c5fb0(int32_t arg1, int32_t* arg2, int32_t* arg3, uint32_t (* arg4)[0x4], void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fb08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14
    int32_t* var_28 = &var_14
    int32_t* result_1
    sub_4889e0(&result_1, *arg3, 0x15)
    int32_t var_8_1 = 0
    void* eax_3 = var_14
    void* ecx_1 = *(eax_3 + 0x38)
    
    if (ecx_1 == 0)
        sub_489550(eax_3, &data_5b2591, "pSoundData", "d:\ax\trunk\ax2017\engine\sound.cpp", 0x350, 
            "SoundReadBits")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_4 = *(ecx_1 + 0x10)
    
    if (eax_4 != 1)
        if (eax_4 != 2)
            sub_489550(eax_4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\sound.cpp", 0x35c, 
                "SoundReadBits")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_51c350(eax_4, arg2, arg3, arg4, arg5)
    else
        sub_4d0f30(eax_4, arg4, *arg3, arg2, arg5, *(ecx_1 + 0x18))
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
