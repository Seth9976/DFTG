// 函数名称: sub_452770
// 虚拟地址: 0x452770
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_452770(void* arg1, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        *(arg1 + (arg2 << 2) + 0x308) += arg3
        return arg3
    
    int32_t edx_1 = arg3
    
    if (edx_1 s<= 0)
        if (arg4 == 0)
            *(arg1 + 0x330) += edx_1
        else
            *(arg1 + 0x32c) += edx_1
            *(arg1 + 0x328) -= 1
    else if (arg4 == 0)
        *(arg1 + 0x330) += edx_1
    else
        *(arg1 + 0x32c) += edx_1
        *(arg1 + 0x328) += 1
    
    int32_t esi = 0xa
    
    if (*(arg1 + 0x330) == 0 && *(arg1 + 0x328) s> 0)
        esi = 9
    
    int32_t edi = *(arg1 + 0x308)
    
    if (*(arg1 + 0x300) + edi s> esi)
        int32_t eax_2 = edi - 1
        edx_1 += 1
        edi = eax_2
        *(arg1 + 0x308) = eax_2
    
    if (*(arg1 + 0x300) + edi s< esi)
        edi += 1
        edx_1 -= 1
        *(arg1 + 0x308) = edi
    
    if (edx_1 s<= 0)
        int32_t ebx_1 = *(arg1 + 0x320)
        
        if (ebx_1 s> 0)
            int32_t eax_6 = neg.d(edx_1)
            
            if (eax_6 s>= ebx_1)
                eax_6 = ebx_1
            
            edx_1 += eax_6
            *(arg1 + 0x320) = ebx_1 - eax_6
    
    int32_t eax_7 = edx_1
    int32_t esi_2 = esi - *(arg1 + 0x300) - edi
    
    if (edx_1 s>= esi_2)
        eax_7 = esi_2
    
    *(arg1 + 0x320) += edx_1 - eax_7
    *(arg1 + (arg2 << 2) + 0x308) += eax_7
    return eax_7
}
