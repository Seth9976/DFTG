// 函数名称: sub_4d5350
// 虚拟地址: 0x4d5350
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4d5350(uint32_t arg1, char* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t** esi = *(arg3 + 4)
    int32_t** esi = *(arg3 + 4)
    char* var_8 = arg2
    char* const edi = &data_5b2591
    int32_t ecx_1
    int32_t* ebx_1
    
    do
        if (esi == 0)
            arg1.b = 0
            return arg1
        
        ebx_1 = *esi
        char* const ecx = &data_5b2591
        esi = esi[1]
        char* eax = *ebx_1
        
        if (eax != 0)
            ecx = eax
        
        arg1, ecx_1 = __stricmp(ecx, arg2)
        arg2 = var_8
    while (arg1 != 0)
    
    char* eax_1 = ebx_1[1]
    int32_t var_1c_2 = arg4
    
    if (eax_1 != 0)
        edi = eax_1
    
    sub_48d8d0(eax_1, arg2, ecx_1, edi, &data_5efc90)
    int32_t eax_2
    eax_2.b = 1
    return eax_2
}
