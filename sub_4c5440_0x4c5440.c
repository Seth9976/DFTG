// 函数名称: sub_4c5440
// 虚拟地址: 0x4c5440
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_4c5440(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_48a560(arg1, arg2)
    sub_48a560(arg1, arg2)
    sub_48a560(&arg1[1], &arg2[1])
    int32_t* esi = &arg1[2]
    void* ecx_2 = arg2 - arg1
    int32_t i_2 = 8
    void* var_8 = ecx_2
    int32_t i
    
    do
        char* edi_1 = *esi
        char* const edx_1 = &data_5b2591
        char* eax_1 = *(ecx_2 + esi)
        char* const ecx_3 = &data_5b2591
        
        if (edi_1 != 0)
            edx_1 = edi_1
        
        if (eax_1 != 0)
            ecx_3 = eax_1
        
        if (edx_1 == ecx_3)
            ecx_2 = var_8
        else
            if (data_aca1f4 != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_2 = sub_48a080(esi)
                int32_t temp2_1 = *(eax_2 + 4)
                *(eax_2 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_2, *(eax_2 + 0xc) + 0x10)
                    *esi = &data_5b2591
            
            ecx_2 = var_8
            char* eax_3 = *(ecx_2 + esi)
            *esi = eax_3
            
            if (eax_3 != 0 && *eax_3 != 0)
                char* eax_4 = sub_48a080(esi)
                *(eax_4 + 4) += 1
                ecx_2 = var_8
        
        esi = &esi[1]
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t i_3 = 8
    int32_t* esi_2 = &arg1[0xa]
    int32_t i_1
    
    do
        char* edi_2 = *esi_2
        char* const edx_4 = &data_5b2591
        char* eax_5 = *(esi_2 + ecx_2)
        char* const ecx_7 = &data_5b2591
        
        if (edi_2 != 0)
            edx_4 = edi_2
        
        if (eax_5 != 0)
            ecx_7 = eax_5
        
        if (edx_4 == ecx_7)
            ecx_2 = var_8
        else
            if (data_aca1f4 != 0 && edi_2 != 0 && *edi_2 != 0)
                char* eax_6 = sub_48a080(esi_2)
                int32_t temp4_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
                    *esi_2 = &data_5b2591
            
            ecx_2 = var_8
            char* eax_7 = *(esi_2 + ecx_2)
            *esi_2 = eax_7
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_48a080(esi_2)
                *(eax_8 + 4) += 1
                ecx_2 = var_8
        
        esi_2 = &esi_2[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    arg1[0x12] = arg2[0x12]
    return arg1
}
