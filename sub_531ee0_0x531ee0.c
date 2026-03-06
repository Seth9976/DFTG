// 函数名称: sub_531ee0
// 虚拟地址: 0x531ee0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_531ee0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void* eax = *arg1
    void* eax = *arg1
    void* ebx = arg1[3]
    int32_t* edi = arg1[0x1b]
    int32_t i_1 = *(eax + 8)
    int32_t ecx = *(eax + 0xc)
    float xmm0_1 = _mm_cvtepi32_ps(zx.o(i_1))
    *edi = i_1
    
    if (edi[1] s< i_1)
        int32_t eax_1 = int.d(xmm0_1 * 1.75f)
        
        if (eax_1 s< 8)
            eax_1 = 8
        
        edi[1] = eax_1
        int32_t var_3c_1 = eax_1 << 2
        int32_t var_40_1 = edi[2]
        edi[2] = sub_57fb2f()
    
    int32_t* edi_1 = edi[2]
    int32_t* var_c = edi_1
    *arg1[0x1c] = 0
    int32_t* esi_1 = arg1[0x1c]
    *esi_1 = i_1
    
    if (esi_1[1] s< i_1)
        int32_t eax_5 = int.d(xmm0_1 * 1.75f)
        
        if (eax_5 s< 8)
            eax_5 = 8
        
        esi_1[1] = eax_5
        int32_t var_3c_2 = eax_5 << 2
        int32_t var_40_2 = esi_1[2]
        esi_1[2] = sub_57fb2f()
    
    void* eax_14 = ebx
    
    if (eax_14 == 0 || *(eax_14 + 0x1c) == 0)
        int32_t var_18_1 = 0
        
        if (i_1 s> 0)
            eax_14 = ecx - edi_1
            int32_t* ecx_4 = esi_1[2] - edi_1
            void* var_8_2 = eax_14
            bool cond:0_1
            
            do
                int32_t* esi_3 = *(edi_1 + eax_14)
                int32_t eax_17 = (*(esi_3[1] + 4))(esi_3)
                int32_t eax_18 = sub_531e10(arg2, eax_17)
                
                if (eax_18 == 0)
                    *edi_1 = eax_18
                else if (ebx == 0)
                label_532073:
                    *edi_1 = 1
                else
                    int32_t eax_19 = *esi_3
                    
                    if (eax_19 == 4 || eax_19 == 8 || eax_19 == 7)
                    label_532073_1:
                        *edi_1 = 1
                    else
                        void* eax_20 = *ebx
                        int32_t esi_4 = 0
                        int32_t ecx_7 = *(eax_20 + 0xc)
                        int32_t eax_21 = *(eax_20 + 8)
                        int32_t var_20_1 = ecx_7
                        
                        if (eax_21 s<= 0)
                        label_532073_2:
                            *edi_1 = 1
                        else
                            while (true)
                                void* eax_22 = *(ecx_7 + (esi_4 << 2))
                                
                                if ((*(*(eax_22 + 4) + 4))(eax_22) == eax_17)
                                    int32_t* ebx_3 = *(ebx + 0xc)
                                    
                                    if (ebx_3 != 0)
                                        while (true)
                                            void* eax_27 = *ebx_3
                                            int32_t esi_5 = 0
                                            int32_t edi_2 = *(eax_27 + 8)
                                            int32_t ecx_9 = *(eax_27 + 0xc)
                                            int32_t var_20_2 = ecx_9
                                            
                                            if (edi_2 s<= 0)
                                            label_5320ef:
                                                edi_1 = var_c
                                                
                                                if (ebx_3[0x17] f<= 0f)
                                                    goto label_5320dc
                                                
                                                *edi_1 = 3
                                                *(ecx_4 + edi_1) = ebx_3
                                                goto label_53207c
                                            
                                            while (true)
                                                void* eax_28 = *(ecx_9 + (esi_5 << 2))
                                                
                                                if ((*(*(eax_28 + 4) + 4))(eax_28) == eax_17)
                                                    break
                                                
                                                esi_5 += 1
                                                
                                                if (esi_5 s>= edi_2)
                                                    goto label_5320ef
                                                
                                                ecx_9 = var_20_2
                                            
                                            ebx_3 = ebx_3[3]
                                            
                                            if (ebx_3 == 0)
                                                edi_1 = var_c
                                                break
                                    
                                label_5320dc:
                                    *edi_1 = 2
                                    break
                                
                                ecx_7 = var_20_1
                                esi_4 += 1
                                
                                if (esi_4 s>= eax_21)
                                    goto label_532073_2
                
            label_53207c:
                edi_1 = &edi_1[1]
                var_c = edi_1
                cond:0_1 = var_18_1 + 1 s< i_1
                var_18_1 += 1
                eax_14 = var_8_2
            while (cond:0_1)
    else if (i_1 s> 0)
        void* eax_9 = ecx - edi_1
        void* var_8_1 = eax_9
        int32_t i
        
        do
            void* eax_10 = *(eax_9 + edi_1)
            sub_531e10(arg2, (*(*(eax_10 + 4) + 4))(eax_10))
            eax_9 = var_8_1
            edi_1 = &edi_1[1]
            edi_1[-1] = 2
            i = i_1
            i_1 -= 1
        while (i != 1)
        return eax_9
    
    return eax_14
}
