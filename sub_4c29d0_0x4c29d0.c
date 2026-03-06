// 函数名称: sub_4c29d0
// 虚拟地址: 0x4c29d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4c29d0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: float xmm6 = arg3[1]
    float xmm6 = arg3[1]
    float xmm5 = *arg3
    float xmm3_1 = xmm5 * xmm6
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(arg4.b)) * xmm3_1
    float xmm1_3
    
    if (0 f<= xmm1_2)
        xmm1_3 = xmm1_2 + 0.5f
    else
        xmm1_3 = xmm1_2 - 0.5f
    
    float xmm1_6 = _mm_cvtepi32_ps(zx.o((arg4 u>> 8).b)) * xmm3_1
    float xmm1_7
    
    if (0 f<= xmm1_6)
        xmm1_7 = xmm1_6 + 0.5f
    else
        xmm1_7 = xmm1_6 - 0.5f
    
    float xmm1_10 = _mm_cvtepi32_ps(zx.o((arg4 u>> 0x10).b)) * xmm3_1
    float xmm1_11
    
    if (0 f<= xmm1_10)
        xmm1_11 = xmm1_10 + 0.5f
    else
        xmm1_11 = xmm1_10 - 0.5f
    
    float xmm1_14 = _mm_cvtepi32_ps(zx.o(arg4 u>> 0x18)) * xmm3_1
    float xmm1_15
    
    if (0 f<= xmm1_14)
        xmm1_15 = xmm1_14 + 0.5f
    else
        xmm1_15 = xmm1_14 - 0.5f
    
    float xmm7 = 1f - xmm5
    float xmm3_3 = xmm6 * xmm7
    float xmm1_18 = _mm_cvtepi32_ps(zx.o(arg5.b)) * xmm3_3
    float xmm1_19
    
    if (0 f<= xmm1_18)
        xmm1_19 = xmm1_18 + 0.5f
    else
        xmm1_19 = xmm1_18 - 0.5f
    
    float xmm1_22 = _mm_cvtepi32_ps(zx.o((arg5 u>> 8).b)) * xmm3_3
    float xmm1_23
    
    if (0 f<= xmm1_22)
        xmm1_23 = xmm1_22 + 0.5f
    else
        xmm1_23 = xmm1_22 - 0.5f
    
    float xmm1_26 = _mm_cvtepi32_ps(zx.o((arg5 u>> 0x10).b)) * xmm3_3
    float xmm1_27
    
    if (0 f<= xmm1_26)
        xmm1_27 = xmm1_26 + 0.5f
    else
        xmm1_27 = xmm1_26 - 0.5f
    
    float xmm1_30 = _mm_cvtepi32_ps(zx.o(arg5 u>> 0x18)) * xmm3_3
    float xmm1_31
    
    if (0 f<= xmm1_30)
        xmm1_31 = xmm1_30 + 0.5f
    else
        xmm1_31 = xmm1_30 - 0.5f
    
    float xmm4 = 1f - xmm6
    float xmm5_1 = xmm5 * xmm4
    float xmm1_34 = _mm_cvtepi32_ps(zx.o(arg6.b)) * xmm5_1
    float xmm1_35
    
    if (0 f<= xmm1_34)
        xmm1_35 = xmm1_34 + 0.5f
    else
        xmm1_35 = xmm1_34 - 0.5f
    
    float xmm1_38 = _mm_cvtepi32_ps(zx.o((arg6 u>> 8).b)) * xmm5_1
    float xmm1_39
    
    if (0 f<= xmm1_38)
        xmm1_39 = xmm1_38 + 0.5f
    else
        xmm1_39 = xmm1_38 - 0.5f
    
    float xmm1_42 = _mm_cvtepi32_ps(zx.o((arg6 u>> 0x10).b)) * xmm5_1
    float xmm1_43
    
    if (0 f<= xmm1_42)
        xmm1_43 = xmm1_42 + 0.5f
    else
        xmm1_43 = xmm1_42 - 0.5f
    
    float xmm1_46 = _mm_cvtepi32_ps(zx.o(arg6 u>> 0x18)) * xmm5_1
    float xmm1_47
    
    if (0 f<= xmm1_46)
        xmm1_47 = xmm1_46 + 0.5f
    else
        xmm1_47 = xmm1_46 - 0.5f
    
    float xmm4_1 = xmm4 * xmm7
    float xmm1_50 = _mm_cvtepi32_ps(zx.o(arg7.b)) * xmm4_1
    float xmm1_51
    
    if (0 f<= xmm1_50)
        xmm1_51 = xmm1_50 + 0.5f
    else
        xmm1_51 = xmm1_50 - 0.5f
    
    float xmm1_54 = _mm_cvtepi32_ps(zx.o((arg7 u>> 8).b)) * xmm4_1
    float xmm1_55
    
    if (0 f<= xmm1_54)
        xmm1_55 = xmm1_54 + 0.5f
    else
        xmm1_55 = xmm1_54 - 0.5f
    
    float xmm1_58 = _mm_cvtepi32_ps(zx.o((arg7 u>> 0x10).b)) * xmm4_1
    float xmm1_59
    
    if (0 f<= xmm1_58)
        xmm1_59 = xmm1_58 + 0.5f
    else
        xmm1_59 = xmm1_58 - 0.5f
    
    float xmm1_62 = _mm_cvtepi32_ps(zx.o(arg7 u>> 0x18)) * xmm4_1
    float xmm1_63
    
    if (0 f<= xmm1_62)
        xmm1_63 = xmm1_62 + 0.5f
    else
        xmm1_63 = xmm1_62 - 0.5f
    
    arg4.b = int.d(xmm1_19).b + (int.d(xmm1_3)).b
    arg5.b = int.d(xmm1_27).b + (int.d(xmm1_11)).b
    int32_t edx_1
    edx_1.b = arg4.b + int.d(xmm1_35).b
    int32_t ebx_3
    ebx_3.b = arg5.b + (int.d(xmm1_43)).b
    arg4 = edx_1
    arg4.b = edx_1.b + int.d(xmm1_51).b
    arg4:1.b = (int.d(xmm1_23)).b + (int.d(xmm1_7)).b + (int.d(xmm1_39)).b + (int.d(xmm1_55)).b
    arg4:2.b = ebx_3.b + (int.d(xmm1_59)).b
    arg4:3.b = (int.d(xmm1_31)).b + (int.d(xmm1_15)).b + (int.d(xmm1_47)).b + (int.d(xmm1_63)).b
    return arg4
}
