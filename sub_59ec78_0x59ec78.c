// 函数名称: sub_59ec78
// 虚拟地址: 0x59ec78
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59ec78(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 2
    int32_t result = *(arg1 - 0x10) & 2
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffd
    return sub_48a3d0(arg1 - 0x18) __tailcall
}
