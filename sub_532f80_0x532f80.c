// 函数名称: sub_532f80
// 虚拟地址: 0x532f80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_532f80(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ebx = arg2[3]
    void* ebx = arg2[3]
    int32_t* var_8 = arg2
    void* result
    
    if (*(ebx + 0x6c) == 0)
        result = nullptr
    else
        void* i = *arg2
        
        if (*(i + 8) == 0)
            result = 1
        else
            void* eax_1 = *(arg1 + 0x34)
            
            if (eax_1 == 0)
                result = nullptr
            else
                int32_t* eax_2 = *(eax_1 + 0xc)
                int32_t ecx = 0
                int32_t eax_3 = *eax_2
                
                if (eax_3 s<= 0)
                label_532fce:
                    arg2 = var_8
                    result = nullptr
                else
                    while (*(eax_2[2] + (ecx << 2)) != i)
                        ecx += 1
                        
                        if (ecx s>= eax_3)
                            goto label_532fce
                    
                    arg2 = var_8
                    result = 1
    
    arg2[8] = result
    
    if (result != 0)
        sub_532a10(arg1, ebx)
        int32_t edi_1 = 0
        int32_t ecx_2 = var_8[2]
        int32_t ebx_1 = var_8[1]
        int32_t var_c_1 = ecx_2
        int32_t var_10_1 = ebx_1
        
        if (*(*var_8 + 0x44) == 0)
            if (ebx_1 s> 0)
                do
                    void* ebx_2 = *(ecx_2 + (edi_1 << 2))
                    
                    if (*(ebx_2 + 0x68) == 0)
                        void* edx_4 = *(ebx_2 + 8)
                        
                        if (edx_4 != 0)
                            sub_532a10(arg1, edx_4)
                        
                        *(ebx_2 + 0x68) = 1
                        int32_t ecx_8 = *(arg1 + 0x5c)
                        int32_t eax_16 = *(arg1 + 0x60)
                        
                        if (ecx_8 == eax_16)
                            int32_t eax_17 = eax_16 * 2
                            *(arg1 + 0x60) = eax_17
                            int32_t var_28_3 = eax_17 << 3
                            int32_t var_2c_3 = *(arg1 + 0x64)
                            int32_t eax_19 = sub_57fb2f()
                            ecx_8 = *(arg1 + 0x5c)
                            *(arg1 + 0x64) = eax_19
                        
                        int32_t eax_20 = *(arg1 + 0x64)
                        *(eax_20 + (ecx_8 << 3)) = 0
                        *(eax_20 + (ecx_8 << 3) + 4) = ebx_2
                        *(arg1 + 0x5c) += 1
                        ecx_2 = var_c_1
                    
                    ebx_1 = var_10_1
                    edi_1 += 1
                while (edi_1 s< ebx_1)
        else if (ebx_1 s> 0)
            do
                void* i_1 = *(ecx_2 + (edi_1 << 2))
                
                if (*(i_1 + 0x68) == 0)
                    void* edx_2 = *(i_1 + 8)
                    
                    if (edx_2 != 0)
                        sub_532a10(arg1, edx_2)
                    
                    *(i_1 + 0x68) = 1
                    int32_t ecx_4 = *(arg1 + 0x5c)
                    int32_t eax_6 = *(arg1 + 0x60)
                    
                    if (ecx_4 == eax_6)
                        int32_t eax_7 = eax_6 * 2
                        *(arg1 + 0x60) = eax_7
                        int32_t var_28_1 = eax_7 << 3
                        int32_t var_2c_1 = *(arg1 + 0x64)
                        int32_t eax_9 = sub_57fb2f()
                        ecx_4 = *(arg1 + 0x5c)
                        *(arg1 + 0x64) = eax_9
                    
                    int32_t eax_10 = *(arg1 + 0x64)
                    *(eax_10 + (ecx_4 << 3)) = 0
                    *(eax_10 + (ecx_4 << 3) + 4) = i_1
                    *(arg1 + 0x5c) += 1
                
                int32_t edx_3 = *(arg1 + 0x5c)
                int32_t edi_2 = 0
                
                if (edx_3 s<= 0)
                label_53307d:
                    int32_t ecx_6 = *(arg1 + 0x68)
                    int32_t eax_11 = *(arg1 + 0x6c)
                    
                    if (ecx_6 == eax_11)
                        int32_t eax_12 = eax_11 * 2
                        *(arg1 + 0x6c) = eax_12
                        int32_t var_28_2 = eax_12 << 2
                        int32_t var_2c_2 = *(arg1 + 0x70)
                        int32_t eax_14 = sub_57fb2f()
                        ecx_6 = *(arg1 + 0x68)
                        *(arg1 + 0x70) = eax_14
                    
                    *(*(arg1 + 0x70) + (ecx_6 << 2)) = i_1
                    *(arg1 + 0x68) += 1
                else
                    void* ecx_5 = *(arg1 + 0x64)
                    
                    while (*(ecx_5 + 4) != i_1)
                        edi_2 += 1
                        ecx_5 += 8
                        
                        if (edi_2 s>= edx_3)
                            goto label_53307d
                
                ebx_1 = var_10_1
                edi_1 = edi_2 + 1
                ecx_2 = var_c_1
            while (edi_1 s< ebx_1)
        
        int32_t ecx_9 = *(arg1 + 0x5c)
        int32_t eax_21 = *(arg1 + 0x60)
        
        if (ecx_9 == eax_21)
            int32_t eax_22 = eax_21 * 2
            *(arg1 + 0x60) = eax_22
            int32_t var_28_4 = eax_22 << 3
            int32_t var_2c_4 = *(arg1 + 0x64)
            int32_t eax_24 = sub_57fb2f()
            ecx_9 = *(arg1 + 0x5c)
            *(arg1 + 0x64) = eax_24
        
        int32_t eax_25 = *(arg1 + 0x64)
        *(eax_25 + (ecx_9 << 3)) = 3
        *(eax_25 + (ecx_9 << 3) + 4) = var_8
        result = nullptr
        *(arg1 + 0x5c) += 1
        void* result_1 = nullptr
        
        if (ebx_1 s> 0)
            int32_t ecx_10 = var_c_1
            
            do
                void* eax_26 = *(ecx_10 + (result << 2))
                int32_t edi_3 = 0
                int32_t ebx_3 = *(eax_26 + 0xc)
                int32_t eax_27 = *(eax_26 + 0x10)
                int32_t var_14_1 = eax_27
                
                if (ebx_3 s> 0)
                    do
                        void* esi_1 = *(eax_27 + (edi_3 << 2))
                        
                        if (*(esi_1 + 0x6c) != 0)
                            if (*(esi_1 + 0x68) != 0)
                                sub_532b30(*(esi_1 + 0x10), *(esi_1 + 0xc))
                                eax_27 = var_14_1
                            
                            *(esi_1 + 0x68) = 0
                        
                        edi_3 += 1
                    while (edi_3 s< ebx_3)
                    
                    ecx_10 = var_c_1
                
                ebx_1 = var_10_1
                result = result_1 + 1
                result_1 = result
            while (result s< ebx_1)
        
        int32_t ecx_12 = 0
        
        if (ebx_1 s> 0)
            do
                result = *(var_c_1 + (ecx_12 << 2))
                ecx_12 += 1
                *(result + 0x68) = 1
            while (ecx_12 s< ebx_1)
    
    return result
}
