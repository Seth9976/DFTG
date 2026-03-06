// 函数名称: sub_4c0720
// 虚拟地址: 0x4c0720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_4c0720(int32_t arg1, int32_t* arg2, int32_t* arg3, float* arg4, int128_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebx_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    float xmm6 = *arg2
    float xmm4 = arg2[3]
    float xmm2_1 = xmm6 * *arg4
    float xmm3_1 = arg2[1] f* arg4[1]
    float xmm7_1 = xmm4 * *arg4
    float xmm5 = arg2[5]
    float xmm6_1 = xmm6 * arg4[2]
    float xmm4_1 = xmm4 * arg4[2]
    float xmm2_3 = xmm2_1 + xmm3_1 f+ arg2[2]
    float xmm2_5 = arg2[4] f* arg4[1]
    float var_34 = xmm2_3
    float xmm1_2 = xmm7_1 + xmm2_5 + xmm5
    float var_30 = xmm1_2
    float xmm1_5 = xmm6_1 + xmm3_1 f+ arg2[2]
    float xmm3_4 = xmm4_1 + xmm2_5 + xmm5
    float var_2c = xmm1_5
    float xmm1_7 = arg2[1] f* arg4[3]
    xmm1_2 - xmm3_4
    float xmm6_3 = arg2[4] f* arg4[3]
    float* eax_2
    eax_2:1.b = (xmm1_2 == xmm3_4 ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, xmm3_4) ? 1 : 0) << 2
        | (xmm1_2 < xmm3_4 ? 1 : 0)
    float var_28 = xmm3_4
    float xmm6_5 = xmm6_3 + xmm7_1 + xmm5
    float var_24 = xmm1_7 + xmm6_1 f+ arg2[2]
    float var_18 = xmm6_5
    float var_20 = xmm6_3 + xmm4_1 + xmm5
    float xmm0_6 = xmm1_7 + xmm2_1 f+ arg2[2]
    float var_1c = xmm0_6
    bool p_1 = unimplemented  {test ah, 0x44}
    bool p_3
    
    if (not(p_1))
        xmm2_3 - xmm0_6
        eax_2:1.b = (xmm2_3 == xmm0_6 ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, xmm0_6) ? 1 : 0) << 2
            | (xmm2_3 < xmm0_6 ? 1 : 0)
        p_3 = unimplemented  {test ah, 0x44}
    
    float i_2
    int32_t var_44
    
    if (p_1 || p_3)
        if (arg5[1].d != 0xffffffff)
            char const* const var_2a4_4 = "DrawImagePostClippedFull"
            int32_t var_2a8_4 = 0x540
            char const* const var_2ac_4 = "d:\ax\trunk\ax2017\engine\sprite.cpp"
            sub_489550(eax_2, &data_5b2591, "clipRect.regions == -1")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* var_2b0_1 = (*arg5).d
        void var_258
        void var_158
        i_2 = sub_51b510(&var_158, arg2, &var_34, &var_158, &var_258, arg5)
        float i_1 = i_2
        
        if (i_2 s> 0)
            void var_150
            void* esi_1 = &var_150
            void var_244
            void* edi_1 = &var_244
            float i
            
            do
                void* eax_8 = data_114e814
                int64_t xmm2_7 = *(edi_1 + 8)
                float xmm1_11[0x4] = *(edi_1 - 8)
                float xmm3_6[0x4] = _mm_unpacklo_ps(*(edi_1 - 0x10), *edi_1)
                float xmm0_11 = *(esi_1 - 8)
                int64_t xmm1_12 = _mm_unpacklo_ps(xmm1_11, xmm2_7)
                float xmm2_8 = *(eax_8 + 0x20)
                float xmm3_7[0x4] = _mm_unpacklo_ps(xmm3_6, xmm1_12)
                float xmm1_13 = *(eax_8 + 0x24)
                float xmm3_8[0x4] = __mulps_xmmps_memps(xmm3_7, data_60cb80)
                int32_t var_2a4_3 = 0
                var_34 = xmm0_11 + xmm2_8
                float xmm0_14 = *(esi_1 - 4) + xmm1_13
                float var_54 = xmm3_8
                float xmm3_9[0x4] = _mm_shuffle_ps(xmm3_8, xmm3_8, 0xe5)
                int32_t var_4c_1 = xmm3_9
                float xmm3_10[0x4] = _mm_unpackhi_ps(xmm3_9, xmm3_9)
                var_44 = xmm3_10
                float var_30_1 = xmm0_14
                float xmm0_16 = xmm2_8 f+ *esi_1
                int32_t var_2ac_3 = 0
                int32_t var_3c_1 = _mm_unpackhi_ps(xmm3_10, xmm3_10)
                float var_2c_1 = xmm0_16
                var_28 = *(esi_1 + 4) + xmm1_13
                float var_24_1 = *(esi_1 + 8) + xmm2_8
                float var_20_1 = *(esi_1 + 0xc) + xmm1_13
                float var_1c_1 = *(esi_1 + 0x10) + xmm2_8
                float var_18_2 = *(esi_1 + 0x14) + xmm1_13
                i_2 = sub_4bef10(eax_8, &var_54, &var_34, arg6, 0, arg3, nullptr)
                edi_1 += 0x20
                esi_1 += 0x20
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        int128_t xmm0_7 = *arg5
        int32_t var_18_1 = arg5[1].d
        float var_284 = xmm2_3
        void var_294
        void* var_2a4_1 = &var_294
        float var_280_1 = xmm1_2
        int32_t* var_2a8_1 = &var_44
        var_28.o = xmm0_7
        float* var_2ac_1 = &var_28
        float var_27c_1 = xmm1_5
        float var_278_1 = xmm6_5
        i_2 = sub_4bfe40(&var_28, &data_5d2760, &var_284)
        
        if (i_2.b != 0)
            int32_t var_2a4_2 = 0
            int32_t* var_2a8_2 = arg6
            void* var_2ac_2 = &var_294
            int32_t eax_6 = sub_4bffb0(&var_294, &var_44, arg3)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_6
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_2
}
