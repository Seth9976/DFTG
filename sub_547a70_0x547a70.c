// 函数名称: sub_547a70
// 虚拟地址: 0x547a70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_547a70()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_1 = result
    
    if (data_1152b94 != 0)
        int32_t* ecx_1 = data_1151b90
        
        if (ecx_1[1] != 0x20)
            sub_489550(result, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
                "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* eax_1
        int32_t edx_1
        eax_1, edx_1 = sub_4981f0(ecx_1)
        void var_b8
        int128_t* eax_3
        int32_t edx_2
        eax_3, edx_2 = sub_5476c0(&var_b8, edx_1, data_1151b94 * 0xe0 + *eax_1, &var_b8)
        uint128_t xmm1_1 = *eax_3
        int128_t xmm0_1 = eax_3[1]
        int32_t var_30_1 = eax_3[2].d
        uint128_t var_50 = xmm1_1
        data_11e6004 = xmm1_1
        int128_t var_40_1 = xmm0_1
        data_11e600c = _mm_bsrli_si128(xmm1_1, 8)
        void var_90
        int128_t* eax_6 = sub_4eebc0(&var_90, edx_2, &var_50:0xc, &var_90)
        float xmm3_1[0x4] = *eax_6
        float xmm0_3[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
        float xmm2_3 = xmm0_3[0] f* xmm0_3 + xmm3_1[0] f* xmm3_1
        float xmm0_7 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
        float xmm0_9 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
        float xmm0_12 = sub_41dbe0(xmm0_9 * xmm0_9 + xmm2_3 + xmm0_7 * xmm0_7)
        int32_t edx_3 = 1
        float xmm2_5 = data_11e6004:4
        xmm0_3[3] = xmm0_3[0] / xmm0_12
        int32_t xmm1_8 = (*eax_6).d
        int32_t esi_2 = data_1152b94
        float xmm3_2 = data_11e6004.d
        data_11e5ff0 = 0x3f800000
        xmm0_3[0] = xmm1_8 f/ xmm0_12
        xmm0_3[1] = xmm0_7 / xmm0_12
        xmm0_3[2] = xmm0_9 / xmm0_12
        float xmm1_14 = data_11e600c
        data_11e5ff4.o = xmm0_3
        
        if (esi_2 s> 1)
            do
                int32_t ecx_5 = (&data_1151b94)[edx_3] * 0xe0
                edx_3 += 1
                int32_t eax_7 = *eax_1
                xmm3_2 = xmm3_2 f+ *(ecx_5 + eax_7 + 0x10)
                data_11e6004.d = xmm3_2
                xmm2_5 = xmm2_5 f+ *(ecx_5 + eax_7 + 0x14)
                data_11e6004:4 = xmm2_5
                xmm1_14 = xmm1_14 f+ *(ecx_5 + eax_7 + 0x18)
                data_11e600c = xmm1_14
            while (edx_3 s< esi_2)
        
        result = data_11e6024
        
        if (result == 2 || result == 3 || result == 4)
            data_11e5ff4.o = data_5d2b78
        
        float xmm4_1 = 1f / _mm_cvtepi32_ps(zx.o(esi_2))
        data_11e6004.d = xmm3_2 * xmm4_1
        data_11e6004:4 = xmm2_5 * xmm4_1
        data_11e600c = xmm1_14 * xmm4_1
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
