// 函数名称: sub_59e8cc
// 虚拟地址: 0x59e8cc
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59e8cc(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x3c) & 0x400
    int32_t result = *(arg1 - 0x3c) & 0x400
    
    if (result == 0)
        return result
    
    *(arg1 - 0x3c) &= 0xfffffbff
    return sub_48a3d0(arg1 - 0x54) __tailcall
}
