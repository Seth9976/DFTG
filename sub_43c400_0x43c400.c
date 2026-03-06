// 函数名称: sub_43c400
// 虚拟地址: 0x43c400
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_43c400(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: sub_44f8e0(arg3)
    sub_44f8e0(arg3)
    int32_t i = 0
    
    if (data_138a690 s> 0)
        do
            *(data_138a6cc + (i << 3)) = -0x4010000000000000
            i += 1
        while (i s< data_138a690)
    
    int32_t edx = 2
    int32_t edi = 0x18
    int32_t ebx = 0xc
    
    do
        edi += 0x30
        int32_t eax_2
        eax_2.b = arg3[0x304] s> (edx - 2) * *(*arg3 + 4)
        *(edi + data_138a6cc - 0x48) = _mm_cvtepi32_pd(zx.q((eax_2 << 1) + 0xffffffff))
        int32_t eax_6
        eax_6.b = arg3[0x304] s> (edx - 1) * *(*arg3 + 4)
        *(edi + data_138a6cc - 0x40) = _mm_cvtepi32_pd(zx.q((eax_6 << 1) + 0xffffffff))
        int32_t ecx_4
        ecx_4.b = arg3[0x304] s> *(*arg3 + 4) * edx
        *(edi + data_138a6cc - 0x38) = _mm_cvtepi32_pd(zx.q((ecx_4 << 1) + 0xffffffff))
        int32_t eax_14
        eax_14.b = arg3[0x304] s> (edx + 1) * *(*arg3 + 4)
        *(edi + data_138a6cc - 0x30) = _mm_cvtepi32_pd(zx.q((eax_14 << 1) + 0xffffffff))
        int32_t eax_18
        eax_18.b = arg3[0x304] s> (edx + 2) * *(*arg3 + 4)
        *(edi + data_138a6cc - 0x28) = _mm_cvtepi32_pd(zx.q((eax_18 << 1) + 0xffffffff))
        int32_t eax_22
        eax_22.b = arg3[0x304] s> (edx + 3) * *(*arg3 + 4)
        edx += 6
        *(edi + data_138a6cc - 0x20) = _mm_cvtepi32_pd(zx.q((eax_22 << 1) + 0xffffffff))
    while (edx - 2 s< 0xc)
    
    int32_t edi_1 = 0xffffffff
    int32_t i_9 = *(*arg3 + 4)
    
    if (i_9 s> 0)
        int32_t i_8 = i_9
        int32_t* eax_27 = &arg3[0x5c]
        int32_t* var_c_1 = eax_27
        int32_t i_1
        
        do
            int32_t j = *eax_27
            int32_t edx_1 = 0
            
            if (j != 0xffffffff)
                do
                    edx_1 += 1
                    j = sx.d(*(&arg3[j * 3] + 0x8ca))
                while (j != 0xffffffff)
                
                eax_27 = var_c_1
            
            if (edx_1 s<= edi_1)
                edx_1 = edi_1
            
            eax_27 = &eax_27[0x6f]
            var_c_1 = eax_27
            edi_1 = edx_1
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
        ebx = 0xc
    
    for (int32_t i_2 = 3; i_2 s< 0xf; )
        int32_t eax_29
        eax_29.b = edi_1 s> i_2
        i_2 += 1
        *(data_138a6cc + (ebx << 3)) = _mm_cvtepi32_pd(zx.q((eax_29 << 1) + 0xffffffff))
        ebx += 1
    
    void* eax_32 = *arg3
    void* edi_2 = nullptr
    int32_t i_6 = *(eax_32 + 4)
    
    if (i_6 s> 0)
        void* ecx_12 = &arg3[0x66]
        int32_t i_3
        
        do
            eax_32 = edi_2
            ecx_12 += 0x1bc
            edi_2 = *(ecx_12 - 0x1bc)
            
            if (edi_2 s<= eax_32)
                edi_2 = eax_32
            
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)
    
    int32_t var_c_2 = sub_43b500(eax_32, arg2, arg3, arg2, ebx, edi_2)
    int32_t i_7 = mods.dp.d(sx.q(arg2 + 1), *(*arg3 + 4))
    int32_t eax_36 = arg2
    
    for (int32_t i_4 = i_7; i_4 != eax_36; i_4 = i_7)
        var_c_2 = sub_43b500(eax_36, i_4, arg3, eax_36, var_c_2, edi_2)
        i_7 = mods.dp.d(sx.q(i_4 + 1), *(*arg3 + 4))
        eax_36 = arg2
    
    int32_t ecx_17 = data_138a690
    
    if (var_c_2 != ecx_17)
        int32_t var_20_2 = ecx_17
        int32_t var_24_2 = var_c_2
        sub_4394f0(var_c_2, i_7, ecx_17, "Incorrect number of role inputs %d %d\n")
        _exit(1)
        noreturn
    
    int32_t result = sub_450b30(0x138a668)
    int32_t i_5 = 0
    
    if (data_138a69c s> 0)
        do
            result = data_138a6dc
            *(arg4 + (i_5 << 3)) = *(result + (i_5 << 3))
            i_5 += 1
        while (i_5 s< data_138a69c)
    
    for (; i_5 s< data_138a698; i_5 += 1)
        result = data_138a6d8
        *(arg4 + (i_5 << 3)) = *(result + (i_5 << 3))
    
    return result
}
