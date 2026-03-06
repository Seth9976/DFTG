// 函数名称: sub_4eb830
// 虚拟地址: 0x4eb830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_4eb830(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4))[0x4]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int128_t* eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* var_c = eax_1
    int32_t var_148
    char const* const var_144
    char* ecx
    
    if (*arg3 == 5)
        void var_e0
        int128_t* eax_3 = sub_4eb240(&var_e0, arg2, arg3, &var_e0)
        int128_t var_40 = *eax_3
        int128_t var_30_1 = eax_3[1]
        int64_t var_20_1 = eax_3[2].q
        void var_108
        int64_t* eax_5 = sub_4f05d0(&var_108, arg2 + 0x3c, &var_40, &var_108)
        int32_t ecx_2 = arg3[0x26]
        int32_t edx_1 = arg4[1]
        var_40 = *eax_5
        int128_t var_30_2 = *(eax_5 + 0x10)
        int32_t eax_6 = arg4[2]
        int32_t ebx_1 = *arg4
        int32_t var_10_1 = arg3[0x27]
        int64_t var_20_2 = eax_5[4]
        void* ecx_5 = (ecx_2 * eax_6 + edx_1) * arg3[0x25]
        int64_t var_18 = *(arg3 + 0x94)
        int128_t* ecx_6 = ecx_5 + ebx_1
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = sx.q(ecx_6)
        int32_t ecx_7 = var_18:4.d
        eax_1 = divs.dp.d(sx.q(ecx_6), ecx_7 * var_18.d)
        
        if (mods.dp.d(edx_2:eax_9, var_18.d) != ebx_1
                || mods.dp.d(sx.q(divs.dp.d(edx_2:eax_9, var_18.d)), ecx_7) != edx_1 || eax_1 != eax_6)
            var_144 = "FabSubstateTable"
            var_148 = 0x1ca
            ecx = "FabSubstateCoordFromSlot(el, elState, idx) == coord"
        else
            uint32_t (* result)[0x4] = sub_4eb780(arg2, ecx_6)
            eax_1 = ecx_6
            int32_t edx_9 = arg3[0x2c]
            int32_t ecx_11 = arg3[0x2a]
            int32_t* ecx_12
            
            if (eax_1 s>= edx_9)
                ecx_12 = *(ecx_11 + (edx_9 << 3) - 8)
            else
                ecx_12 = *(ecx_11 + (eax_1 << 3))
            
            *result = ecx_12
            int128_t xmm0_10
            int128_t xmm1_1
            int64_t xmm2_1
            
            if (ecx_12 == 0)
            label_4eb9c8:
                xmm0_10 = data_5d31e0
                xmm1_1 = data_5d31f0
                xmm2_1 = 0x3f8000003f800000
            label_4eb9de:
                int32_t eax_18 = *(arg2 + 0x6c)
                int128_t var_68 = xmm0_10
                int128_t var_58_1 = xmm1_1
                int64_t var_48_1 = xmm2_1
                int32_t eax_19
                int64_t xmm0_11
                
                if (eax_18 s<= *(arg2 + 0x5c))
                    xmm0_11 = *(arg3 + 0x94)
                    eax_19 = arg3[0x27]
                else
                    xmm0_11 = *(arg2 + 0x70)
                    eax_19 = *(arg2 + 0x78)
                
                int32_t edx_11 = arg3[0x28]
                int32_t var_10_2 = eax_19
                var_18 = xmm0_11
                void var_b8
                eax_1 = sub_4ec940(&var_b8, edx_11, &var_18, &var_b8, arg4, &var_40, &var_68)
                int128_t xmm1_2 = eax_1[1]
                *(result + 0x3c) = *eax_1
                *(result + 0x4c) = xmm1_2
                
                if ((*result)[0xf] f> 0f)
                    @__security_check_cookie@4(var_c ^ &__saved_ebp)
                    return result
                
                var_144 = "FabSubstateTable"
                var_148 = 0x1de
                ecx = "substate.transform.t.s > 0"
            else
                if (ecx_12[1] == 0x20)
                    uint128_t xmm0_8 = *sub_4981f0(ecx_12)
                    int32_t* var_98_1 = xmm0_8.d
                    
                    if (_mm_bsrli_si128(xmm0_8, 8) == 0)
                        goto label_4eb9c8
                    
                    void var_130
                    int128_t* eax_17 = sub_4eb240(&var_130, result, var_98_1, &var_130)
                    xmm0_10 = *eax_17
                    xmm1_1 = eax_17[1]
                    xmm2_1 = eax_17[2].q
                    goto label_4eb9de
                
                var_144 = "FabDefGet"
                var_148 = 0xea
                ecx = "ptr->assetType == ASSET_TYPE_FAB"
    else
        var_144 = "FabSubstateTable"
        var_148 = 0x1c3
        ecx = "el.type == FAB_DISTRIBUTE"
    
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\fabdef.cpp", var_148, var_144)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
