// 函数名称: sub_452fc0
// 虚拟地址: 0x452fc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t** __thiscallsub_452fc0(int32_t** arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t** var_8 = arg1
    int32_t** var_8 = arg1
    int32_t ecx = *(arg2 + (arg3 << 2) + 0x29c)
    
    if (ecx == 0)
        *arg1 = nullptr
        return arg1
    
    *arg1 = sub_452cc0(ecx)
    return arg1
}
