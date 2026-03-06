// 函数名称: sub_4f2080
// 虚拟地址: 0x4f2080
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_4f2080(int32_t arg1, int32_t arg2, void* arg3, float arg4 @ xmm1, float arg5 @ xmm2, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: void var_c8
    void var_c8
    int32_t eax_1 = __security_cookie ^ &var_c8
    int32_t* eax_3 = *(arg3 + 0x10)
    int32_t esi = 0
    float xmm2 = arg4
    float result = eax_3[1]
    int32_t var_88 = arg2
    float var_8c = xmm2
    float result_2 = result
    
    if (result s> 0)
        int32_t ecx = 0
        int32_t var_b0_1 = 0
        
        do
            result = eax_3[2] + ecx
            float result_1 = result
            
            if (*(result i+ 0x10) != 0xffffffff)
                if (arg7 != 0)
                    if (arg6 s<= 0)
                        sub_489550(result, &data_5b2591, "maskCount > 0", 
                            "d:\ax\trunk\ax2017\engine\animation.cpp", 0x20a, "BoneGetMaskWeight")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    int32_t eax_6 = 0
                    bool cond:0_1
                    
                    while (true)
                        if (*(arg2 + (eax_6 << 2)) == esi)
                            cond:0_1 = arg7 == 1
                            break
                        
                        eax_6 += 1
                        
                        if (eax_6 s>= arg6)
                            cond:0_1 = arg7 == 2
                            break
                    
                    result.b = cond:0_1
                else
                    result = 1
                
                float xmm0_2 = _mm_cvtepi32_ps(zx.o(result))
                xmm0_2 f- 0
                result:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
                    | (xmm0_2 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    float var_40
                    sub_4f1990(&var_40, esi, eax_3, xmm2, &var_40)
                    float xmm0_4 = xmm0_2 * arg5
                    void* ecx_3 = *(result_1 i+ 0x10) * 0x2c + arg8
                    float xmm2_2 = var_40 * xmm0_4
                    float var_3c
                    float xmm3_2 = var_3c * xmm0_4
                    float var_38
                    float xmm4_2 = var_38 * xmm0_4
                    float var_34
                    float xmm5_2 = var_34 * xmm0_4
                    float xmm1_9 = *ecx_3
                    
                    if (not(0 f<= xmm1_9 * xmm2_2 + *(ecx_3 + 0xc) * xmm5_2 + *(ecx_3 + 4) * xmm3_2
                            + *(ecx_3 + 8) * xmm4_2))
                        xmm2_2 = xmm2_2 * -1f
                        xmm3_2 = xmm3_2 * -1f
                        xmm4_2 = xmm4_2 * -1f
                        xmm5_2 = xmm5_2 * -1f
                    
                    arg2 = var_88
                    float var_74_1 = *(ecx_3 + 0xc) + xmm5_2
                    xmm2 = var_8c
                    float var_7c_1 = *(ecx_3 + 4) + xmm3_2
                    float var_78_1 = *(ecx_3 + 8) + xmm4_2
                    *ecx_3 = (xmm1_9 + xmm2_2).o
                    float var_28
                    float xmm0_24 = *(ecx_3 + 0x18) + var_28 * xmm0_4
                    float var_30
                    float var_2c
                    *(ecx_3 + 0x10) = _mm_unpacklo_ps(var_30 * xmm0_4 f+ *(ecx_3 + 0x10), 
                        *(ecx_3 + 0x14) + var_2c * xmm0_4)
                    *(ecx_3 + 0x18) = xmm0_24
                    float var_1c
                    float xmm0_26 = *(ecx_3 + 0x24) + var_1c * xmm0_4
                    float var_24
                    float var_20
                    *(ecx_3 + 0x1c) = _mm_unpacklo_ps(var_24 * xmm0_4 f+ *(ecx_3 + 0x1c), 
                        *(ecx_3 + 0x20) + var_20 * xmm0_4)
                    *(ecx_3 + 0x24) = xmm0_26
                    char var_18
                    result.b = var_18
                    *(ecx_3 + 0x28) = result.b
                    ecx = var_b0_1
            
            esi += 1
            ecx += 0x18
            var_b0_1 = ecx
        while (esi s< result_2)
    
    @__security_check_cookie@4(eax_1 ^ &var_c8)
    return result
}
