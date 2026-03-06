// 函数名称: sub_4cad40
// 虚拟地址: 0x4cad40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4cad40(int32_t arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    uint32_t edx_1 = zx.d(arg1.w)
    int32_t* eax
    int32_t esi_1
    
    if (edx_1 u< data_6c9d94)
        esi_1 = data_6c9d90
        eax = edx_1 * 0x438
    
    char const* const var_48
    int32_t var_44
    char const* const var_40_4
    char* ecx_14
    
    if (edx_1 u>= data_6c9d94 || *(eax + esi_1 + 0x434) != arg1)
        var_40_4 = "DataArray<struct UIState>::DataArrayGet"
        var_44 = 0x6d
        var_48 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        ecx_14 = "DataArrayTryToGet(id) != NULL"
    label_4cb111:
        sub_489550(eax, &data_5b2591, ecx_14, var_48, var_44, var_40_4)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* edi_2 = edx_1 * 0x438 + esi_1
    void* var_c_1 = edi_2
    bool cond:0_1 = *(edi_2 + 8) != 0
    *(edi_2 + 0x1c) = 1
    
    if (cond:0_1)
        return 
    
    eax = sub_4c8c70(*(edi_2 + 4))
    uint32_t (* ebx_1)[0x4] = nullptr
    int32_t* var_24_1 = eax
    uint32_t (* var_18_1)[0x4] = nullptr
    
    if (eax[2] s<= 0)
        return 
    
    void* esi_2 = nullptr
    void* var_20_1 = nullptr
    
    while (true)
        void* esi_3 = esi_2 + *eax
        int32_t eax_2 = *(esi_3 + 4)
        
        if (eax_2 != 1 && eax_2 != 5 && (eax_2 != 3 || *(esi_3 + 0x110) != 0))
            uint32_t (* edi_3)[0x4] = sub_4ca090(eax_2, ebx_1, edi_2, *(esi_3 + 8))
            uint32_t xmm0_1 = edi_3[1][0]
            xmm0_1 f- 0
            uint32_t (* eax_3)[0x4]
            eax_3:1.b = (xmm0_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 f< 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                if ((*edi_3)[2] s<= *edi_3)
                    eax_3.b = *(esi_3 + 0x44)
                else
                    eax_3.b = (*edi_3)[3].b
            
            if (p_2 || eax_3.b == 0)
                void* ecx_3 = esi_3
                int32_t eax_5 = *(ecx_3 + 4) - 2
                void* esi_6
                
                if (eax_5 u> 7)
                    esi_6 = esi_3
                else
                    switch (eax_5)
                        case 0
                            uint32_t eax_8
                            uint32_t edx_4
                            uint32_t ebx_2
                            uint32_t esi_4
                            
                            if (edi_3[0x12][0] s<= *edi_3)
                                edx_4 = *(ecx_3 + 0xb0)
                                eax_8 = edx_4
                                ebx_2 = *(ecx_3 + 0xac)
                                esi_4 = ebx_2
                            else
                                edx_4 = (*edi_3)[0x4b]
                                ebx_2 = edi_3[0x13][0]
                                eax_8 = *(ecx_3 + 0xb0)
                                esi_4 = *(ecx_3 + 0xac)
                            
                            eax = eax_8 * esi_4
                            uint32_t var_1c_1 = edx_4
                            
                            if (eax s> 0x1e)
                                var_40_4 = "UIStateUpdateNew"
                                var_44 = 0x7c1
                                var_48 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
                                ecx_14 = "el.rows * el.cols <= 30"
                                break
                            
                            eax = edx_4 * ebx_2
                            
                            if (eax s> 0x1e)
                                var_40_4 = "UIStateUpdateNew"
                                var_44 = 0x7c2
                                var_48 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
                                ecx_14 = "dimsUpdate.x * dimsUpdate.y <= 30"
                                break
                            
                            uint32_t eax_10 = ebx_2
                            int32_t ebx_3 = 0
                            
                            if (eax_10 s> 0)
                                do
                                    int32_t esi_5 = 0
                                    
                                    if (edx_4 s> 0)
                                        do
                                            int32_t var_2c = esi_5
                                            int32_t var_28_1 = ebx_3
                                            *(sub_4cac50(&var_2c, edi_3, ecx_3, &var_2c) + 0x434)
                                            sub_4cad40(&data_5d35a4, (*edi_3)[0x47])
                                            edx_4 = var_1c_1
                                            esi_5 += 1
                                            ecx_3 = esi_3
                                        while (esi_5 s< edx_4)
                                        
                                        eax_10 = ebx_2
                                    
                                    ebx_3 += 1
                                while (ebx_3 s< eax_10)
                            
                            ebx_1 = var_18_1
                            esi_6 = esi_3
                        case 1
                            if ((*edi_3)[0x57].b != 0)
                                sub_508c90(&edi_3[0x16], 0, &data_5d27f8)
                            
                            esi_6 = esi_3
                        case 2, 5
                            esi_6 = esi_3
                        case 3, 7
                            esi_6 = esi_3
                            void* ecx_11 = sub_4fd250(edi_3[0xa][0])
                            int32_t* eax_16 = *(esi_6 + 0x60)
                            
                            if (eax_16 != 0)
                                if (ecx_11 == 0)
                                    ecx_11 = sub_4fd1f0(eax_16, &data_5d27f8)
                                    uint32_t eax_18 = *(ecx_11 + 0x78)
                                    *(ecx_11 + 0x20) = 1
                                    edi_3[0xa][0] = eax_18
                                    eax_16 = *(esi_6 + 0x60)
                                
                                if (*ecx_11 != eax_16)
                                    sub_4fd2f0(ecx_11)
                                    ecx_11 = sub_4fd1f0(*(esi_6 + 0x60), &data_5d27f8)
                                    uint32_t eax_20 = *(ecx_11 + 0x78)
                                    *(ecx_11 + 0x20) = 1
                                    edi_3[0xa][0] = eax_20
                                
                                sub_501f70(ecx_11, data_620d84)
                            else if (ecx_11 != 0)
                                sub_4fd2f0(ecx_11)
                                edi_3[0xa][0] = 0
                        case 4
                            uint32_t edx_3 = *edi_3
                            
                            if ((*edi_3)[2] s<= edx_3)
                                eax_5.b = *(ecx_3 + 0x44)
                            else
                                eax_5.b = (*edi_3)[3].b
                            
                            float xmm0_2
                            
                            xmm0_2 = eax_5.b != 0 ? -1f : 1f
                            
                            bool cond:1_1 = (*edi_3)[0x17] == 0
                            float xmm0_4 = xmm0_2 * arg2 f+ (*edi_3)[5]
                            (*edi_3)[5] = xmm0_4
                            float xmm2_1
                            
                            if (cond:1_1)
                                xmm2_1 = _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x70)))
                            else
                                xmm2_1 = edi_3[6][0]
                            
                            uint32_t eax_6
                            
                            if ((*edi_3)[0x4d] s<= edx_3)
                                eax_6 = *(ecx_3 + 0x6c)
                            else
                                eax_6 = (*edi_3)[0x4e]
                            
                            float xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_6)) + xmm2_1
                            
                            if (not(0f <= xmm0_4))
                                (*edi_3)[5] = 0
                                xmm0_4 = (zx.o(0)).d
                            
                            float xmm0_7 = (xmm0_4 * 1000f - xmm2_1) / (xmm1_2 - xmm2_1)
                            
                            if (not(0 f< xmm0_7))
                                edi_3[1][0] = 0
                            else if (xmm0_7 < 1f)
                                edi_3[1][0] = sub_41f140(1, xmm0_7, (zx.o(0)).d, 1f)
                            else
                                edi_3[1][0] = 0x3f800000
                            
                            esi_6 = esi_3
                        case 6
                            int32_t* eax_14 = sub_4f9740((*edi_3)[0x27])
                            
                            if (eax_14 != 0)
                                sub_4f9820(eax_14, arg2)
                            
                            esi_6 = esi_3
                
                void* eax_13 = sub_4fd250(edi_3[0xa][0])
                
                if (eax_13 != 0 && *(esi_6 + 4) != 9)
                    sub_4fd2f0(eax_13)
                    edi_3[0xa][0] = 0
            
            edi_2 = var_c_1
        
        eax = var_24_1
        ebx_1 += 1
        esi_2 = var_20_1 + 0x178
        var_18_1 = ebx_1
        var_20_1 = esi_2
        
        if (ebx_1 s>= eax[2])
            return 
    
    goto label_4cb111
}
