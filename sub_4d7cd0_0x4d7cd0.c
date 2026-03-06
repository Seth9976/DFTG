// 函数名称: sub_4d7cd0
// 虚拟地址: 0x4d7cd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d7cd0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* ebx = data_114e86c
    int32_t* ebx = data_114e86c
    ebx[3] += 1
    int32_t* edi = *ebx
    
    if (edi == 0)
        sub_4d79e0(ebx)
        edi = *ebx
    
    *ebx = *edi
    edi[2] = 0
    edi[3] = 0
    edi[4] = 0
    *edi = &data_5b2591
    edi[1] = &data_5b2591
    int32_t* var_8 = edi
    sub_4362d0(&arg1[1], &var_8)
    char eax_1
    
    if (*(arg2 + 4) == 3)
        eax_1 = sub_526a60(arg2)
    
    if ((*(arg2 + 4) != 3 || eax_1 != 0) && *(arg2 + 4) == 1 && sub_526c10(arg2, edi) != 0
            && sub_526a60(arg2) != 0)
        int32_t eax_4 = *(arg2 + 4)
        
        if (eax_4 != 1)
            char* edx_3
            char* const ebx_3
            
            if (eax_4 != 3)
                char* ecx_13 = *edi
                
                if (eax_4 != 4)
                    char* eax_16 = &data_5b2591
                    
                    if (ecx_13 != 0)
                        eax_16 = ecx_13
                    
                    char* var_20_5 = eax_16
                    sub_4d7c70(arg2, "bad block '%s'")
                    int32_t eax_17
                    eax_17.b = 0
                    return eax_17
                
                ebx_3 = &data_5b2591
                edx_3 = &data_5b2591
                
                if (ecx_13 != 0)
                    edx_3 = ecx_13
            else
                char eax_9 = sub_526c10(arg2, &edi[1])
                char eax_10
                
                if (eax_9 != 0)
                    eax_10 = sub_526a60(arg2)
                
                if (eax_9 == 0 || eax_10 == 0)
                    char* eax_14 = *edi
                    char* const ecx_12 = &data_5b2591
                    
                    if (eax_14 != 0)
                        ecx_12 = eax_14
                    
                    char* const var_20_4 = ecx_12
                    sub_4d7c70(arg2, "failed to read value '%s'")
                    int32_t eax_15
                    eax_15.b = 0
                    return eax_15
                
                char* eax_11 = *edi
                ebx_3 = &data_5b2591
                edx_3 = &data_5b2591
                
                if (eax_11 != 0)
                    edx_3 = eax_11
            
            if (sub_526bc0(arg2, edx_3) == 0)
                char* eax_12 = *edi
                
                if (eax_12 != 0)
                    ebx_3 = eax_12
                
                char* const var_20_3 = ebx_3
                sub_4d7c70(arg2, "failed to read close tag '%s'")
                int32_t eax_13
                eax_13.b = 0
                return eax_13
        else
            void* ebx_2 = data_114e86c
            *(ebx_2 + 0x1c) += 1
            int32_t* ecx_5 = *(ebx_2 + 0x10)
            
            if (ecx_5 == 0)
                sub_4d7960(ebx_2 + 0x10)
                ecx_5 = *(ebx_2 + 0x10)
            
            *(ebx_2 + 0x10) = *ecx_5
            ecx_5[2] = 0
            ecx_5[3] = 0
            ecx_5[4] = 0
            *ecx_5 = &data_5b2591
            ecx_5[1] = 0
            ecx_5[2] = 0
            ecx_5[3] = 0
            edi[2] = ecx_5
            sub_48a560(ecx_5, edi)
            
            if (sub_4d7ef0(edi[2], arg2) == 0)
                char* eax_7 = *edi
                char* const ecx_8 = &data_5b2591
                
                if (eax_7 != 0)
                    ecx_8 = eax_7
                
                char* const var_20_2 = ecx_8
                sub_4d7c70(arg2, "failed to read block '%s'")
                int32_t eax_8
                eax_8.b = 0
                return eax_8
        
        return 1
    
    char* eax_18 = *arg1
    char* const ecx_14 = &data_5b2591
    
    if (eax_18 != 0)
        ecx_14 = eax_18
    
    char* const var_20_6 = ecx_14
    sub_4d7c70(arg2, "failed to read open block '%s'")
    int32_t eax_19
    eax_19.b = 0
    return eax_19
}
