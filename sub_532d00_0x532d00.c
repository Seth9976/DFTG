// 函数名称: sub_532d00
// 虚拟地址: 0x532d00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_532d00(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_c = arg2
    int32_t* var_c = arg2
    int32_t* ecx = arg2[3]
    void* ecx_1 = ecx[1]
    void* var_8 = ecx_1
    int32_t ebx = **ecx
    void* result
    
    if (*(ecx_1 + 0x6c) == 0)
        result = nullptr
    else
        void* esi_1 = *arg2
        
        if (*(esi_1 + 8) == 0)
            result = 1
        else
            void* eax_1 = arg1[0xd]
            
            if (eax_1 == 0)
                result = nullptr
            else
                int32_t* eax_2 = *(eax_1 + 0x10)
                int32_t eax_3 = *eax_2
                int32_t edx_1 = 0
                
                if (eax_3 s<= 0)
                label_532d64:
                    arg2 = var_c
                    result = nullptr
                else
                    while (true)
                        ecx_1 = var_8
                        
                        if (*(eax_2[2] + (edx_1 << 2)) == esi_1)
                            arg2 = var_c
                            break
                        
                        edx_1 += 1
                        
                        if (edx_1 s>= eax_3)
                            goto label_532d64
                    
                    result = 1
    
    arg2[0x1c] = result
    
    if (result != 0)
        void* esi_2 = arg1[0xd]
        
        if (esi_2 != 0)
            for (int32_t* i = *(esi_2 + 0x14); i != 0; i = i[3])
                if (*i == ebx)
                    result = sub_532a70(result, i[2], arg1, ecx_1)
                    ecx_1 = var_8
        
        void* edx_3 = *arg1
        void* eax_4 = edx_3
        void* esi_3 = *(edx_3 + 0x38)
        
        if (esi_3 != 0 && esi_3 != arg1[0xd])
            int32_t* i_1 = *(esi_3 + 0x14)
            
            if (i_1 != 0)
                do
                    if (*i_1 == ebx)
                        eax_4 = sub_532a70(eax_4, i_1[2], arg1, ecx_1)
                    
                    i_1 = i_1[3]
                    ecx_1 = var_8
                while (i_1 != 0)
                
                eax_4 = *arg1
        
        void* eax_7 = *(eax_4 + 0x30)
        int32_t ecx_5 = 0
        void* var_14_1 = eax_7
        int32_t var_10_2 = 0
        
        if (eax_7 s> 0)
            do
                eax_7 = *(*(*arg1 + 0x34) + (ecx_5 << 2))
                int32_t* i_2 = *(eax_7 + 0x14)
                
                if (i_2 != 0)
                    do
                        if (*i_2 == ebx)
                            eax_7 = sub_532a70(eax_7, i_2[2], arg1, var_8)
                        
                        i_2 = i_2[3]
                    while (i_2 != 0)
                    
                    ecx_5 = var_10_2
                
                ecx_5 += 1
                var_10_2 = ecx_5
            while (ecx_5 s< var_14_1)
        
        void* edx_7 = ecx[7]
        
        if (edx_7 != 0 && *(edx_7 + 4) == 4)
            sub_532a70(eax_7, edx_7, arg1, var_8)
        
        int32_t esi_4 = 0
        int32_t edx_8 = var_c[1]
        int32_t ebx_1 = var_c[2]
        int32_t var_8_1 = ebx_1
        int32_t var_10_3 = edx_8
        
        if (edx_8 s> 0)
            do
                void* ebx_2 = *(ebx_1 + (esi_4 << 2))
                
                if (*(ebx_2 + 0x68) == 0)
                    void* edx_9 = *(ebx_2 + 8)
                    
                    if (edx_9 != 0)
                        sub_532a10(arg1, edx_9)
                    
                    *(ebx_2 + 0x68) = 1
                    int32_t ecx_9 = arg1[0x17]
                    int32_t eax_9 = arg1[0x18]
                    
                    if (ecx_9 == eax_9)
                        int32_t eax_10 = eax_9 * 2
                        arg1[0x18] = eax_10
                        int32_t var_28_5 = eax_10 << 3
                        int32_t var_2c_1 = arg1[0x19]
                        int32_t eax_12 = sub_57fb2f()
                        ecx_9 = arg1[0x17]
                        arg1[0x19] = eax_12
                    
                    int32_t eax_13 = arg1[0x19]
                    edx_8 = var_10_3
                    *(eax_13 + (ecx_9 << 3)) = 0
                    *(eax_13 + (ecx_9 << 3) + 4) = ebx_2
                    arg1[0x17] += 1
                
                ebx_1 = var_8_1
                esi_4 += 1
            while (esi_4 s< edx_8)
        
        int32_t ecx_10 = arg1[0x17]
        int32_t eax_14 = arg1[0x18]
        
        if (ecx_10 == eax_14)
            int32_t eax_15 = eax_14 * 2
            arg1[0x18] = eax_15
            int32_t var_28_6 = eax_15 << 3
            int32_t var_2c_2 = arg1[0x19]
            int32_t eax_17 = sub_57fb2f()
            ecx_10 = arg1[0x17]
            edx_8 = var_10_3
            arg1[0x19] = eax_17
        
        int32_t eax_18 = arg1[0x19]
        *(eax_18 + (ecx_10 << 3)) = 2
        *(eax_18 + (ecx_10 << 3) + 4) = var_c
        result = nullptr
        arg1[0x17] += 1
        void* result_1 = nullptr
        
        if (edx_8 s> 0)
            do
                void* eax_19 = *(ebx_1 + (result << 2))
                int32_t edi_1 = 0
                int32_t ebx_3 = *(eax_19 + 0xc)
                int32_t eax_20 = *(eax_19 + 0x10)
                int32_t var_18_1 = eax_20
                
                if (ebx_3 s> 0)
                    do
                        void* esi_6 = *(eax_20 + (edi_1 << 2))
                        
                        if (*(esi_6 + 0x6c) != 0)
                            if (*(esi_6 + 0x68) != 0)
                                sub_532b30(*(esi_6 + 0x10), *(esi_6 + 0xc))
                                eax_20 = var_18_1
                            
                            *(esi_6 + 0x68) = 0
                        
                        edi_1 += 1
                    while (edi_1 s< ebx_3)
                    
                    edx_8 = var_10_3
                
                ebx_1 = var_8_1
                result = result_1 + 1
                result_1 = result
            while (result s< edx_8)
        
        int32_t ecx_12 = 0
        
        if (edx_8 s> 0)
            do
                result = *(var_8_1 + (ecx_12 << 2))
                ecx_12 += 1
                *(result + 0x68) = 1
            while (ecx_12 s< edx_8)
    
    return result
}
