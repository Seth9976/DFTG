// 函数名称: sub_4be980
// 虚拟地址: 0x4be980
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4be980(int32_t arg1, float* arg2, int128_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: if (not(*(arg3 + 8) f< *arg3) && not(*(arg3 + 0xc) f< *(arg3 + 4)))
    if (not(*(arg3 + 8) f< *arg3) && not(*(arg3 + 0xc) f< *(arg3 + 4)))
        *arg4 = *arg3
        *arg4 = *arg4 + *arg2
        *(arg4 + 8) = arg2[2] f+ *(arg4 + 8)
        *(arg4 + 4) = arg2[1] f+ *(arg4 + 4)
        *(arg4 + 0xc) = arg2[3] f+ *(arg4 + 0xc)
        return arg4
    
    sub_489550(arg1, &data_5b2591, "RectIsNormalized(r)", "d:\ax\trunk\ax2017\engine\rect.cpp", 0xb3, 
        "RectInflate")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
