// 函数名称: sub_59dad8
// 虚拟地址: 0x59dad8
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59dad8(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x14) & 1
    int32_t result = *(arg1 - 0x14) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x14) &= 0xfffffffe
    return sub_437080(*(arg1 - 0x18)) __tailcall
}
