// 函数名称: sub_45c110
// 虚拟地址: 0x45c110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_45c110(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = arg1[arg2 * 0x6f + 0x71]
    int32_t result = arg1[arg2 * 0x6f + 0x71]
    
    if (result s< arg1[arg2 * 0x6f + 0x70])
        return result
    
    int32_t var_10 = arg2
    sub_4892e0("network wait who %d")
    int32_t eax = arg1[1]
    
    if (*((arg2 << 3) + &data_a75620) != eax || *((arg2 << 3) + &data_a75620:4) == 0)
        *((arg2 << 3) + &data_a75620) = eax
        *((arg2 << 3) + &data_a75620:4) = 2
        sub_45c030()
        sub_44f8e0(arg1)
        return sub_48da10() __tailcall
    
    sub_489550(eax, &data_5b2591, 
        "thread.queuedActiveTurn[who].gameId != g->game_id || thread.queuedActiveTurn[who].type == WAIT_NONE", 
        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x2864, "network_wait")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
