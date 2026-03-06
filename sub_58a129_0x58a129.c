// 函数名称: sub_58a129
// 虚拟地址: 0x58a129
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_58a129() __noreturn
{
    // 第一条实际指令: if (___acrt_get_sigabrt_handler() != 0)
    if (___acrt_get_sigabrt_handler() != 0)
        sub_5925c5(0x16)
    
    if ((data_61f1d0 & 2) != 0)
        if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
            trap(0xd)
        
        sub_58946f(3, 0x40000015, 1)
    
    sub_57f785(3)
    breakpoint
}
