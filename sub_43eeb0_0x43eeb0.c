// 函数名称: sub_43eeb0
// 虚拟地址: 0x43eeb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_43eeb0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void var_b34
    void var_b34
    int32_t eax_1 = __security_cookie ^ &var_b34
    void* eax_2 = *arg1
    int32_t ebx = 5
    int32_t esi = 0
    int32_t i_8 = 0xffffffff
    int32_t i_9 = 5
    
    if (*(eax_2 + 0x11) != 0 || *(eax_2 + 0x12) != 0)
        ebx = 6
        i_9 = 6
    
    int32_t eax_3 = 0xa
    
    if (*(eax_2 + 8) == 0)
        eax_3 = 7
    
    int32_t* var_b44 = arg1
    void* eax_5 = arg2 * 0x1bc + arg1
    void var_9d8
    sub_43c400(&var_9d8, arg2, arg1, &var_9d8)
    int64_t xmm0_1 = -0x4010000000000000
    int32_t i = 0
    void var_9d0
    void var_9c8
    void var_9c0
    
    do
        int64_t xmm1_1 = *(&var_9d8 + (i << 3))
        
        if (not(xmm1_1 f<= xmm0_1))
            xmm0_1 = xmm1_1
            i_8 = i
        
        int64_t xmm1_2 = *(&var_9d0 + (i << 3))
        
        if (not(xmm1_2 f<= xmm0_1))
            xmm0_1 = xmm1_2
            i_8 = i + 1
        
        int64_t xmm1_3 = *(&var_9c8 + (i << 3))
        
        if (not(xmm1_3 f<= xmm0_1))
            xmm0_1 = xmm1_3
            i_8 = i + 2
        
        int64_t xmm1_4 = *(&var_9c0 + (i << 3))
        
        if (not(xmm1_4 f<= xmm0_1))
            xmm0_1 = xmm1_4
            i_8 = i + 3
        
        i += 4
    while (i s< ebx - 3)
    
    for (; i s< ebx; i += 1)
        int64_t xmm1_5 = *(&var_9d8 + (i << 3))
        
        if (not(xmm1_5 f<= xmm0_1))
            xmm0_1 = xmm1_5
            i_8 = i
    
    int32_t eax_8 = *(eax_5 + 0x180)
    int32_t result = i_8 + 1
    int32_t edi = eax_8
    
    if (result != edi)
        data_13902dc += 1
    else
        data_13902e8 += 1
    
    if (data_1450b5c != 0)
        void var_b0c
        void* eax_9 = &var_b0c
        int32_t i_5 = 0xb
        int32_t i_1
        
        do
            eax_9 += 0x1c
            __builtin_memset(eax_9 - 0x1c, 0, 0x18)
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        int32_t i_6 = *(eax_5 + 0x164)
        
        if (i_6 s> 0)
            void* edi_1 = eax_5 + 0x29
            int32_t i_2
            
            do
                if (*(edi_1 - 4) == 4)
                    uint32_t ecx_4 = zx.d(*(edi_1 - 5)) * 7 + zx.d(*edi_1)
                    void var_b10
                    *(&var_b10 + (ecx_4 << 2)) += 1
                
                edi_1 += 8
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
            edi = eax_8
        
        int32_t ecx_5 = 1
        
        do
            int32_t eax_13
            eax_13.b = edi == ecx_5
            ecx_5 += 1
            *(&var_9d8 + (esi << 3)) = _mm_cvtepi32_pd(zx.q(eax_13))
            esi += 1
        while (ecx_5 s<= i_9)
        
        int32_t edx_2 = data_1450b5c
        void var_af0
        void* ecx_6 = &var_af0
        int32_t var_b28_1 = 1
        void* var_b24_1 = &var_af0
        int32_t eax_20
        
        do
            int32_t i_7 = i_9
            void* edi_2 = ecx_6
            int32_t i_3
            
            do
                int32_t ecx_7 = *edi_2
                edi_2 += 4
                int32_t eax_14
                eax_14.b = ecx_7 s> 0
                int32_t eax_15
                eax_15.b = ecx_7 s> 1
                *(&var_9d8 + (esi << 3)) = _mm_cvtepi32_pd(zx.q(eax_14))
                int32_t eax_16
                eax_16.b = ecx_7 s> 2
                *(&var_9d0 + (esi << 3)) = _mm_cvtepi32_pd(zx.q(eax_15))
                int32_t eax_17
                eax_17.b = ecx_7 s> 3
                *(&var_9c8 + (esi << 3)) = _mm_cvtepi32_pd(zx.q(eax_16))
                int32_t eax_18
                eax_18.b = ecx_7 s> 4
                *(&var_9c0 + (esi << 3)) = _mm_cvtepi32_pd(zx.q(eax_17))
                int64_t var_9b8[0x12e]
                var_9b8[esi] = _mm_cvtepi32_pd(zx.q(eax_18))
                esi += 5
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
            eax_20 = var_b28_1 + 1
            ecx_6 = var_b24_1 + 0x1c
            var_b28_1 = eax_20
            var_b24_1 = ecx_6
        while (eax_20 s<= eax_3)
        int32_t i_4 = 0
        
        if (data_138a690 s> 0)
            do
                double xmm0_14 = *(data_138a6cc + (i_4 << 3))
                xmm0_14 - 1.0
                int32_t eax_21
                eax_21:1.b = (xmm0_14 == 1.0 ? 1 : 0) << 6 | (is_unordered.q(xmm0_14, 1.0) ? 1 : 0) << 2
                    | (xmm0_14 < 1.0 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                bool p_4
                
                if (p_2)
                    xmm0_14 - -1.0
                    eax_21:1.b = (xmm0_14 == -1.0 ? 1 : 0) << 6
                        | (is_unordered.q(xmm0_14, -1.0) ? 1 : 0) << 2 | (xmm0_14 < -1.0 ? 1 : 0)
                    p_4 = unimplemented  {test ah, 0x44}
                
                void* var_b48
                
                if (not(p_2) || not(p_4))
                    int32_t var_b44_1 = int.d(xmm0_14)
                    var_b48 = &data_5d514c
                    sub_4394c0(edx_2, &data_5d514c)
                else
                    var_b48.q = xmm0_14
                    sub_4394c0(edx_2, 0x5d5150)
                edx_2 = data_1450b5c
                i_4 += 1
            while (i_4 s< data_138a690)
        
        int32_t edi_3 = 0
        
        if (esi s> 0)
            do
                int32_t var_b44_2 = int.d(fconvert.t(*(&var_9d8 + (edi_3 << 3))))
                sub_4394c0(edx_2, &data_5d514c)
                edx_2 = data_1450b5c
                edi_3 += 1
            while (edi_3 s< esi)
        
        result = sub_4394c0(edx_2, &data_5d5158)
    
    @__security_check_cookie@4(eax_1 ^ &var_b34)
    return result
}
