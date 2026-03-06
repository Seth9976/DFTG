// 函数名称: sub_481350
// 虚拟地址: 0x481350
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_481350(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: *(arg1 + 0x744) = 0
    *(arg1 + 0x744) = 0
    __builtin_memcpy(arg1, arg1 + 0x104, 0x104)
    void var_110
    __builtin_memcpy(&var_110, arg2, 0x104)
    int32_t var_c = arg3
    int32_t var_8 = 0
    __builtin_memcpy(arg1 + 0x208, &var_110, 0x10c)
    *(arg1 + 0x638) = 1
    return arg3
}
