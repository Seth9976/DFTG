// 函数名称: __libm_sse2_sqrt_precise
// 虚拟地址: 0x59a690
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t__libm_sse2_sqrt_precise(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, double arg3 @ xmm0)
{
    // 第一条实际指令: double var_8
    double var_8
    
    if ((arg1 & 0x7f80) == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        var_8.w = temp0_1
        
        if ((zx.d(var_8.w) & 0x7f) == 0x7f)
            uint32_t eax_4 = _mm_extract_epi16(arg3, 3)
            int32_t edx
            
            if ((eax_4 & 0x7ff0) == 0x7ff0)
                if ((eax_4 & 0xf) == 0)
                    if (zx.d(_mm_extract_epi16(arg3, 2)) != 0)
                        goto label_59a72d
                    
                    if (zx.d(_mm_extract_epi16(arg3, 1)) != 0)
                        goto label_59a72d
                    
                    if (zx.d(_mm_extract_epi16(arg3, 0)) == 0)
                        goto label_59a6d4
                    
                    goto label_59a72d
                
            label_59a72d:
                var_8 = arg3
                int32_t var_4
                var_4:2.b = arg1:2.b | 8
                edx = 0x3f5
            else
            label_59a6d4:
                uint32_t eax_7 = eax_4 & 0x8000
                
                if (eax_7 == 0)
                    _mm_sqrt_sd(arg3, arg3)
                    return eax_7
                
                var_8 = arg3
                
                if (var_8.d == 0 && eax_4 == 0x8000)
                    eax_7 = _mm_extract_epi16(arg3, 2)
                    
                    if (eax_7 == 0)
                        _mm_sqrt_sd(arg3, arg3)
                        return eax_7
                
                var_8.d = 0
                int32_t var_4_1 = 0xfff80000
                edx = 0x31
            
            return sub_590d14(&var_8, &var_8, &var_8, edx)
    
    var_8 = arg3
    int32_t eax_17
    long double st0
    st0, eax_17 = sub_59b3c0()
    var_8 = fconvert.d(st0)
    return eax_17
}
