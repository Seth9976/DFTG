// 函数名称: sub_570eb0
// 虚拟地址: 0x570eb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_570eb0(void* arg1, int32_t arg2, float arg3, float arg4, int32_t arg5, int32_t* arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: if (arg5 == 0)
    if (arg5 == 0)
        return 
    
    float xmm2_1 = arg3
    float i_1 = arg4
    int32_t* ecx_1
    
    if (xmm2_1 <= i_1)
        ecx_1 = *(arg1 + 0xc)
        
        if (not(xmm2_1 f>= ecx_1[*(arg1 + 8) - 1]))
            goto label_570f24
        
        return 
    
    int32_t ecx
    int32_t var_1c_1 = ecx
    sub_570eb0(arg1, arg2, xmm2_1, 0x4f000000, arg5, arg6, arg7, arg8, arg9)
    xmm2_1 = -1f
    ecx_1 = *(arg1 + 0xc)
    i_1 = arg4
    label_570f24:
    int32_t xmm1_1 = *ecx_1
    
    if (xmm1_1 f> i_1)
        return 
    
    int32_t eax
    int32_t i
    
    if (xmm1_1 f<= xmm2_1)
        i = sub_56dac0(ecx_1, *(arg1 + 8), xmm2_1)
        float xmm1_2 = ecx_1[i]
        
        if (i s> 0)
            void* ecx_3 = &ecx_1[i - 1]
            
            do
                float xmm0_2 = *ecx_3
                xmm0_2 - xmm1_2
                eax:1.b = (xmm0_2 == xmm1_2 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_2, xmm1_2) ? 1 : 0) << 2 | (xmm0_2 < xmm1_2 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    break
                
                i -= 1
                ecx_3 -= 4
            while (i s> 0)
        
        i_1 = arg4
    else
        i = 0
    
    if (i s>= *(arg1 + 8))
        return 
    
    while (not(i_1 f< *(*(arg1 + 0xc) + (i << 2))))
        eax = *(*(arg1 + 0x10) + (i << 2))
        i += 1
        *(arg5 + (*arg6 << 2)) = eax
        *arg6 += 1
        
        if (i s>= *(arg1 + 8))
            break
}
