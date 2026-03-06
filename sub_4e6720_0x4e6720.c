// 函数名称: sub_4e6720
// 虚拟地址: 0x4e6720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4e6720(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ff61
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    char* const esi = &data_5b2591
    char* arg_4
    char* eax_3 = arg_4
    
    if (eax_3 != 0)
        esi = eax_3
    
    void* eax_4 = _strrchr(esi, 0x2f)
    
    if (eax_4 == 0)
        char* eax_5 = arg_4
        char* const ecx = &data_5b2591
        
        if (eax_5 != 0)
            ecx = eax_5
        
        eax_4 = _strrchr(ecx, 0x5c)
        
        if (eax_4 == 0)
            sub_489550(eax_4, &data_5b2591, "end", "d:\ax\trunk\ax2017\engine\defload.cpp", 0x174, 
                "DirectoryPathFromAssetPath")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    sub_48a370(arg1, esi, eax_4 - esi + 1)
    int32_t var_14_1 = 1
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0)
        char* eax_8 = arg_4
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_48a080(&arg_4)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
