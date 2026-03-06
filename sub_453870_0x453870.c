// 函数名称: sub_453870
// 虚拟地址: 0x453870
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t** __thiscallsub_453870(int32_t** arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t** var_8 = arg1
    int32_t** var_8 = arg1
    int32_t ecx = *(arg2 + (arg3 << 2) + 0x2b4)
    
    if (ecx == 0)
        *arg1 = nullptr
        return arg1
    
    int32_t* eax_1 = sub_452c30(ecx)
    *arg1 = eax_1
    arg1[1] = eax_1[0xa]
    return arg1
}
