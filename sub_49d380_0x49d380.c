// 函数名称: sub_49d380
// 虚拟地址: 0x49d380
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_49d380(uint32_t* arg1, void* arg2, int32_t* arg3, int32_t* arg4, char arg5, float arg6)
{
    // 第一条实际指令: void* ecx
    void* ecx
    void* edx
    ecx, edx = __alloca_probe(0x1064)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t ebx = 0
    void* edx_1 = ecx
    uint32_t* ecx_1 = arg1
    uint32_t result = *arg3
    void* var_1018 = edx_1
    uint32_t* var_1010 = ecx_1
    int32_t var_1014 = 0
    int32_t var_18_1
    char const* const var_14_1
    char* ecx_2
    
    if (result s< 0x3e8)
        int32_t i = 0
        int32_t var_100c[0x200]
        int32_t var_80c[0x1f6]
        
        if (result s> 0)
            int32_t ebx_1 = 0
            
            do
                result = arg3[2]
                int32_t ecx_3 = *(result + ebx_1)
                
                if (ecx_3 == 0x75)
                    float* eax_6 = *(result + ebx_1 + 8)
                    float xmm1_1 = *(arg2 + 0x3c)
                    float xmm3_1 = *(arg2 + 0x78)
                    float xmm0_2 = xmm1_1 f+ *(arg2 + 0xb4)
                    float xmm2_2 = xmm3_1 f+ *(arg2 + 0xf0)
                    float xmm5_4 = (*eax_6 - xmm1_1) * arg6 + xmm1_1
                    float xmm7_4 = (eax_6[1] - xmm3_1) * arg6 + xmm3_1
                    float xmm4_4 = (eax_6[2] - xmm0_2) * arg6 + xmm0_2
                    float xmm6_5 = (eax_6[3] - xmm2_2) * arg6 + xmm2_2
                    void var_1064
                    int32_t* eax_7 = sub_4bcae0(xmm5_4, &var_1064)
                    int128_t xmm1_3 = *(eax_7 + 0x10)
                    int128_t xmm2_3 = *(eax_7 + 0x20)
                    int64_t xmm3_2 = *(eax_7 + 0x30)
                    int32_t eax_8 = eax_7[0xe]
                    *(arg2 + 0x3c) = *eax_7
                    *(arg2 + 0x4c) = xmm1_3
                    *(arg2 + 0x5c) = xmm2_3
                    *(arg2 + 0x6c) = xmm3_2
                    *(arg2 + 0x74) = eax_8
                    int32_t* eax_9 = sub_4bcae0(xmm7_4, &var_1064)
                    int128_t xmm1_5 = *(eax_9 + 0x10)
                    int128_t xmm2_4 = *(eax_9 + 0x20)
                    int64_t xmm3_3 = *(eax_9 + 0x30)
                    int32_t eax_10 = eax_9[0xe]
                    *(arg2 + 0x78) = *eax_9
                    *(arg2 + 0x88) = xmm1_5
                    *(arg2 + 0x98) = xmm2_4
                    *(arg2 + 0xa8) = xmm3_3
                    *(arg2 + 0xb0) = eax_10
                    int32_t* eax_11 = sub_4bcae0(xmm4_4 - xmm5_4, &var_1064)
                    int128_t xmm1_7 = *(eax_11 + 0x10)
                    int128_t xmm2_5 = *(eax_11 + 0x20)
                    int64_t xmm3_4 = *(eax_11 + 0x30)
                    int32_t eax_12 = eax_11[0xe]
                    *(arg2 + 0xb4) = *eax_11
                    *(arg2 + 0xc4) = xmm1_7
                    *(arg2 + 0xd4) = xmm2_5
                    *(arg2 + 0xe4) = xmm3_4
                    *(arg2 + 0xec) = eax_12
                    int32_t* eax_13 = sub_4bcae0(xmm6_5 - xmm7_4, &var_1064)
                    int128_t xmm1_9 = *(eax_13 + 0x10)
                    int128_t xmm2_6 = *(eax_13 + 0x20)
                    int64_t xmm3_5 = *(eax_13 + 0x30)
                    result = eax_13[0xe]
                    *(arg2 + 0xf0) = *eax_13
                    *(arg2 + 0x100) = xmm1_9
                    *(arg2 + 0x110) = xmm2_6
                    *(arg2 + 0x120) = xmm3_5
                    *(arg2 + 0x128) = result
                else
                    if (ecx_3 == 0x7d)
                        var_14_1 = "UI2MergeAttribMapFractional"
                        var_18_1 = 0xf3b
                        goto label_49d678
                    
                    result = sub_49b170(&var_1014, i, arg3, edx_1, arg4, &var_1014, &var_100c, 
                        &var_80c, edx, var_1010, edx_1 + 0x93c, arg5)
                    edx_1 = var_1018
                
                i += 1
                ebx_1 += 0x10
            while (i s< *arg3)
            
            ebx = var_1014
            ecx_1 = var_1010
        
        int32_t esi_1 = 0
        
        if (ebx s<= 0)
        label_49d659:
            int32_t entry_ebx
            @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
            return result
        
        while (true)
            float xmm0_7 = var_80c[esi_1]
            xmm0_7 - 1f
            result:1.b = (xmm0_7 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, 1f) ? 1 : 0) << 2
                | (xmm0_7 < 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                var_14_1 = "UI2MergeAttribMapFractional"
                var_18_1 = 0xf4b
                break
            
            int32_t var_14_7 = 0
            int32_t* var_18_3 = arg4
            result = sub_49d6b0(ecx_1, var_100c[esi_1])
            ecx_1 = var_1010
            esi_1 += 1
            
            if (esi_1 s>= ebx)
                goto label_49d659
        
    label_49d678:
        ecx_2 = "Halt"
    else
        var_14_1 = "UI2MergeAttribMapFractional"
        var_18_1 = 0xf24
        ecx_2 = "attribMap.attributeCount < 1000"
    
    sub_489550(result, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_18_1, var_14_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
