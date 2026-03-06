// 函数名称: sub_5a16fe
// 虚拟地址: 0x5a16fe
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_5a16fe(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x54) & 1
    int32_t result = *(arg1 - 0x54) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x54) &= 0xfffffffe
    return sub_4f87b0(*(arg1 - 0x6c)) __tailcall
}
