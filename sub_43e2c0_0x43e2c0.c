// 函数名称: sub_43e2c0
// 虚拟地址: 0x43e2c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_43e2c0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, double arg7, int64_t arg8)
{
    // 第一条实际指令: int32_t i = arg4
    int32_t i = arg4
    int32_t* var_8 = arg3
    
    for (; i == arg2; i += 1)
    
    double xmm1 = arg7
    int64_t xmm0 = arg8
    
    if (xmm0 f> xmm1)
        return 
    
    xmm1 - 0.0
    arg1:1.b =
        (xmm1 == 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm1, 0.0) ? 1 : 0) << 2 | (xmm1 < 0.0 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        return 
    
    int32_t edi_1 = *(*arg3 + 4)
    
    if (edi_1 == 2)
        edi_1 = 3
    
    if (i == edi_1)
        int32_t esi = data_138a704
        int32_t eax_1 = data_13902d8
        int32_t ebx_1
        
        if (esi != eax_1)
            ebx_1 = data_138a718
        else
            data_13902d8 = eax_1 + 0x64
            int64_t var_20
            var_20:4.d = (eax_1 + 0x64) << 5
            var_20.d = data_138a718
            int32_t eax_4 = sub_57fb2f()
            esi = data_138a704
            ebx_1 = eax_4
            xmm1 = arg7
            data_138a718 = ebx_1
        
        int32_t ecx = 0
        
        if (edi_1 s> 0)
            void* edx_2 = (esi << 5) + ebx_1
            
            do
                int32_t eax_5 = *(arg6 + (ecx << 2))
                edx_2 += 4
                ecx += 1
                *(edx_2 - 4) = eax_5
            while (ecx s< edi_1)
            
            esi = data_138a704
        
        data_138a704 = esi + 1
        *((esi << 5) + ebx_1 + 0x18) = xmm1
        return 
    
    int32_t edx_3 = arg5
    void* edi_4 = i * 0xc0 + edx_3
    arg4 = 5
    int32_t i_1
    
    do
        *(arg6 + (i << 2)) = *edi_4
        sub_43e2c0(i + 1, edx_3, arg6, *(edi_4 + 0x18) * xmm1, xmm0)
        xmm1 = arg7
        edi_4 += 0x20
        xmm0 = arg8
        i_1 = arg4
        arg4 -= 1
        edx_3 = arg5
    while (i_1 != 1)
}
