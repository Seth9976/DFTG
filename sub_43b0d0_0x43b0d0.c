// 函数名称: sub_43b0d0
// 虚拟地址: 0x43b0d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __fastcallsub_43b0d0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_44f8e0(arg1)
    sub_44f8e0(arg1)
    
    if (arg1[0x30f] != 0)
        sub_44f9d0(arg1)
    
    int32_t i = 0
    
    if (data_14106c0 s> 0)
        do
            *(data_14106fc + (i << 3)) = -0x4010000000000000
            i += 1
        while (i s< data_14106c0)
    
    int32_t edx = 2
    int32_t eax_2
    eax_2.b = arg1[0x30f] != 0
    int32_t edi = 0x20
    int32_t ebx = 0xd
    *data_14106fc = _mm_cvtepi32_pd(zx.q((eax_2 << 1) + 0xffffffff))
    
    do
        edi += 0x30
        int32_t eax_6
        eax_6.b = arg1[0x304] s> (edx - 2) * *(*arg1 + 4)
        *(edi + data_14106fc - 0x48) = _mm_cvtepi32_pd(zx.q((eax_6 << 1) + 0xffffffff))
        int32_t eax_10
        eax_10.b = arg1[0x304] s> (edx - 1) * *(*arg1 + 4)
        *(edi + data_14106fc - 0x40) = _mm_cvtepi32_pd(zx.q((eax_10 << 1) + 0xffffffff))
        int32_t ecx_5
        ecx_5.b = arg1[0x304] s> *(*arg1 + 4) * edx
        *(edi + data_14106fc - 0x38) = _mm_cvtepi32_pd(zx.q((ecx_5 << 1) + 0xffffffff))
        int32_t eax_18
        eax_18.b = arg1[0x304] s> (edx + 1) * *(*arg1 + 4)
        *(edi + data_14106fc - 0x30) = _mm_cvtepi32_pd(zx.q((eax_18 << 1) + 0xffffffff))
        int32_t eax_22
        eax_22.b = arg1[0x304] s> (edx + 2) * *(*arg1 + 4)
        *(edi + data_14106fc - 0x28) = _mm_cvtepi32_pd(zx.q((eax_22 << 1) + 0xffffffff))
        int32_t eax_26
        eax_26.b = arg1[0x304] s> (edx + 3) * *(*arg1 + 4)
        edx += 6
        *(edi + data_14106fc - 0x20) = _mm_cvtepi32_pd(zx.q((eax_26 << 1) + 0xffffffff))
    while (edx - 2 s< 0xc)
    
    int32_t edi_1 = 0xffffffff
    int32_t i_8 = *(*arg1 + 4)
    
    if (i_8 s> 0)
        int32_t i_7 = i_8
        int32_t* eax_31 = &arg1[0x5c]
        int32_t* var_c_1 = eax_31
        int32_t i_1
        
        do
            int32_t j = *eax_31
            int32_t edx_1 = 0
            
            if (j != 0xffffffff)
                do
                    edx_1 += 1
                    j = sx.d(*(&arg1[j * 3] + 0x8ca))
                while (j != 0xffffffff)
                
                eax_31 = var_c_1
            
            if (edx_1 s<= edi_1)
                edx_1 = edi_1
            
            eax_31 = &eax_31[0x6f]
            var_c_1 = eax_31
            edi_1 = edx_1
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        ebx = 0xd
    
    for (int32_t i_2 = 3; i_2 s< 0xf; )
        int32_t eax_33
        eax_33.b = edi_1 s> i_2
        i_2 += 1
        *(data_14106fc + (ebx << 3)) = _mm_cvtepi32_pd(zx.q((eax_33 << 1) + 0xffffffff))
        ebx += 1
    
    void* eax_36 = *arg1
    void* edi_2 = nullptr
    int32_t i_5 = *(eax_36 + 4)
    
    if (i_5 s> 0)
        void* ecx_13 = &arg1[0x66]
        int32_t i_3
        
        do
            eax_36 = edi_2
            ecx_13 += 0x1bc
            edi_2 = *(ecx_13 - 0x1bc)
            
            if (edi_2 s<= eax_36)
                edi_2 = eax_36
            
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
    int32_t var_c_2 = sub_43a760(eax_36, arg2, arg1, arg2, ebx, edi_2)
    int32_t i_6 = mods.dp.d(sx.q(arg2 + 1), *(*arg1 + 4))
    int32_t eax_40 = arg2
    
    for (int32_t i_4 = i_6; i_4 != eax_40; i_4 = i_6)
        var_c_2 = sub_43a760(eax_40, i_4, arg1, eax_40, var_c_2, edi_2)
        i_6 = mods.dp.d(sx.q(i_4 + 1), *(*arg1 + 4))
        eax_40 = arg2
    
    int32_t ecx_18 = data_14106c0
    
    if (var_c_2 == ecx_18)
        sub_450b30(&data_1410698)
        int64_t* result = data_141070c
        *result
        return result
    
    int32_t var_20_2 = ecx_18
    int32_t var_24_2 = var_c_2
    sub_4394f0(var_c_2, i_6, ecx_18, "Incorrect number of eval inputs %d %d\n")
    _exit(1)
    noreturn
}
