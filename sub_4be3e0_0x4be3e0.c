// 函数名称: sub_4be3e0
// 虚拟地址: 0x4be3e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4be3e0(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t result = arg1[0xc]
    int32_t result = arg1[0xc]
    
    if (result == 0)
        *arg1
        return result
    
    if (result != 1)
        if (result != 2)
            sub_489550(result, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x603, 
                "GraphEval")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        float xmm1_4[0x2] = arg1[3]
        xmm1_4 f- 0
        float xmm0_16 = (zx.o(0)).d
        result:1.b = (xmm1_4 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2
            | (xmm1_4 f< 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            double var_14_3 = fconvert.d(arg2)
            long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm1_4))
            result = sub_598500()
            xmm0_16 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_2)))
        
        float xmm0_20 = xmm0_16 - 0f
        float xmm0_21
        
        if (not(0 f>= xmm0_20) && xmm0_20 < 1f)
            result, xmm0_21 = sub_41f140(0x18, xmm0_20, (zx.o(0)).d, 1f)
        arg1[4] f- *arg1
        *arg1
        return result
    
    float xmm1[0x2] = arg1[3]
    xmm1 f- 0
    result:1.b =
        (xmm1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 f< 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t xmm4
    
    if (p_1)
        double var_14_1 = fconvert.d(arg2)
        long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm1))
        result = sub_598500()
        xmm4 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_1)))
    else
        xmm4 = (zx.o(0)).d
    
    int32_t ecx = arg1[2]
    float xmm4_2 = xmm4 f- 0f
    double var_14
    var_14:4.d = xmm4_2
    
    if (not(0f < xmm4_2))
        float var_8 = 0f
    else if (xmm4_2 < 1f)
        float xmm0_5
        result, xmm0_5 = sub_41f140(ecx, xmm4_2, (zx.o(0)).d, 1f)
        ecx = arg1[2]
        xmm4_2 = var_14:4.d
        var_8 = xmm0_5
    else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
            || ecx == 0x13)
        var_8 = 0f
    else
        var_8 = 1f
    
    int32_t xmm0_7
    
    if (not(0 f>= xmm4_2) && xmm4_2 < 1f)
        result, xmm0_7 = sub_41f140(ecx, xmm4_2, (zx.o(0)).d, 1f)
    *arg1
    arg1[1]
    return result
}
