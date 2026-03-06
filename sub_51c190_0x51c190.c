// 函数名称: sub_51c190
// 虚拟地址: 0x51c190
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_51c190(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        *(arg1 + 0x2d8) = arg2
        return 0
    
    if (arg3 == 1)
        *(arg1 + 0x2d8) += arg2
        return 0
    
    if (arg3 == 2)
        *(arg1 + 0x2d8) = *(sub_51c090(arg1) + 0x14) + arg2
        return 0
    
    sub_489550(arg3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\soundogg.cpp", 0x12c, 
        "SoundOggSeekFunc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
