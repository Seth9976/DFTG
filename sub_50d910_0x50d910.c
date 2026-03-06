// 函数名称: sub_50d910
// 虚拟地址: 0x50d910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_50d910(BOOL arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a06b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    BOOL lpString_2 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_50c970() == 0)
        BOOL eax_5 = ShowWindow(GetDlgItem(data_1151080, 0x94), SW_HIDE)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    ShowWindow(GetDlgItem(data_1151080, 0x94), SW_SHOW)
    LRESULT eax_7 = sub_50c970()
    
    if (eax_7.b == 0)
        sub_489550(eax_7, &data_5b2591, "EditorHasSelectedIntParam()", 
            "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x218, "EditorGetSelectedInt")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    LRESULT eax_8 = sub_50c830()
    int32_t* eax_9 = sub_50c7a0()
    
    if (eax_9 == 0)
        sub_489550(eax_9, &data_5b2591, "pEmitter", 
            "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x21c, "EditorGetSelectedInt")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_20_1 = sub_4f0c50(eax_9, eax_9, &data_626728, eax_8)
    sub_48a9d0(&lpString_2, &data_5efc90)
    BOOL lpString_1 = lpString_2
    char* const lpString = &data_5b2591
    
    if (lpString_1 != 0)
        lpString = lpString_1
    
    BOOL lpString_3 = SetDlgItemTextA(data_1151080, 0x94, lpString)
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        lpString_3 = lpString_2
        
        if (lpString_3 != 0 && *lpString_3 != 0)
            lpString_3 = sub_48a080(&lpString_2)
            int32_t temp0_1 = *(lpString_3 + 4)
            *(lpString_3 + 4) -= 1
            
            if (temp0_1 == 1)
                lpString_3 = sub_4984f0(lpString_3, *(lpString_3 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return lpString_3
}
