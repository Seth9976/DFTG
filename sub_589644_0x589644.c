// 函数名称: sub_589644
// 虚拟地址: 0x589644
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_589644() __noreturn
{
    // 第一条实际指令: if (IsProcessorFeaturePresent(0x17) != 0)
    if (IsProcessorFeaturePresent(0x17) != 0)
        trap(0xd)
    
    sub_58946f(2, 0xc0000417, 1)
    TerminateProcess(GetCurrentProcess(), 0xc0000417)
    noreturn
}
