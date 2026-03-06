// 函数名称: sub_56dfb0
// 虚拟地址: 0x56dfb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_56dfb0(float arg1, void* arg2, float arg3, float arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t eax_1 = *(arg2 + 8)
    int32_t eax_1 = *(arg2 + 8)
    int32_t* edi = *(eax_1 + (*(arg1 i+ 0x14) << 2))
    
    if (edi[0x1b] != 0)
        int32_t* eax_2 = *(arg1 i+ 0x10)
        
        if (*eax_2 f<= arg3)
            int32_t edx_1 = *(arg1 i+ 0xc)
            float xmm1_1
            float xmm2_1
            
            if (arg3 f< eax_2[edx_1 - 3])
                int32_t eax_8 = sub_56da60(eax_2, edx_1, eax_2, arg3, 3)
                int32_t eax_9 = *(arg1 i+ 0x10)
                float xmm5_1 = *(eax_9 + (eax_8 << 2) - 8)
                float xmm6_1 = *(eax_9 + (eax_8 << 2) - 4)
                int32_t eax_10
                int32_t edx_2
                edx_2:eax_10 = muls.dp.d(0x55555556, eax_8)
                float xmm0_12 = sub_56d9a0(arg1, edx_2 + (edx_2 u>> 0x1f) - 1, 
                    1f - (arg3 f- *(eax_9 + (eax_8 << 2)))
                        / (*(eax_9 + (eax_8 << 2) - 0xc) f- *(eax_9 + (eax_8 << 2))))
                eax_2 = *(arg1 i+ 0x10)
                xmm2_1 = (eax_2[eax_8 + 1] f- xmm5_1) * xmm0_12 + xmm5_1
                xmm1_1 = (eax_2[eax_8 + 2] f- xmm6_1) * xmm0_12 + xmm6_1
            else
                xmm2_1 = eax_2[edx_1 - 2]
                xmm1_1 = eax_2[edx_1 - 1]
            
            void* ecx_4 = *edi
            arg4 - 1f
            uint32_t xmm1_5[0x4] = xmm1_1 f* *(ecx_4 + 0x20)
            uint32_t xmm2_7[0x4] = xmm2_1 f* *(ecx_4 + 0x1c)
            eax_2:1.b = (arg4 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg4, 1f) ? 1 : 0) << 2
                | (arg4 < 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                if (arg5 != 3)
                    edi[8] = xmm2_7
                    edi[9] = xmm1_5
                    return eax_2
                
                edi[8] = xmm2_7 f- *(ecx_4 + 0x1c) f+ edi[8]
                edi[9] = xmm1_5 f- *(ecx_4 + 0x20) f+ edi[9]
                return eax_2
            
            eax_1 = arg5
            
            if (eax_1 u<= 3)
                float xmm4_3
                int128_t xmm5_6
                float xmm6_6
                float xmm5_2
                
                if (arg6 != 1)
                    switch (eax_1)
                        case 0
                            int128_t xmm5_5 = *(ecx_4 + 0x1c)
                            
                            if (not(0 f<= xmm5_5))
                                xmm5_5 ^= data_60cca0.o
                            
                            xmm4_3 = -1f
                            float xmm6_5
                            
                            if (not(0f f<= xmm2_7))
                                xmm6_5 = -1f
                            else if (xmm2_7 f<= 0)
                                xmm6_5 = (zx.o(0)).d
                            else
                                xmm6_5 = 1f
                            
                            xmm6_6 = xmm6_5 f* xmm5_5
                            xmm5_6 = *(ecx_4 + 0x20)
                        label_56e2e0:
                            
                            if (not(0 f<= xmm5_6))
                                xmm5_6 ^= data_60cca0.o
                            
                            if (not(0 f> xmm1_5))
                                if (xmm1_5 f<= 0)
                                    xmm4_3 = (zx.o(0)).d
                                else
                                    xmm4_3 = 1f
                            
                            float xmm4_4 = xmm4_3 f* xmm5_6
                            edi[8] = (xmm2_7 f- xmm6_6) * arg4 + xmm6_6
                            edi[9] = (xmm1_5 f- xmm4_4) * arg4 + xmm4_4
                        case 1, 2
                            int128_t xmm5_7 = edi[8]
                            
                            if (not(0 f<= xmm5_7))
                                xmm5_7 ^= data_60cca0.o
                            
                            xmm4_3 = -1f
                            
                            if (not(0f f<= xmm2_7))
                                xmm6_6 = -1f f* xmm5_7
                                xmm5_6 = edi[9]
                            else if (xmm2_7 f<= 0)
                                xmm6_6 = 0f f* xmm5_7
                                xmm5_6 = edi[9]
                            else
                                xmm6_6 = 1f f* xmm5_7
                                xmm5_6 = edi[9]
                            
                            goto label_56e2e0
                        case 3
                            float xmm6_7 = -1f
                            
                            if (not(0 f<= xmm2_7))
                                arg1 = -1f
                            else if (xmm2_7 f<= 0)
                                arg1 = 0f
                            else
                                arg1 = 1f
                            
                            if (not(0 f> xmm1_5))
                                if (xmm1_5 f<= 0)
                                    xmm6_7 = (zx.o(0)).d
                                else
                                    xmm6_7 = 1f
                            
                            int128_t xmm4_5 = edi[8]
                            
                            if (not(0f f<= xmm4_5))
                                xmm4_5 ^= 0x80000000
                            
                            int128_t xmm5_8 = *(ecx_4 + 0x1c)
                            
                            if (not(0 f<= xmm5_8))
                                xmm5_8 ^= 0x80000000
                            
                            int128_t xmm4_7 = edi[9]
                            edi[8] = (xmm2_7 f- xmm5_8 f* arg1) * arg4 + xmm4_5 f* arg1
                            
                            if (not(0f f<= xmm4_7))
                                xmm4_7 ^= 0x80000000
                            
                            int128_t xmm2_31 = *(ecx_4 + 0x20)
                            
                            if (not(0 f<= xmm2_31))
                                xmm2_31 ^= 0x80000000
                            
                            edi[9] = (xmm1_5 f- xmm2_31 f* xmm6_7) * arg4 + xmm4_7 f* xmm6_7
                else
                    switch (eax_1)
                        case 0
                            float xmm6_2 = *(ecx_4 + 0x1c)
                            xmm5_2 = *(ecx_4 + 0x20)
                            
                            if (not(0f <= xmm6_2))
                                arg1 = -1f
                            else if (xmm6_2 f<= 0)
                                arg1 = 0f
                            else
                                arg1 = 1f
                            
                            edi[8] =
                                (__andps_xmmxud_memxud(xmm2_7, data_60cc70.o) * arg1 - xmm6_2) * arg4
                                + xmm6_2
                            
                            if (0f > xmm5_2)
                                edi[9] =
                                    (__andps_xmmxud_memxud(xmm1_5, data_60cc70.o) * -1f - xmm5_2) * arg4
                                    + xmm5_2
                                return eax_1
                            
                            if (not(xmm5_2 f<= 0))
                                edi[9] =
                                    (__andps_xmmxud_memxud(xmm1_5, data_60cc70.o) * 1f - xmm5_2) * arg4
                                    + xmm5_2
                                return eax_1
                            
                        label_56e19e:
                            edi[9] = (__andps_xmmxud_memxud(xmm1_5, data_60cc70.o) * (zx.o(0)).d
                                - xmm5_2) * arg4 + xmm5_2
                        case 1, 2
                            float xmm6_3 = edi[8]
                            xmm5_2 = edi[9]
                            
                            if (not(0f <= xmm6_3))
                                arg1 = -1f
                            else if (xmm6_3 f<= 0)
                                arg1 = 0f
                            else
                                arg1 = 1f
                            
                            edi[8] =
                                (__andps_xmmxud_memxud(xmm2_7, data_60cc70.o) * arg1 - xmm6_3) * arg4
                                + xmm6_3
                            
                            if (0f > xmm5_2)
                                edi[9] =
                                    (__andps_xmmxud_memxud(xmm1_5, data_60cc70.o) * -1f - xmm5_2) * arg4
                                    + xmm5_2
                                return eax_1
                            
                            if (xmm5_2 f<= 0)
                                goto label_56e19e
                            
                            edi[9] = (__andps_xmmxud_memxud(xmm1_5, data_60cc70.o) * 1f - xmm5_2) * arg4
                                + xmm5_2
                        case 3
                            float xmm5_3 = edi[8]
                            float xmm6_4 = edi[9]
                            float xmm4_2 = -1f
                            float xmm5_4
                            
                            if (not(0f <= xmm5_3))
                                xmm5_4 = -1f
                            else if (xmm5_3 f<= 0)
                                xmm5_4 = (zx.o(0)).d
                            else
                                xmm5_4 = 1f
                            
                            edi[8] = (__andps_xmmxud_memxud(xmm2_7, data_60cc70.o) * xmm5_4 f-
                                *(ecx_4 + 0x1c)) * arg4 f+ edi[8]
                            
                            if (not(0f > xmm6_4))
                                if (xmm6_4 f<= 0)
                                    xmm4_2 = (zx.o(0)).d
                                else
                                    xmm4_2 = 1f
                            
                            edi[9] = (__andps_xmmxud_memxud(xmm1_5, data_60cc70.o) * xmm4_2 f-
                                *(ecx_4 + 0x20)) * arg4 + xmm6_4
        else
            if (arg5 == 0)
                void* ecx_1 = *edi
                edi[8] = *(ecx_1 + 0x1c)
                int32_t eax_7 = *(ecx_1 + 0x20)
                edi[9] = eax_7
                return eax_7
            
            eax_1 = arg5 - 1
            
            if (arg5 == 1)
                void* eax_5 = *edi
                edi[8] = (*(eax_5 + 0x1c) f- edi[8]) * arg4 f+ edi[8]
                edi[9] = (*(eax_5 + 0x20) f- edi[9]) * arg4 f+ edi[9]
                return eax_5
    
    return eax_1
}
