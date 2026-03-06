// 函数名称: sub_478140
// 虚拟地址: 0x478140
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_478140(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = sub_425f70(arg1[2])
    int32_t eax = sub_425f70(arg1[2])
    int32_t ecx_1 = *arg1
    int32_t eax_1 = eax * 0x2d78
    
    if (ecx_1 == 4)
        return eax_1 + 0x6fba94
    
    if (ecx_1 == 5)
        return eax_1 + 0x6fc864
    
    sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x7647, 
        "OpponentGetDevSettle")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
