// 函数名称: sub_507570
// 虚拟地址: 0x507570
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_507570(int32_t* arg1)
{
    // 第一条实际指令: if (data_114e818 == 0)
    if (data_114e818 == 0)
        return 
    
    int32_t* edx_1 = arg1
    int32_t i = 0
    int32_t i_1 = 0
    
    if (edx_1[2] s<= 0)
        return 
    
    int32_t ecx_1 = 0
    int32_t var_c_1 = 0
    
    do
        int32_t* edi_1 = *edx_1
        int32_t edx_2 = *(edi_1 + ecx_1)
        void* edi_2 = edi_1 + ecx_1
        int32_t ecx_2 = 0
        
        if (edx_2 s> 0)
            int32_t* eax = *(edi_2 + 8)
            
            do
                if (*eax == 2)
                    int32_t eax_1 = eax[2]
                    *(edi_2 + 0x10) = eax_1
                    sub_4f0b40(eax_1, edi_2, &data_626728, 2)
                    break
                
                ecx_2 += 1
                eax = &eax[4]
            while (ecx_2 s< edx_2)
            
            i = i_1
        
        int32_t j = 0
        
        if (*edi_2 s> 0)
            int32_t edx_4 = 0
            int32_t var_10_1 = 0
            
            do
                int32_t* esi_1 = *(edi_2 + 8)
                int32_t eax_2 = *(esi_1 + edx_4)
                
                if (eax_2 u>= 0x71)
                    sub_489550(eax_2, &data_5b2591, 
                        "attribPair.tag >= 0 && attribPair.tag < NUM_PARTICLE_PARAM_TYPES", 
                        "d:\ax\trunk\ax2017\engine\particle.cpp", 0xbbd, "ParticleLoad")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (eax_2 == 5)
                    int32_t**** esi_2 = *(esi_1 + edx_4 + 8)
                    
                    if (esi_2 != 0)
                        int32_t*** eax_3 = *esi_2
                        
                        if (eax_3 == 0)
                            edx_4.b = 0
                            sub_4e6fe0(esi_2, edx_4.b)
                            eax_3 = *esi_2
                            
                            if (eax_3 == 0)
                                sub_4d1060(esi_2)
                                eax_3 = *esi_2
                            
                            edx_4 = var_10_1
                        
                        int32_t* ecx_5 = **eax_3
                        int32_t eax_5 = *ecx_5
                        float xmm3_2 = ecx_5[3] f* ecx_5[2]
                        int32_t eax_7 = ecx_5[1]
                        float xmm2_2 =
                            _mm_cvtpd_ps(float.d(eax_5) f+ *((eax_5 u>> 0x1f << 3) + &data_60cbc0))
                            * xmm3_2
                        float xmm1_1 =
                            _mm_cvtpd_ps(float.d(eax_7) f+ *((eax_7 u>> 0x1f << 3) + &data_60cbc0))
                        float xmm0_6 = float.s(*(edi_2 + 0xf8))
                        *(edi_2 + 0x100) = xmm2_2 * 0.00999999978f / float.s(*(edi_2 + 0xfc))
                        *(edi_2 + 0x104) = xmm1_1 * xmm3_2 * 0.00999999978f / xmm0_6
                
                j += 1
                edx_4 += 0x10
                var_10_1 = edx_4
            while (j s< *edi_2)
            
            i = i_1
        
        edx_1 = arg1
        i += 1
        ecx_1 = var_c_1 + 0x168
        i_1 = i
        var_c_1 = ecx_1
    while (i s< edx_1[2])
}
