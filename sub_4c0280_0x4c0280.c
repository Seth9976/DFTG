// 函数名称: sub_4c0280
// 虚拟地址: 0x4c0280
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_4c0280(int32_t arg1, int32_t* arg2, int32_t* arg3, float* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float eax_3
    float edx
    eax_3, edx = sub_48f600(arg3)
    void* ecx = data_114e814
    float xmm6 = arg2[4]
    float xmm2_2 = edx * (arg4[3] - arg4[1]) * 0.5f
    float xmm4_2 = eax_3 * (arg4[2] - *arg4) * 0.5f
    float xmm5_1 = *(ecx + 0x24) - xmm2_2
    float xmm7 = arg2[2]
    float xmm2_3 = xmm2_2 f+ *(ecx + 0x24)
    float xmm3_1 = *(ecx + 0x20) - xmm4_2
    float xmm4_3 = xmm4_2 f+ *(ecx + 0x20)
    float xmm3_2 = arg2[3]
    float xmm4_4 = arg2[5]
    float xmm0_7 = *arg2 * xmm4_3
    float var_4c = xmm5_1 f* arg2[1] + xmm3_1 f* *arg2 + xmm7
    float var_48 = xmm5_1 * xmm6 + xmm3_1 * xmm3_2 + xmm4_4
    float var_44 = xmm5_1 f* arg2[1] + xmm0_7 + xmm7
    float var_40 = xmm5_1 * xmm6 + xmm4_3 * xmm3_2 + xmm4_4
    float xmm5_5 = *arg2
    float var_3c = xmm5_5 * xmm3_1 + arg2[1] f* xmm2_3 + xmm7
    float var_38 = xmm6 * xmm2_3 + xmm3_2 * xmm3_1 + xmm4_4
    float xmm1_14 = *arg4
    float xmm0_16 = arg2[1] f* xmm2_3 + xmm5_5 * xmm4_3
    float var_2c = xmm1_14
    float var_1c = xmm1_14
    float var_34 = xmm0_16 + xmm7
    int32_t xmm0_18 = arg4[1]
    float var_30 = xmm4_3 * xmm3_2 + xmm6 * xmm2_3 + xmm4_4
    int32_t xmm2_16 = arg4[2]
    int32_t var_28 = xmm0_18
    int32_t var_20 = xmm0_18
    int32_t xmm0_19 = arg4[3]
    int32_t var_24 = xmm2_16
    int32_t var_18 = xmm0_19
    int32_t var_14 = xmm2_16
    int32_t var_10 = xmm0_19
    float result = sub_4bef10(arg4, &var_2c, &var_4c, arg5, 0, arg3, arg6)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
