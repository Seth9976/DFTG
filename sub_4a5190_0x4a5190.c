// 函数名称: sub_4a5190
// 虚拟地址: 0x4a5190
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4a5190(float arg1 @ ecx)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    char** var_8 = __security_cookie ^ &__saved_ebp
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    float xmm1 = *(arg1 i+ 0x1080)
    xmm1 f- 0
    char** result
    result:1.b =
        (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        char const* const ecx
        
        if (not(xmm1 f>= 0))
            char const* const var_d8_1 = "UI2DrawText"
            int32_t var_dc_1 = 0x1bfa
            ecx = "el.worldInfo.color.a >= 0.0f"
        label_4a56af:
            char const* const var_e0_5 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        label_4a56b9:
            sub_489550(result, &data_5b2591, ecx)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (not(1f >= xmm1))
            char const* const var_d8_2 = "UI2DrawText"
            int32_t var_dc_2 = 0x1bfb
            ecx = "el.worldInfo.color.a <= 1.0f"
            goto label_4a56af
        
        result = data_114e818
        char* ebx = *(arg1 i+ 0xfd4)
        float xmm0_1 = result[0xb]
        
        if (ebx != 0 && *ebx != 0)
            float xmm0_2
            result, xmm0_2 = sub_4bc5c0(arg1 i+ 0x2dc, xmm0_1)
            float xmm0_3 = xmm0_2 f* *(arg1 i+ 0x1020)
            xmm0_3 f- 0
            result:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
                | (xmm0_3 < 0f ? 1 : 0)
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                char* var_94
                sub_4bc2f0(arg1 i+ 0x78c, xmm0_1, &var_94)
                char** result_1
                sub_4bc2f0(arg1 i+ 0x81c, xmm0_1, &result_1)
                float var_e0
                float var_dc
                float eax_1 = sub_497d80((*(arg1 i+ 0x1074)).d, var_e0, var_dc)
                float var_80 = eax_1
                var_94 = sub_4be900(&var_80, &var_94)
                var_80 = eax_1
                char* var_90 = sub_4be900(&var_80, &result_1)
                sub_4bc2f0(arg1 i+ 0x6fc, xmm0_1, &result_1)
                var_80 = sub_497d80((*(arg1 i+ 0x1084)).d)
                result = sub_4a4a70(&result_1, &var_80)
                bool cond:0_1 = *(arg1 i+ 0xf58) == 0
                float xmm0_6 = *(arg1 i+ 0x1020)
                float xmm2_4 = *(arg1 i+ 0xf74)
                float xmm5_1 = *(arg1 i+ 0x10a8)
                float xmm7_1 = *(arg1 i+ 0x10a4)
                float xmm4_1 = *(arg1 i+ 0x10ac)
                float xmm1_3 = *(arg1 i+ 0xf70) * xmm0_6
                result_1 = result
                float xmm2_5 = xmm2_4 * xmm0_6
                float xmm5_2 = xmm5_1 + xmm1_3
                float xmm0_8 = xmm1_3 f+ *(arg1 i+ 0x10a0)
                float xmm7_2 = xmm7_1 + xmm2_5
                float xmm4_2 = xmm4_1 + xmm2_5
                float var_ac_1 = xmm5_2
                float xmm3_1 = xmm5_2
                var_80 = xmm0_8
                float xmm6_1 = xmm5_2
                float var_b4 = xmm0_8
                float var_b0_1 = xmm7_2
                float var_a8_1 = xmm4_2
                float var_84_2 = xmm5_2
                float var_98_1 = xmm5_2
                float var_9c_1 = xmm5_2
                
                if (not(cond:0_1))
                    int32_t ecx_8 = *(arg1 i+ 0x13ec)
                    var_84_2 = xmm5_2
                    var_98_1 = xmm5_2
                    var_9c_1 = xmm5_2
                    
                    if (ecx_8 != 0)
                        uint32_t edx_4 = zx.d(ecx_8.w)
                        int32_t esi_1
                        
                        if (edx_4 u< data_63e5ac)
                            esi_1 = data_63e5a8
                            result = edx_4 * 0x1418
                        
                        if (edx_4 u>= data_63e5ac || *(result + esi_1 + 0x1410) != ecx_8)
                            char const* const var_d8_7 = "DataArray<struct UI2>::DataArrayGet"
                            int32_t var_dc_4 = 0x6d
                            char const* const var_e0_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                            ecx = "DataArrayTryToGet(id) != NULL"
                            goto label_4a56b9
                        
                        int32_t eax_5 = edx_4 * 0x1418
                        xmm3_1 = xmm3_1 - (*(eax_5 + esi_1 + 0x10a8) f- *(eax_5 + esi_1 + 0x10a0))
                        float var_ac_2 = xmm3_1
                        xmm6_1 = xmm3_1
                        var_84_2 = xmm3_1
                        var_98_1 = xmm3_1
                        var_9c_1 = xmm3_1
                
                void* eax_6 = data_114e814
                char var_79_1 = 0
                void* edx_5 = arg1 i+ 0xe48
                void* var_d8_6 = arg1 i+ 0x1034
                int128_t xmm0_11 = *(eax_6 + 0x28)
                int32_t esi_2 = *(eax_6 + 0x38)
                int128_t var_78 = xmm0_11
                int32_t var_68_1 = esi_2
                int128_t var_48
                __builtin_memcpy(&var_48, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x"
                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                    0x24)
                float xmm0_12 = *(arg1 i+ 0x1034)
                xmm0_12 f- 0
                int32_t eax_7
                eax_7:1.b = (xmm0_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2
                    | (xmm0_12 < 0f ? 1 : 0)
                bool p_5 = unimplemented  {test ah, 0x44}
                float var_20
                int32_t* ecx_10
                
                if (not(p_5))
                    int32_t var_dc_5 = 0x5d35f8
                    sub_4be840(eax_7, edx_5, &var_48, 0x5d35f8)
                    float xmm1_5 = *(arg1 i+ 0xf84) * xmm0_3
                    float xmm2_7 = *(arg1 i+ 0xf88) * xmm0_3
                    int128_t var_64
                    int128_t* var_e0_2 = &var_64
                    var_20 = var_80 + xmm1_5
                    float var_18_1 = xmm3_1 + xmm1_5
                    float var_1c_1 = xmm2_7 + xmm7_2
                    float var_14_1 = xmm2_7 + xmm4_2
                    edx_5 = &var_64
                    int32_t var_54_1 = 0xffffffff
                    var_64 = *sub_497840(&var_64, &var_20, &var_b4)
                    void var_24
                    int128_t* eax_11 = sub_4a6ea0(&var_24, edx_5, &var_78, &var_24)
                    ecx_10 = data_114e814
                    xmm6_1 = var_84_2
                    var_79_1 = 1
                    *(ecx_10 + 0x28) = *eax_11
                    ecx_10[0xe] = eax_11[1].d
                    
                    if (*(arg1 i+ 0xf58) != 0)
                        xmm6_1 = var_98_1
                        
                        if (*(arg1 i+ 0x13ec) != 0)
                            xmm4_2 = xmm4_2 + 100000f
                            xmm6_1 = var_9c_1
                            float var_a8_2 = xmm4_2
                else
                    ecx_10 = &var_48
                    sub_4be840(eax_7, edx_5, ecx_10, arg1 i+ 0x1034)
                    float xmm0_13 = *(arg1 i+ 0xe4c)
                    xmm0_13 f- 0
                    result:1.b = (xmm0_13 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2 | (xmm0_13 < 0f ? 1 : 0)
                    bool p_7 = unimplemented  {test ah, 0x44}
                    
                    if (p_7)
                        char const* const var_d8_11 = "UI2DrawText"
                        int32_t var_dc_10 = 0x1c22
                        ecx = "el.persistant.tableTop.y == 0"
                        goto label_4a56af
                
                if (*(arg1 i+ 0xf80) == 1)
                    float xmm0_20 = *(arg1 i+ 0x1020)
                    float xmm2_10 = xmm0_20 f* *(arg1 i+ 0xf84)
                    int32_t var_d8_9 = 1
                    float xmm1_7 = *(arg1 i+ 0xf88) * xmm0_20
                    int32_t* var_dc_6 = ecx_10
                    var_20 = xmm2_10 + var_80
                    float var_18_2 = xmm2_10 + xmm6_1
                    float var_1c_2 = xmm1_7 + xmm7_2
                    int32_t* const var_e0_3 = &data_5d2338
                    float var_14_2 = xmm1_7 + xmm4_2
                    ecx_10, edx_5 = sub_4a4b20(&var_48, edx_5, ebx, &var_48, &var_20, arg1, &var_90, 
                        &var_90, &data_5d2338, xmm0_3, 1)
                
                int32_t var_d8_10 = 0
                int32_t* var_dc_8 = ecx_10
                result = sub_4a4b20(&var_48, edx_5, ebx, &var_48, &var_b4, arg1, &var_94, &var_90, 
                    &result_1, xmm0_3, 0)
                
                if (var_79_1 != 0)
                    result = data_114e814
                    *(result + 0x28) = xmm0_11
                    result[0xe] = esi_2
    
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return result
}
