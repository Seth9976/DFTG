// 函数名称: sub_4780c0
// 虚拟地址: 0x4780c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4780c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = sub_425f70(arg1[2]) * 0x2d78
    int32_t edx = sub_425f70(arg1[2]) * 0x2d78
    int32_t eax_1 = *arg1
    
    if (eax_1 == 4)
        return arg1[5] * 0xc8 + edx + 0x6fba94
    
    if (eax_1 == 5)
        return arg1[5] * 0xc8 + edx + 0x6fc864
    
    sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x7632, 
        "OpponentGetDeploy")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
