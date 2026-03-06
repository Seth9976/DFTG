// 函数名称: sub_452a60
// 虚拟地址: 0x452a60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_452a60(int32_t arg1, int32_t arg2, void* arg3, char arg4)
{
    // 第一条实际指令: if (arg4 != 0)
    if (arg4 != 0)
        return 
    
    int32_t esi_1 = *(arg3 + 0x638)
    void* edx_1 = esi_1 * 0x10c + arg3
    *(arg3 + 0x638) = esi_1 + 1
    __builtin_memcpy(edx_1 + 0x208, arg3 + 0x104, 0x104)
    *(edx_1 + 0x310) = arg2
    *(edx_1 + 0x30c) = 4
}
