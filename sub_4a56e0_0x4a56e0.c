// 函数名称: sub_4a56e0
// 虚拟地址: 0x4a56e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4a56e0(void* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f3db
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_254 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = *(arg1 + 0xed0)
    
    if (result != 0)
        if (result[1] != 2)
            sub_489550(result, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                "d:\ax\trunk\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_4 = *sub_4981f0(result)
        float xmm2_1[0x4] = *(eax_4 + 0x40)
        int64_t xmm0_1 = *(eax_4 + 0x50)
        float xmm3_1 = xmm2_1[0]
        float xmm6_1 = xmm0_1.d
        float xmm7_1 = xmm0_1:4.d
        float xmm0_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
        float xmm1_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
        float xmm0_5 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
        float xmm6_2 = xmm6_1 - xmm1_2
        float xmm5_3 = (xmm1_2 + xmm6_1) * 0.5f
        float xmm7_2 = xmm7_1 - xmm0_5
        int128_t xmm0_6 = data_63c264
        int64_t var_108 = (xmm3_1 + xmm0_3) * 0.5f
        int128_t var_70 = xmm0_6
        int32_t xmm0_7 = (data_63c274).d
        int32_t* result_1 = (xmm0_5 + xmm7_1) * 0.5f
        int64_t var_f0
        float xmm0_30
        
        if (xmm7_2 <= xmm6_2)
            float xmm0_31 = sub_41f120(1.57079637f)
            int32_t var_e4_2 = sub_41f100(1.57079637f)
            float xmm1_10[0x4] = xmm0_31 * 0f
            float var_e8_2 = xmm0_31
            var_f0 = _mm_unpacklo_ps(xmm1_10, xmm1_10)
            var_70 = var_f0.o
            xmm0_30 = xmm6_2
        else
            float xmm0_8 = sub_41f120(-0.785398185f)
            float xmm0_9 = xmm0_8 * 0f
            float xmm0_10 = sub_41f100(-0.785398185f)
            float xmm0_11 = sub_41f120(1.57079637f)
            float xmm0_12 = sub_41f100(1.57079637f)
            float xmm3_7 = xmm0_11 * 0f
            float xmm1_4 = xmm0_11 * xmm0_9
            float xmm5_5 = xmm3_7 * xmm0_8
            float xmm4_5 = xmm3_7 * xmm0_9
            float xmm2_3 = xmm0_10 * xmm3_7
            float var_e4_1 = xmm0_12 * xmm0_10 - xmm5_5 - xmm4_5 - xmm1_4
            float xmm6_4 = xmm0_12 * xmm0_9
            var_f0.d = xmm0_12 * xmm0_8 + xmm2_3 + xmm1_4 - xmm4_5
            var_f0:4.d = xmm6_4 + xmm2_3 + xmm4_5 - xmm0_11 * xmm0_8
            float var_e8_1 = xmm0_10 * xmm0_11 + xmm6_4 + xmm5_5 - xmm4_5
            var_70 = var_f0.o
            xmm0_30 = xmm7_2
        
        float xmm3_8[0x4] = *(arg1 + 0x10a0)
        float xmm1_12 = xmm3_8[0]
        float xmm0_36[0x4] = _mm_shuffle_ps(xmm3_8, xmm3_8, 0xaa)
        float xmm2_5[0x4] = _mm_shuffle_ps(xmm3_8, xmm3_8, 0xff)
        float var_140[0x4] = xmm0_36
        float xmm0_38[0x4] = _mm_shuffle_ps(xmm3_8, xmm3_8, 0x55)
        float var_50[0x4] = xmm2_5
        float var_cc = (xmm0_38 f+ xmm2_5) * 0.5f
        float var_258_1 = var_cc
        float var_25c_1 = (xmm1_12 f+ xmm0_36) * 0.5f
        int64_t var_38
        int64_t* eax_6 = sub_4a35c0(&var_38)
        int64_t xmm0_41 = *eax_6
        float eax_7 = eax_6[1].d
        int32_t var_258_2 = 0
        float xmm1_16 = var_140.d f- *(arg1 + 0x10a0)
        int32_t var_25c_2 = 0
        var_cc = var_50.d f- xmm0_38[0]
        int64_t* eax_8 = sub_4a35c0(&var_140)
        float var_258_3 = var_cc
        float var_25c_3 = xmm1_16
        int32_t var_30_2 = eax_8[1].d
        var_38 = *eax_8
        int64_t* eax_10 = sub_4a35c0(&var_f0)
        var_50[1].q = *eax_10
        float xmm0_47 = var_50[1] f- var_38.d
        float xmm1_18 = var_50[2] f- var_38:4.d
        var_50[3] = eax_10[1].d
        float xmm1_20 = (xmm1_18 ^ (data_60cca0.o).d) / xmm0_30
        var_50[2].q = xmm0_47 / (xmm0_3 f- xmm2_1)
        int32_t eax_13 = *(arg1 + 0xe10)
        var_cc = *(data_114e818 + 0x2c)
        float xmm0_51 = *(arg1 + eax_13 * 0x48 + 0xd28) * 0.5f
        float xmm0_52 = sub_41f120(xmm0_51)
        float xmm0_53 = xmm0_52 * 0f
        int32_t edx_1
        float xmm0_55
        edx_1, xmm0_55 = sub_41f100(xmm0_51)
        float xmm7_4 = var_70:4.d
        bool cond:2_1 = *(arg1 + 0xe84) != 3
        float xmm4_6 = var_70:8.d
        float xmm5_6 = var_70:0xc.d
        float xmm1_22 = xmm7_4 * xmm0_53
        float xmm0_57 = xmm4_6 * xmm0_53
        char* var_dc = xmm0_57
        float xmm1_24 = xmm5_6 * xmm0_53
        float xmm2_10 = xmm0_55 f* xmm0_7 - xmm1_22 - xmm0_57 - xmm0_52 * xmm5_6
        float var_e4_3 = xmm2_10
        float xmm2_12 = xmm0_7 * xmm0_53
        float xmm0_66 = xmm0_55 * xmm7_4 + xmm2_12 + xmm0_52 * xmm4_6 - xmm1_24
        var_f0.d = xmm0_66
        float xmm6_11 = xmm0_55 * xmm4_6 + xmm2_12 + xmm1_24 - xmm0_52 * xmm7_4
        var_f0:4.d = xmm6_11
        float xmm1_29 = xmm0_52 f* xmm0_7 + xmm0_55 * xmm5_6 + xmm1_22 f- var_dc
        float var_e8_3 = xmm1_29
        var_70 = var_f0.o
        int128_t var_90
        int128_t* eax_17
        int128_t var_180
        int32_t var_60_1
        
        if (cond:2_1)
            int64_t xmm2_13 = xmm1_20
            uint128_t xmm1_34 = zx.o(var_50[2].q)
            int32_t var_30_4
            int64_t xmm1_35
            
            if (xmm7_2 <= xmm6_2)
                var_30_4 = 0x3f800000
                xmm1_35 = _mm_unpacklo_ps(xmm1_34, xmm2_13)
            else
                var_30_4 = xmm2_13
                xmm1_35 = _mm_unpacklo_ps(xmm1_34, 0x3f800000)
            
            var_50[1].q = xmm1_35
            float xmm0_74 = var_50[1] f* var_108.d
            float xmm2_15 = var_50[2] * xmm5_3
            var_50[3] = var_30_4
            float xmm0_76 = xmm2_10 * xmm2_10
            float xmm7_6 = var_50[3] f* result_1
            float xmm0_78 = xmm6_11 * xmm6_11
            float xmm5_8 = xmm0_66 * xmm6_11
            float xmm0_80 = xmm1_29 * xmm1_29
            float xmm1_37 = xmm0_66 * xmm0_66
            float xmm3_17 = xmm2_10 * xmm1_29
            float xmm6_14 = xmm2_15 + xmm2_15
            var_dc = xmm2_15
            float xmm4_12 = xmm2_10 * xmm6_11
            result_1 = xmm0_66 * xmm1_29
            float xmm2_19 = xmm7_6 + xmm7_6
            float xmm0_88 = xmm0_74 + xmm0_74
            float xmm0_90 = xmm0_76 - xmm1_37
            float xmm1_39 = xmm6_11 * xmm1_29
            float xmm1_41 = xmm0_66 * xmm2_10
            float xmm0_97 = (result_1 - xmm4_12) * xmm0_88 + (xmm1_41 + xmm1_39) * xmm6_14
            int64_t xmm7_15 = _mm_unpacklo_ps(
                (xmm1_37 + xmm0_76 - xmm0_78 - xmm0_80) * xmm0_74 + (xmm5_8 - xmm3_17) * xmm6_14
                    + (xmm4_12 f+ result_1) * xmm2_19 f+ xmm0_41.d, 
                (xmm0_90 + xmm0_78 - xmm0_80) f* var_dc + (xmm5_8 + xmm3_17) * xmm0_88
                + (xmm1_39 - xmm1_41) * xmm2_19 f+ xmm0_41:4.d)
            var_60_1:4.q = xmm7_15
            var_60_1 = xmm0_97 + (xmm0_90 - xmm0_78 + xmm0_80) * xmm7_6 + eax_7
            void var_1c0
            int128_t* eax_21 = sub_4be7c0(&var_1c0, edx_1, &var_50[1], &var_1c0)
            var_180 = *eax_21
            int128_t var_170_1 = eax_21[1]
            int128_t var_160_1 = eax_21[2]
            int128_t var_150_1 = eax_21[3]
            void var_200
            int128_t* eax_23 = sub_482820(&var_200, edx_1, &var_70, &var_200)
            var_90 = *eax_23
            int128_t var_80_1 = eax_23[1]
            var_70 = eax_23[2]
            int128_t var_60_2 = eax_23[3]
            void var_240
            eax_17 = sub_497aa0(&var_240)
        else
            float xmm0_71 = __minss_xmmss_memss((var_50[2].q).d, xmm1_20)
            var_70.d = xmm0_71
            var_60_1 = result_1 f* xmm0_71 + eax_7
            var_60_1:4.q =
                _mm_unpacklo_ps(var_108.d f* xmm0_71 f+ xmm0_41.d, xmm5_3 * xmm0_71 f+ xmm0_41:4.d)
            eax_17 = sub_482820(&var_180, edx_1, &var_70, &var_180)
        bool cond:3_1 = *(arg1 + 0xf20) == 0
        var_90 = *eax_17
        int128_t var_80_2 = eax_17[1]
        var_70 = eax_17[2]
        int128_t var_60_3 = eax_17[3]
        
        if (cond:3_1)
            data_aca750.d = 0
        else
            data_aca750.d = *(arg1 + 0xe04)
        
        char* ecx_5 = *sub_4bc2f0(arg1 + 0x66c, var_cc, &var_dc)
        var_f0.d = _mm_cvtepi32_ps(zx.o(ecx_5.b)) / 255f
        float xmm0_117 = _mm_cvtepi32_ps(zx.o((ecx_5 u>> 8).b))
        bool cond:5_1 = *(arg1 + 0xf20) == 0
        var_f0:4.d = xmm0_117 / 255f
        float xmm0_120 = _mm_cvtepi32_ps(zx.o((ecx_5 u>> 0x10).b))
        void* eax_32 = data_114e818
        float var_e8_4 = xmm0_120 / 255f
        float var_e4_4 = _mm_cvtepi32_ps(zx.o(ecx_5 u>> 0x18)) / 255f f* *(arg1 + 0x1080)
        float xmm0_126 = *(eax_32 + 0x2c)
        
        if (not(cond:5_1))
            xmm0_126 = xmm0_126 f- *(arg1 + 0xe04)
        
        bool cond:4_1 = data_114e7d9 == 0
        data_aca750:4 = xmm0_126
        float var_b0_1[0x4] = data_aca6a8
        
        if (cond:4_1)
            sub_489550(eax_32, &data_5b2591, "gDraw3DData.submittingRenderItems", 
                "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x2ff, "Draw3DSetMaterialColor")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* edi_1 = nullptr
        int32_t* var_b8_5 = nullptr
        data_aca6a8 = var_f0.o
        int32_t* eax_33 = *(arg1 + 0xf18)
        
        if (eax_33 != 0)
            if (eax_33[1] != 0x1d)
                edi_1 = eax_33
                var_b8_5 = eax_33
            else
                float* var_258_9 = &var_cc
                sub_4889e0(&result_1, eax_33, 0x1d)
                int32_t var_14_1 = 0
                int32_t var_14_2 = 0xffffffff
                edi_1 = sub_50bf20(var_cc)
                int32_t* result_3 = result_1
                var_b8_5 = edi_1
                
                if (result_3 != 0)
                    result_3[7] -= 1
                    result_1 = nullptr
        
        char* ecx_9 = *(arg1 + 0xe98)
        int32_t edx_2 = *(arg1 + 0xed8)
        int32_t eax_35 = *(arg1 + 0xee0)
        var_dc = ecx_9
        var_108.d = ecx_9
        var_108:4.d = eax_35
        int128_t xmm0_129
        
        if (ecx_9 != 0)
            if (*(ecx_9 + 4) != 3)
                sub_489550(eax_35, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                    "d:\ax\trunk\ax2017\engine\texture.h", 0x86, "TextureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            float eax_37 = *sub_4981f0(ecx_9)
            var_cc = eax_37
            
            if (eax_37 != 0)
                int32_t* ecx_10 = *(eax_37 i+ 0x28)
                
                if (ecx_10 != 0)
                    int32_t* eax_38 = sub_48f5c0(ecx_10)
                    float edx_3 = var_cc
                    int32_t* ecx_11 = *eax_38
                    float xmm4_13 = float.s(*(edx_3 i+ 0x34))
                    int32_t eax_39 = *ecx_11
                    float xmm3_18 = float.s(*(edx_3 i+ 0x38))
                    int32_t eax_41 = ecx_11[1]
                    float xmm1_49 =
                        _mm_cvtpd_ps(float.d(eax_39) f+ *((eax_39 u>> 0x1f << 3) + &data_60cbc0))
                    int32_t eax_43 = *edx_3
                    float xmm2_25 =
                        _mm_cvtpd_ps(float.d(eax_41) f+ *((eax_41 u>> 0x1f << 3) + &data_60cbc0))
                    var_f0.d = xmm4_13 / xmm1_49
                    var_f0:4.d = xmm3_18 / xmm2_25
                    int32_t eax_45 = *(edx_3 i+ 4)
                    float var_e8_5 = (
                        _mm_cvtpd_ps(float.d(eax_43) f+ *((eax_43 u>> 0x1f << 3) + &data_60cbc0))
                        + xmm4_13) / xmm1_49
                    float var_e4_5 = (
                        _mm_cvtpd_ps(float.d(eax_45) f+ *((eax_45 u>> 0x1f << 3) + &data_60cbc0))
                        + xmm3_18) / xmm2_25
                    xmm0_129 = var_f0.o
                else
                    xmm0_129 = data_5d2760
            else
                xmm0_129 = data_5d2760
        else
            xmm0_129 = data_5d2760
        
        bool cond:6_1 = data_114e7d9 == 0
        int32_t* result_2 = data_aca6a4
        data_aca760 = xmm0_129
        result_1 = result_2
        
        if (cond:6_1)
            sub_489550(result_2, &data_5b2591, "gDraw3DData.submittingRenderItems", 
                "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x2f7, "Draw3DSetSortOverride")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        data_aca6a4 = 1
        float eax_47
        
        if (edx_2 == 0)
            if (result[1] != 2)
                sub_489550(result, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                    "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x312, "StructureDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            eax_47 = sub_4981f0(result)
            var_cc = eax_47
            int32_t* ecx_15 = *eax_47
            
            if (ecx_15 != 0)
                int32_t i = 0
                
                if (*ecx_15 s> 0)
                    int32_t edi_2 = 0
                    
                    do
                        sub_493c70(&var_108, &var_90, ecx_15[2] + edi_2, var_b8_5, &var_108, 2, 0)
                        eax_47 = var_cc
                        i += 1
                        edi_2 += 0x150
                        ecx_15 = *eax_47
                    while (i s< *ecx_15)
                
                eax_47 = sub_4947b0(eax_47, &var_90, result, nullptr)
        else
            eax_47 = sub_4dd900(*(arg1 + 0xe78))
            
            if (eax_47 != 0)
                eax_47 = sub_494ea0(eax_47, &var_90, result, edi_1, var_dc, eax_47)
        
        if (data_114e7d9 == 0)
            sub_489550(eax_47, &data_5b2591, "gDraw3DData.submittingRenderItems", 
                "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x2ff, "Draw3DSetMaterialColor")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = result_1
        data_aca6a4 = result
        data_aca6a8 = var_b0_1
        data_aca750.d = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
