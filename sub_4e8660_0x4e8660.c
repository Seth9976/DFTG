// 函数名称: sub_4e8660
// 虚拟地址: 0x4e8660
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4e8660(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    _memset(ebx + 0x3c, 0xff, 0x200)
    *(ebx + 0x30) = 0
    *(ebx + 0x38) = 0
    uint32_t eax_1 = sub_426d50(0x100)
    *(ebx + 0x30) = sub_498490(eax_1 << 2)
    int32_t* result = eax_1 - 1
    *(ebx + 0x34) = result
    
    if (*(ebx + 0x14) != 0)
        void* ecx_1 = *(ebx + 0x18)
        int32_t i = 0
        void* var_10_1 = ecx_1
        
        if (*(ecx_1 + 0x18) s> 0)
            int32_t* edx_1 = nullptr
            int32_t* var_8_1 = nullptr
            
            do
                result = *(ecx_1 + 0x20)
                int32_t j = *(edx_1 + result)
                
                if (j == 0)
                    j = *(ecx_1 + 0x14) + i
                
                if (j s>= 0x80)
                    int32_t eax_7 = ((j s>> 4 | j) & *(ebx + 0x34)) << 2
                    result = *(eax_7 + *(ebx + 0x30))
                    edx_1 = var_8_1
                    
                    if (result == 0)
                    label_4e8720:
                        int32_t* eax_9 = sub_498440(0xc)
                        eax_9[3] += 1
                        int32_t* ecx_2 = *eax_9
                        
                        if (ecx_2 == 0)
                            sub_4982d0(eax_9)
                            ecx_2 = *eax_9
                        
                        *eax_9 = *ecx_2
                        ebx = arg1
                        *ecx_2 = j
                        ecx_2[1] = i
                        ecx_2[2] = *(eax_7 + *(ebx + 0x30))
                        result = *(ebx + 0x30)
                        result[(j s>> 4 | j) & *(ebx + 0x34)] = ecx_2
                        *(ebx + 0x38) += 1
                        ecx_1 = var_10_1
                        edx_1 = var_8_1
                    else
                        while (j != *result)
                            result = result[2]
                            
                            if (result == 0)
                                goto label_4e8720
                        
                        result[1] = i
                else
                    *(ebx + (j << 2) + 0x3c) = i
                
                i += 1
                edx_1 = &edx_1[9]
                var_8_1 = edx_1
            while (i s< *(ecx_1 + 0x18))
    
    return result
}
