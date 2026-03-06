// 函数名称: sub_4e3f40
// 虚拟地址: 0x4e3f40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4e3f40()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edx = data_1150b94
    int32_t i = 0
    int32_t ebx
    int32_t var_c = ebx
    
    if (*(edx + 0xbbaa84) s> 0)
        int32_t eax_1 = 0
        
        do
            *(eax_1 + edx + 0xb9b694) = 0
            *(eax_1 + edx + 0xb9b68c) = 0
            *(eax_1 + edx + 0xb9b690) = 0
            *(eax_1 + edx + 0xb9b698) = 0
            
            if (*(edx + 0xbbaab0) == 0 || *(edx + 0xbbaab4) == i)
                ebx.b = 1
            else
                ebx.b = 0
            
            *(eax_1 + edx + 0xb9b69c) = ebx.b
            i += 1
            eax_1 += 0x1c
        while (i s< *(edx + 0xbbaa84))
    
    int32_t ebx_1 = 0
    *(edx + 0xbbaa88) = 0
    void* i_1 = nullptr
    void* i_4 = nullptr
    
    do
        if (*(edx + 0xbbaa8c) == 0 || *(edx + 0xb9b680) != ebx_1)
            sub_4e3850(ebx_1)
            edx = data_1150b94
            int32_t j = 0
            
            if (*(edx + 0xbbaa84) s> 0)
                void* ecx_2 = edx + 0xb9b690
                void* esi_1 = i_1 + 0x3aa90 + edx
                
                do
                    j += 1
                    *(ecx_2 + 4) += *(esi_1 + 4)
                    *(ecx_2 - 4) = *(esi_1 - 4) f+ *(ecx_2 - 4)
                    *ecx_2 = *esi_1 f+ *ecx_2
                    float xmm0_5 = *(esi_1 + 8)
                    esi_1 += 0x10
                    *(ecx_2 + 8) = xmm0_5 f+ *(ecx_2 + 8)
                    ecx_2 += 0x1c
                while (j s< *(edx + 0xbbaa84))
                
                i_1 = i_4
            
            *(edx + 0xbbaa88) += 1
        
        i_1 += 0x4a490
        ebx_1 += 1
        i_4 = i_1
    while (i_1 s< 0xb9b680)
    
    if (*(edx + 0xbbaab0) != 0)
        for (int32_t i_2 = 0; i_2 s< 0x28; i_2 += 1)
            sub_4e3c30(i_2)
        
        edx = data_1150b94
    
    int32_t i_3 = 0
    int32_t edi_1 = 0
    
    if (*(edx + 0xbbaa84) s> 0)
        void* esi_2 = edx + 0xbb6c04
        void* ecx_4 = edx + 0xb9b69c
        
        do
            if (*(ecx_4 - 8) != 0 && *ecx_4 != 0)
                *esi_2 = i_3
                edi_1 += 1
                esi_2 += 4
            
            i_3 += 1
            ecx_4 += 0x1c
        while (i_3 s< *(edx + 0xbbaa84))
    
    int32_t eax_5 = (edx + (edi_1 << 2) + 0xbb6c04 - (edx + 0xbb6c04)) s>> 2
    int32_t result = sub_436380(eax_5, edx + (edi_1 << 2) + 0xbb6c04, edx + 0xbb6c04, eax_5, sub_4e3dc0)
    void* ecx_6 = data_1150b94
    *(ecx_6 + 0xbbaaac) = edi_1
    
    if (*(ecx_6 + 0xbbaa9c) s>= edi_1)
        result = edi_1 - 1
        *(ecx_6 + 0xbbaa9c) = result
    
    return result
}
