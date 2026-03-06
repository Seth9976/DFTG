// 函数名称: sub_4be170
// 虚拟地址: 0x4be170
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4be170(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t eax = arg1[0x12]
    int32_t eax = arg1[0x12]
    
    if (eax == 0)
        arg1[1]
        return *arg1
    
    double var_14
    float xmm1_9
    float xmm2_9
    
    if (eax != 1)
        if (eax != 2)
            sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x603, 
                "GraphEval")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        float xmm1_10[0x2] = arg1[5]
        float xmm3_4 = (zx.o(0)).d
        xmm1_10 f- 0
        eax:1.b = (xmm1_10 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_10, 0f) ? 1 : 0) << 2
            | (xmm1_10 f< 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        float xmm0_12
        
        if (p_3)
            double var_14_3 = fconvert.d(arg2)
            long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm1_10))
            sub_598500()
            xmm3_4 = (zx.o(0)).d
            xmm0_12 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_2)))
        else
            xmm0_12 = (zx.o(0)).d
        
        float xmm0_16 = xmm0_12 - 0f
        
        if (not(0 f>= xmm0_16))
            if (xmm0_16 < 1f)
                xmm3_4 = sub_41f140(0x18, xmm0_16, (zx.o(0)).d, 1f)
            else
                xmm3_4 = 1f
        
        xmm2_9 = (arg1[6] f- *arg1) * xmm3_4 f+ *arg1
        xmm1_9 = (arg1[7] f- arg1[1]) * xmm3_4 f+ arg1[1]
    else
        float xmm1[0x2] = arg1[5]
        xmm1 f- 0
        eax:1.b =
            (xmm1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 f< 0f ? 1 : 0)
        bool p_1 = unimplemented  {test ah, 0x44}
        int32_t xmm0_1
        
        if (p_1)
            double var_14_1 = fconvert.d(arg2)
            long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm1))
            sub_598500()
            xmm0_1 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_1)))
        else
            xmm0_1 = (zx.o(0)).d
        
        int32_t ecx = arg1[4]
        float xmm0_5 = xmm0_1 f- 0f
        float xmm6_1 = 1f
        var_14:4.d = xmm0_5
        float var_8_1
        
        if (not(0f < xmm0_5))
            var_8_1 = 0f
        else if (xmm0_5 < 1f)
            float xmm0_6 = sub_41f140(ecx, xmm0_5, (zx.o(0)).d, 1f)
            ecx = arg1[4]
            xmm6_1 = 1f
            var_8_1 = xmm0_6
            xmm0_5 = var_14:4.d
        else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
                || ecx == 0x13)
            var_8_1 = 0f
        else
            var_8_1 = 1f
        
        if (0 f>= xmm0_5)
            xmm6_1 = (zx.o(0)).d
        else if (xmm0_5 < 1f)
            xmm6_1 = sub_41f140(ecx, xmm0_5, (zx.o(0)).d, 1f)
        else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
                || ecx == 0x13)
            xmm6_1 = (zx.o(0)).d
        
        float xmm0_8 = *arg1
        float xmm4_4 = (xmm0_8 - xmm0_8) * var_8_1 + xmm0_8
        float xmm0_9 = arg1[1]
        float xmm3_3 = (xmm0_9 - xmm0_9) * var_8_1 + xmm0_9
        float xmm0_10 = arg1[2]
        float xmm0_11 = arg1[3]
        xmm2_9 = ((xmm0_10 - xmm0_10) * xmm6_1 + xmm0_10 - xmm4_4) * 0f + xmm4_4
        xmm1_9 = ((xmm0_11 - xmm0_11) * xmm6_1 + xmm0_11 - xmm3_3) * 0f + xmm3_3
    
    var_14.d = xmm2_9
    int32_t result = var_14.d
    var_14:4.d = xmm1_9
    return result
}
