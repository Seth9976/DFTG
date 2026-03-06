// 函数名称: sub_4dceb0
// 虚拟地址: 0x4dceb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4dceb0(int32_t* arg1)
{
    // 第一条实际指令: arg1[0x1a]
    arg1[0x1a]
    int32_t* eax = sub_4dc250()
    int32_t* ecx_1 = arg1[0xb]
    
    if (ecx_1 != 0)
        eax = sub_4f14a0(ecx_1)
    
    void** ecx_2 = data_114e818
    
    if (ecx_2 != 0)
        return sub_4dd960(*ecx_2, arg1)
    
    sub_489550(eax, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
