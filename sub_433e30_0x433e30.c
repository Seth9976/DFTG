// 函数名称: sub_433e30
// 虚拟地址: 0x433e30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_433e30(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cfd8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_14 = arg3
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg4, sub_433c10)
    void* eax_3 = data_aca1ec
    char* edx = *(eax_3 + 0x10)
    
    if (edx == 0)
        sub_489550(eax_3, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_14, edx)
    int32_t var_8_1 = 0
    sub_4a8930(&var_14, &data_62b870, arg4, &var_14, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_5 = var_14
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_3 = 0xffffffff
    int32_t esi = data_6cfe68
    int32_t eax_8 = data_1512980
    
    if (eax_8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        eax_8 = __Init_thread_header(&data_1512980)
        
        if (data_1512980 == 0xffffffff)
            int32_t eax_9 = data_114e80c
            data_1512988 = eax_9
            data_1512984 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_151299c = "page1"
            data_1512990 = data_114e808
            data_15129a0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_15129b8 = "page2"
            data_15129a4 = eax_9 + 1
            data_114e80c = eax_9 + 2
            data_15129ac = &data_1512984
            data_114e808 = &data_15129a0
            eax_8 = __Init_thread_footer(&data_1512980)
    
    if (esi s< 0)
        sub_489550(eax_8, &data_5b2591, "page >= 0", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x15ba, "GetCreditsPage")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (esi u< 2)
        int32_t var_24 = 0xffffffff
        int32_t result = sub_4a8570(arg4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_489550(eax_8, &data_5b2591, "page < ARRAYSIZE(PAGES)", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x15bb, "GetCreditsPage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
