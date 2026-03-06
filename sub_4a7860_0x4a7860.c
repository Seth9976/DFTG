// 函数名称: sub_4a7860
// 虚拟地址: 0x4a7860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4a7860(void* arg1)
{
    // 第一条实际指令: if (data_64365c.b != 0 || data_6c4470 != 0 || data_6c4471 != 0 || data_6c4472 != 0 || data_6c4473 != 0 || arg1 == 0)
    if (data_64365c.b != 0 || data_6c4470 != 0 || data_6c4471 != 0 || data_6c4472 != 0
            || data_6c4473 != 0 || arg1 == 0)
        return 
    
    int32_t edx = *(arg1 + 0x10)
    float xmm2[0x4] = zx.o(0)
    int32_t edi = 0
    void* eax
    
    if (edx s>= 4)
        eax = *(arg1 + 8) + 4
        int32_t i_2 = ((edx - 4) u>> 2) + 1
        edi = i_2 << 2
        int32_t i
        
        do
            float xmm1_2 = *(eax + 0x14) f+ *(eax + 0x10)
            int32_t xmm0_3 = _mm_max_ss(*(eax + 4) f+ *eax, xmm2)
            float xmm2_2 = *(eax + 0x34) f+ *(eax + 0x30)
            int32_t xmm1_3 = _mm_max_ss(xmm1_2, xmm0_3)
            float xmm0_5 = *(eax + 0x24) f+ *(eax + 0x20)
            eax += 0x40
            xmm2 = _mm_max_ss(xmm2_2, _mm_max_ss(xmm0_5, xmm1_3))
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (edi s>= edx)
        return 
    
    eax = (edi << 4) + *(arg1 + 8) + 4
    int32_t i_3 = edx - edi
    int32_t i_1
    
    do
        float xmm1_5 = *(eax + 4) f+ *eax
        eax += 0x10
        xmm2 = _mm_max_ss(xmm1_5, xmm2)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
}
