// 函数名称: ___acrt_lowio_lock_fh
// 虚拟地址: 0x593838
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___acrt_lowio_lock_fh(int32_t arg1)
{
    // 第一条实际指令: return EnterCriticalSection((arg1 & 0x3f) * 0x30 + (&data_6cfb08)[arg1 s>> 6])
    return EnterCriticalSection((arg1 & 0x3f) * 0x30 + (&data_6cfb08)[arg1 s>> 6])
}
