// 函数名称: sub_4f5a70
// 虚拟地址: 0x4f5a70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4f5a70(char arg1, void* arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    char* esi = arg4
    int32_t* var_8_1 = arg3
    
    do
        arg1 = *esi
        esi = &esi[1]
    while (arg1 != 0)
    
    void* esi_1 = esi - &esi[1]
    char* eax_4
    int32_t* ecx_1
    
    if (_strncmp(arg4, *(arg2 + 4), esi_1) == 0)
        *(arg2 + 4) += esi_1
        sub_4f59f0(arg2)
        ecx_1 = &arg3[2]
        *arg3 = data_6ca2b4
        arg3[1] = data_6ca2b8
        *ecx_1 = data_6ca2bc
        eax_4 = data_6ca2bc
    else
        ecx_1 = &arg3[2]
        *arg3 = data_12bacb8
        arg3[1] = data_12bacbc
        *ecx_1 = data_12bacc0
        eax_4 = data_12bacc0
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_8 = sub_48a080(ecx_1)
        *(eax_8 + 4) += 1
    
    return arg3
}
