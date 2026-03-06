// 函数名称: sub_4528c0
// 虚拟地址: 0x4528c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_4528c0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t var_108 = 1
    int32_t var_108 = 1
    void var_a4
    __builtin_memcpy(&var_a4, arg2, 0xa0)
    
    if (arg5 != 0)
        __builtin_memcpy(arg3, &var_108, 0x104)
        __builtin_memcpy(arg3 + 0x104, &var_108, 0x104)
        *(arg3 + 0x638) = 0
        return 
    
    __builtin_memcpy(arg3, arg3 + 0x104, 0x104)
    *(arg3 + 0x744) = 0
    void var_214
    __builtin_memcpy(&var_214, &var_108, 0x104)
    int32_t var_110 = arg4
    int32_t var_10c = 0
    __builtin_memcpy(arg3 + 0x208, &var_214, 0x10c)
    *(arg3 + 0x638) = 1
}
