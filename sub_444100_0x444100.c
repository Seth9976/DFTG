// 函数名称: sub_444100
// 虚拟地址: 0x444100
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_444100(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void var_64
    void var_64
    int32_t eax_1 = __security_cookie ^ &var_64
    int32_t esi = 0xffffffff
    int32_t ecx = 0
    int64_t var_58 = (zx.o(0)).q
    int32_t ebx = *(*arg1 + 4)
    int32_t var_4c[0x5]
    
    if (ebx s> 0)
        void* edx_1 = &arg1[0x69]
        
        do
            bool cond:0_1 = *edx_1 == 0
            int32_t edi_1 = esi
            esi = *(edx_1 - 0xc)
            var_4c[ecx] = esi
            
            if (not(cond:0_1))
                int32_t eax_3 = esi + 1
                esi = eax_3
                var_4c[ecx] = eax_3
            
            if (esi s<= edi_1)
                esi = edi_1
            
            ecx += 1
            edx_1 += 0x1bc
        while (ecx s< ebx)
    
    double xmm1 = 0.29999999999999999
    int32_t edi_2 = 0
    int32_t mxcsr
    int16_t x87control
    
    if (ebx s> 0)
        do
            double xmm0_4
            x87control, xmm0_4 = __libm_sse2_exp_precise(mxcsr, x87control, 
                _mm_cvtepi32_pd(zx.q(var_4c[edi_2] - esi)) * xmm1)
            xmm1 = 0.29999999999999999
            edi_2 += 1
            var_58 = xmm0_4 f+ var_58
        while (edi_2 s< ebx)
    
    int16_t x87control_1
    double xmm0_9
    x87control_1, xmm0_9 =
        __libm_sse2_exp_precise(mxcsr, x87control, _mm_cvtepi32_pd(zx.q(var_4c[arg2] - esi)) * xmm1)
    double var_38 = xmm0_9 f/ var_58
    int32_t eax_10 = mods.dp.d(sx.q(arg2 + 1), ebx)
    int32_t var_5c = eax_10
    
    if (eax_10 != arg2)
        void var_30
        void* var_60_1 = &var_30
        
        do
            double xmm0_14
            x87control_1, xmm0_14 = __libm_sse2_exp_precise(mxcsr, x87control_1, 
                _mm_cvtepi32_pd(zx.q(var_4c[eax_10] - esi)) * 0.29999999999999999)
            double* eax_13 = var_60_1
            *eax_13 = xmm0_14 f/ var_58
            var_60_1 = &eax_13[1]
            int32_t temp1_1 = mods.dp.d(sx.q(var_5c + 1), ebx)
            eax_10 = temp1_1
            var_5c = temp1_1
        while (eax_10 != arg2)
    
    sub_43b3b0(&var_38, arg2, arg1, &var_38)
    int32_t* result = *(*arg1 + 4) - 1
    
    if (arg2 == result)
        sub_450db0(&data_1410698)
        result = sub_450db0(0x138a668)
        int32_t i = 0
        
        if (data_1410720 s> 0)
            do
                result = _free(*(data_1410718 + (i << 2)))
                i += 1
            while (i s< data_1410720)
        
        int32_t i_1 = 0
        data_1410720 = 0
        
        if (data_138a6f0 s> 0)
            do
                result = _free(*(data_138a6e8 + (i_1 << 2)))
                i_1 += 1
            while (i_1 s< data_138a6f0)
        
        bool cond:1_1 = data_1410698 <= 0.0
        data_138a6f0 = 0
        
        if (not(cond:1_1))
            data_1410724 += 1
    
    @__security_check_cookie@4(eax_1 ^ &var_64)
    return result
}
