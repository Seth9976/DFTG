// 函数名称: sub_532b80
// 虚拟地址: 0x532b80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* const __fastcallsub_532b80(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ecx = arg2[3]
    void* ecx = arg2[3]
    void* const result
    
    if (*(ecx + 0x6c) == 0)
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
                int32_t* eax_2 = *(eax_1 + 8)
                int32_t ecx_1 = 0
                int32_t eax_3 = *eax_2
                
                if (eax_3 s<= 0)
                label_532bce:
                    ecx = arg2[3]
                    result = nullptr
                else
                    while (*(eax_2[2] + (ecx_1 << 2)) != i)
                        ecx_1 += 1
                        
                        if (ecx_1 s>= eax_3)
                            goto label_532bce
                    
                    ecx = arg2[3]
                    result = 1
    
    arg2[9] = result
    
    if (result != 0)
        sub_532a10(arg1, ecx)
        int32_t* eax_4 = arg2[2]
        void* edi_1 = *eax_4
        sub_532a10(arg1, edi_1)
        int32_t eax_5 = arg2[1]
        
        if (eax_5 s> 1)
            int32_t edx_3 = 0
            int32_t edi_2 = *(arg1 + 0x5c)
            int32_t eax_6 = eax_4[eax_5 - 1]
            
            if (edi_2 s> 0)
                void* ecx_5 = *(arg1 + 0x64)
                
                do
                    if (*(ecx_5 + 4) == eax_6)
                        goto label_532c63
                    
                    edx_3 += 1
                    ecx_5 += 8
                while (edx_3 s< edi_2)
            
            int32_t edx_4 = *(arg1 + 0x68)
            int32_t eax_8 = *(arg1 + 0x6c)
            
            if (edx_4 == eax_8)
                int32_t eax_9 = eax_8 * 2
                *(arg1 + 0x6c) = eax_9
                int32_t var_2c_1 = eax_9 << 2
                int32_t var_30_1 = *(arg1 + 0x70)
                int32_t eax_11 = sub_57fb2f()
                edx_4 = *(arg1 + 0x68)
                *(arg1 + 0x70) = eax_11
            
            *(*(arg1 + 0x70) + (edx_4 << 2)) = eax_6
            *(arg1 + 0x68) += 1
        
    label_532c63:
        int32_t ecx_7 = *(arg1 + 0x5c)
        int32_t eax_13 = *(arg1 + 0x60)
        
        if (ecx_7 == eax_13)
            int32_t eax_14 = eax_13 * 2
            *(arg1 + 0x60) = eax_14
            int32_t var_2c_2 = eax_14 << 3
            int32_t var_30_2 = *(arg1 + 0x64)
            int32_t eax_16 = sub_57fb2f()
            ecx_7 = *(arg1 + 0x5c)
            *(arg1 + 0x64) = eax_16
        
        int32_t eax_17 = *(arg1 + 0x64)
        *(eax_17 + (ecx_7 << 3)) = 1
        *(eax_17 + (ecx_7 << 3) + 4) = arg2
        *(arg1 + 0x5c) += 1
        int32_t ebx_1 = *(edi_1 + 0xc)
        int32_t eax_18 = *(edi_1 + 0x10)
        int32_t edi_3 = 0
        int32_t var_c_2 = eax_18
        
        if (ebx_1 s> 0)
            do
                void* esi_1 = *(eax_18 + (edi_3 << 2))
                
                if (*(esi_1 + 0x6c) != 0)
                    if (*(esi_1 + 0x68) != 0)
                        sub_532b30(*(esi_1 + 0x10), *(esi_1 + 0xc))
                        eax_18 = var_c_2
                    
                    *(esi_1 + 0x68) = 0
                
                edi_3 += 1
            while (edi_3 s< ebx_1)
        
        result = eax_4[arg2[1] - 1]
        *(result + 0x68) = 1
    
    return result
}
