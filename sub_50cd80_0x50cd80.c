// 函数名称: sub_50cd80
// 虚拟地址: 0x50cd80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_50cd80(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_18
    int32_t var_18
    GetWindowRect(GetDlgItem(data_1151080, 0x80), &var_18)
    ScreenToClient(data_1151080, &var_18)
    POINT point
    ScreenToClient(data_1151080, &point)
    int32_t eax_2 = var_18 + 0x16
    arg1[2] = point.x - 8
    *arg1 = eax_2
    int32_t var_14
    arg1[1] = var_14 + 0xa
    arg1[3] = point.y - 0x14
    return arg1
}
