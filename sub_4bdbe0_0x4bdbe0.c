// 函数名称: sub_4bdbe0
// 虚拟地址: 0x4bdbe0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4bdbe0(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t eax = arg1[0xc]
    int32_t eax = arg1[0xc]
    
    if (eax == 0)
        return *arg1
    
    double var_14
    
    if (eax != 1)
        if (eax != 2)
            sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x603, 
                "GraphEval")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        float xmm1_3[0x2] = arg1[3]
        float xmm0_7 = (zx.o(0)).d
        xmm1_3 f- 0
        eax:1.b = (xmm1_3 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_3, 0f) ? 1 : 0) << 2
            | (xmm1_3 f< 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        float xmm3_3
        
        if (p_3)
            var_14 = fconvert.d(arg2)
            var_14 = _mm_cvtps_pd(xmm1_3)
            long double x87_r6_2 = fconvert.t(var_14)
            sub_598500()
            var_14 = fconvert.d(x87_r6_2)
            xmm0_7 = (zx.o(0)).d
            xmm3_3 = _mm_cvtpd_ps(zx.o(var_14))
        else
            xmm3_3 = (zx.o(0)).d
        
        float xmm3_5 = xmm3_3 - 0f
        
        if (not(0 f>= xmm3_5))
            if (not(xmm3_5 < 1f))
                return sub_4bea10(arg1, &arg1[4], 1f)
            
            xmm0_7 = sub_41f140(0x18, xmm3_5, (zx.o(0)).d, 1f)
        
        return sub_4bea10(arg1, &arg1[4], xmm0_7)
    
    float xmm1[0x2] = arg1[3]
    xmm1 f- 0
    eax:1.b =
        (xmm1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 f< 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t xmm3
    
    if (p_1)
        var_14 = fconvert.d(arg2)
        var_14 = _mm_cvtps_pd(xmm1)
        long double x87_r6_1 = fconvert.t(var_14)
        sub_598500()
        var_14 = fconvert.d(x87_r6_1)
        xmm3 = _mm_cvtpd_ps(zx.o(var_14))
    else
        xmm3 = (zx.o(0)).d
    
    int32_t ecx = arg1[2]
    float xmm3_2 = xmm3 f- 0f
    int32_t xmm4 = 0x3f800000
    var_14:4.d = xmm3_2
    char* var_8
    
    if (not(0f < xmm3_2))
        var_8 = nullptr
    else if (xmm3_2 < 1f)
        char* xmm0_4 = sub_41f140(ecx, xmm3_2, (zx.o(0)).d, 1f)
        ecx = arg1[2]
        xmm4 = 0x3f800000
        xmm3_2 = var_14:4.d
        var_8 = xmm0_4
    else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
            || ecx == 0x13)
        var_8 = nullptr
    else
        var_8 = 0x3f800000
    
    if (0 f>= xmm3_2)
        xmm4 = (zx.o(0)).d
    else if (xmm3_2 < 1f)
        xmm4 = sub_41f140(ecx, xmm3_2, (zx.o(0)).d, 1f)
    else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
            || ecx == 0x13)
        xmm4 = (zx.o(0)).d
    
    var_8 = sub_4bea10(arg1, arg1, var_8)
    var_14:4.d = sub_4bea10(&arg1[1], &arg1[1], xmm4)
    return sub_4bea10(&var_8, &var_14:4, (zx.o(0)).d)
}
