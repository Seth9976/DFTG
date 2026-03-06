// 函数名称: sub_45e670
// 虚拟地址: 0x45e670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45e670(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 8)
    if (arg1 == 8)
        return 1
    
    if (arg1 - 9 u<= 4)
        return arg1 - 8
    
    sub_489550(arg1 - 9, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        0x34a9, "RollWhereToPhase")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
