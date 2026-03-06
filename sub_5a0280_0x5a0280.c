// 函数名称: sub_5a0280
// 虚拟地址: 0x5a0280
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_5a0280(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x18) & 1
    int32_t result = *(arg1 - 0x18) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x18) &= 0xfffffffe
    return sub_48a3d0(*(arg1 - 0x1c)) __tailcall
}
