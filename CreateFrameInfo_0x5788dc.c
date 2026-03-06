// 函数名称: __CreateFrameInfo
// 虚拟地址: 0x5788dc
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*__CreateFrameInfo(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: *arg1 = arg2
    *arg1 = arg2
    arg1[1] = *(sub_57a0a4() + 0x24)
    *(sub_57a0a4() + 0x24) = arg1
    return arg1
}
