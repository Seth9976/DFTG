// 函数名称: sub_59d049
// 虚拟地址: 0x59d049
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_59d049(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 1
    int32_t result = *(arg1 - 0x10) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffe
    return sub_41c530(arg1 - 0x20) __tailcall
}
