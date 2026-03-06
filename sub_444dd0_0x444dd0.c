// 函数名称: sub_444dd0
// 虚拟地址: 0x444dd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_444dd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t result = 0xffffffff
    int32_t i_4 = *(*arg1 + 4)
    int32_t i_5 = i_4
    
    if (i_4 s> 0)
        void* edx_1 = &arg1[0x5c]
        int32_t i_3 = i_4
        int32_t i_2 = i_4
        int32_t i
        
        do
            int32_t j = *edx_1
            
            if (j != 0xffffffff)
                do
                    int32_t ecx = j * 3
                    
                    if (*(&arg1[ecx] + 0x8cb) == 1)
                        int32_t ecx_2 = *(arg1[ecx + 0x231] + 0x14)
                        
                        if (ecx_2 s> edi)
                            edi = ecx_2
                    
                    j = sx.d(*(&arg1[j * 3] + 0x8ca))
                while (j != 0xffffffff)
                
                i_2 = i_3
            
            edx_1 += 0x1bc
            i = i_2
            i_2 -= 1
            i_3 = i_2
        while (i != 1)
        i_4 = i_5
    
    int32_t result_1 = 0
    
    if (i_4 s> 0)
        int32_t* eax_1 = &arg1[0x5c]
        int32_t* var_8_1 = eax_1
        
        do
            int32_t i_1 = *eax_1
            
            if (i_1 != 0xffffffff)
                do
                    int32_t eax_2 = i_1 * 3
                    
                    if (*(&arg1[eax_2] + 0x8cb) == 1 && *(arg1[eax_2 + 0x231] + 0x14) == edi)
                        if (result != 0xffffffff && result != result_1)
                            return 0xffffffff
                        
                        result = result_1
                    
                    i_1 = sx.d(*(&arg1[i_1 * 3] + 0x8ca))
                while (i_1 != 0xffffffff)
                
                eax_1 = var_8_1
            
            result_1 += 1
            eax_1 = &eax_1[0x6f]
            var_8_1 = eax_1
        while (result_1 s< i_5)
    
    return result
}
