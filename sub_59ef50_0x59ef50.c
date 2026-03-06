// 函数名称: sub_59ef50
// 虚拟地址: 0x59ef50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59ef50(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x14) & 1
    int32_t result = *(arg1 - 0x14) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x14) &= 0xfffffffe
    return boost::exception::~exception(*(arg1 - 0x10)) __tailcall
}
