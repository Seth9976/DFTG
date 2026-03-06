// 函数名称: sub_452860
// 虚拟地址: 0x452860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_452860(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_108 = 1
    int32_t var_108 = 1
    void var_a4
    __builtin_memcpy(&var_a4, arg2, 0xa0)
    *(arg1 + 0x638) = 0
    __builtin_memcpy(arg1, &var_108, 0x104)
    __builtin_memcpy(arg1 + 0x104, &var_108, 0x104)
    return arg1
}
