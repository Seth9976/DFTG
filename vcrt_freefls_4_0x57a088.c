// 函数名称: ___vcrt_freefls@4
// 虚拟地址: 0x57a088
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcall___vcrt_freefls@4(int32_t arg1)
{
    // 第一条实际指令: int32_t result = arg1
    int32_t result = arg1
    
    if (result != 0 && result != 0x6cf6a4)
        result = _free(result)
    
    return result
}
