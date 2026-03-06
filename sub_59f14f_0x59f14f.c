// 函数名称: sub_59f14f
// 虚拟地址: 0x59f14f
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59f14f(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x2dc) & 0x10
    int32_t result = *(arg1 - 0x2dc) & 0x10
    
    if (result == 0)
        return result
    
    *(arg1 - 0x2dc) &= 0xffffffef
    return boost::exception::~exception(*(arg1 - 0x2e4)) __tailcall
}
