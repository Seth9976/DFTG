// 函数名称: sub_4979c0
// 虚拟地址: 0x4979c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4979c0(int64_t* arg1)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (__finite(_mm_cvtps_pd(*arg1)) != 0 && __finite(_mm_cvtps_pd(*(arg1 + 4))) != 0
            && __finite(_mm_cvtps_pd(arg1[1].d)) != 0 && __finite(_mm_cvtps_pd(*(arg1 + 0xc))) != 0)
        float xmm2_1 = *(arg1 + 0xc)
        float xmm0_8 = *arg1
        float xmm1_1 = *(arg1 + 4)
        float xmm3_1 = arg1[1].d
        int32_t xmm0_13
        result, xmm0_13 =
            sub_41dbe0(xmm0_8 * xmm0_8 + xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1 + xmm3_1 * xmm3_1)
        
        if (not(0.899999976f f> xmm0_13) && not(xmm0_13 f> 1.10000002f))
            result.b = 1
            return result
    
    result.b = 0
    return result
}
