// 函数名称: sub_5a1438
// 虚拟地址: 0x5a1438
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_5a1438(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 1
    int32_t result = *(arg1 - 0x10) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffe
    return sub_41c530(*(arg1 - 0x14)) __tailcall
}
