// 函数名称: sub_438270
// 虚拟地址: 0x438270
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_438270(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    sub_48a560(arg1, arg2)
    sub_48a560(&arg1[1], &arg2[1])
    arg1[2] = arg2[2]
    __builtin_memcpy(&arg1[4], &arg2[4], 0x108)
    __builtin_memcpy(&arg1[0x46], &arg2[0x46], 0x108)
    char* const esi_2 = &data_5b2591
    char* const edx = &data_5b2591
    char* const ecx_1 = &data_5b2591
    char* eax_2 = arg1[0x88]
    
    if (eax_2 != 0)
        edx = eax_2
    
    char* eax_3 = arg2[0x88]
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    if (edx != ecx_1)
        if (data_aca1f4 != 0)
            char* eax_4 = arg1[0x88]
            
            if (eax_4 != 0 && *eax_4 != 0)
                char* eax_5 = sub_48a080(&arg1[0x88])
                int32_t temp1_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
                    arg1[0x88] = &data_5b2591
        
        char* eax_6 = arg2[0x88]
        arg1[0x88] = eax_6
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&arg1[0x88])
            *(eax_7 + 4) += 1
    
    char* eax_8 = arg1[0x89]
    char* const edx_3 = &data_5b2591
    char* const ecx_5 = &data_5b2591
    
    if (eax_8 != 0)
        edx_3 = eax_8
    
    char* eax_9 = arg2[0x89]
    
    if (eax_9 != 0)
        ecx_5 = eax_9
    
    if (edx_3 != ecx_5)
        void* ecx_6 = &arg1[0x89]
        
        if (data_aca1f4 != 0)
            char* eax_10 = arg1[0x89]
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_48a080(ecx_6)
                int32_t temp2_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp2_1 != 1)
                    ecx_6 = &arg1[0x89]
                else
                    sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
                    ecx_6 = &arg1[0x89]
                    *ecx_6 = &data_5b2591
        
        char* eax_12 = arg2[0x89]
        *ecx_6 = eax_12
        
        if (eax_12 != 0 && *eax_12 != 0)
            char* eax_13 = sub_48a080(ecx_6)
            *(eax_13 + 4) += 1
    
    char* const edx_6 = &data_5b2591
    arg1[0x8a] = arg2[0x8a]
    char* const ecx_8 = &data_5b2591
    arg1[0x8b] = arg2[0x8b]
    arg1[0x8c] = arg2[0x8c]
    char* eax_17 = arg1[0x8d]
    
    if (eax_17 != 0)
        edx_6 = eax_17
    
    char* eax_18 = arg2[0x8d]
    
    if (eax_18 != 0)
        ecx_8 = eax_18
    
    if (edx_6 != ecx_8)
        void* ecx_9 = &arg1[0x8d]
        
        if (data_aca1f4 != 0)
            char* eax_19 = arg1[0x8d]
            
            if (eax_19 != 0 && *eax_19 != 0)
                char* eax_20 = sub_48a080(ecx_9)
                int32_t temp3_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp3_1 != 1)
                    ecx_9 = &arg1[0x8d]
                else
                    sub_4984f0(eax_20, *(eax_20 + 0xc) + 0x10)
                    ecx_9 = &arg1[0x8d]
                    *ecx_9 = &data_5b2591
        
        char* eax_21 = arg2[0x8d]
        *ecx_9 = eax_21
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_48a080(ecx_9)
            *(eax_22 + 4) += 1
    
    char* eax_23 = arg1[0x8e]
    char* const edx_9 = &data_5b2591
    char* const ecx_11 = &data_5b2591
    
    if (eax_23 != 0)
        edx_9 = eax_23
    
    char* eax_24 = arg2[0x8e]
    
    if (eax_24 != 0)
        ecx_11 = eax_24
    
    if (edx_9 != ecx_11)
        void* ecx_12 = &arg1[0x8e]
        
        if (data_aca1f4 != 0)
            char* eax_25 = arg1[0x8e]
            
            if (eax_25 != 0 && *eax_25 != 0)
                char* eax_26 = sub_48a080(ecx_12)
                int32_t temp4_1 = *(eax_26 + 4)
                *(eax_26 + 4) -= 1
                
                if (temp4_1 != 1)
                    ecx_12 = &arg1[0x8e]
                else
                    sub_4984f0(eax_26, *(eax_26 + 0xc) + 0x10)
                    ecx_12 = &arg1[0x8e]
                    *ecx_12 = &data_5b2591
        
        char* eax_27 = arg2[0x8e]
        *ecx_12 = eax_27
        
        if (eax_27 != 0 && *eax_27 != 0)
            char* eax_28 = sub_48a080(ecx_12)
            *(eax_28 + 4) += 1
    
    char* eax_29 = arg1[0x8f]
    void* edx_12 = &arg1[0x8f]
    char* const ecx_14 = &data_5b2591
    
    if (eax_29 != 0)
        ecx_14 = eax_29
    
    char* eax_30 = arg2[0x8f]
    
    if (eax_30 != 0)
        esi_2 = eax_30
    
    if (ecx_14 != esi_2)
        if (data_aca1f4 != 0)
            char* eax_31 = *edx_12
            
            if (eax_31 != 0 && *eax_31 != 0)
                char* eax_32 = sub_48a080(edx_12)
                int32_t temp5_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp5_1 != 1)
                    edx_12 = &arg1[0x8f]
                else
                    sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                    edx_12 = &arg1[0x8f]
                    *edx_12 = &data_5b2591
        
        char* eax_33 = arg2[0x8f]
        *edx_12 = eax_33
        
        if (eax_33 != 0 && *eax_33 != 0)
            char* eax_34 = sub_48a080(edx_12)
            *(eax_34 + 4) += 1
    
    arg1[0x90] = arg2[0x90]
    arg1[0x91] = arg2[0x91]
    arg1[0x92] = arg2[0x92]
    arg1[0x93] = arg2[0x93]
    arg1[0x94] = arg2[0x94]
    arg1[0x95] = arg2[0x95]
    arg1[0x96] = arg2[0x96]
    arg1[0x97] = arg2[0x97]
    arg1[0x98] = arg2[0x98]
    arg1[0x99] = arg2[0x99]
    __builtin_memcpy(&arg1[0x9a], &arg2[0x9a], 0x90)
    return arg1
}
