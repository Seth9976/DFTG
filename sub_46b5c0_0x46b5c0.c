// 函数名称: sub_46b5c0
// 虚拟地址: 0x46b5c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t*sub_46b5c0(int64_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    bool cond:0 = data_aca228 != 0
    double xmm0_1 = _mm_cvtps_pd(data_aca1fc)
    float xmm2 = data_aca1f8
    float xmm1_3 = _mm_cvtpd_ps(1.0 / xmm0_1) * xmm2
    float var_1c = xmm1_3
    float xmm0_3 = xmm1_3 ^ (data_60cca0.o).d
    int32_t var_20 = xmm2 ^ (data_60cca0.o).d
    
    if (cond:0)
        sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
            0x59b9, "ScreenSpaceToWorldSpace")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_2 = data_aca1ec
    int32_t var_40 = 0
    int32_t var_3c = 0
    int64_t var_58 = data_aca218:4.q
    int32_t var_38 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x14)))
    int32_t var_50 = data_aca218:0xc
    int32_t var_34 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x18)))
    int128_t var_78 = var_40.o
    int128_t var_88 = xmm0_3.o
    int128_t var_68 = data_aca208:4.o
    void var_48
    void arg_8
    int64_t* eax_5 = sub_4dad30(&var_48, &arg_8, &var_88, &var_48)
    float xmm2_1[0x4] = *eax_5
    var_1c.q = eax_5[2]
    int64_t var_2c = xmm2_1[0].q
    float xmm2_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
    float xmm6_3 = var_1c * 0f + xmm2_2 * 0f + xmm2
    bool cond:1 = 9.99999975e-06f > sub_426e40(xmm6_3)
    float xmm1_9
    
    if (not(cond:1))
        xmm1_9 = var_2c:4.d * 0f + var_2c.d * 0f + xmm0_3 + -0f
    
    float xmm1_11
    float var_4c
    
    if (cond:1 || 0 f< xmm1_9 * xmm6_3)
        xmm1_11 = var_4c
    else
        xmm1_11 = (xmm1_9 / xmm6_3) ^ (data_60cca0.o).d
    *arg1 = _mm_unpacklo_ps(xmm2_2 * xmm1_11 f+ var_2c.d, var_1c * xmm1_11 f+ var_2c:4.d)
    arg1[1].d = xmm2 * xmm1_11 + xmm0_3
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg1
}
