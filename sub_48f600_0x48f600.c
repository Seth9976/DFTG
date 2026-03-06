// 函数名称: sub_48f600
// 虚拟地址: 0x48f600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __fastcallsub_48f600(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = *arg1
    int32_t* eax = *arg1
    
    if (eax == 0)
        sub_4e6fe0(arg1, 0)
        eax = *arg1
        
        if (eax == 0)
            sub_4d1060(arg1)
            eax = *arg1
    
    int32_t* ecx_1 = **eax
    int32_t eax_2 = *ecx_1
    float xmm1_1 = ecx_1[3] f* ecx_1[2]
    double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_2 u>> 0x1f << 3) + &data_60cbc0)
    int32_t eax_4 = ecx_1[1]
    float result = _mm_cvtpd_ps(xmm0_2) * xmm1_1
    float var_c =
        _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_4)) f+ *((eax_4 u>> 0x1f << 3) + &data_60cbc0)) * xmm1_1
    return result
}
