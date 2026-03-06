// 函数名称: __unlock_file
// 虚拟地址: 0x57fa2c
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__unlock_file(void* arg1)
{
    // 第一条实际指令: return LeaveCriticalSection(arg1 + 0x20)
    return LeaveCriticalSection(arg1 + 0x20)
}
