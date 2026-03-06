// 函数名称: sub_44f8e0
// 虚拟地址: 0x44f8e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44f8e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t i_1 = 0
    void* result = *arg1
    
    if (*(result + 4) s> 0)
        void* esi_1 = &arg1[0x66]
        void* var_8_1 = esi_1
        
        do
            void* eax_1 = *(esi_1 + 4) + *(esi_1 - 8)
            *esi_1 = eax_1
            int32_t j = *(esi_1 - 0x28)
            
            if (j != 0xffffffff)
                do
                    int32_t ecx_1 = (j + 0xbb) * 3
                    void* esi_2 = &arg1[ecx_1]
                    eax_1 += *(*esi_2 + (zx.d(*(&arg1[ecx_1] + 7)) << 2) + 0x10)
                    *var_8_1 = eax_1
                    void* edx_1 = *esi_2
                    int32_t ecx_6
                    
                    if (zx.d(*(esi_2 + 7)) == *(edx_1 + 0x60))
                        ecx_6 = *(edx_1 + 0x5c)
                    
                    if (zx.d(*(esi_2 + 7)) != *(edx_1 + 0x60) || ecx_6 == 0)
                        esi_1 = var_8_1
                    else
                        esi_1 = var_8_1
                        eax_1 += sub_44f3f0(eax_1, i_1, arg1, ecx_6, 0xffffffff)
                        *esi_1 = eax_1
                    
                    j = sx.d(*(&arg1[j * 3] + 0x8ca))
                while (j != 0xffffffff)
                
                i = i_1
            
            if (arg1[4] == 0)
                void* eax_3 = eax_1 - *(esi_1 - 8)
                sub_444430(eax_3, 0x3c, arg1, i, eax_3, 0, 0, 0)
                i = i_1
            
            result = *arg1
            i += 1
            esi_1 += 0x1bc
            i_1 = i
            var_8_1 = esi_1
        while (i s< *(result + 4))
    
    return result
}
