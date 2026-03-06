// 函数名称: sub_4dc100
// 虚拟地址: 0x4dc100
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4dc100()
{
    // 第一条实际指令: int32_t* eax = data_114e818
    int32_t* eax = data_114e818
    
    if (eax != 0)
        return *eax
    
    sub_489550(eax, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
