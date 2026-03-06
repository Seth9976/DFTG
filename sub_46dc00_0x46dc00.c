// 函数名称: sub_46dc00
// 虚拟地址: 0x46dc00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_46dc00(int32_t arg1, int64_t* arg2, int32_t* arg3, int32_t* arg4, char arg5, char arg6, float* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm0 = data_620d84
    char eax_2
    
    if (*arg3 == 0)
        eax_2 = sub_46bc50(arg3)
    
    int32_t xmm1_1
    
    if (*arg3 != 0 || eax_2 == 0)
        int32_t edx = arg3[0x22a]
        int32_t ecx = data_632564
        
        if (edx == ecx)
            if (*(arg3 + 0x881) == 0)
                goto label_46dcc6
            
        label_46dc9f:
            int32_t xmm1_2 = *arg4
            
            if (xmm1_2 f< 0.5f)
                goto label_46dcc6
            
            xmm1_1 = xmm1_2 f- xmm0 * 5f
            
            if (not(0.5f f< xmm1_1))
                xmm1_1 = 0x3f000000
        else
            if (ecx != 0)
                uint32_t eax_3 = zx.d(ecx.w)
                
                if (eax_3 u>= data_62d6c8)
                    goto label_46dcc6
                
                int32_t* eax_5 = eax_3 * 0x8ac + data_62d6c4
                
                if (eax_5[0x22a] != ecx || *eax_5 != 2 || (eax_5[0x15] != edx && eax_5[0x14] != edx)
                        || *(arg3 + 0x881) == 0)
                    goto label_46dcc6
                
                goto label_46dc9f
            
        label_46dcc6:
            
            if (arg5 != 0 || arg6 != 0)
                xmm1_1 = xmm0 * 5f f+ *arg4
            else
                xmm1_1 = *arg4 - xmm0 * 5f
    else if (arg3[0x1aa] != 0)
        xmm1_1 = *arg4
    else
        xmm1_1 = (zx.o(0)).d
    
    int32_t xmm2
    
    if (0 f<= xmm1_1)
        xmm2 = _mm_min_ss(0x3f800000, xmm1_1)
    else
        xmm2 = (zx.o(0)).d
    
    *arg4 = xmm2
    int32_t var_24 = xmm2
    
    if (*arg3 != 0)
        var_24 = xmm2
    else if (sub_46bc50(arg3) == 0)
        var_24 = var_24
    else if (arg3[0x1aa] != 0)
        float xmm3_2 = arg3[0x1ed] f- 0f
        
        if (not(0 f>= xmm3_2))
            if (xmm3_2 < 1f)
                var_24 = sub_41f140(1, xmm3_2, var_24, (zx.o(0)).d)
            else
                var_24 = 0
    else
        var_24 = 0
    
    int64_t xmm0_5 = 0x3f80000000000000
    int32_t edi_1 = *arg3
    float var_28 = 0.200000003f
    
    if (edi_1 != 0)
        var_28 = 0.0199999996f
    
    float xmm1_8 = data_aca218:4 f- *arg7
    float xmm2_3 = data_aca218:8 f- arg7[1]
    float xmm3_4 = data_aca218:0xc f- arg7[2]
    float xmm1_13 =
        1f / (sub_41dbe0(xmm1_8 * xmm1_8 + xmm2_3 * xmm2_3 + xmm3_4 * xmm3_4) + 9.99999975e-06f)
    float xmm1_14 = xmm1_13 * xmm3_4
    float xmm3_5 = 1f / xmm1_14
    float xmm7_1 = 0f * var_28 + xmm3_5 * xmm1_14 * 1.5f
    int64_t xmm6_2 = xmm0_5.d * var_28 + xmm3_5 * xmm1_13 * xmm1_8 * 1.5f
    float xmm2_8 = xmm0_5:4.d * var_28 + xmm3_5 * xmm1_13 * xmm2_3 * 1.5f
    float var_2c_2 = xmm7_1
    int64_t var_38 = xmm6_2
    float var_28_2 = xmm2_8
    
    if (edi_1 == 0 && arg3[0xd] == 4 && data_632590 == 1)
        xmm6_2 = xmm6_2 f+ 0.100000001f
        xmm2_8 = xmm2_8 + 0f
        xmm7_1 = xmm7_1 + 0f
        var_38 = xmm6_2
        var_28_2 = xmm2_8
        var_2c_2 = xmm7_1
    
    float xmm3_8 = var_24 f- 0f
    float xmm1_17
    
    if (0 f< xmm3_8)
        xmm1_17 = 1f
        
        if (not(xmm3_8 >= 1f))
            xmm6_2 = var_38
            xmm1_17 = sub_41f140(4, xmm3_8, (zx.o(0)).d, 1f)
            xmm7_1 = var_2c_2
            xmm2_8 = var_28_2
    else
        xmm1_17 = (zx.o(0)).d
    
    float result = (xmm7_1 - 0f) * xmm1_17 + 0f
    *arg2 = _mm_unpacklo_ps((xmm6_2 f- 0f) * xmm1_17 + 0f, (xmm2_8 - 0f) * xmm1_17 + 0f)
    arg2[1].d = result
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
