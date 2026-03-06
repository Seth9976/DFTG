// 函数名称: sub_558a90
// 虚拟地址: 0x558a90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HWND __fastcallsub_558a90(HWND arg1)
{
    // 第一条实际指令: int32_t hInstance = GetWindowLongA(arg1, 0xfffffffa)
    int32_t hInstance = GetWindowLongA(arg1, 0xfffffffa)
    
    if (data_1511ae0 == 0)
        WNDCLASSEXA var_34
        var_34.cbSize = 0x30
        BOOL eax = GetClassInfoExA(nullptr, "ListBox", &var_34)
        
        if (eax != 0)
            var_34.lpfnWndProc = sub_559050
            var_34.hInstance = hInstance
            var_34.lpszClassName = "PropGridCtl"
            eax = zx.d(RegisterClassExA(&var_34))
        
        data_1511ae0 = eax.w
    
    HWND result = CreateWindowExA(WS_EX_LEFT, "PropGridCtl", &data_5b2591, 0x40010000, 0, 0, 0, 0, 
        arg1, 0xac, hInstance, nullptr)
    data_1517564 = result
    return result
}
