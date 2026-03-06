// 函数名称: sub_4be720
// 虚拟地址: 0x4be720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4be720(int32_t arg1, float (* arg2)[0x4], int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t xmm3 = *arg3
    int32_t xmm3 = *arg3
    int32_t xmm2 = arg3[2]
    
    if (not(xmm2 f< xmm3))
        int32_t xmm1_1 = arg3[1]
        int32_t xmm0_1 = arg3[3]
        
        if (not(xmm0_1 f< xmm1_1))
            float xmm3_1 = __maxss_xmmss_memss(xmm3, *arg2)
            float xmm2_1 = __minss_xmmss_memss(xmm2, (*arg2)[2])
            int32_t xmm1_2 = __maxss_xmmss_memss(xmm1_1, (*arg2)[1])
            int32_t xmm0_2 = __minss_xmmss_memss(xmm0_1, (*arg2)[3])
            *arg4 = xmm3_1
            arg4[2] = xmm2_1
            arg4[1] = xmm1_2
            arg4[3] = xmm0_2
            
            if (xmm3_1 > xmm2_1 || not(xmm1_2 f<= xmm0_2))
                *arg4 = data_5d2770
            
            return arg4
    
    sub_489550(arg1, &data_5b2591, "RectIsNormalized(r0)", "d:\ax\trunk\ax2017\engine\rect.cpp", 0xe9, 
        "RectIntersect")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
