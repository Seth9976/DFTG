// 函数名称: sub_44f9d0
// 虚拟地址: 0x44f9d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44f9d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t esi = 0xffffffff
    int32_t esi = 0xffffffff
    void** var_8 = arg1
    int32_t edi = 0xffffffff
    sub_44f8e0(arg1)
    int32_t* ecx = var_8
    int32_t i = 0
    void* eax_1 = *ecx
    
    if (*(eax_1 + 4) s> 0)
        void* ecx_1 = &ecx[0x63]
        
        do
            int32_t j_1 = *(ecx_1 - 0x28)
            int32_t eax_2 = esi
            esi = *(ecx_1 + 0xc)
            
            if (esi s<= eax_2)
                esi = eax_2
            
            *(ecx_1 + 0x14) = *ecx_1
            
            if (j_1 s> 0)
                void* eax_4 = ecx_1 - 0x167
                int32_t j
                
                do
                    if (*eax_4 == 1)
                        *(ecx_1 + 0x14) += 1
                    
                    eax_4 += 8
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            eax_1 = *var_8
            i += 1
            ecx_1 += 0x1bc
        while (i s< *(eax_1 + 4))
        
        edi = 0xffffffff
    
    void* result = *(eax_1 + 4)
    
    if (result s> 0)
        void* ecx_2 = &var_8[0x68]
        void* edx_1 = result
        void* i_1
        
        do
            if (*(ecx_2 - 8) s>= esi && *ecx_2 s> edi)
                edi = *ecx_2
            
            ecx_2 += 0x1bc
            i_1 = edx_1
            edx_1 -= 1
        while (i_1 != 1)
    
    int32_t i_2 = 0
    
    if (result s> 0)
        void* ecx_3 = &var_8[0x68]
        
        do
            if (*(ecx_3 - 8) s>= esi && *ecx_3 s>= edi)
                *(ecx_3 + 4) = 1
            
            result = *var_8
            i_2 += 1
            ecx_3 += 0x1bc
        while (i_2 s< *(result + 4))
    
    return result
}
