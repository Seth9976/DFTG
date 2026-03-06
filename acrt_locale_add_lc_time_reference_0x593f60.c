// 函数名称: ___acrt_locale_add_lc_time_reference
// 虚拟地址: 0x593f60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___acrt_locale_add_lc_time_reference(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || arg1 == &data_5ab7c0)
    if (arg1 == 0 || arg1 == &data_5ab7c0)
        return 0x7fffffff
    
    int32_t eax = *(arg1 + 0xb0)
    *(arg1 + 0xb0) += 1
    return eax + 1
}
