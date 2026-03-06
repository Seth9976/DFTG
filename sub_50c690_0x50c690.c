// 函数名称: sub_50c690
// 虚拟地址: 0x50c690
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HWNDsub_50c690()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(data_11518c4, &rect)
    HWND hWnd = GetDlgItem(data_1151080, 0xab)
    int32_t X_2
    int32_t Y
    POINT point
    
    if (hWnd != 0)
        GetWindowRect(hWnd, &X_2)
        ScreenToClient(data_11518c4, &X_2)
        ScreenToClient(data_11518c4, &point)
        int32_t X = X_2
        MoveWindow(hWnd, X, Y, rect.right - X, point.y - Y, 1)
    
    HWND hWnd_1 = GetDlgItem(data_1151080, 0xac)
    
    if (hWnd_1 != 0)
        GetWindowRect(hWnd_1, &X_2)
        ScreenToClient(data_11518c4, &X_2)
        ScreenToClient(data_11518c4, &point)
        int32_t X_1 = X_2
        hWnd_1 = MoveWindow(hWnd_1, X_1, Y, rect.right - X_1, rect.bottom - Y, 1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return hWnd_1
}
