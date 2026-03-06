// 函数名称: sub_4a3bf0
// 虚拟地址: 0x4a3bf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4a3bf0(void* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    uint32_t result = __security_cookie ^ &__saved_ebp
    uint32_t result_1 = result
    int32_t* edi = *(arg1 + 0xee8)
    int32_t ecx = *(arg1 + 0xe60)
    
    if (edi == 0)
        if (ecx != 0)
            result = sub_4d9790(ecx)
            *(arg1 + 0xe60) = 0
        
        goto label_4a3ca1
    
    if (ecx == 0)
        goto label_4a3c20
    
    uint32_t edx_2 = zx.d(ecx.w)
    
    if (edx_2 u< data_6c9ba0)
        int32_t ebx_1 = data_6c9b9c
        result = edx_2 * 3
        
        if (*(ebx_1 + (result << 3) + 0x14) == ecx)
            result = edx_2 * 3
            
            if (edi != *(ebx_1 + (result << 3)))
                sub_4d9790(ecx)
            label_4a3c20:
                result = sub_4d93c0(edi)
                char* edx_1 = *(arg1 + 0xf00)
                *(arg1 + 0xe60) = result
                
                if (edx_1 != 0 && *edx_1 != 0)
                    sub_4d9540(result, edx_1, result, *(arg1 + 0xef0))
                    result = sub_48a5e0(arg1 + 0xe34, *(arg1 + 0xf00))
                
                goto label_4a3ca1
            
        label_4a3ca1:
            int32_t ecx_4 = *(arg1 + 0xe60)
            
            if (ecx_4 == 0)
                @__security_check_cookie@4(result_1 ^ &__saved_ebp)
                return result
            
            uint32_t edx_3 = zx.d(ecx_4.w)
            
            if (edx_3 u< data_6c9ba0)
                int32_t ebx_2 = data_6c9b9c
                result = edx_3 * 3
                
                if (*(ebx_2 + (result << 3) + 0x14) == ecx_4)
                    void* eax_3 = **(ebx_2 + edx_3 * 0x18 + 4)
                    float xmm1 = *(eax_3 + 8)
                    float xmm3_1 = *(eax_3 + 0xc)
                    float xmm2_2 = *(eax_3 + 0x10) + xmm1
                    float xmm4_2 = *(eax_3 + 0x14) + xmm3_1
                    float xmm2_3 = xmm2_2 - xmm1
                    float xmm1_2 = xmm4_2 - xmm3_1
                    float xmm5_4 = _mm_min_ss((*(arg1 + 0x10a8) f- *(arg1 + 0x10a0)) / xmm2_3, 
                        (*(arg1 + 0x10ac) f- *(arg1 + 0x10a4)) / xmm1_2)
                    float xmm2_4 = xmm2_3 * xmm5_4
                    float xmm1_3 = xmm1_2 * xmm5_4
                    float eax_4
                    int32_t ecx_5
                    float edx_4
                    eax_4, ecx_5, edx_4 = sub_4eaaa0(5)
                    float xmm0_4 = *(arg1 + 0x10a0)
                    float xmm4_4 = *(arg1 + 0x10a8) - xmm0_4
                    float xmm3_2 = *(arg1 + 0x10ac)
                    float var_10 = eax_4
                    int32_t var_48_3 = ecx_5
                    float xmm4_6 = xmm4_4 * var_10 + xmm0_4
                    float xmm0_7 = (xmm2_4 - 0f) * var_10
                    var_10 = xmm5_4
                    float xmm4_7 = xmm4_6 - (xmm0_7 + 0f)
                    float xmm0_9 = *(arg1 + 0x10a4)
                    float var_c_2 = xmm5_4
                    float xmm3_6 = (xmm3_2 - xmm0_9) * edx_4 + xmm0_9 - ((xmm1_3 - 0f) * edx_4 + 0f)
                    float xmm0_14 = *(arg1 + 0xef4)
                    float var_18 = (xmm4_7 + xmm2_4 + xmm4_7) * 0.5f - (xmm2_2 + xmm1) * 0.5f * xmm5_4
                    float var_14_2 =
                        (xmm3_6 + xmm1_3 + xmm3_6) * 0.5f - (xmm4_2 + xmm3_1) * 0.5f * xmm5_4
                    result = sub_4d99b0(&var_10, &var_18, *(arg1 + 0xe60), arg2, &var_10, xmm0_14)
                    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
                    return result
    
    sub_489550(result, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct Spine>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
