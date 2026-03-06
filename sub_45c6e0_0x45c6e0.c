// 函数名称: sub_45c6e0
// 虚拟地址: 0x45c6e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HANDLEsub_45c6e0(int32_t arg1, int32_t arg2, int64_t arg3)
{
    // 第一条实际指令: HANDLE result = data_621478(arg1, arg2, arg3)
    HANDLE result = data_621478(arg1, arg2, arg3)
    
    if (data_6d00cc == 0)
        result = CreateSemaphoreA(nullptr, 1, 1)
        data_6d00cc = result
    
    return result
}
