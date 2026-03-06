// 函数名称: sub_575320
// 虚拟地址: 0x575320
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

double* __fastcallsub_575320(int32_t* arg1)
{
    // 第一条实际指令: double* eax = *arg1
    double* eax = *arg1
    int32_t ecx = eax[8].d
    
    if (*(eax + 0x44) == 0)
        if (ecx == 0)
            return sub_5745b0(arg1)
        
        return sub_574bd0(arg1)
    
    if (ecx == 0)
        return sub_5750d0(arg1)
    
    float xmm0_1 = arg1[4]
    void* ebx_1 = arg1[3]
    float xmm0_2 = arg1[5]
    float xmm0_3 = arg1[6]
    float xmm0_4 = arg1[7]
    int32_t edx
    
    if (*(ebx_1 + 0x4c) == 0)
        eax, edx = sub_5300c0(ebx_1)
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (arg1[1] s<= 0)
        return eax
    
    double* eax_2
    
    do
        int32_t* edi_1 = *(arg1[2] + (i << 2))
        void* eax_1
        
        if (edi_1[0x13] == 0)
            eax_1, edx = sub_5300c0(edi_1)
        
        float xmm3_1 = edi_1[0xe]
        xmm0_1 f- 0
        eax_1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm3_1 = xmm3_1 + (*(*arg1 + 0x28) f+ *(ebx_1 + 0x38)) * xmm0_1
        
        float xmm6_1 = edi_1[0xc]
        float xmm7_1 = edi_1[0xd]
        xmm0_2 f- 0
        eax_1:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
            | (xmm0_2 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            eax_1 = *arg1
            xmm6_1 = xmm6_1 + (*(eax_1 + 0x2c) f+ *(ebx_1 + 0x30)) * xmm0_2
            xmm7_1 = xmm7_1 + (*(eax_1 + 0x30) f+ *(ebx_1 + 0x34)) * xmm0_2
        
        float xmm4_3 = edi_1[0xf]
        float xmm5_1 = edi_1[0x10]
        xmm0_3 f- 0
        eax_1:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
            | (xmm0_3 < 0f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            if (not(xmm4_3 <= 9.99999975e-06f))
                xmm4_3 = xmm4_3 * ((*(ebx_1 + 0x3c) - 1f f+ *(*arg1 + 0x34)) * xmm0_3 + 1f)
            
            if (not(xmm5_1 <= 9.99999975e-06f))
                xmm5_1 = xmm5_1 * ((*(ebx_1 + 0x40) - 1f f+ *(*arg1 + 0x38)) * xmm0_3 + 1f)
        
        float xmm1_1 = edi_1[0x12]
        xmm0_4 f- 0
        eax_1:1.b = (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2
            | (xmm0_4 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            eax_1 = *arg1
            xmm1_1 = xmm1_1 + (*(eax_1 + 0x3c) f+ *(ebx_1 + 0x48)) * xmm0_4
        
        eax_2, edx =
            sub_52f800(eax_1, edx, edi_1, xmm6_1, xmm7_1, xmm3_1, xmm4_3, xmm5_1, edi_1[0x11], xmm1_1)
        i = i_1 + 1
        i_1 = i
    while (i s< arg1[1])
    
    return eax_2
}
