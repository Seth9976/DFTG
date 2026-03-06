// 函数名称: sub_4f62f0
// 虚拟地址: 0x4f62f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4f62f0(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    char* const esi = &data_5b2591
    char* eax_1 = *arg4
    
    if (eax_1 != 0)
        esi = eax_1
    
    int32_t* var_8_1 = arg3
    int32_t eax_2 = __atoi64(esi)
    void* eax_3 = sub_4f5990(arg2)
    *(eax_3 + 4) = eax_2
    *eax_3 = 2
    arg3[2] = &data_5b2591
    arg3[1] = eax_3
    *arg3 = 3
    return arg3
}
