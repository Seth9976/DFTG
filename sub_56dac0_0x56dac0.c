// 函数名称: sub_56dac0
// 虚拟地址: 0x56dac0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56dac0(int32_t arg1, int32_t arg2, int32_t arg3 @ xmm2)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t edx = arg2 - 2
    
    if (arg2 == 2)
        return 1
    
    int32_t eax_1 = edx
    
    while (true)
        int32_t eax_2 = eax_1 s>> 1
        int32_t xmm0_1 = *(arg1 + (eax_2 << 2) + 4)
        
        if (arg3 f< xmm0_1)
            edx = eax_2
        
        int32_t eax_3 = eax_2 + 1
        
        if (arg3 f< xmm0_1)
            eax_3 = esi
        
        esi = eax_3
        
        if (esi == edx)
            break
        
        eax_1 = esi + edx
    
    return esi + 1
}
