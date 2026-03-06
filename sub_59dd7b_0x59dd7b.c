// 函数名称: sub_59dd7b
// 虚拟地址: 0x59dd7b
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59dd7b(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x14) & 8
    int32_t result = *(arg1 - 0x14) & 8
    
    if (result == 0)
        return result
    
    *(arg1 - 0x14) &= 0xfffffff7
    return sub_48a3d0(arg1 - 0x18) __tailcall
}
