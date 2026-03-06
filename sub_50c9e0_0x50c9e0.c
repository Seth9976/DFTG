// 函数名称: sub_50c9e0
// 虚拟地址: 0x50c9e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_50c9e0()
{
    // 第一条实际指令: int32_t* ecx = data_1151ad8
    int32_t* ecx = data_1151ad8
    LRESULT esi_2
    
    if (ecx == 0 || ecx[1] != 0x19)
        esi_2 = 0
    else if (sub_4981f0(ecx) == 0)
        esi_2 = 0
    else
        HWND hWnd = GetDlgItem(data_1151080, 0x7b)
        LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam == 0xffffffff)
            esi_2 = 0
        else
            esi_2 = SendMessageA(hWnd, 0x199, wParam, 0)
    
    int32_t* eax_3 = sub_50c7a0()
    
    if (eax_3 != 0)
        return sub_4f0ef0(eax_3, eax_3, &data_626728, esi_2)
    
    sub_489550(eax_3, &data_5b2591, "pEmitter", "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 
        0x226, "EditorGetSelectedAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
