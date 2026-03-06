// 函数名称: sub_545670
// 虚拟地址: 0x545670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_545670()
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a32bc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_ac = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_1516810 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        int32_t* var_b0_1 = &data_1516810
        __Init_thread_header()
        
        if (data_1516810 == 0xffffffff)
            int32_t var_8_1 = 0
            int32_t* var_b0_2 = &data_1516810
            data_1516814 = sub_4d0b50("sys/DebugFont.font", 0x12)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer()
    
    void* eax_6 = sub_4fd250(data_1151b54)
    int32_t var_94
    
    if (eax_6 != 0)
        int128_t var_84
        
        if (data_1151aec != 1)
            float xmm1_2 = *(eax_6 + 0x40)
            float xmm3_1 = *(eax_6 + 0x44)
            float var_7c_1 = xmm1_2 - 3f
            float var_74_1 = xmm1_2 + 3f
            float var_78_1 = xmm3_1 - 3f
            float var_70_2 = xmm3_1 + 3f
            sub_4c0650(&var_84:8, &data_5d2334, 1f)
        else
            int64_t xmm0_1 = _mm_unpacklo_ps(0xbd4ccccd, 0xbd4ccccd)
            int64_t xmm1_1 = _mm_unpacklo_ps(0x3d4ccccd, 0x3d4ccccd)
            var_94 = 0xbd4ccccd
            int32_t var_4c_1 = 0xbd4ccccd
            int32_t var_70_1 = 0x3d4ccccd
            int32_t var_40_1 = 0x3d4ccccd
            var_84 = xmm0_1.o
            void* var_b0_3 = eax_6
            int32_t var_74
            var_74.q = xmm1_1
            sub_490620(&var_84, eax_6 + 0x2c)
    
    if (data_1151aec == 1)
        sub_4c1630()
    
    float xmm0_8 = data_1151b84
    float xmm1_4 = data_620d84
    char* const edi = &data_5b2591
    xmm0_8 - xmm1_4
    int32_t var_64 = 0
    eax_6:1.b = (xmm0_8 == xmm1_4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, xmm1_4) ? 1 : 0) << 2
        | (xmm0_8 < xmm1_4 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    char* const var_b4
    void var_90
    int32_t var_60
    int64_t var_54
    int64_t var_48
    char* const var_18
    
    if (p_1)
        var_b4 = _mm_cvtps_pd(xmm0_8 / xmm1_4)
        char const* const var_b8_1 = "Time dilation %g"
        sub_48a9d0(&var_18, "Time dilation %g")
        int32_t var_8_3 = 1
        char* const eax_7 = var_18
        var_60 = 0x3f800000
        
        if (eax_7 != 0)
            edi = eax_7
        
        var_54.d = 0
        var_48.d = 0
        int32_t var_5c_1 = 0
        var_54:4.d = 0x3f800000
        var_48:4.d = 0
        int32_t var_58_1 = 0x43fa0000
        int32_t var_4c_2 = 0x40400000
        int32_t var_40_2 = 0x3f800000
        int32_t var_b8_2 = 1
        int32_t var_bc_2 = 0
        int32_t var_c0_2 = 0xffffffff
        int32_t var_c4_1 = 0xffffffff
        sub_4e8fc0(sub_41da40(&var_60, &data_5d3570, &var_90, &var_60), &var_90, edi, data_1516814, 
            0xffffffff, 0xffffffff, 0, 1)
        int32_t var_8_4 = 2
        
        if (data_aca1f4 != 0)
            char* eax_10 = var_18
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_48a080(&var_18)
                int32_t temp0_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
                    var_18 = &data_5b2591
        
        int32_t var_8_5 = 0xffffffff
    
    void* edx_19 = data_1151b48
    char* const var_2c
    char* const result_2
    char* result_3
    char* const var_1c
    
    if (edx_19 != 0)
        if (*(edx_19 + 4) == 2)
            void* var_b0_4 = edx_19
            sub_4d3870(&var_1c, edx_19)
            int32_t var_8_6 = 3
            char* const ecx_10 = &data_5b2591
            char* const eax_12 = var_1c
            
            if (eax_12 != 0)
                ecx_10 = eax_12
            
            var_b4 = ecx_10
            void* const var_b8_3 = &data_5d8f9c
            sub_48a9d0(&var_18, &data_5d8f9c)
            var_8_6.b = 4
            char* const ecx_11 = &data_5b2591
            char* const eax_13 = var_18
            
            if (eax_13 != 0)
                ecx_11 = eax_13
            
            int32_t var_c0_3 = 1
            int32_t var_c4_2 = 0xffffffff
            sub_4e9220(eax_13, data_1516814, ecx_11, 0xffffffff, 1)
            var_8_6.b = 5
            
            if (data_aca1f4 != 0)
                char* const eax_14 = var_18
                
                if (eax_14 != 0 && *eax_14 != 0)
                    char* eax_15 = sub_48a080(&var_18)
                    int32_t temp1_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
                        var_18 = &data_5b2591
            
            var_8_6.b = 3
            int32_t* eax_16 = sub_4d4460(data_1151b48)
            void* ecx_15 = *eax_16
            
            if (ecx_15 != 0)
                int32_t edx_8 = *(ecx_15 + 0x60)
                
                if (edx_8 s> 0)
                    var_18 = &data_5b2591
                    var_8_6.b = 6
                    int32_t eax_17 = data_1151b74
                    char* result_4
                    
                    if (eax_17 == 0xffffffff)
                        char const* const var_b0_6 = "not playing animation"
                        char** var_b0_7 = sub_48a9d0(&result_3, "not playing animation")
                        var_8_6.b = 9
                        result_4 = sub_48a560(&var_18)
                        var_8_6.b = 0xa
                        
                        if (data_aca1f4 != 0)
                            result_4 = result_3
                            
                            if (result_4 != 0 && *result_4 != 0)
                                result_4 = sub_48a080(&result_3)
                                int32_t temp5_1 = *(result_4 + 4)
                                *(result_4 + 4) -= 1
                                
                                if (temp5_1 == 1)
                                    result_4 = sub_4984f0(result_4, *(result_4 + 0xc) + 0x10)
                                    result_3 = &data_5b2591
                    else
                        if (eax_17 s>= edx_8)
                            char const* const var_b0_13 = "ControlsHolodeckDrawOverlay"
                            var_b4 = 0x2d8
                            char const* const var_b8_10 =
                                "d:\ax\trunk\ax2017\engine\editor\editorcontrols.cpp"
                            sub_489550(eax_17, &data_5b2591, 
                                "gControlsData.structureAnimClipIndex < "
                            "defStructure->pStructureImportData->numAnimClips", 
                                "d:\ax\trunk\ax2017\engine\editor\editorcontrols.cpp", 0x2d8, 
                                "ControlsHolodeckDrawOverlay")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        int32_t eax_18 = eax_17 * 3
                        var_2c = *(ecx_15 + 0x68)
                        void* eax_19 = sub_4dd900(data_1151b70)
                        void* eax_20
                        
                        if (eax_19 != 0)
                            eax_20 = *(eax_19 + 0x2c)
                        
                        int32_t edx_9
                        float xmm0_13[0x2]
                        
                        if (eax_19 == 0 || eax_20 == 0 || *(eax_20 + 0xc) == 0)
                            edx_9 = data_1151b74
                            xmm0_13 = (zx.o(0)).q
                        else
                            int32_t* eax_21 = *(eax_20 + 4)
                            
                            if (eax_21 == 0)
                                char const* const var_b0_14 = "XList<struct AnimSet *>::GetHead"
                                var_b4 = 0x53
                                char const* const var_b8_11 = "d:\ax\trunk\ax2017\engine\xlist.h"
                                sub_489550(eax_21, &data_5b2591, "mpHead != NULL", 
                                    "d:\ax\trunk\ax2017\engine\xlist.h", 0x53, 
                                    "XList<struct AnimSet *>::GetHead")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* eax_22 = *eax_21
                            int32_t* eax_23 = sub_4d4460(data_1151b48)
                            edx_9 = data_1151b74
                            void* ecx_19 = *eax_23
                            
                            if (edx_9 s>= *(ecx_19 + 0x60))
                                char const* const var_b0_15 = "GetAnimationTime"
                                var_b4 = 0x2a2
                                char const* const var_b8_12 =
                                    "d:\ax\trunk\ax2017\engine\editor\editorcontrols.cpp"
                                sub_489550(eax_23, &data_5b2591, 
                                    "gControlsData.structureAnimClipIndex < "
                                "defStructure->pStructureImportData->numAnimClips", 
                                    "d:\ax\trunk\ax2017\engine\editor\editorcontrols.cpp", 0x2a2, 
                                    "GetAnimationTime")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            xmm0_13 =
                                _mm_cvtepi32_ps(zx.o(**(*(ecx_19 + 0x68) + edx_9 * 0x18 + 0x10) - 1))
                                f* *(eax_22 + 4)
                        
                        void* eax_29 = *eax_16
                        var_b4 = _mm_cvtps_pd(xmm0_13)
                        int32_t var_b8_4 = *(eax_29 + 0x60)
                        int32_t var_bc_4 = edx_9 + 1
                        char* const eax_31 = var_2c
                        int32_t var_c0_4 = *(eax_31 + (eax_18 << 3) + 0xc)
                        int32_t var_c4_3 = *(eax_31 + (eax_18 << 3) + 8)
                        char const* const var_c8_2 = "clip %s (%d of %d) frame %f"
                        char** var_b0_5 = sub_48a9d0(&result_2, "clip %s (%d of %d) frame %f")
                        var_8_6.b = 7
                        result_4 = sub_48a560(&var_18)
                        var_8_6.b = 8
                        
                        if (data_aca1f4 != 0)
                            result_4 = result_2
                            
                            if (result_4 != 0 && *result_4 != 0)
                                result_4 = sub_48a080(&result_2)
                                int32_t temp10_1 = *(result_4 + 4)
                                *(result_4 + 4) -= 1
                                
                                if (temp10_1 == 1)
                                    result_4 = sub_4984f0(result_4, *(result_4 + 0xc) + 0x10)
                                    result_2 = &data_5b2591
                    
                    var_8_6.b = 6
                    char* const ecx_28 = &data_5b2591
                    char* const esi_1 = var_18
                    
                    if (esi_1 != 0)
                        ecx_28 = esi_1
                    
                    int32_t var_b0_8 = 1
                    var_b4 = 0xffffffff
                    sub_4e9220(result_4, data_1516814, ecx_28, 0xffffffff, 1)
                    var_8_6.b = 0xb
                    
                    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                        char* eax_34 = sub_48a080(&var_18)
                        int32_t temp8_1 = *(eax_34 + 4)
                        *(eax_34 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_4984f0(eax_34, *(eax_34 + 0xc) + 0x10)
                            var_18 = &data_5b2591
            
            int32_t var_8_7 = 0xc
            
            if (data_aca1f4 != 0)
                char* eax_35 = var_1c
                
                if (eax_35 != 0 && *eax_35 != 0)
                    char* eax_36 = sub_48a080(&var_1c)
                    int32_t temp3_1 = *(eax_36 + 4)
                    *(eax_36 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(eax_36, *(eax_36 + 0xc) + 0x10)
                        var_1c = &data_5b2591
            
            int32_t var_8_8 = 0xffffffff
            edx_19 = data_1151b48
        
        if (edx_19 != 0 && *(edx_19 + 4) == 0x19)
            void* var_b0_9 = edx_19
            sub_4d3870(&var_18, edx_19)
            int32_t var_8_9 = 0xd
            char* const ecx_34 = &data_5b2591
            char* const eax_37 = var_18
            
            if (eax_37 != 0)
                ecx_34 = eax_37
            
            var_b4 = ecx_34
            void* const var_b8_5 = &data_5d8f9c
            sub_48a9d0(&var_1c, &data_5d8f9c)
            var_8_9.b = 0xe
            char* const ecx_35 = &data_5b2591
            char* const eax_38 = var_1c
            
            if (eax_38 != 0)
                ecx_35 = eax_38
            
            int32_t var_c0_5 = 1
            int32_t var_c4_4 = 0xffffffff
            sub_4e9220(eax_38, data_1516814, ecx_35, 0xffffffff, 1)
            var_8_9.b = 0xf
            
            if (data_aca1f4 != 0)
                char* const eax_39 = var_1c
                
                if (eax_39 != 0 && *eax_39 != 0)
                    char* eax_40 = sub_48a080(&var_1c)
                    int32_t temp2_1 = *(eax_40 + 4)
                    *(eax_40 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(eax_40, *(eax_40 + 0xc) + 0x10)
                        var_1c = &data_5b2591
            
            int32_t var_8_10 = 0x10
            
            if (data_aca1f4 != 0)
                char* const eax_41 = var_18
                
                if (eax_41 != 0 && *eax_41 != 0)
                    char* eax_42 = sub_48a080(&var_18)
                    int32_t temp4_1 = *(eax_42 + 4)
                    *(eax_42 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_4984f0(eax_42, *(eax_42 + 0xc) + 0x10)
                        var_18 = &data_5b2591
            
            int32_t var_8_11 = 0xffffffff
    
    char* result = sub_4f9740(data_1151b4c)
    
    if (result != 0)
        int32_t* ecx_41 = *result
        
        if (ecx_41[1] != 0x18)
            char const* const var_b0_16 = "FlanimGetDef"
            var_b4 = 0x2ec
            char const* const var_b8_13 = "d:\ax\trunk\ax2017\engine\assetutils.cpp"
            sub_489550(result, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
                "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x2ec, "FlanimGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t** eax_43 = sub_4981f0(ecx_41)
        char* const edi_1 = &data_5b2591
        int32_t** var_28_2 = eax_43
        var_2c = &data_5b2591
        void* ecx_42 = nullptr
        int32_t var_8_12 = 0x11
        char* const var_34_2 = 0xffffffff
        var_18 = nullptr
        
        if (eax_43[2] s> 0)
            var_1c = nullptr
            
            while (true)
                int32_t* eax_44 = *eax_43
                void var_a0
                int32_t var_6c
                int32_t var_68
                
                if (sub_4fcbf0(eax_44, *(eax_44 + ecx_42), *result, &var_68, &var_6c, &var_a0) != 0
                        && *(result + 0xc) == var_68 && *(result + 0x10) == var_6c)
                    int32_t var_b0_11 = *(eax_44 + var_1c)
                    sub_48a5e0(&var_2c)
                    edi_1 = var_2c
                    var_34_2 = var_18
                    break
                
                void* eax_49 = &var_18[1]
                ecx_42 = &var_1c[0x18]
                var_18 = eax_49
                var_1c = ecx_42
                
                if (eax_49 s>= var_28_2[2])
                    break
                
                eax_43 = var_28_2
        
        void* edx_27 = *result
        void* var_b0_12 = edx_27
        sub_4d3870(&result_2, edx_27)
        var_8_12.b = 0x12
        char* const result_5 = result_2
        char* const edx_28 = &data_5b2591
        char* const result_8 = &data_5b2591
        
        if (edi_1 != 0)
            edx_28 = edi_1
        
        if (result_5 != 0)
            result_8 = result_5
        
        var_b4 = var_28_2[2]
        void* var_b8_7 = &var_34_2[1]
        char* const var_bc_6 = edx_28
        char* const result_11 = result_8
        char const* const var_c4_5 = "%s -- action %s (%d of %d)"
        sub_48a9d0(&result_3, "%s -- action %s (%d of %d)")
        var_8_12.b = 0x13
        char* result_9 = &data_5b2591
        char* result_6 = result_3
        var_60 = 0x3f800000
        
        if (result_6 != 0)
            result_9 = result_6
        
        var_54.d = 0
        var_48.d = 0
        int32_t var_5c_2 = 0
        var_54:4.d = 0x3f800000
        var_48:4.d = 0
        int32_t var_58_2 = 0x41200000
        int32_t var_4c_3 = 0x40400000
        int32_t var_40_3 = 0x3f800000
        int32_t var_b8_8 = 1
        int32_t var_bc_7 = 0
        int32_t var_c0_6 = 0xffffffff
        int32_t var_c4_6 = 0xffffffff
        sub_4e8fc0(sub_41da40(&var_60, &data_5d3570, &var_90, &var_60), &var_90, result_9, 
            data_1516814, 0xffffffff, 0xffffffff, 0, 1)
        int32_t var_9c
        sub_4fa6b0(&var_9c, *(result + 0x10), *(result + 0xc), *(result + 4), &var_9c)
        
        if (result[0x8d] == 0)
            var_64 = var_94
        
        int64_t var_b4_1 =
            _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(result + 0x10) - 1)) f* *(result + 0x14) f/ data_620d84)
        var_bc_7.q = _mm_cvtps_pd(var_64)
        int32_t var_c0_7 = var_9c
        char const* const var_c4_7 = "Frame %d %0.3f FPS %0.1f"
        char* result_1
        sub_48a9d0(&result_1, "Frame %d %0.3f FPS %0.1f")
        var_8_12.b = 0x14
        char* result_10 = &data_5b2591
        char* result_7 = result_1
        var_60 = 0x3f800000
        
        if (result_7 != 0)
            result_10 = result_7
        
        var_54.d = 0
        var_48.d = 0
        int32_t var_5c_3 = 0
        var_54:4.d = 0x3f800000
        var_48:4.d = 0
        int32_t var_58_3 = 0x41200000
        int32_t var_4c_4 = 0x41a00000
        int32_t var_40_4 = 0x3f800000
        int32_t var_b8_9 = 1
        int32_t var_bc_8 = 0
        int32_t var_c0_8 = 0xffffffff
        int32_t var_c4_8 = 0xffffffff
        result = sub_4e8fc0(sub_41da40(&var_60, &data_5d3570, &var_90, &var_60), &var_90, result_10, 
            data_1516814, 0xffffffff, 0xffffffff, 0, 1)
        var_8_12.b = 0x15
        
        if (data_aca1f4 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_48a080(&result_1)
                int32_t temp6_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp6_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5b2591
        
        var_8_12.b = 0x16
        
        if (data_aca1f4 != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_48a080(&result_3)
                int32_t temp7_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp7_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                    result_3 = &data_5b2591
        
        var_8_12.b = 0x17
        
        if (data_aca1f4 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_48a080(&result_2)
                int32_t temp9_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp9_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                    result_2 = &data_5b2591
        
        int32_t var_8_13 = 0x18
        
        if (data_aca1f4 != 0 && edi_1 != 0 && *edi_1 != 0)
            result = sub_48a080(&var_2c)
            int32_t temp11_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp11_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
        
        int32_t var_8_14 = 0xffffffff
    
    if (data_1151aec == 1)
        result = data_114ec70
        __builtin_memcpy(&result[0xa4], 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        *(result + 0x25c) = 0
        sub_496580()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
