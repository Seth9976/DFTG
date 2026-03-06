// 函数名称: sub_4e1650
// 虚拟地址: 0x4e1650
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __stdcallsub_4e1650(HINSTANCE arg1, enum SHOW_WINDOW_CMD arg2)
{
    // 第一条实际指令: SetProcessDPIAware()
    SetProcessDPIAware()
    WNDCLASSEXW param0
    param0.cbSize = 0x30
    param0.style = 3
    param0.lpfnWndProc = sub_4e0a50
    param0.cbClsExtra = 0
    param0.cbWndExtra = 0
    param0.hInstance = arg1
    param0.hIcon = LoadIconA(arg1, 0x80)
    param0.hCursor = 0
    param0.hbrBackground = 6
    param0.lpszMenuName = 0x6d
    param0.lpszClassName = u"GameWindowClass"
    int32_t cx = GetSystemMetrics(SM_CXSMICON)
    int32_t cy = GetSystemMetrics(SM_CYSMICON)
    param0.hIconSm = LoadImageA(GetModuleHandleA(nullptr), 0x80, IMAGE_ICON, cx, cy, LR_DEFAULTCOLOR)
    RegisterClassExW(&param0)
    int32_t result = sub_4e0410(arg1, arg2)
    
    if (result == 0)
        return result
    
    MSG msg
    PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE)
    
    while (msg.message != 0x12)
        if (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
            HWND hDlg = data_1151080
            
            if (hDlg == 0)
                TranslateMessage(&msg)
                DispatchMessageA(&msg)
            else
                if (msg.message != 0x100 || msg.wParam != 0x53)
                    goto label_4e17a2
                
                int16_t eax_4 = GetKeyState(0x11)
                int16_t eax_5
                
                if ((0x8000 & eax_4) != 0)
                    eax_5 = GetKeyState(0x10)
                
                if ((0x8000 & eax_4) != 0 && (0x8000 & eax_5) != 0)
                    sub_517940(0x8000)
                else if (msg.wParam != 0x53)
                label_4e1798:
                    hDlg = data_1151080
                label_4e17a2:
                    
                    if (IsDialogMessageA(hDlg, &msg) == 0)
                        TranslateMessage(&msg)
                        DispatchMessageA(&msg)
                else
                    if ((0x8000 & GetKeyState(0x11)) == 0)
                        goto label_4e1798
                    
                    sub_5175f0(0x8000)
        else if (data_12babeb == 0)
            data_12babeb = 1
            sub_48f330()
            
            if (*(data_aca1f0 + 0x2c) != 0)
                sub_48f380()
            
            data_12babeb = 0
    
    sub_48e960()
    return msg.wParam
}
