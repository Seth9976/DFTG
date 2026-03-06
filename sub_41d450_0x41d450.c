// 函数名称: sub_41d450
// 虚拟地址: 0x41d450
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HANDLEsub_41d450()
{
    // 第一条实际指令: sub_4894d0("app resume")
    sub_4894d0("app resume")
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t var_c
    sub_489b30(performanceCount_1 - data_6cfe50, 
        sbb.d(var_c, data_6cfe54, performanceCount_1 u< data_6cfe50))
    QueryPerformanceCounter(&performanceCount)
    data_6cfe50 = performanceCount
    data_6cfe54 = var_c
    return CreateThread(nullptr, 0x100000, sub_41c120, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, nullptr)
}
