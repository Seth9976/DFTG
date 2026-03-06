// 函数名称: sub_41de50
// 虚拟地址: 0x41de50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_41de50(int32_t arg1, float* arg2, int32_t* arg3, int128_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: float var_94
    float var_94
    int32_t eax_1 = __security_cookie ^ &var_94
    float xmm5 = *arg3
    float var_88 = xmm5
    float xmm6 = arg6[1]
    float xmm3 = *arg6
    float xmm2_1 = xmm5 * arg2[2]
    float xmm7_1 = xmm6 f* arg5[2]
    float var_54 = xmm6
    float var_60 = xmm3
    var_94 = arg2[1] f* arg3[2] - arg2[2] f* arg3[1]
    float xmm1_3 = *arg2
    float xmm2_2 = xmm2_1 - xmm1_3 f* arg3[2]
    float xmm1_5 = xmm1_3 f* arg3[1] - xmm5 * arg2[1]
    float xmm2_3 = *arg5
    float xmm4_1 = xmm2_3 f* arg6[2]
    float xmm7_2 = xmm7_1 - arg6[2] f* arg5[1]
    float var_64 = xmm2_3
    float var_5c = xmm7_2
    float var_50 = xmm4_1 - xmm3 f* arg5[2]
    int32_t var_84 = arg3[1]
    void var_30
    void* ecx = &var_30
    int32_t var_80 = arg3[2]
    float var_7c = *arg2
    int32_t var_78 = arg2[1]
    int32_t var_74 = arg2[2]
    float var_70 = var_94
    float var_6c = xmm2_2
    float var_68 = xmm1_5
    int32_t var_58 = arg5[1]
    float* edx_1 = &var_64
    int32_t var_4c = arg5[2]
    float var_44 = xmm3 f* arg5[1] - xmm2_3 * xmm6
    int32_t var_48 = arg6[2]
    sub_41da40(&var_88, edx_1, ecx, &var_88)
    float var_40[0x4]
    *arg4 = *sub_41dc00(&var_40, edx_1, ecx, &var_40)
    @__security_check_cookie@4(eax_1 ^ &var_94)
    return arg4
}
