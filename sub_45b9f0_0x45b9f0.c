// 函数名称: sub_45b9f0
// 虚拟地址: 0x45b9f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45b9f0(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t eax_1
    
    for (int32_t i = 0; i s< 6; i += 1)
        eax_1 = sub_457270(*(arg1 + 8))
        
        if (*(eax_1 + (i << 2)) == 4)
            return i
    
    sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x25ce, 
        "GetProduceFace")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
