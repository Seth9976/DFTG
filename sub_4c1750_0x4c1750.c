// 函数名称: sub_4c1750
// 虚拟地址: 0x4c1750
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4c1750(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: double* eax
    double* eax
    
    if (arg1 u> 7)
        sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\sprite.cpp", 0x734, 
            "ImageRotationUVS")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    float var_14_2
    float var_10_2
    double* eax_1
    float xmm1_11
    float xmm3_7
    float xmm4_16
    float xmm5_9
    float xmm6_8
    float xmm7_7
    
    switch (arg1)
        case 0
            return 
        case 1
            goto label_4c17ad
        case 2
            float xmm0_23 = sub_41f120(3.14159274f)
            float xmm0_24
            eax_1, xmm0_24 = sub_41f100(3.14159274f)
            var_14_2 = xmm0_24 f* *arg2 - xmm0_23 f* arg2[1] + 1f
            xmm7_7 = xmm0_24 f* arg2[2] - xmm0_23 f* arg2[3] + 1f
            xmm6_8 = xmm0_24 f* arg2[3] + xmm0_23 f* arg2[2] + 1f
            var_10_2 = xmm0_24 f* arg2[1] + xmm0_23 f* *arg2 + 1f
            xmm5_9 = xmm0_24 f* arg2[4] - xmm0_23 f* arg2[5] + 1f
            xmm4_16 = xmm0_24 f* arg2[5] + xmm0_23 f* arg2[4] + 1f
            xmm3_7 = xmm0_24 f* arg2[6] - xmm0_23 f* arg2[7]
            xmm1_11 = xmm0_24 f* arg2[7] + xmm0_23 f* arg2[6] + 1f
        label_4c1a01:
            *arg2 = var_14_2
            arg2[1] = var_10_2
            arg2[2] = xmm7_7
            arg2[3] = xmm6_8
            arg2[4] = xmm5_9
            arg2[5] = xmm4_16
            arg2[6] = xmm3_7 + 1f
            arg2[7] = xmm1_11
            return 
        case 3
            goto label_4c1a76
        case 4
            arg2[1] = 1f f- arg2[1]
            arg2[3] = 1f f- arg2[3]
            float xmm1_18 = 1f f- arg2[7]
            arg2[5] = 1f f- arg2[5]
            arg2[7] = xmm1_18
            return 
        case 5
            int32_t xmm0_68 = *arg2
            int32_t xmm1_19 = arg2[1]
            *arg2 = arg2[2]
            arg2[1] = arg2[3]
            arg2[2] = xmm0_68
            arg2[3] = xmm1_19
            int32_t xmm0_69 = arg2[4]
            int32_t xmm1_20 = arg2[5]
            arg2[4] = arg2[6]
            arg2[5] = arg2[7]
            arg2[6] = xmm0_69
            arg2[7] = xmm1_20
            return 
        case 6
            arg2[1] = 1f f- arg2[1]
            arg2[3] = 1f f- arg2[3]
            arg2[5] = 1f f- arg2[5]
            arg2[7] = 1f f- arg2[7]
        label_4c17ad:
            float xmm0_5 = sub_41f120(-1.57079637f)
            float xmm0_6
            eax, xmm0_6 = sub_41f100(-1.57079637f)
            float xmm2_1 = *arg2
            float xmm4_1 = arg2[1]
            float xmm2_3 = arg2[2]
            float xmm2_5 = arg2[4]
            float xmm5_4 = xmm2_5 * xmm0_6 - xmm0_5 f* arg2[5]
            float xmm2_7 = arg2[6]
            float xmm6_4 = xmm0_6 f* arg2[3] + xmm2_3 * xmm0_5 + 1f
            float xmm4_8 = xmm0_6 f* arg2[5] + xmm2_5 * xmm0_5 + 1f
            float xmm3_4 = xmm2_7 * xmm0_6 - xmm0_5 f* arg2[7]
            float xmm0_17 = xmm0_6 f* arg2[7]
            arg2[2] = xmm2_3 * xmm0_6 - xmm0_5 f* arg2[3]
            arg2[3] = xmm6_4
            arg2[4] = xmm5_4
            arg2[5] = xmm4_8
            arg2[6] = xmm3_4
            *arg2 = xmm2_1 * xmm0_6 - xmm4_1 * xmm0_5
            arg2[1] = xmm4_1 * xmm0_6 + xmm2_1 * xmm0_5 + 1f
            arg2[7] = xmm0_17 + xmm2_7 * xmm0_5 + 1f
            return 
        case 7
            arg2[1] = 1f f- arg2[1]
            arg2[3] = 1f f- arg2[3]
            arg2[5] = 1f f- arg2[5]
            arg2[7] = 1f f- arg2[7]
        label_4c1a76:
            float xmm0_47 = sub_41f120(1.57079637f)
            float xmm0_48
            eax_1, xmm0_48 = sub_41f100(1.57079637f)
            var_14_2 = xmm0_48 f* *arg2 - xmm0_47 f* arg2[1] + 1f
            var_10_2 = xmm0_48 f* arg2[1] + xmm0_47 f* *arg2
            xmm7_7 = xmm0_48 f* arg2[2] - xmm0_47 f* arg2[3] + 1f
            xmm6_8 = xmm0_48 f* arg2[3] + xmm0_47 f* arg2[2]
            xmm5_9 = xmm0_48 f* arg2[4] - xmm0_47 f* arg2[5] + 1f
            xmm4_16 = xmm0_48 f* arg2[5] + xmm0_47 f* arg2[4]
            xmm3_7 = xmm0_48 f* arg2[6] - xmm0_47 f* arg2[7]
            xmm1_11 = xmm0_48 f* arg2[7] + xmm0_47 f* arg2[6]
            goto label_4c1a01
}
