// 函数名称: sub_5a08a0
// 虚拟地址: 0x5a08a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_5a08a0(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x1c) & 1
    int32_t result = *(arg1 - 0x1c) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x1c) &= 0xfffffffe
    return sub_48a3d0(*(arg1 - 0x24)) __tailcall
}
