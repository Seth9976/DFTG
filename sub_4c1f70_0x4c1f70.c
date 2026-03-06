// 函数名称: sub_4c1f70
// 虚拟地址: 0x4c1f70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4c1f70(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int128_t* arg5, int32_t* arg6, int32_t* arg7, char arg8, int32_t* arg9, int32_t arg10)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t xmm0 = arg6[1]
    float xmm2 = *arg6
    int32_t xmm1 = arg6[2]
    int32_t var_30 = xmm0
    int32_t var_28 = xmm0
    int32_t xmm0_1 = arg6[3]
    float var_34 = xmm2
    int32_t var_2c = xmm1
    float var_24 = xmm2
    int32_t var_20 = xmm0_1
    int32_t var_1c = xmm1
    int32_t var_18 = xmm0_1
    sub_4c1750(arg10, &var_34)
    void* esi = data_114e814
    float var_8c
    void var_54
    char result = sub_4c1c50(esi + 0x28, &var_34, arg5, esi + 0x28, &var_8c, &var_54)
    
    if (result != 0)
        float var_84
        float xmm4_3 = (var_84 + var_8c) * 0.5f
        float xmm7_3 = (var_84 - var_8c) * 0.5f
        float var_88
        float var_80
        float xmm3_3 = (var_80 - var_88) * 0.5f
        float xmm2_2 = xmm7_3 ^ (data_60cca0.o).d
        float xmm1_2 = xmm3_3 ^ (data_60cca0.o).d
        float xmm4_5 = *arg4 * xmm2_2
        float xmm6_1 = arg4[3]
        float xmm3_5 = arg4[1] f* xmm1_2
        float xmm5_3 = (var_80 + var_88) * 0.5f
        float xmm5_4 = arg4[5]
        float xmm0_6 = arg4[4] f* xmm1_2
        float xmm1_4 = xmm6_1 * xmm2_2
        float xmm4_7 = xmm4_5 + xmm3_5 f+ arg4[2] + xmm4_3
        float xmm6_2 = xmm6_1 * xmm7_3
        float xmm2_6 = xmm1_4 + xmm0_6 + xmm5_4 + xmm5_3
        float xmm2_8 = *arg4 * xmm7_3
        float xmm2_11 = xmm2_8 + xmm3_5 f+ arg4[2] + xmm4_3
        float xmm3_9 = xmm6_2 + xmm0_6 + xmm5_4 + xmm5_3
        float xmm4_9 = arg4[4] f* xmm3_3
        float xmm0_8 = arg4[1] f* xmm3_3
        float xmm4_12 = xmm4_9 + xmm6_2 + xmm5_4 + xmm5_3
        float xmm2_16 = xmm4_9 + xmm1_4 + xmm5_4 + xmm5_3
        float xmm0_10 = xmm0_8 + xmm2_8 f+ arg4[2] + xmm4_3
        float xmm7_7 = xmm0_8 + xmm4_5 f+ arg4[2] + xmm4_3
        float xmm1_15 = *(esi + 0x24)
        float xmm2_19 = *(esi + 0x20)
        var_34 = xmm2_19 + xmm2_6 * 0f + xmm4_7 + 0f
        float var_30_1 = xmm1_15 + xmm4_7 * 0f + xmm2_6 + 0f
        float var_2c_1 = xmm2_19 + xmm3_9 * 0f + xmm2_11 + 0f
        float var_28_1 = xmm1_15 + xmm2_11 * 0f + xmm3_9 + 0f
        float var_24_1 = xmm2_19 + xmm2_16 * 0f + xmm7_7 + 0f
        float var_1c_1 = xmm2_19 + xmm4_12 * 0f + xmm0_10 + 0f
        float var_18_1 = xmm1_15 + xmm0_10 * 0f + xmm4_12 + 0f
        float var_20_1 = xmm1_15 + xmm7_7 * 0f + xmm2_16 + 0f
        result = sub_4bef10(arg4, &var_54, &var_34, arg7, arg8, arg3, arg9)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
