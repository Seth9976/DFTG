// 函数名称: sub_59e9b6
// 虚拟地址: 0x59e9b6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59e9b6(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x3c) & 0x200000
    int32_t result = *(arg1 - 0x3c) & 0x200000
    
    if (result == 0)
        return result
    
    *(arg1 - 0x3c) &= 0xffdfffff
    return sub_48a3d0(arg1 - 0x48) __tailcall
}
