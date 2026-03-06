// 函数名称: sub_4e5bd0
// 虚拟地址: 0x4e5bd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4e5bd0(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0cf1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    char* var_38 = 0x2e
    int32_t var_18 = 0
    void* eax_3
    char* ecx
    eax_3, ecx = _strrchr(arg2, var_38.b)
    
    if (eax_3 != 0)
        var_38 = ".xpack"
        eax_3, ecx = __stricmp(eax_3, var_38)
        
        if (eax_3 == 0)
            var_38 = "DefLoadRelativeXbinPathFromAssetPath"
            sub_489550(eax_3, &data_5b2591, "!AssetPathIsXPack(assetPath)", 
                "d:\ax\trunk\ax2017\engine\defload.cpp", 0xae, var_38)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    var_38 = ecx
    
    if (arg2 == 0)
        sub_489550(eax_3, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_38, arg2)
    char* var_14
    sub_4d1ba0(&var_14)
    int32_t var_8_1 = 1
    char* esi_1 = nullptr
    char* eax_4 = var_14
    char* const edi = &data_5b2591
    
    while (true)
        int32_t ecx_4
        
        if (eax_4 == 0 || *eax_4 == 0)
            ecx_4 = 0
        else
            ecx_4 = *(sub_48a080(&var_14) + 8)
            eax_4 = var_14
        
        if (esi_1 s>= ecx_4)
            break
        
        char* ecx_5 = &data_5b2591
        
        if (eax_4 != 0)
            ecx_5 = eax_4
        
        if (*(ecx_5 + esi_1) == 0x3a)
            var_38 = 0x5f
            sub_48a790(&var_14, esi_1, var_38.b)
            eax_4 = var_14
        
        esi_1 = &esi_1[1]
    
    char const* const ecx_7
    
    if (data_1150c9d != 0)
        ecx_7 = "xbin/ios/"
    else if (data_1150c9c == 0)
        ecx_7 = "xbin/"
    else
        ecx_7 = "xbin/web/"
    
    var_8_1.b = 1
    
    if (eax_4 != 0)
        edi = eax_4
    
    var_38 = edi
    char const* const var_3c_3 = ecx_7
    sub_48a9d0(arg1, "%s%s.xbin")
    int32_t var_18_1 = 1
    int32_t var_8_2 = 7
    
    if (data_aca1f4 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
