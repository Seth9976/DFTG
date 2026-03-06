// 函数名称: sub_4acc60
// 虚拟地址: 0x4acc60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4acc60(int32_t arg1, char* arg2, char** arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    char** var_524 = arg3
    char** var_524_1 = arg3
    char* const edx_21
    
    if (arg4 == 0x70)
    label_4ad198:
        edx_21 = &data_5b2591
    label_4ad19f:
        sub_48a2c0(arg3, edx_21)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return arg3
    
    void* eax_3 = sub_4ac800(arg2, arg4)
    int32_t var_554_1
    double xmm0_1
    void var_52c
    void var_50c
    int32_t var_4fc[0x13d]
    
    if (arg4 - 0x71 u> 3)
        if (arg4 == 0xf9)
            int32_t var_550_5 = 0xf8
            int32_t* eax_15 = sub_4f0e70(arg4 - 0x71, eax_3, &data_6218dc, data_12bab48, 0xf8)
            void* var_558_2 = &var_52c
            sub_4ac920(&var_52c, &var_50c, arg2)
            
            if (eax_15 != 0)
                int32_t ecx_11 = var_4fc[arg5 * 5]
                
                if (ecx_11 s< eax_15[2])
                    sub_48a320(arg3, *(*eax_15 + ecx_11 * 0x10 + 8))
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return arg3
            
            goto label_4ad198
        
        void* eax_21 = sub_4f0fd0(&data_6218dc, arg4)
        
        switch (*(eax_21 + 0x10) - 1)
            case 0
                int32_t eax_22 = sub_4f0c50(eax_21, eax_3, &data_6218dc, arg4)
                void* eax_23 = sub_4f1080(&data_6218dc, arg4)
                
                if (eax_23 != 0)
                    sub_48a320(arg3, sub_4d0600(eax_23, eax_22))
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return arg3
                
                int32_t var_550_9 = eax_22
                void* const var_554_3 = &data_5efc90
                char** var_558_3 = arg3
                sub_48a9d0()
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 3
                int32_t ecx_43
                float xmm0_27
                ecx_43, xmm0_27 = sub_4f0d60(eax_21, eax_3, &data_6218dc, arg4)
                xmm0_1 = fconvert.d(xmm0_27)
                var_554_1 = ecx_43
            case 7
                sub_48a320(arg3, sub_4f0df0(eax_21, eax_3, &data_6218dc, arg4))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0xe
                void* eax_27 = sub_4f0ef0(eax_21, eax_3, &data_6218dc, arg4)
                
                if (eax_27 == 0)
                    goto label_4ad198
                
                char* eax_28 = *(eax_27 + 0x20)
                *arg3 = eax_28
                
                if (eax_28 == 0 || *eax_28 == 0)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return arg3
                
                char* eax_29 = sub_48a080(arg3)
                *(eax_29 + 4) += 1
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0x15
                int32_t* eax_33 = sub_4f0e70(eax_21, eax_3, &data_6218dc, data_12baca4, arg4)
                double xmm0_15
                int32_t var_564
                int32_t var_554_4
                
                if (arg4 != 0x7d)
                    var_554_4.q = _mm_cvtps_pd(eax_33[3])
                    int64_t var_55c_2 = _mm_cvtps_pd(eax_33[2])
                    var_564.q = _mm_cvtps_pd(eax_33[1])
                    xmm0_15 = _mm_cvtps_pd(*eax_33)
                else
                    float var_51c
                    int32_t edx_16 = sub_498790(&arg2[0xc], *(data_114e818 + 0x2c), &var_51c)
                    float xmm0_2 = var_51c
                    float var_514
                    float xmm1_2 = var_514 - xmm0_2
                    float var_518
                    float var_510
                    float xmm3_2 = var_510 - var_518
                    float xmm5_3 = *eax_33 * xmm1_2 + xmm0_2
                    float xmm6_3 = eax_33[2] f* xmm1_2 + xmm0_2
                    float xmm4_3 = eax_33[1] f* xmm3_2 + var_518
                    float xmm0_5 = eax_33[3] f* xmm3_2 + var_518
                    float xmm2_3
                    
                    if (xmm6_3 <= xmm5_3)
                        xmm2_3 = xmm6_3
                        xmm6_3 = xmm5_3
                    else
                        xmm2_3 = xmm5_3
                    
                    float xmm1_3
                    
                    if (xmm0_5 <= xmm4_3)
                        xmm1_3 = xmm0_5
                        xmm0_5 = xmm4_3
                    else
                        xmm1_3 = xmm4_3
                    
                    var_51c = xmm2_3
                    float var_518_1 = xmm1_3
                    float var_514_1 = xmm6_3
                    float var_510_1 = xmm0_5
                    void var_53c
                    float xmm1_4[0x4] = *sub_4be600(&var_53c, edx_16, &var_51c, &var_53c)
                    var_554_4.q = fconvert.d(_mm_shuffle_ps(xmm1_4, xmm1_4, 0xff))
                    double var_55c_1 = fconvert.d(_mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa))
                    var_564.q = fconvert.d(_mm_shuffle_ps(xmm1_4, xmm1_4, 0x55))
                    xmm0_15 = fconvert.d(xmm1_4)
                int32_t var_56c
                var_56c.q = xmm0_15
                char const* const var_570 = "%g %g %g %g"
                sub_48a9d0(arg3, "%g %g %g %g")
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0x16
                int64_t* eax_37 = sub_4f0e70(eax_21, eax_3, &data_6218dc, data_12bac78, arg4)
                int32_t var_554_5
                var_554_5.q = _mm_cvtps_pd(*(eax_37 + 4))
                int64_t var_55c_3 = _mm_cvtps_pd(*eax_37)
                char const* const var_560 = "%g %g"
                sub_48a9d0(arg3, "%g %g")
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0x28
                char* eax_39 = sub_4f0e70(eax_21, eax_3, &data_6218dc, data_126cc50, arg4)
                uint32_t var_558_4 = zx.d(eax_39[3])
                char** var_55c = zx.d(eax_39[2])
                uint32_t var_560_1 = zx.d(eax_39[1])
                uint32_t var_564_2 = zx.d(*eax_39)
                char const* const var_568 = "%d %d %d %d"
                sub_48a9d0(arg3, "%d %d %d %d")
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            default
                int32_t eax_42 = data_126cd24
                
                if (eax_21 != eax_42)
                    edx_21 = "unknown type"
                    goto label_4ad19f
                
                sub_48a320(arg3, *sub_4f0e70(eax_42, eax_3, &data_6218dc, eax_42, arg4))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
    else
        sub_4ac920(&var_52c, &var_50c, arg2, &var_52c)
        int32_t var_550_2 = 0x70
        int32_t eax_7 = arg5 * 5
        int32_t edi_1 = var_4fc[eax_7]
        int32_t eax_8 = sub_4f0e70(eax_7, eax_3, &data_6218dc, data_126cc94, 0x70)
        
        if (eax_8 == 0)
            goto label_4ad198
        
        int32_t* edi_3 = (edi_1 << 4) + *(eax_8 + 8)
        
        switch (arg4)
            case 0x71
                sub_48a320(arg3, sub_4d0600(&data_5d24e0, *edi_3))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0x72
                xmm0_1 = _mm_cvtps_pd(edi_3[1])
            case 0x73
                xmm0_1 = _mm_cvtps_pd(edi_3[2])
            case 0x74
                sub_48a320(arg3, sub_4d0600(&data_5d2928, edi_3[3]))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
    var_554_1.q = xmm0_1
    void* const var_558_1 = &data_5f2124
    sub_48a9d0(arg3, &data_5f2124)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg3
}
