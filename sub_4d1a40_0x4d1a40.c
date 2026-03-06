// 函数名称: sub_4d1a40
// 虚拟地址: 0x4d1a40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4d1a40(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ff21
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    int32_t var_18 = 0
    void* eax_3 = sub_4d1830(arg2)
    
    if (eax_3.b == 0)
        sub_489550(eax_3, &data_5b2591, "AssetPathIsValid(assetPath)", 
            "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0x255, "AssetNameFromPath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*arg2 == 0)
        sub_48a2c0(arg1, &data_5b2591)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    void* eax_5 = _strrchr(arg2, 0x2e)
    
    if (eax_5 == 0)
        sub_489550(eax_5, &data_5b2591, "ext", "d:\ax\trunk\ax2017\engine\assetcatalog.cpp", 0x25d, 
            "AssetNameFromPath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* const var_14 = &data_5b2591
    int32_t var_8_1 = 1
    sub_48a6e0(&var_14, arg2, eax_5 - arg2)
    char* const esi_1 = var_14
    *arg1 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_7 = sub_48a080(arg1)
        *(eax_7 + 4) += 1
    
    int32_t var_18_1 = 1
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_8 = sub_48a080(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
