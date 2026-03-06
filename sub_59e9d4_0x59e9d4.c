// 函数名称: sub_59e9d4
// 虚拟地址: 0x59e9d4
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_59e9d4(void* arg1 @ ebp)
{
    // 第一条实际指令: void* result = *(arg1 - 0x3c) & &__dos_header
    void* result = *(arg1 - 0x3c) & &__dos_header
    
    if (result == 0)
        return result
    
    *(arg1 - 0x3c) &= 0xffbfffff
    return sub_48a3d0(arg1 - 0x54) __tailcall
}
