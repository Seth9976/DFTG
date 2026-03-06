// 函数名称: sub_4e4500
// 虚拟地址: 0x4e4500
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4e4500()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0c0f
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_d4 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_1150b94 != 0)
        if (data_15166d8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_15166d8)
            
            if (data_15166d8 == 0xffffffff)
                int32_t var_8_1 = 0
                data_15166dc = sub_4d0b50("sys/DebugFont.font", 0x12)
                int32_t var_8_2 = 0xffffffff
                __Init_thread_footer(&data_15166d8)
        
        void* eax_6 = data_1150b94
        char* const result_10 = 0x40000000
        float var_88 = 0f
        int32_t var_84_1 = 0
        int32_t var_80_1 = 0x43c80000
        char* result_14 = result_10
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(eax_6 + 0xbbaaa4) + 1))
        char* const result_9 = result_14
        float var_7c_1 = xmm0_2 * 15f
        sub_4c0580(&var_88, &result_9)
        sub_4e3f40()
        void* ecx_3 = data_1150b94
        float xmm1_1 = 15f
        int32_t eax_9 = *(ecx_3 + 0xbbaaa4)
        int32_t esi_1 = *(ecx_3 + 0xbbaaac)
        
        if (esi_1 s>= eax_9)
            esi_1 = eax_9
        
        int32_t ebx_1 = 0
        struct _EXCEPTION_REGISTRATION_RECORD** result_4
        
        if (esi_1 s> 0)
            var_88 = 0f
            int32_t var_80_2 = 0x43c80000
            
            do
                float xmm0_5 = xmm1_1 + 15f
                float var_84_2 = xmm1_1
                float var_7c_2 = xmm0_5
                char* const result_5
                
                if (*(ecx_3 + 0xbbaa9c) == *(ecx_3 + 0xbbaaa8) + ebx_1)
                    result_10 = 0x400000ff
                    result_5 = result_10
                label_4e4674:
                    result_9 = result_5
                    sub_4c0580(&var_88, &result_9)
                    ecx_3 = data_1150b94
                else if ((ebx_1.b & 1) != 0)
                    result_4 = 0x3fffffff
                    result_5 = result_4
                    goto label_4e4674
                ebx_1 += 1
                xmm1_1 = xmm0_5
            while (ebx_1 s< esi_1)
        
        float var_24_1 = 15f
        result = sub_4e4110()
        char* const var_9c_1 = &data_5b2591
        void* result_15 = nullptr
        int32_t var_8_3 = 1
        result_9 = nullptr
        
        if (esi_1 s> 0)
            while (true)
                void* ebx_2 = data_1150b94
                void* eax_12 = *(ebx_2 + 0xbbaaa8)
                void* eax_13 = eax_12 + result_15
                
                if (eax_12 + result_15 s< 0 || eax_13 s>= *(ebx_2 + 0xbbaaac))
                    sub_489550(eax_13, &data_5b2591, 
                        "sortIndex >= 0 && sortIndex < gProfilerGlobals->mCalculatedFunctionCount", 
                        "d:\ax\trunk\ax2017\engine\perfevent.cpp", 0x358, "ProfilerDraw")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_489700()
                        noreturn
                    
                    breakpoint
                
                int32_t esi_2 = *(ebx_2 + (eax_13 << 2) + 0xbb6c04)
                int32_t ecx_5 = *(ebx_2 + 0xbbaa98)
                int32_t eax_15 = esi_2 * 7
                float var_8c_1
                float var_34_1
                float var_1c_2
                float xmm1_4[0x2]
                
                if (ecx_5 != 0x28)
                    void* ecx_8 =
                        mods.dp.d(sx.q(*(ebx_2 + 0xb9b680) + ecx_5 + 1), 0x28) * 0x4a490 + ebx_2
                    int32_t eax_20 = esi_2 * 2
                    var_1c_2 = *(ecx_8 + (eax_20 << 3) + 0x3aa8c)
                    var_8c_1 = *(ecx_8 + (eax_20 << 3) + 0x3aa90)
                    float xmm0_10 = *(ecx_8 + (eax_20 << 3) + 0x3aa98)
                    xmm1_4 = _mm_cvtepi32_ps(zx.o(*(ecx_8 + (eax_20 << 3) + 0x3aa94)))
                    var_34_1 = xmm0_10
                else
                    float xmm2_1 = *(ebx_2 + (eax_15 << 2) + 0xb9b68c)
                    float xmm0_7 = _mm_cvtepi32_ps(zx.o(*(ebx_2 + 0xbbaa88)))
                    var_1c_2 = xmm2_1 / xmm0_7
                    xmm1_4 = _mm_cvtepi32_ps(zx.o(*(ebx_2 + (eax_15 << 2) + 0xb9b694))) / xmm0_7
                    var_8c_1 = *(ebx_2 + (eax_15 << 2) + 0xb9b690) / xmm0_7
                    var_34_1 = *(ebx_2 + (eax_15 << 2) + 0xb9b698) / xmm0_7
                
                result_4 = &data_5b2591
                char* const result_2 = &data_5b2591
                char* const result_3 = &data_5b2591
                result_10 = &data_5b2591
                var_8_3.b = 5
                int32_t var_dc
                var_dc.q = _mm_cvtps_pd(xmm1_4)
                
                if (10f f<= xmm1_4)
                    var_8_3.b = 8
                    char* var_60
                    sub_48a560(&result_4, sub_48a9d0(&var_60, "%0.0f"))
                    var_8_3.b = 9
                    
                    if (data_aca1f4 != 0)
                        char* eax_25 = var_60
                        
                        if (eax_25 != 0 && *eax_25 != 0)
                            char* eax_26 = sub_48a080(&var_60)
                            int32_t temp3_1 = *(eax_26 + 4)
                            *(eax_26 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_4984f0(eax_26, *(eax_26 + 0xc) + 0x10)
                                var_60 = &data_5b2591
                else
                    var_8_3.b = 6
                    char* var_5c
                    sub_48a560(&result_4, sub_48a9d0(&var_5c, "%0.1f"))
                    var_8_3.b = 7
                    
                    if (data_aca1f4 != 0)
                        char* eax_22 = var_5c
                        
                        if (eax_22 != 0 && *eax_22 != 0)
                            char* eax_23 = sub_48a080(&var_5c)
                            int32_t temp4_1 = *(eax_23 + 4)
                            *(eax_23 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
                                var_5c = &data_5b2591
                
                float xmm0_12[0x2] = var_1c_2
                var_8_3.b = 5
                var_dc.q = _mm_cvtps_pd(xmm0_12)
                
                if (100f f<= xmm0_12)
                    var_8_3.b = 0xc
                    char* var_68
                    sub_48a560(&result_2, sub_48a9d0(&var_68, "%0.1f"))
                    var_8_3.b = 0xd
                    
                    if (data_aca1f4 != 0)
                        char* eax_31 = var_68
                        
                        if (eax_31 != 0 && *eax_31 != 0)
                            char* eax_32 = sub_48a080(&var_68)
                            int32_t temp5_1 = *(eax_32 + 4)
                            *(eax_32 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                                var_68 = &data_5b2591
                else
                    var_8_3.b = 0xa
                    char* const var_64
                    sub_48a560(&result_2, sub_48a9d0(&var_64, "%0.2f"))
                    var_8_3.b = 0xb
                    
                    if (data_aca1f4 != 0)
                        char* eax_28 = var_64
                        
                        if (eax_28 != 0 && *eax_28 != 0)
                            char* eax_29 = sub_48a080(&var_64)
                            int32_t temp6_1 = *(eax_29 + 4)
                            *(eax_29 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_4984f0(eax_29, *(eax_29 + 0xc) + 0x10)
                                var_64 = &data_5b2591
                
                float xmm0_14[0x2] = var_8c_1
                var_8_3.b = 5
                var_dc.q = _mm_cvtps_pd(xmm0_14)
                
                if (100f f<= xmm0_14)
                    var_8_3.b = 0x10
                    char* var_70
                    sub_48a560(&result_3, sub_48a9d0(&var_70, "%0.1f"))
                    var_8_3.b = 0x11
                    
                    if (data_aca1f4 != 0)
                        char* eax_37 = var_70
                        
                        if (eax_37 != 0 && *eax_37 != 0)
                            char* eax_38 = sub_48a080(&var_70)
                            int32_t temp7_1 = *(eax_38 + 4)
                            *(eax_38 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                sub_4984f0(eax_38, *(eax_38 + 0xc) + 0x10)
                                var_70 = &data_5b2591
                else
                    var_8_3.b = 0xe
                    char* const var_6c
                    sub_48a560(&result_3, sub_48a9d0(&var_6c, "%0.2f"))
                    var_8_3.b = 0xf
                    
                    if (data_aca1f4 != 0)
                        char* eax_34 = var_6c
                        
                        if (eax_34 != 0 && *eax_34 != 0)
                            char* eax_35 = sub_48a080(&var_6c)
                            int32_t temp8_1 = *(eax_35 + 4)
                            *(eax_35 + 4) -= 1
                            
                            if (temp8_1 == 1)
                                sub_4984f0(eax_35, *(eax_35 + 0xc) + 0x10)
                                var_6c = &data_5b2591
                
                float xmm0_16[0x2] = var_34_1
                var_8_3.b = 5
                var_dc.q = _mm_cvtps_pd(xmm0_16)
                
                if (10f f<= xmm0_16)
                    var_8_3.b = 0x14
                    char* var_78
                    sub_48a560(&result_10, sub_48a9d0(&var_78, "%0.0f"))
                    var_8_3.b = 0x15
                    
                    if (data_aca1f4 != 0)
                        char* eax_43 = var_78
                        
                        if (eax_43 != 0 && *eax_43 != 0)
                            char* eax_44 = sub_48a080(&var_78)
                            int32_t temp9_1 = *(eax_44 + 4)
                            *(eax_44 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                sub_4984f0(eax_44, *(eax_44 + 0xc) + 0x10)
                                var_78 = &data_5b2591
                else
                    var_8_3.b = 0x12
                    char* var_74
                    sub_48a560(&result_10, sub_48a9d0(&var_74, "%0.1f"))
                    var_8_3.b = 0x13
                    
                    if (data_aca1f4 != 0)
                        char* eax_40 = var_74
                        
                        if (eax_40 != 0 && *eax_40 != 0)
                            char* eax_41 = sub_48a080(&var_74)
                            int32_t temp10_1 = *(eax_41 + 4)
                            *(eax_41 + 4) -= 1
                            
                            if (temp10_1 == 1)
                                sub_4984f0(eax_41, *(eax_41 + 0xc) + 0x10)
                                var_74 = &data_5b2591
                
                var_8_3.b = 5
                void* eax_45 = data_1150b94
                float var_1c_3 = 0f
                int32_t ecx_33 = *(eax_45 + 0xbbaab0)
                
                if (ecx_33 != 1)
                    if (ecx_33 == 2 && *(eax_45 + 0xbbaab4) == esi_2)
                        var_1c_3 = 10f
                else if (*(eax_45 + 0xbbaab4) != esi_2)
                    var_1c_3 = 10f
                
                struct _EXCEPTION_REGISTRATION_RECORD** result_6 = result_4
                struct _EXCEPTION_REGISTRATION_RECORD** result_11 = &data_5b2591
                
                if (result_6 != 0)
                    result_11 = result_6
                
                int32_t var_58 = 0x3f800000
                int32_t var_4c_1 = 0
                int32_t var_40_1 = 0
                int32_t var_54_1 = 0
                int32_t var_48_1 = 0x3f800000
                int32_t var_3c_1 = 0
                int32_t var_50_1 = 0x40400000
                float var_44_1 = var_24_1
                int32_t var_38_1 = 0x3f800000
                void var_c0
                void* var_dc_1 = &var_c0
                sub_4e8fc0(sub_41da40(&var_58, &data_5d3570, &var_c0, &var_58), &var_c0, result_11, 
                    data_15166dc, 0xffffffff, 0xffffffff, 0, 1)
                char* const result_7 = result_2
                char* const result_12 = &data_5b2591
                var_58 = 0x3f800000
                
                if (result_7 != 0)
                    result_12 = result_7
                
                int32_t var_4c_2 = 0
                int32_t var_40_2 = 0
                int32_t var_54_2 = 0
                int32_t var_48_2 = 0x3f800000
                int32_t var_3c_2 = 0
                int32_t var_50_2 = 0x422c0000
                float var_44_2 = var_24_1
                int32_t var_38_2 = 0x3f800000
                void* var_dc_2 = &var_c0
                sub_4e8fc0(sub_41da40(&var_58, &data_5d3570, &var_c0, &var_58), &var_c0, result_12, 
                    data_15166dc, 0xffffffff, 0xffffffff, 0, 1)
                char* const result_8 = result_3
                char* const result_13 = &data_5b2591
                var_58 = 0x3f800000
                
                if (result_8 != 0)
                    result_13 = result_8
                
                int32_t var_4c_3 = 0
                int32_t var_40_3 = 0
                int32_t var_54_3 = 0
                int32_t var_48_3 = 0x3f800000
                int32_t var_3c_3 = 0
                int32_t var_50_3 = 0x42a60000
                float var_44_3 = var_24_1
                int32_t var_38_3 = 0x3f800000
                void* var_dc_3 = &var_c0
                sub_4e8fc0(sub_41da40(&var_58, &data_5d3570, &var_c0, &var_58), &var_c0, result_13, 
                    data_15166dc, 0xffffffff, 0xffffffff, 0, 1)
                char* const result_16 = result_10
                var_58 = 0x3f800000
                char* const result_17 = &data_5b2591
                int32_t var_4c_4 = 0
                int32_t var_40_4 = 0
                
                if (result_16 != 0)
                    result_17 = result_16
                
                int32_t var_54_4 = 0
                int32_t var_48_4 = 0x3f800000
                int32_t var_3c_4 = 0
                int32_t var_50_4 = 0x42f60000
                float var_44_4 = var_24_1
                int32_t var_38_4 = 0x3f800000
                void* var_dc_4 = &var_c0
                sub_4e8fc0(sub_41da40(&var_58, &data_5d3570, &var_c0, &var_58), &var_c0, result_17, 
                    data_15166dc, 0xffffffff, 0xffffffff, 0, 1)
                float xmm0_23 = var_24_1 + 15f
                int32_t var_d8_13 = *(ebx_2 + (eax_15 << 2) + 0xb9b688)
                int32_t var_dc_5 = *(ebx_2 + (eax_15 << 2) + 0xb9b684)
                float var_84_3 = var_24_1
                var_88 = var_1c_3 + 163f
                int32_t var_80_3 = 0x43c80000
                float var_7c_3 = xmm0_23
                var_8_3.b = 0x16
                int32_t var_d8_14 = 0x3f800000
                var_dc = 1
                struct _EXCEPTION_REGISTRATION_RECORD* result_1
                result = sub_4eaa00(sub_48a9d0(&result_1, "%s%s"), &var_88, &result_1, data_15166dc, 
                    0xffffffff, 0, 1)
                var_24_1 = xmm0_23
                var_8_3.b = 0x17
                
                if (data_aca1f4 != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_48a080(&result_1)
                        int32_t temp11_1 = result[1]
                        result[1] -= 1
                        
                        if (temp11_1 == 1)
                            result = sub_4984f0(result, &result[3][2])
                            result_1 = &data_5b2591
                
                var_8_3.b = 0x18
                
                if (data_aca1f4 != 0 && result_16 != 0 && *result_16 != 0)
                    result = sub_48a080(&result_10)
                    int32_t temp12_1 = result[1]
                    result[1] -= 1
                    
                    if (temp12_1 == 1)
                        result = sub_4984f0(result, &result[3][2])
                        result_10 = &data_5b2591
                
                var_8_3.b = 0x19
                
                if (data_aca1f4 != 0)
                    result = result_3
                    
                    if (result != 0 && *result != 0)
                        result = sub_48a080(&result_3)
                        int32_t temp13_1 = result[1]
                        result[1] -= 1
                        
                        if (temp13_1 == 1)
                            result = sub_4984f0(result, &result[3][2])
                            result_3 = &data_5b2591
                
                var_8_3.b = 0x1a
                
                if (data_aca1f4 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_48a080(&result_2)
                        int32_t temp14_1 = result[1]
                        result[1] -= 1
                        
                        if (temp14_1 == 1)
                            result = sub_4984f0(result, &result[3][2])
                            result_2 = &data_5b2591
                
                var_8_3.b = 0x1b
                
                if (data_aca1f4 != 0)
                    result = result_4
                    
                    if (result != 0 && *result != 0)
                        result = sub_48a080(&result_4)
                        int32_t temp15_1 = result[1]
                        result[1] -= 1
                        
                        if (temp15_1 == 1)
                            result = sub_4984f0(result, &result[3][2])
                            result_4 = &data_5b2591
                
                var_8_3.b = 1
                result_15 = &result_9[1]
                result_9 = result_15
                
                if (result_15 s>= esi_1)
                    break
                
                continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
