// 函数名称: sub_5a0d51
// 虚拟地址: 0x5a0d51
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_5a0d51(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x20) & 2
    int32_t result = *(arg1 - 0x20) & 2
    
    if (result == 0)
        return result
    
    *(arg1 - 0x20) &= 0xfffffffd
    return sub_48a3d0(arg1 - 0x18) __tailcall
}
