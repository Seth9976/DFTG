// 函数名称: sub_527f00
// 虚拟地址: 0x527f00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_527f00(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: void* var_18 = arg2
    void* var_18 = arg2
    char* eax = *arg3
    int32_t ebx
    ebx.b = *eax
    uint32_t eax_1 = zx.d(ebx.b)
    *arg3 = &eax[1]
    int32_t i
    
    if (eax_1 == 1)
        i = *(arg2 + 8)
        *(arg4 * 0x4c + i) = 0x3f800000
    else
        i = eax_1 - 2
        
        if (eax_1 == 2)
            uint32_t ecx = zx.d(eax[1])
            *arg3 = &eax[2]
            arg2.b = eax[2]
            *arg3 = &eax[3]
            uint32_t ebx_1 = zx.d(eax[3])
            *arg3 = &eax[4]
            arg2:1.b = eax[4]
            *arg3 = &eax[5]
            uint32_t ecx_6 = ((ecx << 8 | zx.d(arg2.b)) << 8 | ebx_1) << 8 | zx.d(arg2:1.b)
            uint32_t ecx_7 = zx.d(eax[5])
            *arg3 = &eax[6]
            arg2.b = eax[6]
            *arg3 = &eax[7]
            uint32_t ebx_2 = zx.d(eax[7])
            *arg3 = &eax[8]
            arg2:1.b = eax[8]
            *arg3 = &eax[9]
            uint32_t ecx_13 = ((ecx_7 << 8 | zx.d(arg2.b)) << 8 | ebx_2) << 8 | zx.d(arg2:1.b)
            uint32_t ecx_14 = zx.d(eax[9])
            *arg3 = &eax[0xa]
            arg2.b = eax[0xa]
            *arg3 = &eax[0xb]
            uint32_t ebx_3 = zx.d(eax[0xb])
            *arg3 = &eax[0xc]
            arg2:1.b = eax[0xc]
            *arg3 = &eax[0xd]
            uint32_t ecx_20 = ((ecx_14 << 8 | zx.d(arg2.b)) << 8 | ebx_3) << 8 | zx.d(arg2:1.b)
            uint32_t ecx_21 = zx.d(eax[0xd])
            *arg3 = &eax[0xe]
            arg2.b = eax[0xe]
            *arg3 = &eax[0xf]
            uint32_t ebx_4 = zx.d(eax[0xf])
            *arg3 = &eax[0x10]
            arg2:1.b = eax[0x10]
            *arg3 = &eax[0x11]
            uint32_t ecx_27 = ((ecx_21 << 8 | zx.d(arg2.b)) << 8 | ebx_4) << 8 | zx.d(arg2:1.b)
            int32_t eax_24 = arg4 * 0x13
            float xmm6_3 = (ecx_20 f- ecx_6 f* 2f) * 0.0299999993f
            int32_t ecx_29 = *(var_18 + 8)
            float xmm5_3 = (ecx_27 f- ecx_13 f* 2f) * 0.0299999993f
            *(ecx_29 + (eax_24 << 2)) = 0x40000000
            i = eax_24 + 1
            float xmm3_2 = ((ecx_6 f- ecx_20) * 3f + 1f) * 0.00600000005f
            float xmm3_3 = ecx_13
            float xmm4_4 = ((xmm3_3 f- ecx_27) * 3f + 1f) * 0.00600000005f
            float xmm4_7 = xmm6_3 + xmm6_3 + xmm3_2
            float xmm7_4 = ecx_6 f* 0.300000012f + xmm6_3 + xmm3_2 * 0.166666672f
            float xmm3_6 = xmm3_3 * 0.300000012f + xmm5_3 + xmm4_4 * 0.166666672f
            float xmm1_1 = xmm7_4
            float xmm2_3 = xmm3_6
            
            if (i s< eax_24 + 0x12)
                float xmm0_16 = xmm5_3 + xmm5_3 + xmm4_4
                
                do
                    *(ecx_29 + (i << 2)) = xmm1_1
                    xmm7_4 = xmm7_4 + xmm4_7
                    xmm3_6 = xmm3_6 + xmm0_16
                    *(ecx_29 + (i << 2) + 4) = xmm2_3
                    i += 2
                    xmm4_7 = xmm4_7 + xmm3_2
                    xmm0_16 = xmm0_16 + xmm4_4
                    xmm1_1 = xmm1_1 + xmm7_4
                    xmm2_3 = xmm2_3 + xmm3_6
                while (i s< eax_24 + 0x12)
    
    return i
}
