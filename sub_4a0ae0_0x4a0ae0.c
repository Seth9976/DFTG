// 函数名称: sub_4a0ae0
// 虚拟地址: 0x4a0ae0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __fastcallsub_4a0ae0(void* arg1)
{
    // 第一条实际指令: float result = *(arg1 + 0x10a8) f- *(arg1 + 0x10a0)
    float result = *(arg1 + 0x10a8) f- *(arg1 + 0x10a0)
    float xmm0_1 = *(data_114e818 + 0x2c)
    float xmm0_2 = xmm0_1 f- *(arg1 + 0x368)
    float xmm0_3 = sub_4be3e0(arg1 + 0x2dc, xmm0_1 f- *(arg1 + 0x364))
    int32_t eax_1
    int32_t ecx_2
    int32_t edx
    float xmm0_4
    eax_1, ecx_2, edx, xmm0_4 = sub_4be3e0(arg1 + 0x318, xmm0_2)
    float xmm4 = *(arg1 + 0x354)
    int32_t xmm0_5 = (zx.o(0)).d
    float xmm1_4 = xmm0_2 f- *(arg1 + 0x358)
    xmm4 f- 0
    eax_1:1.b =
        (xmm4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4, 0f) ? 1 : 0) << 2 | (xmm4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        if (not(0 f> xmm1_4))
            if (xmm1_4 < xmm4)
                int32_t var_30_1 = ecx_2
                xmm0_5 = sub_41f710(eax_1, edx, *(arg1 + 0x35c), xmm0_5, xmm4, xmm1_4, zx.o(0), 1f)
            else
                xmm0_5 = 0x3f800000
    else if (not(0 f> xmm1_4))
        xmm0_5 = 0x3f800000
    
    float var_24 = 0f
    int32_t var_20 = 0
    int32_t var_18_1 = 0x49742400
    float xmm2_5 = ((xmm0_4 - xmm0_3) f* xmm0_5 + xmm0_3) f* *(arg1 + 0x1020)
    float var_1c = result / xmm2_5
    float xmm0_9 =
        sub_4ea450(&var_24, &data_5d3570, arg1 + 0xfd4, &var_24, data_63e5f0, 0, -nanf, nullptr)
        * xmm2_5
    float edx_1 = sub_4a0910(arg1)
    float xmm0_12 = sub_4369e0(xmm0_9 / edx_1)
    float xmm0_13
    
    if (0 f<= xmm0_12)
        xmm0_13 = xmm0_12 + 0.5f
    else
        xmm0_13 = xmm0_12 - 0.5f
    
    float var_18_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_13))) * edx_1
    return result
}
