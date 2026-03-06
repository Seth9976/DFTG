// 函数名称: sub_58f252
// 虚拟地址: 0x58f252
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_58f252(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t* eax = **(arg1 - 0x14)
    int32_t* eax = **(arg1 - 0x14)
    
    if (*eax != 0xc0000005 && *eax != 0xc000001d)
        return 0
    
    return 1
}
