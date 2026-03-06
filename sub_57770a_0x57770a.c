// 函数名称: sub_57770a
// 虚拟地址: 0x57770a
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_57770a(void* arg1 @ ebp)
{
    // 第一条实际指令: *(arg1 - 0x20) = *(arg1 - 0x14)
    *(arg1 - 0x20) = *(arg1 - 0x14)
    *(arg1 - 0x24) = **(arg1 - 0x20)
    
    if (**(arg1 - 0x24) == 0xe06d7363)
        sub_58afe0()
        noreturn
    
    *(arg1 - 0x28) = 0
    return *(arg1 - 0x28)
}
