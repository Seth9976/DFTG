// 函数名称: sub_59f117
// 虚拟地址: 0x59f117
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59f117(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x2dc) & 8
    int32_t result = *(arg1 - 0x2dc) & 8
    
    if (result == 0)
        return result
    
    *(arg1 - 0x2dc) &= 0xfffffff7
    return boost::exception::~exception(*(arg1 - 0x2e4)) __tailcall
}
