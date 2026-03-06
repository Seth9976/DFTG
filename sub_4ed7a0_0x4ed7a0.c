// 函数名称: sub_4ed7a0
// 虚拟地址: 0x4ed7a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4ed7a0(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t i = __security_cookie ^ &__saved_ebp
    int32_t i_2 = i
    int32_t* ebx = arg1
    int32_t* var_a4 = ebx
    int32_t* ecx = *ebx
    
    if (ecx != 0)
        if (ecx[1] != 0x20)
            sub_489550(i, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
                "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* ecx_1 = sub_4981f0(ecx)
        i = 0
        int32_t* var_e4_1 = ecx_1
        int32_t i_1 = 0
        
        if (ecx_1[2] s> 0)
            int32_t edx_1 = 0
            int32_t var_b8_1 = 0
            
            do
                void* ecx_3 = *ecx_1 + edx_1
                uint32_t (* eax_2)[0x4]
                int32_t edx_3
                eax_2, edx_3 = sub_4eb780(ebx, i)
                void* ecx_5 = ecx_3
                *(eax_2 + 8) = *(ebx + 8)
                *(eax_2 + 0x18) = *(ebx + 0x18)
                *(eax_2 + 0x28) = *(ebx + 0x28)
                *(eax_2 + 0x38) = *(ebx + 0x38)
                *(eax_2 + 0x48) = *(ebx + 0x48)
                (*eax_2)[0x16] = ebx[0x16]
                int32_t eax_4 = *ecx_5
                
                if (eax_4 == 2)
                    int32_t* edx_12 = eax_2[6][0]
                    
                    if (edx_12 == 0)
                        edx_12 = *(ecx_5 + 0x88)
                    
                    sub_4ec370(&(*eax_2)[1], edx_12)
                    sub_4cad40((*eax_2)[1], arg2)
                else if (eax_4 == 5)
                    uint32_t ebx_2
                    int64_t xmm0_25
                    
                    if ((*eax_2)[0x1b] s<= (*eax_2)[0x17])
                        xmm0_25 = *(ecx_5 + 0x94)
                        ebx_2 = *(ecx_5 + 0x9c)
                    else
                        xmm0_25 = eax_2[7][0].q
                        ebx_2 = (*eax_2)[0x1e]
                    
                    int32_t j = 0
                    int32_t j_1 = 0
                    
                    if (xmm0_25.d s> 0)
                        int32_t edx_9 = xmm0_25:4.d
                        
                        do
                            int32_t edi_2 = 0
                            int32_t var_a8_1 = 0
                            
                            if (edx_9 s> 0)
                                do
                                    int32_t esi_2 = 0
                                    
                                    if (ebx_2 s> 0)
                                        int32_t var_100_1 = edi_2
                                        
                                        do
                                            int64_t var_14 = j.q
                                            int32_t var_c_1 = esi_2
                                            sub_4eb830(&var_14, eax_2, ecx_5, &var_14)
                                            sub_4ed7a0()
                                            ecx_5 = ecx_3
                                            esi_2 += 1
                                        while (esi_2 s< ebx_2)
                                        
                                        edi_2 = var_a8_1
                                        j = j_1
                                        edx_9 = xmm0_25:4.d
                                    
                                    edi_2 += 1
                                    var_a8_1 = edi_2
                                while (edi_2 s< edx_9)
                            
                            j += 1
                            j_1 = j
                        while (j s< xmm0_25.d)
                    
                    ebx = var_a4
                else if (eax_4 == 8)
                    uint32_t eax_8 = (*eax_2)[0x12e]
                    float var_dc
                    
                    if (eax_8 != 0)
                        void* eax_16 = sub_4fd250(eax_8)
                        
                        if (eax_16 != 0)
                            void var_18c
                            int128_t* eax_18 = sub_4eb150(&var_18c, eax_2, ecx_3, &var_18c)
                            int32_t var_3c_1 = eax_18[2].d
                            int128_t var_5c = *eax_18
                            int128_t var_4c_1 = eax_18[1]
                            void var_164
                            int128_t* eax_21 = sub_4eebc0(&var_164, eax_2, &var_5c:0xc, &var_164)
                            var_dc = *(eax_18 + 0x18)
                            int128_t xmm0_18 = *eax_21
                            uint128_t xmm0_19 = *eax_18
                            int64_t var_c8_2 = xmm0_19
                            int32_t var_c0_2 = _mm_bsrli_si128(xmm0_19, 8)
                            int128_t var_9c = var_dc.o
                            int128_t var_8c_1 = xmm0_18
                            sub_4ddac0(&(*eax_2)[0xf], &var_9c, &var_dc, &(*eax_2)[0xf])
                            float xmm1_1 = data_620d84
                            *(eax_16 + 0x2c) = var_dc.o
                            *(eax_16 + 0x3c) = xmm0_18
                            sub_501f70(eax_16, xmm1_1)
                        
                        ebx = var_a4
                    else
                        uint32_t eax_10
                        uint128_t xmm0_6
                        int128_t xmm1
                        
                        if (eax_2[0x48][0] s<= (*eax_2)[0x17])
                            xmm0_6 = *(ecx_5 + 0x10)
                            eax_10 = *(ecx_5 + 0x30)
                            xmm1 = *(ecx_5 + 0x20)
                        else
                            xmm0_6 = *(eax_2 + 0x484)
                            eax_10 = (*eax_2)[0x129]
                            xmm1 = *(eax_2 + 0x494)
                        
                        uint32_t var_18_1 = eax_10
                        int96_t var_114_1 = xmm1.12
                        uint128_t var_38 = xmm0_6
                        int128_t var_28_1 = xmm1
                        void var_154
                        int128_t* eax_12 = sub_4eebc0(&var_154, edx_3, &var_38:0xc, &var_154)
                        var_dc = var_114_1:8.d
                        int128_t xmm0_8 = *eax_12
                        int64_t var_c8_1 = xmm0_6
                        int32_t var_c0_1 = _mm_bsrli_si128(xmm0_6, 8)
                        int128_t var_7c = var_dc.o
                        int128_t var_6c_1 = xmm0_8
                        sub_4ddac0(&(*eax_2)[0xf], &var_7c, &var_dc, &(*eax_2)[0xf])
                        int128_t var_144 = var_dc.o
                        int128_t var_134_1 = xmm0_8
                        (*eax_2)[0x12e] = sub_4fcf40(*(ecx_3 + 0xd0), &var_144)[0x1e]
                
                ecx_1 = var_e4_1
                i = i_1 + 1
                edx_1 = var_b8_1 + 0xe0
                i_1 = i
                var_b8_1 = edx_1
            while (i s< ecx_1[2])
    
    @__security_check_cookie@4(i_2 ^ &__saved_ebp)
    return i
}
