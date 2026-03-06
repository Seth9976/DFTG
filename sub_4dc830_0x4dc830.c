// 函数名称: sub_4dc830
// 虚拟地址: 0x4dc830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_4dc830(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a05fb
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_12c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    float result
    
    if (arg2 != data_12bab90)
        float result_2
        int64_t xmm1_2
        float xmm2_2[0x4]
        
        if (arg2 == data_12bab94)
            float xmm3_1 = *(arg3 + 0x44)
            float xmm4_3 = xmm3_1 * 0f * 0.5f
            xmm1_2 = *(arg3 + 0xc) + xmm3_1 * 0.5f
            result_2 = *(arg3 + 0x10) + xmm4_3
            xmm2_2 = xmm4_3 f+ *(arg3 + 8)
        label_4dc924:
            result = result_2
            *(arg4 + 0x14) = _mm_unpacklo_ps(xmm2_2, xmm1_2)
            goto label_4dc92f
        
        if (arg2 == data_12bab98)
            float xmm3_4 = *(arg3 + 0x44) * 0f
            xmm2_2 = *(arg3 + 8) + xmm3_4
            xmm1_2 = *(arg3 + 0xc) f+ *(arg3 + 0x44)
            result_2 = *(arg3 + 0x10) + xmm3_4
            goto label_4dc924
        
        int32_t* var_ac
        int32_t* var_130_1 = &var_ac
        int32_t* result_1
        sub_4889e0(&result_1, *(arg3 + 4), 2)
        int32_t var_14_1 = 0
        void* eax_5 = *var_ac
        
        if (eax_5 == 0)
        label_4dc9a9:
            *arg4 = data_63c264
            *(arg4 + 0x10) = data_63c274
        else
            int32_t edx = *(eax_5 + 0x20)
            int32_t edi_1 = 0
            
            if (edx s<= 0)
                goto label_4dc9a9
            
            int32_t* eax_6 = *(eax_5 + 0x28)
            var_ac = eax_6
            void* eax_7 = &eax_6[0xb]
            
            while (*eax_7 != arg2)
                edi_1 += 1
                eax_7 += 0x40
                
                if (edi_1 s>= edx)
                    goto label_4dc9a9
            
            if (edi_1 == 0xffffffff)
                goto label_4dc9a9
            
            void* edx_1 = *(arg3 + 0x2c)
            void* edi_3 = &var_ac[edi_1 * 0x10]
            int32_t ecx_6
            
            if (edx_1 != 0)
                ecx_6 = *(edi_3 + 0x38)
            
            int128_t var_dc
            int128_t var_48
            int32_t eax_16
            
            if (edx_1 == 0 || ecx_6 s< 0 || ecx_6 s>= *(eax_5 + 0x10))
                eax_16 = *(edi_3 + 0x18)
                int64_t var_74_2 = *(edi_3 + 0x10)
                int128_t var_84_2 = *edi_3
            else
                sub_4dda70(edx_1 + 0x7c, ecx_6)
                void var_a8
                int128_t* eax_12 = sub_4ddd60(&var_a8, edx_1, edi_3, &var_a8)
                int128_t var_68 = *eax_12
                int128_t var_58 = eax_12[1]
                var_48 = eax_12[2]
                int128_t var_38_1 = eax_12[3]
                void var_120
                int128_t* eax_13 = sub_497aa0(&var_120)
                float xmm3_5[0x4] = *eax_13
                float xmm2_5[0x4] = eax_13[1]
                float xmm1_4[0x4] = eax_13[2]
                int128_t var_38_2 = eax_13[3]
                var_58:0xc.d = xmm3_5
                var_48.d = _mm_shuffle_ps(xmm3_5, xmm3_5, 0x55)
                var_48:4.d = _mm_shuffle_ps(xmm3_5, xmm3_5, 0xaa)
                var_48:0xc.d = _mm_shuffle_ps(xmm2_5, xmm2_5, 0x55)
                var_38_2.d = _mm_shuffle_ps(xmm2_5, xmm2_5, 0xaa)
                var_38_2:8.d = _mm_shuffle_ps(xmm1_4, xmm1_4, 0x55)
                int32_t xmm0_22 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa)
                var_48:8.d = xmm2_5
                var_38_2:4.d = xmm1_4
                var_38_2:0xc.d = xmm0_22
                float* eax_15 = sub_41dc00(&var_dc:0xc, &var_68, &var_58:0xc, &var_dc:0xc)
                float xmm2_6[0x4] = *eax_13
                int64_t xmm1_5 = *(eax_13 + 0x1c)
                int128_t xmm0_23 = *eax_15
                float xmm2_7[0x4] = _mm_shuffle_ps(xmm2_6, xmm2_6, 0xff)
                int128_t var_84_1 = xmm0_23
                eax_16 = *(eax_13 + 0x2c)
                int64_t var_74_1 = _mm_unpacklo_ps(xmm2_7, xmm1_5)
            
            int64_t var_cc_1 = *(arg3 + 8)
            int32_t var_6c_1 = eax_16
            int32_t eax_17 = *(arg3 + 0x10)
            var_dc = *(arg3 + 0x14)
            int32_t var_c4_1 = eax_17
            int128_t xmm0_30 = (*(arg3 + 0x24)).o
            float var_88 = 1f
            var_48 = xmm0_30
            int128_t var_38_3 = var_dc
            sub_4ddac0(&var_48, &var_88, arg4, &var_48)
        
        result = result_1
        
        if (result != 0)
            *(result i+ 0x1c) -= 1
    else
        *(arg4 + 0x14) = *(arg3 + 8)
        result = *(arg3 + 0x10)
    label_4dc92f:
        arg4[7] = result
        int128_t xmm0_3 = *(arg3 + 0x14)
        *arg4 = 0x3f800000
        *(arg4 + 4) = xmm0_3
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
