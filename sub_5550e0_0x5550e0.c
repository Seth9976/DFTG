// 函数名称: sub_5550e0
// 虚拟地址: 0x5550e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HWND __convention("regparm")sub_5550e0(int32_t arg1, HWND arg2, HINSTANCE arg3, HMENU arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax = 9
    int32_t eax = 9
    
    if (arg5 != 0)
        eax = 0
    
    HWND result = CreateWindowExA(WS_EX_LEFT, "SysDateTimePick32", &data_5b2591, eax | 0x40000000, 
        0x80000000, 0x80000000, 0x80000000, 0x80000000, arg2, arg4, arg3, nullptr)
    
    if (result == 0)
        return result
    
    SetWindowTheme(result, &data_60b2b0, &data_60b2b0)
    SendMessageA(result, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
    SetPropA(result, "Wprc", GetWindowLongA(result, 0xfffffffc))
    SetWindowLongA(result, 0xfffffffc, sub_554b00)
    return result
}
