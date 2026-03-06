// 函数名称: sub_509560
// 虚拟地址: 0x509560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_509560(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a19d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_4c = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1[0x14].b == 0)
        int32_t* ecx = arg1[0xb]
        int32_t var_58
        
        if (ecx != 0)
            var_58 = 1
            sub_4c22b0(result, &data_5d3570, ecx, arg1[4], arg1[5], arg1[6], arg1[7], &data_63c284, 0, 
                0, 1, &data_5d2760, nullptr)
        
        float xmm3_3 = arg1[5] f+ arg1[9]
        char* eax_3 = *arg1
        char* const ecx_1 = &data_5b2591
        int32_t var_50_1 = arg1[0x15]
        float xmm2_3 = arg1[8] f+ arg1[4]
        float xmm0_3 = arg1[7] f+ xmm3_3
        
        if (eax_3 != 0)
            ecx_1 = eax_3
        
        float var_34_1 = xmm3_3
        float var_24_1 = xmm3_3
        float xmm1_3 = arg1[6] f+ xmm2_3
        float var_28 = xmm2_3
        float var_1c_1 = xmm0_3
        float var_20_1 = xmm1_3
        int32_t* eax_6 =
            sub_4e9370(&var_28, arg1[0xc], ecx_1, &var_28, &arg1[0xd], &arg1[0xf], var_58, arg1[0xe])
        int32_t* ecx_2 = arg1[0xc]
        
        if (ecx_2[1] != 0x12)
            sub_489550(eax_6, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_FONT", 
                "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x2e6, "FontGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* eax_7 = sub_4981f0(ecx_2)
        void* esi_1 = arg1[1]
        void* ecx_3 = arg1[3]
        float xmm1_4 = arg1[0xe]
        int32_t edx_3
        edx_3:result = sx.q(esi_1 - ecx_3)
        void* ebx_3 = (result ^ edx_3) - edx_3
        float var_2c_1 = xmm1_4 + xmm1_4
        
        if (esi_1 s>= ecx_3)
            esi_1 = ecx_3
        
        if (ebx_3 s> 0)
            void* var_50_2 = esi_1
            var_2c_1 = xmm1_4
            var_28 = sub_509320(arg1)
            float xmm0_9 = arg1[9] f+ arg1[5]
            void* var_50_3 = esi_1 + ebx_3
            float var_18 = xmm0_9
            float var_24_2 = xmm0_9
            int32_t var_20_2 = sub_509320(arg1)
            float var_1c_2 = _mm_cvtepi32_ps(zx.o(*eax_7)) f* arg1[0xe] + var_18
            
            if (arg1[1] == esi_1)
                var_28 = var_28 + var_2c_1
            
            sub_4c0580(&var_28, &arg1[0x11])
            void* var_50_4 = esi_1
            int32_t var_38_1 = sub_509320(arg1)
            var_18 = &data_5b2591
            int32_t var_8_1 = 0
            char* const ecx_8 = &data_5b2591
            char* eax_12 = *arg1
            
            if (eax_12 != 0)
                ecx_8 = eax_12
            
            int32_t ecx_10 = sub_48a6e0(&var_18, esi_1 + ecx_8, ebx_3)
            float esi_2 = var_18
            char* const eax_14 = &data_5b2591
            
            if (esi_2 != 0)
                eax_14 = esi_2
            
            int32_t var_50_6 = ecx_10
            result = sub_4e91a0(eax_14, arg1[0xc], eax_14, arg1[0x10], 1, arg1[0xe])
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0 && esi_2 != 0 && *esi_2 != 0)
                result = sub_48a080(&var_18)
                int32_t temp0_1 = result[1]
                result[1] -= 1
                
                if (temp0_1 == 1)
                    result = sub_4984f0(result, &result[3][2])
            
            int32_t var_8_3 = 0xffffffff
        
        float xmm0_19 = arg1[2]
        
        if (not(xmm0_19 <= 1f))
            xmm0_19 = xmm0_19 - 1f
            arg1[2] = xmm0_19
        
        if (*(arg1 + 0x51) != 0 && not(0.5f <= xmm0_19))
            int32_t var_50_8 = arg1[1]
            float xmm0_20 = sub_509320(arg1)
            float xmm4_1 = arg1[0xe]
            var_28 = xmm0_20
            float xmm2_8 = _mm_cvtepi32_ps(zx.o(*eax_7)) * xmm4_1 * 0.075000003f
            float xmm2_9
            
            if (0 f<= xmm2_8)
                xmm2_9 = xmm2_8 + 0.5f
            else
                xmm2_9 = xmm2_8 - 0.5f
            
            float var_20_3 = xmm0_20 + var_2c_1
            float xmm1_9 = arg1[9] f* xmm4_1 f+ arg1[5] + _mm_cvtepi32_ps(zx.o(int.d(xmm2_9)))
            float var_24_3 = xmm1_9
            float var_1c_3 = _mm_cvtepi32_ps(zx.o(eax_7[1])) * xmm4_1 + xmm1_9
            result = sub_4c0580(&var_28, &arg1[0xd])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
