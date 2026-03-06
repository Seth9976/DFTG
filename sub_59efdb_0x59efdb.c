// 函数名称: sub_59efdb
// 虚拟地址: 0x59efdb
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59efdb(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x8c) & 2
    int32_t result = *(arg1 - 0x8c) & 2
    
    if (result == 0)
        return result
    
    *(arg1 - 0x8c) &= 0xfffffffd
    return boost::exception::~exception(*(arg1 - 0x90)) __tailcall
}
