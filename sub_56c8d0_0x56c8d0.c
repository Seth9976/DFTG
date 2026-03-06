// 函数名称: sub_56c8d0
// 虚拟地址: 0x56c8d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_56c8d0(char arg1, char* arg2, float* arg3, int32_t arg4)
{
    // 第一条实际指令: arg1 = arg2[3]
    arg1 = arg2[3]
    uint32_t result
    
    if (arg1 == 0)
        result = arg4 - 1
        
        switch (result)
            case 0
                *arg3 = 0f
            case 1
                arg3[1] = 0x3f800000
                *arg3 = 0f
            case 2
                goto label_56c9c4
            case 3
                arg3[3] = 0x3f800000
            label_56c9c4:
                arg3[2] = 0
                arg3[1] = 0
                *arg3 = 0f
    else
        float var_44_2 = fconvert.s(fconvert.t(fconvert.s(_ldexp(arg2, 1.0, zx.d(arg1) - 0x88))))
        
        if (arg4 s> 2)
            *arg3 = _mm_cvtepi32_ps(zx.o(*arg2)) * var_44_2
            arg3[1] = _mm_cvtepi32_ps(zx.o(arg2[1])) * var_44_2
            result = zx.d(arg2[2])
            arg3[2] = _mm_cvtepi32_ps(zx.o(result)) * var_44_2
        else
            result = zx.d(arg2[1])
            *arg3 = _mm_cvtepi32_ps(zx.o(zx.d(*arg2) + zx.d(arg2[2]) + result)) * var_44_2 / 3f
        
        if (arg4 == 2)
            arg3[1] = 0x3f800000
            return result
        
        if (arg4 == 4)
            arg3[3] = 0x3f800000
    
    return result
}
