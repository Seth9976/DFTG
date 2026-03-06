// 函数名称: sub_4c6b60
// 虚拟地址: 0x4c6b60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4c6b60(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    
    if (*esi == 0)
        *esi = 0
        arg1.b = 1
        return arg1
    
    void* ecx
    char eax = sub_4c6b00(arg1, arg2, ecx, arg3)
    
    if (eax == 0)
        return eax
    
    int32_t eax_1 = arg4
    char* edi = *esi
    
    if (eax_1 == 0)
        if (*edi == eax_1.b)
            *esi = eax_1
            eax_1.b = 1
            return eax_1
        
        if (eax_1 == 0)
            eax_1 = sub_4dfc80(edi)
    
    *esi = sub_4d0b50(edi, eax_1)
    int32_t* eax_2
    eax_2.b = 1
    return eax_2
}
