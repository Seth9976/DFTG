// 函数名称: sub_5a1cc0
// 虚拟地址: 0x5a1cc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_5a1cc0(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x18) & 2
    int32_t result = *(arg1 - 0x18) & 2
    
    if (result == 0)
        return result
    
    *(arg1 - 0x18) &= 0xfffffffd
    return sub_48a3d0(*(arg1 - 0x24)) __tailcall
}
