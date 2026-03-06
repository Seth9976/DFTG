// 函数名称: sub_477120
// 虚拟地址: 0x477120
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_477120(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t eax_1 = *(arg3 + 4) - 2
    int32_t eax_1 = *(arg3 + 4) - 2
    int32_t var_20
    double xmm1[0x2]
    
    if (eax_1 u> 0x3f)
    label_477241:
        var_20 = 0
        int32_t var_1c_6 = 0
    label_47724f:
        xmm1 = zx.o(0)
        goto label_477255
    
    uint32_t eax_2 = zx.d(lookup_table_4772b4[eax_1])
    int128_t* eax_5
    int64_t xmm1_1
    
    switch (eax_2)
        case 0
            var_20 = 1
            int32_t var_1c_1 = 0x3e8
            goto label_47724f
        case 1
            xmm1 = data_60c6b0
            var_20 = 1
            int32_t var_1c_2 = 0
        label_477255:
            double var_18_2[0x2] = xmm1
            int64_t xmm1_2 = _mm_unpackhi_pd(xmm1, xmm1)
            *arg4 = var_20.o
            arg4[1].q = xmm1_2
            return arg4
        case 2
            int32_t edx_1 = data_6cfe4c
            
            if (edx_1 == 0)
                goto label_477283
            
            bool cond:1_1 = *(arg3 + 8) != *(edx_1 + 0xa68)
            eax_5 = arg4
            int128_t var_18_1 = zx.o(0)
            xmm1_1 = _mm_unpackhi_pd(zx.o(0), 0)
            
            if (not(cond:1_1))
                int32_t var_1c_5 = 0x64
                *eax_5 = 4.o
                eax_5[1].q = xmm1_1
                return eax_5
        case 3
            int32_t edx = data_6cfe4c
            
            if (edx == 0)
            label_477283:
                sub_489550(eax_2, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            bool cond:0_1 = *(arg3 + 8) != *(edx + 0xa68)
            eax_5 = arg4
            int128_t var_18 = zx.o(0)
            xmm1_1 = _mm_unpackhi_pd(zx.o(0), 0)
            
            if (not(cond:0_1))
                int32_t var_1c_3 = 0x64
                *eax_5 = 3.o
                eax_5[1].q = xmm1_1
                return eax_5
        case 4
            int32_t var_1c
            __builtin_memset(&var_1c, 0, 0x14)
            *arg4 = 1.o
            int64_t var_10
            arg4[1].q = var_10
            return arg4
        case 5
            goto label_477241
    
    int32_t var_1c_4 = 0
    *eax_5 = 0.o
    eax_5[1].q = xmm1_1
    return eax_5
}
