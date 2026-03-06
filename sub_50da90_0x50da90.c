// 函数名称: sub_50da90
// 虚拟地址: 0x50da90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_50da90()
{
    // 第一条实际指令: HWND hWnd = GetDlgItem(data_1151080, 0x8c)
    HWND hWnd = GetDlgItem(data_1151080, 0x8c)
    
    if (sub_50c890() == 0)
        return ShowWindow(hWnd, SW_HIDE)
    
    ShowWindow(hWnd, SW_SHOW)
    LRESULT eax_2 = sub_50c890()
    int32_t var_14_3
    char* ecx
    
    if (eax_2.b != 0)
        LRESULT eax_3 = sub_50c830()
        eax_2 = sub_50c7a0()
        
        if (eax_2 != 0)
            if (sub_4f0cd0(eax_2, eax_2, &data_626728, eax_3) == 0)
                return SendMessageA(hWnd, 0x186, 1, 0)
            
            return SendMessageA(hWnd, 0x186, 0, 0)
        
        char const* const var_10_2 = "EditorGetSelectedBool"
        var_14_3 = 0x1ee
        ecx = "pEmitter"
    else
        char const* const var_10 = "EditorGetSelectedBool"
        var_14_3 = 0x1ea
        ecx = "EditorHasSelectedBoolParam()"
    
    sub_489550(eax_2, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 
        var_14_3, "EditorGetSelectedBool")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
