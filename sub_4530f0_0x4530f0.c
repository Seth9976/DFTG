// 函数名称: sub_4530f0
// 虚拟地址: 0x4530f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4530f0(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t eax = *(arg1 + 8)
    
    if (eax == 0)
        return sub_44ac90(eax, *(arg1 + 0xc), data_632804, *(arg1 + 0x14), eax.b, 1)
    
    if (eax == 1)
        return sub_44bae0(eax, *(arg1 + 0xc), data_632804, *(arg1 + 0x14), 0, eax.b)
    
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x433, 
        "TileCost")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
