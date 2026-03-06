// 函数名称: sub_4a0c80
// 虚拟地址: 0x4a0c80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4a0c80(int32_t arg1, void* arg2, uint32_t arg3, float arg4 @ xmm3, void* arg5)
{
    // 第一条实际指令: void var_188
    void var_188
    int32_t eax_1 = __security_cookie ^ &var_188
    int128_t xmm0 = *(arg3 + 0x10a0)
    void var_f0
    int32_t ecx = __builtin_memcpy(&var_f0, arg3 + 0x1014, 0xd4)
    int128_t var_180 = xmm0
    int32_t var_68 = 0
    void* eax_2 = *(arg3 + 0xf50)
    
    if (eax_2 != 2)
        if (eax_2 != 1)
            sub_489550(eax_2, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x1693, 
                "UI2UpdateScrollbar")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        float xmm2_1 = *(arg5 + 4)
        xmm2_1 f- 0
        eax_2:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
            | (xmm2_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            if (not(*(arg2 + 4) f<= xmm2_1))
                *(arg3 + 0xe48) = 0
                int32_t* esi_5 = arg3 + 0x13ec
                *(arg3 + 0xe4c) = 0
                int32_t i_3 = 5
                int32_t i
                
                do
                    if (*esi_5 != 0)
                        eax_2 = sub_49a5a0(esi_5)
                        *esi_5 = 0
                    
                    esi_5 = &esi_5[1]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                @__security_check_cookie@4(eax_1 ^ &var_188)
                return eax_2
            
            int32_t* eax_5 = *(arg3 + 0xf58)
            int32_t var_194_2 = ecx
            float var_100[0x4]
            int128_t* eax_6 = sub_49ad10(eax_5, nullptr, eax_5, &var_100, 0)
            float xmm2_2 = *(arg5 + 4)
            float xmm0_3[0x4] = *eax_6
            float xmm3_3 = _mm_shuffle_ps(xmm0_3, xmm0_3, 0xaa) f- xmm0_3
            float xmm0_4 = var_180:8.d
            float var_124 = xmm0_4
            float var_13c = xmm0_4
            float xmm3_4[0x4] = xmm3_3 f* *(arg3 + 0x1020)
            float xmm0_6 = var_180:0xc.d f- xmm3_4
            float xmm1_1 = xmm0_4 f- xmm3_4
            var_100 = xmm3_4
            float var_138 = xmm0_6
            float xmm0_8 = *(arg2 + 4) / xmm2_2
            float xmm2_3 = xmm2_2 f- *(arg2 + 4)
            float var_144 = xmm1_1
            float xmm1_3 = xmm3_4[0] f+ var_180:4.d
            float xmm2_4 = xmm2_3 ^ (data_60cca0.o).d
            float xmm4_1 = xmm0_6 - xmm1_3
            float var_140 = xmm1_3
            float xmm3_6 = _mm_max_ss(xmm3_4, xmm0_8 * xmm4_1) * 0.5f
            float xmm4_2 = xmm4_1 - xmm3_6
            float xmm5_1 = xmm3_6 + 0f
            float xmm3_9 = (*(arg3 + 0xe4c) - 0f) / (xmm2_4 - 0f)
            float var_168 = xmm5_1
            
            if (not(0 f>= xmm3_9))
                if (xmm3_9 < 1f)
                    var_168 = sub_41f140(1, xmm3_9, xmm5_1, xmm4_2)
                else
                    var_168 = xmm4_2
            
            float eax_8
            float edx_1
            eax_8, edx_1 = sub_426dd0(&var_144)
            int32_t xmm0_12 = var_100.d
            var_144 = eax_8
            float xmm0_13 = xmm0_12 f* 0.5f
            float xmm1_6 = var_144 + xmm0_13
            float xmm0_15 = edx_1 + var_168
            float eax_9
            float edx_2
            eax_9, edx_2 = sub_4eaaa0(2)
            int32_t xmm3_10 = var_100.d
            var_144 = eax_9
            float xmm1_8 = var_180:8.d - xmm1_1
            float xmm2_8 = xmm3_10 f- 0f
            float xmm5_5 = xmm1_8 * var_144 + xmm1_1 - (xmm2_8 * var_144 + 0f)
            float xmm0_20 = var_180:0xc.d f- var_180:4.d
            float xmm5_6 = xmm5_5 f+ xmm3_10
            float xmm6_3 = xmm0_20 * edx_2 f+ var_180:4.d - (xmm2_8 * edx_2 + 0f)
            float xmm6_4 = xmm6_3 f+ xmm3_10
            float eax_10
            float edx_3
            eax_10, edx_3 = sub_4eaaa0(8)
            var_144 = eax_10
            float xmm4_6 = xmm0_20 * edx_3 f+ var_180:4.d - (xmm2_8 * edx_3 + 0f)
            float xmm2_13 = xmm0_13 + xmm1_6
            float xmm5_10 = xmm1_8 * var_144 + xmm1_1 - (xmm2_8 * var_144 + 0f)
            float xmm0_27 = var_100.d
            float xmm4_7 = xmm4_6 + xmm0_27
            float xmm5_11 = xmm5_10 + xmm0_27
            float xmm6_6 = xmm1_6 - xmm0_13
            int128_t xmm0_28 = var_180:8.d
            float xmm1_10 = xmm3_6 + xmm0_15
            float xmm5_13 = xmm0_15 - xmm3_6
            var_100[2] = xmm2_13
            var_144 = xmm1_10
            var_100[0] = xmm6_6
            var_100[3] = xmm1_10
            var_100[1] = xmm5_13
            float xmm2_16 = (xmm5_13 + xmm1_10) * 0.5f
            float var_128 = xmm2_16
            float var_168_1
            float var_164_1
            float var_14c_1
            int128_t xmm1_11
            float xmm4_9
            int128_t xmm5_14
            float xmm6_7
            
            if (xmm0_28 f<= xmm1_1)
                var_124 = xmm1_1
                xmm1_11 = xmm0_28
                var_14c_1 = xmm0_28
                xmm5_14 = xmm1_11
                var_168_1 = xmm1_11
                xmm4_9 = xmm1_11.d
                var_164_1 = xmm1_11
                xmm6_7 = xmm1_11.d
            else
                xmm4_9 = xmm0_28.d
                var_14c_1 = xmm1_1
                xmm1_11 = xmm0_28
                var_168_1 = xmm4_9
                xmm5_14 = xmm0_28
                var_164_1 = xmm0_28
                xmm6_7 = xmm0_28.d
            
            float var_148_1
            float xmm7_2
            
            if (xmm0_6 <= xmm2_16)
                xmm7_2 = xmm2_16
                var_148_1 = xmm0_6
                xmm1_11 = xmm5_14
                var_168_1 = xmm4_9
                var_164_1 = xmm6_7
            else
                var_148_1 = xmm2_16
                xmm7_2 = xmm0_6
            
            if (xmm1_11 f<= xmm1_1)
                var_168_1 = xmm1_1
            else
                var_164_1 = xmm1_1
            
            float var_150_1
            
            if (xmm2_16 <= xmm1_3)
                var_150_1 = xmm2_16
                var_128 = xmm1_3
            else
                var_150_1 = xmm1_3
            
            uint32_t (* eax_11)[0x4] = sub_49a8e0(arg3, 0)
            int32_t var_194_3 = 0
            (*eax_11)[0x3fd] = eax_5
            int128_t* var_198_3 = &var_f0
            (*eax_11)[0x3fe] = 0
            sub_4a4280(&var_f0, arg3, eax_11, arg4, var_198_3)
            sub_4bc3a0(&(*eax_11)[0x153], *(data_114e818 + 0x2c), &var_180)
            float xmm2_18 = var_180:8.d
            float xmm3_16 = (xmm5_5 * xmm2_18 - xmm5_6 f* var_180.d) / (xmm2_18 f- var_180.d)
            var_180.d = xmm3_16
            float xmm2_19 = var_180:0xc.d
            var_180:8.d = (xmm5_6 - xmm3_16) / xmm2_18 + xmm3_16
            float xmm4_14 = (xmm6_3 * xmm2_19 - xmm6_4 f* var_180:4.d) / (xmm2_19 f- var_180:4.d)
            var_180:4.d = xmm4_14
            var_180:0xc.d = (xmm6_4 - xmm4_14) / xmm2_19 + xmm4_14
            eax_11[0x10a] = var_180
            uint32_t (* eax_15)[0x4] = sub_49a8e0(arg3, 1)
            int32_t var_194_5 = 0
            (*eax_15)[0x3fd] = eax_5
            int128_t* var_198_4 = &var_f0
            (*eax_15)[0x3fe] = 1
            sub_4a4280(&var_f0, arg3, eax_15, arg4, var_198_4)
            sub_4bc3a0(&(*eax_15)[0x153], *(data_114e818 + 0x2c), &var_180)
            float xmm2_21 = var_180:8.d
            float xmm4_18 = (xmm2_21 * xmm5_10 - var_180.d * xmm5_11) / (xmm2_21 f- var_180.d)
            var_180.d = xmm4_18
            float xmm2_22 = var_180:0xc.d
            var_180:8.d = (xmm5_11 - xmm4_18) / xmm2_21 + xmm4_18
            float xmm3_21 = (xmm2_22 * xmm4_6 - var_180:4.d * xmm4_7) / (xmm2_22 f- var_180:4.d)
            var_180:4.d = xmm3_21
            var_180:0xc.d = (xmm4_7 - xmm3_21) / xmm2_22 + xmm3_21
            eax_15[0x10a] = var_180
            uint32_t (* eax_19)[0x4] = sub_49a8e0(arg3, 2)
            int32_t var_194_7 = 0
            (*eax_19)[0x3fd] = eax_5
            int128_t* var_198_5 = &var_f0
            (*eax_19)[0x3fe] = 2
            sub_4a4280(&var_f0, arg3, eax_19, arg4, var_198_5)
            sub_4bc3a0(&(*eax_19)[0x153], *(data_114e818 + 0x2c), &var_180)
            float xmm2_24 = var_180:8.d
            float xmm4_22 = (xmm2_24 * var_164_1 - var_180.d * var_168_1) / (xmm2_24 f- var_180.d)
            var_180.d = xmm4_22
            float xmm2_25 = var_180:0xc.d
            var_180:8.d = (var_168_1 - xmm4_22) / xmm2_24 + xmm4_22
            float xmm3_26 = (xmm2_25 * var_150_1 - var_180:4.d * var_128) / (xmm2_25 f- var_180:4.d)
            var_180:4.d = xmm3_26
            var_180:0xc.d = (var_128 - xmm3_26) / xmm2_25 + xmm3_26
            eax_19[0x10a] = var_180
            uint32_t (* eax_23)[0x4] = sub_49a8e0(arg3, 3)
            int32_t var_194_9 = 0
            (*eax_23)[0x3fd] = eax_5
            int128_t* var_198_6 = &var_f0
            (*eax_23)[0x3fe] = 3
            sub_4a4280(&var_f0, arg3, eax_23, arg4, var_198_6)
            sub_4bc3a0(&(*eax_23)[0x153], *(data_114e818 + 0x2c), &var_180)
            float xmm2_27 = var_180:8.d
            int128_t* edx_8 = &var_100
            int32_t ecx_22 = 0
            float xmm4_26 = (xmm2_27 * var_14c_1 - var_180.d * var_124) / (xmm2_27 f- var_180.d)
            var_180.d = xmm4_26
            float xmm2_28 = var_180:0xc.d
            var_180:8.d = (var_124 - xmm4_26) / xmm2_27 + xmm4_26
            float xmm3_31 = (xmm2_28 * var_148_1 - var_180:4.d * xmm7_2) / (xmm2_28 f- var_180:4.d)
            var_180:4.d = xmm3_31
            var_180:0xc.d = (xmm7_2 - xmm3_31) / xmm2_28 + xmm3_31
            eax_23[0x10a] = var_180
            int32_t i_2 = 0x10
            int32_t i_1
            
            do
                char eax_27 = *edx_8
                edx_8 += 1
                ecx_22 = ecx_22 u>> 8 ^ *(((zx.d(eax_27) ^ zx.d(ecx_22.b)) << 2) + &data_5d2c60)
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            int32_t var_24 = ecx_22
            uint32_t (* eax_30)[0x4] = sub_49a8e0(arg3, i_2 + 4)
            int32_t var_194_11 = 0
            (*eax_30)[0x3fd] = eax_5
            int128_t* var_198_7 = &var_f0
            (*eax_30)[0x3fe] = 4
            sub_4a4280(&var_f0, arg3, eax_30, arg4, var_198_7)
            int128_t* eax_34 = sub_4bc3a0(&(*eax_30)[0x153], *(data_114e818 + 0x2c), &var_100)
            float xmm2_30 = var_100[2]
            float xmm5_31 = var_144
            float xmm4_30 = (xmm2_30 * xmm6_6 - var_100[0] * xmm2_13) / (xmm2_30 - var_100[0])
            float xmm0_72 = var_100[1] * xmm5_31
            var_100[0] = xmm4_30
            float xmm2_31 = var_100[3]
            var_100[2] = (xmm2_13 - xmm4_30) / xmm2_30 + xmm4_30
            float xmm3_36 = (xmm2_31 * xmm5_13 - xmm0_72) / (xmm2_31 - var_100[1])
            var_100[1] = xmm3_36
            var_100[3] = (xmm5_31 - xmm3_36) / xmm2_31 + xmm3_36
            eax_30[0x10a] = var_100
            @__security_check_cookie@4(eax_1 ^ &var_188)
            return eax_34
    else
        uint32_t esi_2 = *(arg3 + 0xf58)
        uint32_t (* eax_3)[0x4] = sub_49a8e0(arg3, 0)
        int32_t var_194_1 = 0
        int128_t* var_198_1 = &var_f0
        (*eax_3)[0x3fd] = esi_2
        (*eax_3)[0x3fe] = 0
        eax_2 = sub_4a4280(&var_f0, arg3, eax_3, arg4, var_198_1)
        eax_3[0x10a] = *(arg3 + 0x10a0)
    
    @__security_check_cookie@4(eax_1 ^ &var_188)
    return eax_2
}
