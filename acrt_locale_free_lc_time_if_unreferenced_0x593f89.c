// 函数名称: ___acrt_locale_free_lc_time_if_unreferenced
// 虚拟地址: 0x593f89
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void___acrt_locale_free_lc_time_if_unreferenced(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 != 0 && arg1 != &data_5ab7c0 && arg1[0x2c] == 0)
    if (arg1 != 0 && arg1 != &data_5ab7c0 && arg1[0x2c] == 0)
        ___acrt_locale_free_time(arg1)
        __free_base(arg1)
}
