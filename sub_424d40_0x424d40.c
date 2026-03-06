// 函数名称: sub_424d40
// 虚拟地址: 0x424d40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_424d40(int32_t arg1, int32_t* arg2, int128_t* arg3, float arg4 @ xmm3, int128_t* arg5)
{
    // 第一条实际指令: float xmm2_1 = *arg2 f- *arg3
    float xmm2_1 = *arg2 f- *arg3
    float xmm1 = arg2[1]
    *arg5 = *arg3
    float xmm1_1 = xmm1 f- *(arg3 + 4)
    arg5[1] = arg3[1]
    arg5[2] = arg3[2]
    float xmm2_3 = xmm2_1 * arg4 f+ *arg3
    arg5[3] = arg3[3]
    arg5[4] = arg3[4]
    float xmm1_3 = xmm1_1 * arg4 f+ *(arg3 + 4)
    arg5[5] = arg3[5]
    float xmm0_7 = arg2[2] f- *(arg3 + 8)
    *arg5 = xmm2_3
    float xmm2_5 = arg2[6] f- *(arg3 + 0x18)
    *(arg5 + 4) = xmm1_3
    float xmm1_6 = (arg2[7] f- *(arg3 + 0x1c)) * arg4
    *(arg5 + 8) = xmm0_7 * arg4 f+ *(arg3 + 8)
    float xmm1_7 = xmm1_6 f+ *(arg3 + 0x1c)
    float xmm0_12 = (arg2[3] f- *(arg3 + 0xc)) * arg4
    *(arg5 + 0x18) = xmm2_5 * arg4 f+ *(arg3 + 0x18)
    *(arg5 + 0x1c) = xmm1_7
    *(arg5 + 0xc) = xmm0_12 f+ *(arg3 + 0xc)
    arg5[1].d = (arg2[4] f- arg3[1].d) * arg4 f+ arg3[1].d
    *(arg5 + 0x14) = (arg2[5] f- *(arg3 + 0x14)) * arg4 f+ *(arg3 + 0x14)
    *(arg5 + 0x28) = (arg2[0xa] f- *(arg3 + 0x28)) * arg4 f+ *(arg3 + 0x28)
    float var_1c = (arg2[0x14] f- arg3[5].d) * arg4 f+ arg3[5].d
    float var_18 = (arg2[0x15] f- *(arg3 + 0x54)) * arg4 f+ *(arg3 + 0x54)
    float var_14 = (arg2[0x16] f- *(arg3 + 0x58)) * arg4 f+ *(arg3 + 0x58)
    *(arg5 + 0x4c) = ((arg2[0x13] f- *(arg3 + 0x4c)) * arg4 f+ *(arg3 + 0x4c)).o
    float var_1c_1 = (arg2[0xc] f- arg3[3].d) * arg4 f+ arg3[3].d
    float var_18_1 = (arg2[0xd] f- *(arg3 + 0x34)) * arg4 f+ *(arg3 + 0x34)
    float var_14_1 = (arg2[0xe] f- *(arg3 + 0x38)) * arg4 f+ *(arg3 + 0x38)
    *(arg5 + 0x2c) = ((arg2[0xb] f- *(arg3 + 0x2c)) * arg4 f+ *(arg3 + 0x2c)).o
    float var_1c_2 = (arg2[0x10] f- arg3[4].d) * arg4 f+ arg3[4].d
    float var_18_2 = (arg2[0x11] f- *(arg3 + 0x44)) * arg4 f+ *(arg3 + 0x44)
    float var_14_2 = (arg2[0x12] f- *(arg3 + 0x48)) * arg4 f+ *(arg3 + 0x48)
    *(arg5 + 0x3c) = ((arg2[0xf] f- *(arg3 + 0x3c)) * arg4 f+ *(arg3 + 0x3c)).o
    
    if (not(arg4 < 1f))
        *(arg5 + 0x5c) = arg2[0x17]
        return arg5
    
    int32_t ecx_1 = *(arg3 + 0x5c)
    
    if (ecx_1 s<= arg2[0x17])
        ecx_1 = arg2[0x17]
    
    *(arg5 + 0x5c) = ecx_1
    return arg5
}
