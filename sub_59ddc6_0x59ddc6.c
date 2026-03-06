// 函数名称: sub_59ddc6
// 虚拟地址: 0x59ddc6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59ddc6(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x14) & 0x40
    int32_t result = *(arg1 - 0x14) & 0x40
    
    if (result == 0)
        return result
    
    *(arg1 - 0x14) &= 0xffffffbf
    return sub_48a3d0(arg1 - 0x18) __tailcall
}
