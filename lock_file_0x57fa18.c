// 函数名称: __lock_file
// 虚拟地址: 0x57fa18
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__lock_file(void* arg1)
{
    // 第一条实际指令: return EnterCriticalSection(arg1 + 0x20)
    return EnterCriticalSection(arg1 + 0x20)
}
