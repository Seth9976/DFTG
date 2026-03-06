// 函数名称: sub_510b70
// 虚拟地址: 0x510b70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_510b70()
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
    
    int32_t* result = sub_5103a0(sub_50c9e0(), esi_2)
    
    if (result == 0)
        return result
    
    int32_t* eax_4 = sub_50c7a0()
    
    if (eax_4 == 0)
        sub_489550(eax_4, &data_5b2591, "pEmitter", 
            "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xa72, "EditorPickAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(result)
    char* ecx_3 = sub_4f0910(eax_6, eax_4, &data_626728, esi_2, eax_6, edx_1)
    void* eax_7 = data_1151ad8
    
    if (eax_7 != 0)
        int32_t eax_8 = *(eax_7 + 4)
        
        if (eax_8 == 0x19)
            return sub_50c600(sub_50e390(0xffffffff, 0xffffffff))
        
        if (eax_8 == 0x1b)
            ecx_3 = sub_50e950(0xffffffff)
    
    return sub_50c600(ecx_3)
}
