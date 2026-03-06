// 函数名称: sub_497370
// 虚拟地址: 0x497370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_497370(int64_t arg1, float arg2, int64_t arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm0_2 = arg3.d
    float xmm2_1 = arg1.d - xmm0_2
    float xmm0_4 = arg1:4.d f- arg3:4.d
    float xmm1_1 = arg2 - arg4
    uint32_t result
    float xmm0_8
    result, xmm0_8 = sub_41dbe0(xmm0_4 * xmm0_4 + xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1)
    
    if (not(9.99999975e-06f > xmm0_8))
        float xmm1_4 = arg3:4.d f- arg1:4.d
        float xmm2_4 = xmm0_2 f- arg1.d
        float xmm3_2 = arg4 - arg2
        float xmm1_9 =
            1f / (sub_41dbe0(xmm1_4 * xmm1_4 + xmm2_4 * xmm2_4 + xmm3_2 * xmm3_2) + 9.99999975e-06f)
        float ebx_1 = data_aca218:0xc
        int64_t xmm3_5 = xmm2_4 * 0.5f f+ arg1.d
        float xmm4_3 = xmm1_4 * 0.5f f+ arg1:4.d
        float xmm5_3 = xmm3_2 * 0.5f + arg2
        float xmm2_6 = data_aca218:4 f- xmm3_5
        float xmm0_22 = data_aca218:8 f- xmm4_3
        float xmm1_11 = data_aca218:0xc f- xmm5_3
        float xmm0_27 = sub_41dbe0(xmm0_22 * xmm0_22 + xmm2_6 * xmm2_6 + xmm1_11 * xmm1_11) / 10f
        int32_t var_88 = arg5
        int32_t* edi_2 = data_126cc38
        int32_t var_84_2 = 0
        int32_t esi_1 = data_126cc3c
        int128_t xmm0_30 = data_60cb50
        int64_t xmm2_11 = _mm_unpacklo_ps(zx.o(xmm2_4 * xmm1_9), xmm1_4 * xmm1_9)
        float var_3c
        int32_t ecx_1 = sub_496b80(_mm_unpacklo_ps(zx.o(xmm3_5), xmm4_3), xmm5_3, data_aca218:4.q, 
            ebx_1, 0, 1f, xmm2_11, xmm3_2 * xmm1_9, edi_2, &var_3c, xmm0_8 * 100f, 
            xmm0_27 * 0.0299999993f * 100f, xmm0_30)
        float var_18
        float xmm2_13 = var_18 + var_3c
        int128_t var_5c
        __builtin_memcpy(&var_5c, 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x80\x3f\x00\x00\x00\x00", 
            0x20)
        int128_t var_d8_1
        var_d8_1:0xc.d = esi_1
        var_d8_1:8.d = ecx_1
        var_d8_1:4.d = edi_2
        float var_e0_1
        float var_38
        float var_14
        var_e0_1.q = _mm_unpacklo_ps(xmm2_13 * 0.5f, (var_14 + var_38) * 0.5f)
        float var_34
        float var_10
        var_d8_1.d = (var_10 + var_34) * 0.5f
        result = sub_493420(&var_88, &var_5c, &var_3c, &var_88, 0, var_e0_1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
