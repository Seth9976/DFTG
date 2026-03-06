// 函数名称: ___acrt_initialize_heap
// 虚拟地址: 0x59360f
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HANDLE___acrt_initialize_heap()
{
    // 第一条实际指令: HANDLE result = GetProcessHeap()
    HANDLE result = GetProcessHeap()
    data_6cfe18 = result
    result.b = result != 0
    return result
}
