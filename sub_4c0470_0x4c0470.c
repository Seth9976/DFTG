// 函数名称: sub_4c0470
// 虚拟地址: 0x4c0470
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4c0470(int32_t* arg1, float arg2 @ xmm1, float arg3 @ xmm2)
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
    float xmm3_1 = ecx_1[3] f* ecx_1[2]
    double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_2 u>> 0x1f << 3) + &data_60cbc0)
    int32_t eax_4 = ecx_1[1]
    float xmm2 = _mm_cvtpd_ps(xmm0_2)
    double xmm0_5[0x2] = _mm_cvtepi32_pd(zx.q(eax_4)) f+ *((eax_4 u>> 0x1f << 3) + &data_60cbc0)
    void* eax_6 = data_114e814
    bool cond:0 = *(eax_6 + 0x38) == 0
    float xmm1 = _mm_cvtpd_ps(xmm0_5)
    int128_t var_38 = data_60cb50
    float var_48 = arg2
    float var_44 = arg3
    float var_40 = xmm2 * xmm3_1 + arg2
    float var_3c = xmm1 * xmm3_1 + arg3
    float* eax_8
    float* edx_2
    
    if (cond:0)
        eax_8 = &var_38
        edx_2 = &var_48
    else
        void var_28
        void var_18
        char result = sub_4bfe40(eax_6 + 0x28, &var_38, &var_48, eax_6 + 0x28, &var_18, &var_28)
        
        if (result == 0)
            return result
        
        eax_8 = &var_28
        edx_2 = &var_18
    
    return sub_4bffb0(eax_8, edx_2, arg1, eax_8, &data_63c284, nullptr)
}
