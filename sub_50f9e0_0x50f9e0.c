// 函数名称: sub_50f9e0
// 虚拟地址: 0x50f9e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_50f9e0(HDC arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    BOOL result = sub_50ca90()
    
    if (result != 0)
        int32_t var_34
        GetWindowRect(GetDlgItem(data_1151080, 0x80), &var_34)
        ScreenToClient(data_1151080, &var_34)
        POINT point
        ScreenToClient(data_1151080, &point)
        RECT rect
        GetClientRect(data_1151080, &rect)
        HDC eax_3 = CreateCompatibleDC(arg1)
        HBITMAP eax_4 = CreateCompatibleBitmap(arg1, rect.right, rect.bottom)
        HGDIOBJ h = SelectObject(eax_3, eax_4)
        sub_50eca0(eax_3)
        int32_t edx_1 = var_34
        int32_t var_30
        BitBlt(arg1, edx_1, var_30, point.x - edx_1, point.y - var_30, eax_3, edx_1, var_30, SRCCOPY)
        SelectObject(eax_3, h)
        DeleteObject(eax_4)
        result = DeleteDC(eax_3)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
