// 函数名称: sub_50d840
// 虚拟地址: 0x50d840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_50d840()
{
    // 第一条实际指令: if (sub_50c900() == 0)
    if (sub_50c900() == 0)
        return ShowWindow(GetDlgItem(data_1151080, 0x93), SW_HIDE)
    
    ShowWindow(GetDlgItem(data_1151080, 0x93), SW_SHOW)
    LRESULT eax_4 = sub_50c900()
    int32_t var_c_2
    char* ecx
    
    if (eax_4.b != 0)
        LRESULT eax_5 = sub_50c830()
        eax_4 = sub_50c7a0()
        
        if (eax_4 != 0)
            PSTR lpString = sub_4f0df0(eax_4, eax_4, &data_626728, eax_5)
            return SetDlgItemTextA(data_1151080, 0x93, lpString)
        
        char const* const var_8_3 = "EditorGetSelectedString"
        var_c_2 = 0x205
        ecx = "pEmitter"
    else
        char const* const var_8 = "EditorGetSelectedString"
        var_c_2 = 0x201
        ecx = "EditorHasSelectedStringParam()"
    
    sub_489550(eax_4, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", var_c_2, 
        "EditorGetSelectedString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
