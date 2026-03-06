// 函数名称: sub_4a3eb0
// 虚拟地址: 0x4a3eb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4a3eb0(void* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = *(arg1 + 0xef8)
    uint32_t i_3 = *(arg1 + 0xe64)
    
    if (ecx == 0)
    label_4a401f:
        
        if (i_3 != 0)
            uint32_t eax_7 = sub_4f97b0(i_3)
            *(arg1 + 0xe64) = 0
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_7
    else
        int32_t edx
        
        if (i_3 == 0)
            int32_t* eax_2 = sub_4f9600(ecx)
            *(arg1 + 0xe64) = eax_2
            edx = sub_4fa5f0(eax_2, "idle", eax_2, 1f, 0)
            i_3 = *(arg1 + 0xe64)
        else if (ecx == 0)
            goto label_4a401f
        
        if (i_3 != 0)
            float xmm0_1 = *(data_114e818 + 0x2c)
            float var_1bc[0x4] = *sub_4fccb0(&var_1bc, edx, *(arg1 + 0xef8), &var_1bc)
            float var_1ac
            sub_498790(arg1 + 0xc, xmm0_1, &var_1ac)
            float xmm1[0x4] = var_1bc
            int32_t* eax_6 = *(arg1 + 0xe64)
            float xmm2_3 = _mm_shuffle_ps(xmm1, xmm1, 0xaa)
            float xmm0_5 = _mm_shuffle_ps(xmm1, xmm1, 0xff) - _mm_shuffle_ps(xmm1, xmm1, 0x55)
            float xmm0_6 = *(arg1 + 0x1020)
            float var_1a4
            float xmm1_5 = (var_1a4 - var_1ac) / (xmm2_3 f- xmm1) * xmm0_6
            int32_t xmm0_7 = *(arg1 + 0x1014)
            float xmm1_6 = *(arg1 + 0x1080)
            int32_t xmm0_8 = *(arg1 + 0x1018)
            int32_t ebx
            
            if (not(xmm1_6 <= 0.999000013f))
                ebx.b = 0xff
            else if (0.00100000005f <= xmm1_6)
                ebx = int.d(xmm1_6 * 255f + 0.5f)
            else
                ebx.b = 0
            
            int32_t* ecx_7 = *eax_6
            
            if (ecx_7[1] != 0x18)
                sub_489550(eax_6, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
                    "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x2ec, "FlanimGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* eax_8 = sub_4981f0(ecx_7)
            int32_t i = 0
            
            if (*(eax_8 + 0x28) s> 0)
                int32_t ecx_8 = 0
                
                do
                    ecx_8 += 0x68
                    i += 1
                    *(ecx_8 + eax_6[0x1a] - 5) = ebx.b
                while (i s< *(eax_8 + 0x28))
            
            void* eax_10 = *(arg1 + 0xe64)
            *(eax_10 + 0x2c) = xmm0_7
            *(eax_10 + 0x3c) = xmm0_8
            void* eax_11 = *(arg1 + 0xe64)
            *(eax_11 + 0x20) = xmm1_5
            float var_1a8
            float var_1a0
            *(eax_11 + 0x34) = (var_1a0 - var_1a8) / xmm0_5 * xmm0_6
            int32_t var_1e0_3 = sub_4f9820(*(arg1 + 0xe64), arg2)
            void* var_14c
            i_3 = sub_4fc8d0(*(arg1 + 0xe64), &var_14c)
            uint32_t i_2 = i_3
            
            if (i_2 s> 0)
                void var_140
                void* esi_2 = &var_140
                uint32_t i_1
                
                do
                    void* ecx_16 = *(esi_2 - 0xc)
                    i_3 = *(ecx_16 + 0x10) - 2
                    
                    switch (i_3)
                        case 0
                            int32_t var_17c[0x5]
                            sub_4c5670(*(ecx_16 + 0x18), &var_17c)
                            char var_168_1 = 1
                            i_3 = sub_4c5920(&var_17c)
                            *(arg1 + 0xe74) = i_3
                        case 1
                            i_3 = sub_4c5d20(*(arg1 + 0xe74))
                        case 3
                            void* eax_13 = *(arg1 + 0xe68)
                            
                            if (eax_13 != 0)
                                sub_4fd2f0(eax_13)
                                ecx_16 = *(esi_2 - 0xc)
                            
                            int32_t* ecx_17 = *(ecx_16 + 0x18)
                            float xmm1_10[0x4] = *(esi_2 - 8)
                            int128_t var_1cc = data_63c264
                            var_1bc = data_63c274
                            var_1bc[3] = 0
                            float xmm0_15 = *esi_2
                            var_1cc.d = xmm0_15 + xmm0_15
                            var_1bc[1].q = _mm_unpacklo_ps(xmm1_10, *(esi_2 - 4))
                            i_3 = sub_4fcf40(ecx_17, &var_1cc)
                            *(arg1 + 0xe68) = i_3
                        case 4
                            void* ecx_18 = *(arg1 + 0xe68)
                            
                            if (ecx_18 != 0)
                                i_3 = sub_4fd2f0(ecx_18)
                            
                            *(arg1 + 0xe68) = 0
                    
                    esi_2 += 0x14
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_3
}
