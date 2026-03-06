// 函数名称: sub_501690
// 虚拟地址: 0x501690
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_501690(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    void var_d8
    int32_t eax_1 = __security_cookie ^ &var_d8
    void* eax_2 = arg2
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    void* var_b0 = eax_2
    int32_t i = 0
    int32_t esi = 0
    char var_d6 = 0
    int32_t edx = 0
    int32_t var_bc = 0
    float xmm3 = 1f
    int32_t xmm1 = (zx.o(0)).d
    float var_c0 = 1f
    char var_d5 = 0
    int32_t var_b4 = 0
    char var_ca = 0
    int32_t var_b8 = 0
    char var_c9 = 0
    int32_t var_d4 = 0
    int32_t i_1 = 0
    int32_t mxcsr
    int16_t x87control
    
    if (*(eax_2 + 0x120) s> 0)
        int32_t var_c8_1 = 0
        
        do
            int32_t* esi_1 = *(eax_2 + 0x128)
            void* esi_2 = esi_1 + edx
            int32_t eax_4 = *(esi_1 + edx) - 0xf
            
            if (eax_4 u> 5)
                esi = var_bc
            else
                switch (eax_4)
                    case 0
                        int32_t eax_36
                        eax_36, x87control = sub_4fd500(arg1, esi_2)
                        xmm1 = var_d4
                        esi = eax_36
                        i = i_1
                        edx = var_c8_1
                        var_bc = esi
                        var_d5 = 1
                    case 1
                        int32_t eax_37
                        eax_37, x87control = sub_4fd500(arg1, esi_2)
                        var_b4 = eax_37
                        var_ca = 1
                    label_501a61:
                        xmm1 = var_d4
                    label_501a67:
                        edx = var_c8_1
                        i = i_1
                        esi = var_bc
                    case 2
                        int32_t* eax_5 = *(esi_2 + 8)
                        var_d6 = 1
                        float xmm3_1
                        bool p_2
                        
                        if (eax_5[2] == 1)
                            int32_t* eax_6 = *eax_5
                            xmm3_1 = *eax_6
                            float temp4_1 = eax_6[1]
                            xmm3_1 - temp4_1
                            eax_6:1.b = (xmm3_1 == temp4_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm3_1, temp4_1) ? 1 : 0) << 2
                                | (xmm3_1 < temp4_1 ? 1 : 0)
                            p_2 = unimplemented  {test ah, 0x44}
                        
                        if (eax_5[2] != 1 || p_2)
                            int32_t eax_9 = (*(arg1 + 0x2c) + *esi_2) * *esi_2
                            int32_t ecx_2 = (eax_9 << 0xf) + not.d(eax_9)
                            int32_t ecx_3 = (ecx_2 u>> 0xc ^ ecx_2) * 5
                            int32_t eax_17 = (ecx_3 u>> 4 ^ ecx_3) * 0x809
                            float xmm0_1
                            x87control, xmm0_1 = sub_526200(*(esi_2 + 8), *(arg1 + 0x2f4), 
                                *(arg1 + 0x2e8), 
                                (((eax_17 u>> 0x10 ^ eax_17) & 0x7fffff) | 0x3f800000) - 1f)
                            xmm1 = var_d4
                            xmm3_1 = xmm0_1
                            i = i_1
                            edx = var_c8_1
                        
                        xmm1 = xmm1 f+ *(*(arg1 + 0x2e4) + 0x58) * xmm3_1
                        var_d4 = xmm1
                        esi = var_bc
                    case 3
                        float** eax_19 = *(esi_2 + 8)
                        var_d6 = 1
                        float var_d0_2
                        bool p_4
                        
                        if (eax_19[2] == 1)
                            float* eax_20 = *eax_19
                            float xmm0_4 = *eax_20
                            float temp5_1 = eax_20[1]
                            xmm0_4 - temp5_1
                            var_d0_2 = xmm0_4
                            eax_20:1.b = (xmm0_4 == temp5_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_4, temp5_1) ? 1 : 0) << 2
                                | (xmm0_4 < temp5_1 ? 1 : 0)
                            p_4 = unimplemented  {test ah, 0x44}
                        
                        if (eax_19[2] != 1 || p_4)
                            int32_t eax_23 = (*(arg1 + 0x2c) + *esi_2) * *esi_2
                            int32_t ecx_7 = (eax_23 << 0xf) + not.d(eax_23)
                            int32_t ecx_8 = (ecx_7 u>> 0xc ^ ecx_7) * 5
                            int32_t eax_31 = (ecx_8 u>> 4 ^ ecx_8) * 0x809
                            var_d0_2 = sub_526200(*(esi_2 + 8), *(arg1 + 0x2f4), *(arg1 + 0x2e8), 
                                (((eax_31 u>> 0x10 ^ eax_31) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        void* ecx_10 = *(arg1 + 0x2e4)
                        int64_t xmm0_6 = *(ecx_10 + 0x40)
                        float xmm2_2 = *(ecx_10 + 0x6c) f- xmm0_6:4.d
                        float xmm1_4 = *(ecx_10 + 0x68) f- xmm0_6.d
                        float xmm0_8 = *(ecx_10 + 0x70) - *(ecx_10 + 0x48)
                        float xmm0_11
                        x87control, xmm0_11 =
                            sub_41dbe0(xmm0_8 * xmm0_8 + xmm2_2 * xmm2_2 + xmm1_4 * xmm1_4)
                        xmm1 = var_d4 f+ xmm0_11 * var_d0_2
                        var_d4 = xmm1
                        goto label_501a67
                    case 4
                        int32_t eax_38
                        eax_38, x87control = sub_4fd500(arg1, esi_2)
                        var_b8 = eax_38
                        var_c9 = 1
                        goto label_501a61
                    case 5
                        int128_t var_70
                        int128_t* var_e4_1 = &var_70
                        int128_t* eax_34
                        eax_34, mxcsr = sub_5020f0(&var_70, edx, arg1)
                        int32_t* esi_3 = *(esi_2 + 8)
                        int32_t edx_13 = *(arg1 + 0x2f4)
                        float xmm1_7[0x4] = eax_34[1]
                        float eax_35 = data_aca2b8
                        int128_t var_90_1 = *eax_34
                        int128_t var_40_1 = data_aca2a0
                        int64_t xmm0_15 = data_aca2b0
                        float xmm0_18 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0x55) f- xmm0_15.d
                        float xmm0_21 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xaa) f- xmm0_15:4.d
                        var_70 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xff) - eax_35
                        float xmm0_22 = sub_526200(esi_3, edx_13, *(arg1 + 0x2e8), (zx.o(0)).d)
                        float xmm0_23 = sub_526200(esi_3, *(arg1 + 0x2f4), *(arg1 + 0x2e8), 1f)
                        float xmm1_14 = var_70.d
                        float xmm0_28
                        x87control, xmm0_28 =
                            sub_41dbe0(xmm0_21 * xmm0_21 + xmm0_18 * xmm0_18 + xmm1_14 * xmm1_14)
                        float xmm3_9 = (xmm0_28 - xmm0_22) / (xmm0_23 - xmm0_22)
                        float xmm0_31 = (zx.o(0)).d
                        
                        if (not(0 f>= xmm3_9) && not(xmm3_9 >= 1f))
                            x87control, xmm0_31 = sub_41f140(0xa, xmm3_9, (zx.o(0)).d, 1f)
                        
                        var_c0 = xmm0_31
                        goto label_501a61
            
            eax_2 = var_b0
            i += 1
            edx += 0x10
            i_1 = i
            var_c8_1 = edx
        while (i s< *(eax_2 + 0x120))
        
        xmm3 = var_c0
        edx = var_b8
    
    float xmm1_18 = xmm1 f* xmm3 f+ *(arg1 + 0x2c8)
    
    if (var_d6 == 0)
        if (var_d5 == 0)
            esi = 1
        
        xmm1_18 = _mm_max_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(esi - *(arg1 + 0x2d8))))
    else if (var_d5 != 0)
        xmm1_18 = _mm_max_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(esi - *(arg1 + 0x2d8))))
    
    float var_d4_1 = xmm1_18
    
    if (var_ca != 0)
        int32_t eax_39 = 0
        
        if (var_b4 - *(arg1 + 0x2d8) s>= 0)
            eax_39 = var_b4 - *(arg1 + 0x2d8)
        
        xmm1_18 = _mm_min_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(eax_39)))
        var_d4_1 = xmm1_18
    
    if (var_c9 != 0)
        int32_t eax_40 = 0
        
        if (edx - *(arg1 + 0x2cc) s>= 0)
            eax_40 = edx - *(arg1 + 0x2cc)
        
        xmm1_18 = _mm_min_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(eax_40)))
        var_d4_1 = xmm1_18
    
    var_b0.q = fconvert.d(xmm1_18)
    void* result
    long double st0
    st0, result = sub_59aa00(mxcsr, x87control, fconvert.d(fconvert.t(var_b0.q)))
    float var_b0_1 = fconvert.s(st0)
    *(arg1 + 0x2c8) = var_d4_1 - var_b0_1
    float xmm0_41
    
    if (0 f<= var_b0_1)
        xmm0_41 = var_b0_1 + 0.5f
    else
        xmm0_41 = var_b0_1 - 0.5f
    
    int32_t* ecx_19 = *(arg1 + 0x2e4)
    int32_t esi_5 = int.d(xmm0_41)
    int32_t var_c4 = esi_5
    
    if (not(ecx_19[0x13] f<= 0f))
        int32_t ecx_21 = *sub_4981f0(*ecx_19)
        result = *(arg1 + 0x2dc) * 0x168
        
        if (*(result + ecx_21 + 0xe6) != 0)
            esi_5 = 0
        
        var_c4 = esi_5
    
    void* result_1 = nullptr
    char const* const var_ec_2
    double var_e8_1
    char const* const var_e4_3
    char* ecx_33
    
    if (esi_5 s<= 0)
    label_501d5c:
        int32_t* esi_9 = *(arg1 + 0x2d0)
        
        if (esi_9 == 0)
        label_501e5f:
            result.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_d8)
            return result
        
        while (true)
            int32_t* var_b4_2 = esi_9
            
            if (esi_9 == 0)
                var_e4_3 = "XList<struct ParticleEmitter>::GetNextIter"
                var_e8_1.d = 0x1a1
                var_ec_2 = "d:\ax\trunk\ax2017\engine\xlist.h"
                ecx_33 = "iter != NULL"
                break
            
            void* ecx_31 = &esi_9[0xbf]
            int32_t* eax_59 = esi_9
            esi_9 = *ecx_31
            result = sub_501ec0(eax_59)
            
            if (result.b == 0)
                void* esi_10 = nullptr
                
                while (true)
                    if (esi_10 != 0)
                        esi_10 = *(esi_10 + 0x2fc)
                    else
                        esi_10 = eax_59[0xb4]
                    
                    if (esi_10 == 0)
                        break
                    
                    sub_4fd2b0(esi_10)
                
                sub_507730(&eax_59[0xb4])
                void* eax_60 = eax_59[0xb9]
                *(eax_60 + 0x14) -= 1
                void* edx_21 = var_b4_2[0xc0]
                int32_t ecx_36 = *ecx_31
                
                if (edx_21 == 0)
                    *(arg1 + 0x2d0) = ecx_36
                else
                    *(edx_21 + 0x2fc) = ecx_36
                
                void* ecx_37 = *ecx_31
                int32_t eax_62 = var_b4_2[0xc0]
                
                if (ecx_37 == 0)
                    *(arg1 + 0x2d4) = eax_62
                else
                    *(ecx_37 + 0x300) = eax_62
                
                *(arg1 + 0x2d8) -= 1
                sub_4fd4b0(var_b4_2)
                result = sub_4984f0(var_b4_2, 0x304)
            
            if (esi_9 == 0)
                goto label_501e5f
    else
        while (true)
            int32_t* eax_43 = sub_4981f0(**(arg1 + 0x2e4))
            int32_t* eax_44 = sub_4981f0(**(arg1 + 0x2e4))
            int32_t esi_6 = *(arg1 + 0x2dc)
            int32_t esi_7 = esi_6 + 1
            int32_t var_c0_2 = esi_7
            int32_t eax_45 = *(esi_6 * 0x168 + *eax_44 + 0x10)
            int32_t* eax_46 = eax_43
            
            if (esi_7 s< eax_46[2])
                int32_t ecx_26 = esi_7 * 0x168
                int32_t var_c8_2 = ecx_26
                
                while (true)
                    int32_t edx_20 = *(ecx_26 + *eax_46 + 0x10)
                    
                    if (edx_20 s<= eax_45)
                        goto label_501d4d
                    
                    if (edx_20 == eax_45 + 1)
                        result = sub_4981f0(**(arg1 + 0x2e4))
                        ecx_26 = var_c8_2
                        
                        if (ecx_26 s< 0 || esi_7 s>= *(result + 8))
                            var_e4_3 = "ParticleEmitOneByIndex"
                            var_e8_1.d = 0x53a
                            var_ec_2 = "d:\ax\trunk\ax2017\engine\particle.cpp"
                            ecx_33 = "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount"
                            break
                        
                        if (*(*(arg1 + 0x2e4) + 0x14) s<= 0xbb8)
                            float* eax_52 = sub_498440(0x304)
                            eax_52[3] += 1
                            float* esi_8 = *eax_52
                            float* ecx_29
                            
                            if (esi_8 != 0)
                                ecx_29 = eax_52
                            else
                                sub_4982d0(eax_52)
                                ecx_29 = eax_52
                                esi_8 = *ecx_29
                            
                            int32_t var_e4_2 = 0x304
                            var_e8_1.d = 0
                            *ecx_29 = *esi_8
                            _memset(esi_8, 0, 0x304)
                            esi_8[0xb5] = 0
                            esi_8[0xb6] = 0
                            esi_8[0xbf] = *(arg1 + 0x2d0)
                            esi_8[0xc0] = 0
                            void* eax_55 = *(arg1 + 0x2d0)
                            
                            if (eax_55 == 0)
                                *(arg1 + 0x2d4) = esi_8
                            else
                                *(eax_55 + 0x300) = esi_8
                            
                            *(arg1 + 0x2d8) += 1
                            *(arg1 + 0x2d0) = esi_8
                            esi_8[0xb7] = var_c0_2
                            esi_8[0xb9] = *(arg1 + 0x2e4)
                            esi_8[0xb8] = arg1
                            sub_501600(esi_8)
                            *(arg1 + 0x2cc) += 1
                            esi_7 = var_c0_2
                            ecx_26 = var_c8_2
                    
                    eax_46 = eax_43
                    esi_7 += 1
                    ecx_26 += 0x168
                    var_c0_2 = esi_7
                    var_c8_2 = ecx_26
                    
                    if (esi_7 s>= eax_46[2])
                        goto label_501d4d
                
                break
            
        label_501d4d:
            result = result_1 + 1
            result_1 = result
            
            if (result s>= var_c4)
                goto label_501d5c
    
    sub_489550(result, &data_5b2591, ecx_33, var_ec_2, var_e8_1.d, var_e4_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
