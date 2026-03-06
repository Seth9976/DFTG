// 函数名称: sub_59f038
// 虚拟地址: 0x59f038
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59f038(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x14) & 2
    int32_t result = *(arg1 - 0x14) & 2
    
    if (result == 0)
        return result
    
    *(arg1 - 0x14) &= 0xfffffffd
    return boost::exception::~exception(*(arg1 - 0x1c)) __tailcall
}
