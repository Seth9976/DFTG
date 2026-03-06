// 函数名称: sub_445590
// 虚拟地址: 0x445590
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_445590(int32_t arg1, int32_t arg2, void* arg3, uint32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ebx = arg2
    int32_t ebx = arg2
    int32_t var_c = ebx
    int32_t** result_1 = arg3 + (arg4 + 0xbb) * 0xc
    void* esi_1 = ebx * 0x1bc + arg3
    sub_445280(result_1, arg4, arg3, ebx, 2, 1)
    int32_t* result_3 = result_1
    int32_t* result = *result_3
    
    if (*(result_3 + 7) != 1)
        int32_t ecx_10 = 0
        int32_t var_18_1 = 0
        
        if (result[0xd] s> 0)
            int32_t var_1c_1 = 0
            
            while (true)
                void* eax_13 = &result[0xe] + ecx_10
                
                if (*eax_13 == 8)
                    int32_t eax_14 = *(eax_13 + 4)
                    
                    if ((eax_14 & 0x200) == 0)
                        if ((eax_14.b & 8) != 0)
                            int32_t ecx_12 = *(eax_13 + 8)
                            *(esi_1 + 0x18c) += ecx_12
                            int32_t edx_7 = *(esi_1 + 0x18c)
                            *(esi_1 + 0x1ac) += ecx_12
                            
                            if (edx_7 s> 0xa)
                                *(esi_1 + 0x18c) = 0xa
                                ecx_12 += 0xa - edx_7
                            
                            int32_t eax_16 = *(arg3 + 0x10)
                            
                            if (eax_16 == 0)
                                if (ecx_12 != 0)
                                    sub_444430(eax_16, eax_16 + 0x24, arg3, ebx, arg4, ecx_12, eax_16, 
                                        eax_16)
                                    eax_16 = *(arg3 + 0x10)
                                
                                if (eax_16 == 0)
                                    sub_444430(eax_13, 0x14, arg3, ebx, arg4, 8, *(eax_13 + 8), 
                                        zx.d(*(result_1 + 7)))
                            
                            result_3 = result_1
                        
                        char ecx_15 = (*(eax_13 + 4)).b
                        
                        if ((ecx_15 & 5) != 0)
                            if ((ecx_15 & 1) != 0)
                                sub_444b80(eax_13, ebx, arg3, arg4)
                                ecx_15 = (*(eax_13 + 4)).b
                            
                            uint32_t ebx_3 = zx.d(ecx_15) & 0x10
                            int32_t ebx_4 = neg.d(ebx_3)
                            int32_t ebx_6 = sbb.d(ebx_4, ebx_4, ebx_3 != 0) & 3
                            
                            if ((ecx_15 & 0x20) != 0)
                                ebx_6 = 2
                            
                            if ((ecx_15 & 0x40) != 0)
                                ebx_6 = 7
                            
                            if ((ecx_15 & 0x80) != 0)
                                ebx_6 = 9
                            
                            int32_t i = 0
                            int32_t i_4 = 0
                            
                            if (*(eax_13 + 8) s> 0)
                                do
                                    int32_t eax_24 = 0
                                    void* ecx_17 = esi_1 + 0x24
                                    
                                    while (true)
                                        if (eax_24 s>= 0x28)
                                            sub_444530("Could not find empty die spot!\n")
                                            noreturn
                                        
                                        if (*ecx_17 == 0)
                                            break
                                        
                                        eax_24 += 1
                                        ecx_17 += 8
                                    
                                    if (eax_24 s>= *(esi_1 + 0x164))
                                        *(esi_1 + 0x164) = eax_24 + 1
                                    
                                    *(esi_1 + (eax_24 << 3) + 0x24) = ebx_6.b
                                    *(esi_1 + (eax_24 << 3) + 0x25) = 1
                                    int32_t ecx_19 = *(arg3 + 0x10)
                                    
                                    if (ecx_19 == 0)
                                        sub_444430(eax_24, 0x2a, arg3, var_c, eax_24, zx.d(ebx_6.b), 1, 
                                            ecx_19)
                                        int32_t ecx_22 = *(arg3 + 0x10)
                                        i = i_4
                                        
                                        if (ecx_22 == 0)
                                            uint32_t eax_26 = zx.d(*(result_1 + 7))
                                            sub_444430(eax_26, ecx_22 + 0x14, arg3, var_c, arg4, 4, 
                                                ebx_6, eax_26)
                                            i = i_4
                                    
                                    i += 1
                                    i_4 = i
                                while (i s< *(eax_13 + 8))
                            
                            result_3 = result_1
                            ebx = var_c
                
                result = *result_3
                var_18_1 += 1
                var_1c_1 += 0xc
                
                if (var_18_1 s>= result[0xd])
                    break
                
                ecx_10 = var_1c_1
        
        int32_t i_1 = 0
        
        if (result[0xd] s> 0)
            int32_t ebx_7 = 0
            int32_t* result_2
            
            do
                result_2 = result
                
                if (*(ebx_7 + result + 0x38) == 5)
                    int32_t edx_11 = *(ebx_7 + result + 0x3c)
                    
                    if ((edx_11.b & 4) != 0)
                        int32_t eax_30 = edx_11 u>> 0xf & 1
                        
                        if ((edx_11 & 0x2000) != 0)
                            eax_30 = 5
                        
                        sub_444b00(eax_30, var_c, arg3, eax_30, 5, arg4)
                        result_2 = *result_1
                
                i_1 += 1
                ebx_7 += 0xc
                result = result_2
            while (i_1 s< result_2[0xd])
    else
        if ((result[7].b & 0x80) != 0)
            result = sub_444b80(result, ebx, arg3, arg4)
        
        sub_445440(result, ebx, arg3, arg4)
        result = result_1
        int32_t i_2 = 0
        int32_t i_3 = 0
        void* ebx_1 = *result
        
        if (*(ebx_1 + 0x34) s> 0)
            int32_t ecx_4 = 0
            int32_t var_10_1 = 0
            
            do
                if (*(ecx_4 + ebx_1 + 0x38) == 8)
                    int32_t eax_2 = *(ecx_4 + ebx_1 + 0x3c)
                    
                    if ((eax_2 & 0x200) == 0)
                        result = result_1
                    else
                        if ((eax_2.b & 8) != 0)
                            int32_t ecx_5 = *(ecx_4 + ebx_1 + 0x40)
                            *(esi_1 + 0x18c) += ecx_5
                            int32_t edx_3 = *(esi_1 + 0x18c)
                            *(esi_1 + 0x1ac) += ecx_5
                            
                            if (edx_3 s> 0xa)
                                *(esi_1 + 0x18c) = 0xa
                                ecx_5 += 0xa - edx_3
                            
                            int32_t eax_4 = *(arg3 + 0x10)
                            
                            if (eax_4 == 0)
                                if (ecx_5 != 0)
                                    sub_444430(eax_4, eax_4 + 0x24, arg3, var_c, arg4, ecx_5, eax_4, 
                                        eax_4)
                                    eax_4 = *(arg3 + 0x10)
                                
                                if (eax_4 == 0)
                                    sub_444430(var_10_1, 0x14, arg3, var_c, arg4, 8, 
                                        *(var_10_1 + ebx_1 + 0x40), zx.d(*(result_1 + 7)))
                            
                            i_2 = i_3
                            ecx_4 = var_10_1
                        
                        if ((*(ecx_4 + ebx_1 + 0x3c) & 2) == 0)
                            result = result_1
                        else
                            if (arg6 != 1)
                                sub_444530("Tried to remove more than one settler!\n")
                                noreturn
                            
                            int32_t* edx_5 = arg5
                            *(esi_1 + (*edx_5 << 3) + 0x24) = 0
                            int32_t eax_9 = *(arg3 + 0x10)
                            bool cond:3_1 = eax_9 != 0
                            
                            if (eax_9 == 0)
                                sub_444430(eax_9, eax_9 + 0x2e, arg3, var_c, *edx_5, eax_9, eax_9, 
                                    eax_9)
                                ecx_4 = var_10_1
                                cond:3_1 = *(arg3 + 0x10) != 0
                                edx_5 = arg5
                            
                            result = result_1
                            
                            if (cond:3_1)
                                i_2 = i_3
                            else
                                uint32_t eax_11 = zx.d(*(result + 7))
                                sub_444430(eax_11, 0x14, arg3, var_c, arg4, 2, *edx_5, eax_11)
                                ecx_4 = var_10_1
                                i_2 = i_3
                                result = result_1
                
                ebx_1 = *result
                i_2 += 1
                ecx_4 += 0xc
                i_3 = i_2
                var_10_1 = ecx_4
            while (i_2 s< *(ebx_1 + 0x34))
    
    return result
}
