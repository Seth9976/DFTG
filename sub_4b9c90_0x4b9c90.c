// 函数名称: sub_4b9c90
// 虚拟地址: 0x4b9c90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4b9c90(int32_t arg1, void* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t ecx = *(arg4 + 0xc)
    
    if (ecx != 4)
        if (ecx == 3)
            *(arg2 + 0xe44) = 0
            data_63e5e4 = 0
            return arg3
        
        data_63e5e4 = *(arg2 + 0x1410)
        *(arg2 + 0xe44) = 1
        *(arg2 + 0xe3c) = *(arg4 + 0x10)
        int32_t eax_9 = *(arg4 + 0x14)
        *(arg2 + 0xe40) = eax_9
        return eax_9
    
    float xmm0_1 = *(arg4 + 0x10) f- *(arg2 + 0xe3c)
    int32_t ecx_1 = *(arg3 + 0xfec)
    float xmm0_3 = *(arg4 + 0x14) f- *(arg2 + 0xe40)
    float xmm0_4[0x4] = *(arg3 + 0x10a0)
    float xmm1_1 = _mm_shuffle_ps(xmm0_4, xmm0_4, 0xff)
    float xmm0_5 = _mm_shuffle_ps(xmm0_4, xmm0_4, 0x55)
    float xmm1_2 = xmm1_1 - xmm0_5
    float var_28
    float xmm2_2
    
    if (ecx_1 != 2)
        if (ecx_1 != 3)
            sub_489550(arg3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x3e44, 
                "UI2TableScroll")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        float eax_3
        float edx
        eax_3, edx = sub_4a0ae0(arg3)
        xmm2_2 = edx
        var_28 = eax_3
    else
        void* eax_1 = sub_49e970(arg3, 0)
        xmm2_2 = (*(eax_1 + 0x10ac) f- *(eax_1 + 0x10a4)) * _mm_cvtepi32_ps(zx.o(*(arg3 + 0xf28)))
    
    float xmm3 = (zx.o(0)).d
    float xmm1_4 = *(arg2 + 0x10a8) f- *(arg2 + 0x10a0)
    float xmm4_2 = xmm1_1 - xmm1_4 - (xmm1_4 + xmm0_5)
    float xmm2_3 = xmm2_2 - xmm1_2
    float xmm1_6 = _mm_max_ss(xmm1_4, xmm1_2 / xmm2_2 * xmm4_2) * 0.5f
    float xmm0_14 = xmm1_6 + 0f
    float xmm5_3 = (xmm1_6 + 1f - xmm0_14) / (xmm4_2 - xmm1_6 - xmm0_14)
    
    if (not(0 f>= xmm5_3))
        if (xmm5_3 < 1f)
            xmm3 = sub_41f140(1, xmm5_3, (zx.o(0)).d, xmm2_3)
        else
            xmm3 = xmm2_3
    
    *(arg2 + 0xe3c) = *(arg4 + 0x10)
    *(arg2 + 0xe40) = *(arg4 + 0x14)
    var_28 = xmm0_1 * xmm3
    float var_24_2 = xmm0_3 * xmm3
    return sub_4b9af0(arg3, &var_28)
}
