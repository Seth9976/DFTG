// 函数名称: sub_4e5da0
// 虚拟地址: 0x4e5da0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4e5da0(char** arg1, char* arg2)
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
            "d:\ax\trunk\ax2017\engine\defload.cpp", 0xc2, "DefLoadXbinPathFromAssetPath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_4 = _strrchr(arg2, 0x2e)
    
    if (eax_4 != 0 && __stricmp(eax_4, ".xpack") == 0)
        sub_48a320(arg1, arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    char* var_14
    sub_4e5bd0(&var_14, arg2)
    int32_t var_8_1 = 1
    char* const edx_1 = &data_5b2591
    char* eax_7 = var_14
    
    if (eax_7 != 0)
        edx_1 = eax_7
    
    sub_4e5530(arg1, edx_1)
    int32_t var_18_1 = 1
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0)
        char* eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
