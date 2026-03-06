// 函数名称: sub_498260
// 虚拟地址: 0x498260
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_498260()
{
    // 第一条实际指令: int32_t performanceCount_1
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    
    if (SteamAPI_Init() == 0)
        sub_4892e0("SteamAPI_Init failed")
        int32_t eax_1
        eax_1.b = 0
        return eax_1
    
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_2 = performanceCount
    int32_t var_14
    int32_t var_c
    uint32_t var_24 = sub_489b30(performanceCount_2 - performanceCount_1, 
        sbb.d(var_14, var_c, performanceCount_2 u< performanceCount_1))
    sub_4892e0("SteamAPI_Init success. (%d ms)")
    sub_4892e0("GameCenterQueryDLC")
    int32_t eax_5
    eax_5.b = 1
    return eax_5
}
