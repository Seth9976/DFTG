// 函数名称: sub_59e4e2
// 虚拟地址: 0x59e4e2
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59e4e2(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 4
    int32_t result = *(arg1 - 0x10) & 4
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffb
    return sub_48a3d0(arg1 - 0x14) __tailcall
}
