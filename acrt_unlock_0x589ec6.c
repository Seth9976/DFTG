// 函数名称: ___acrt_unlock
// 虚拟地址: 0x589ec6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___acrt_unlock(int32_t arg1)
{
    // 第一条实际指令: return LeaveCriticalSection(arg1 * 0x18 + &data_6cf768)
    return LeaveCriticalSection(arg1 * 0x18 + &data_6cf768)
}
