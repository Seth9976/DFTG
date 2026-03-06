// 函数名称: __unwindfunclet$??IQuickBitSet@details@Concurrency@@QBE?AV012@ABV012@@Z$1
// 虚拟地址: 0x5a1588
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__unwindfunclet$??IQuickBitSet@details@Concurrency@@QBE?AV012@ABV012@@Z$1(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x18) & 1
    int32_t result = *(arg1 - 0x18) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x18) &= 0xfffffffe
    return sub_41c530(*(arg1 + 8)) __tailcall
}
