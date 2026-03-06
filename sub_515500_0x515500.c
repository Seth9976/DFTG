// 函数名称: sub_515500
// 虚拟地址: 0x515500
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULT __convention("regparm")sub_515500(int32_t arg1, int32_t arg2, HWND arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_c = arg5
    int32_t var_c = arg5
    int32_t var_1c = arg4
    int32_t var_10 = arg6
    int32_t var_18 = arg7
    int32_t lParam = arg2
    char* const var_14 = &data_5b2591
    return SendMessageA(arg3, 0x180, 0, &lParam)
}
