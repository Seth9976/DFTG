// 函数名称: sub_4bde10
// 虚拟地址: 0x4bde10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4bde10(int32_t arg1, int32_t arg2, int128_t* arg3, float arg4 @ xmm2, int128_t* arg5)
{
    // 第一条实际指令: int32_t eax = *(arg3 + 0x78)
    int32_t eax = *(arg3 + 0x78)
    
    if (eax == 0)
        *arg5 = *arg3
        return arg5
    
    if (eax != 1)
        if (eax != 2)
            sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x603, 
                "GraphEval")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        float xmm1_17[0x2] = *(arg3 + 0x24)
        float xmm3_5 = (zx.o(0)).d
        xmm1_17 f- 0
        int32_t xmm0_22 = (zx.o(0)).d
        eax:1.b = (xmm1_17 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_17, 0f) ? 1 : 0) << 2
            | (xmm1_17 f< 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            double var_18_3 = fconvert.d(arg4)
            long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm1_17))
            sub_598500()
            xmm3_5 = (zx.o(0)).d
            xmm0_22 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_2)))
        
        float xmm0_26 = xmm0_22 f- 0f
        
        if (not(0 f>= xmm0_26))
            if (xmm0_26 < 1f)
                xmm3_5 = sub_41f140(0x18, xmm0_26, (zx.o(0)).d, 1f)
            else
                xmm3_5 = 1f
        
        float var_20_1 = (arg3[3].d f- *(arg3 + 8)) * xmm3_5 f+ *(arg3 + 8)
        float var_24_1 = (*(arg3 + 0x2c) f- *(arg3 + 4)) * xmm3_5 f+ *(arg3 + 4)
        float var_1c_1 = (*(arg3 + 0x34) f- *(arg3 + 0xc)) * xmm3_5 f+ *(arg3 + 0xc)
        *arg5 = ((*(arg3 + 0x28) f- *arg3) * xmm3_5 f+ *arg3).o
        return arg5
    
    float xmm1[0x2] = *(arg3 + 0x24)
    xmm1 f- 0
    eax:1.b =
        (xmm1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 f< 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t xmm3
    
    if (p_1)
        double var_18_1 = fconvert.d(arg4)
        long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm1))
        sub_598500()
        xmm3 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_1)))
    else
        xmm3 = (zx.o(0)).d
    
    int32_t xmm5 = 0x3f800000
    float xmm3_2 = xmm3 f- 0f
    int32_t ecx = arg3[2].d
    int32_t var_c = 0x3f800000
    double var_18
    var_18:4.d = xmm3_2
    float var_10
    
    if (not(0f < xmm3_2))
        var_10 = 0f
    else if (xmm3_2 < 1f)
        float xmm0_5 = sub_41f140(ecx, xmm3_2, (zx.o(0)).d, 1f)
        ecx = arg3[2].d
        xmm3_2 = var_18:4.d
        xmm5 = 0x3f800000
        var_10 = xmm0_5
    else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
            || ecx == 0x13)
        var_10 = (zx.o(0)).d
    else
        var_10 = 1f
    
    if (0 f>= xmm3_2)
        xmm5 = (zx.o(0)).d
        var_c = xmm5
    else if (xmm3_2 < 1f)
        xmm5 = sub_41f140(ecx, xmm3_2, (zx.o(0)).d, 1f)
        var_c = xmm5
    else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
            || ecx == 0x13)
        xmm5 = (zx.o(0)).d
        var_c = xmm5
    
    float xmm1_4 = *arg3
    float xmm0_8 = *(arg3 + 4)
    float xmm2_2 = *(arg3 + 0xc)
    float xmm3_3 = *(arg3 + 8)
    float xmm7_3 = (xmm1_4 - xmm1_4) * var_10 + xmm1_4
    float xmm6_3 = (xmm3_3 - xmm3_3) * var_10 + xmm3_3
    float xmm3_4 = *(arg3 + 0x18)
    var_18:4.d = (xmm0_8 - xmm0_8) * var_10 + xmm0_8
    float xmm1_9 = arg3[1].d
    float xmm0_12 = (xmm2_2 - xmm2_2) * var_10 + xmm2_2
    float xmm2_3 = *(arg3 + 0x1c)
    float xmm0_13 = *(arg3 + 0x14)
    float var_24 = ((xmm0_13 - xmm0_13) f* var_c + xmm0_13 f- var_18:4.d) * 0f f+ var_18:4.d
    float var_1c = ((xmm2_3 - xmm2_3) f* var_c + xmm2_3 - xmm0_12) * 0f + xmm0_12
    float var_20 = ((xmm3_4 - xmm3_4) f* var_c + xmm3_4 - xmm6_3) * 0f + xmm6_3
    *arg5 = (((xmm1_9 - xmm1_9) f* xmm5 + xmm1_9 - xmm7_3) * 0f + xmm7_3).o
    return arg5
}
