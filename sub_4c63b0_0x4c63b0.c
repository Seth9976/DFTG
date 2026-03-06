// 函数名称: sub_4c63b0
// 虚拟地址: 0x4c63b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4c63b0(int32_t arg1, int32_t arg2, char** arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: char* const esi = &data_5b2591
    char* const esi = &data_5b2591
    
    if ((*(arg4 + 0x28) & 0x10) == 0)
        esi = *(arg3 + arg2)
    
    return sub_4c6300(arg5, arg5[1] + *arg5 + arg2, esi, arg5)
}
