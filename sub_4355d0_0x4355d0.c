// 函数名称: sub_4355d0
// 虚拟地址: 0x4355d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4355d0(void* arg1)
{
    // 第一条实际指令: char* const ecx = &data_5b2591
    char* const ecx = &data_5b2591
    char* eax_1 = *(arg1 + 8)
    
    if (eax_1 != 0)
        ecx = eax_1
    
    int32_t eax_2 = __atoi64(ecx)
    int32_t* result = sub_425de0()
    result[0x3c] = eax_2
    return result
}
