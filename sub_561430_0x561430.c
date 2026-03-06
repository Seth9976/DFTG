// 函数名称: sub_561430
// 虚拟地址: 0x561430
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_561430(void* arg1)
{
    // 第一条实际指令: char* eax = *(arg1 + 0xa8)
    char* eax = *(arg1 + 0xa8)
    int32_t ecx = *(arg1 + 0xac)
    char result_1
    
    if (eax u< ecx)
        result_1 = *eax
        eax = &eax[1]
        *(arg1 + 0xa8) = eax
    else if (*(arg1 + 0x20) == 0)
        result_1 = 0
    else
        sub_561250(arg1)
        char* eax_1 = *(arg1 + 0xa8)
        ecx = *(arg1 + 0xac)
        result_1 = *eax_1
        eax = &eax_1[1]
        *(arg1 + 0xa8) = eax
    
    uint32_t result = zx.d(result_1)
    
    if (eax u>= ecx)
        if (*(arg1 + 0x20) == 0)
            return result
        
        sub_561250(arg1)
        eax = *(arg1 + 0xa8)
    
    ecx.b = *eax
    *(arg1 + 0xa8) = &eax[1]
    return (zx.d(ecx.b) << 8) + result
}
