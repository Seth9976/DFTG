// 函数名称: sub_41e1b0
// 虚拟地址: 0x41e1b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_41e1b0()
{
    // 第一条实际指令: void* i_1 = nullptr
    void* i_1 = nullptr
    void* result = sub_41efb0(&data_62b090, &i_1)
    
    for (void* i = i_1; i != 0xffffffff; i = i_1)
        int32_t* esi_1 = i + 0x964
        int32_t j_1 = 0x96
        int32_t j
        
        do
            if (*esi_1 != 0)
                sub_49a5a0(esi_1)
            
            esi_1 = &esi_1[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        int32_t ecx_2 = data_62b09c
        data_62b09c = zx.d(*(i + 0xbf4))
        *(i + 0xbf4) = ecx_2
        data_62b0a0 -= 1
        result = sub_41efb0(&data_62b090, &i_1)
    
    void* result_1 = data_62b090
    
    if (result_1 != 0)
        result = nullptr
        
        while (true)
            if (result != 0)
                result += 0xbf8
            else
                result = result_1
            
            void* ecx_4 = data_62b094 * 0xbf8 + result_1
            
            if (result u>= ecx_4)
                break
            
            while (true)
                int32_t esi_2 = *(result + 0xbf4)
                
                if ((esi_2 & 0xffff0000) != 0)
                    int32_t edx = data_62b09c
                    data_62b09c = zx.d(esi_2.w)
                    *(result + 0xbf4) = edx
                    data_62b0a0 -= 1
                    result_1 = data_62b090
                    break
                
                result += 0xbf8
                
                if (result u>= ecx_4)
                    goto label_41e297
        
    label_41e297:
        data_62b094 = 0
        data_62b09c = 0
        
        if (result_1 != 0)
            result = _aligned_free_base(result_1)
        
        __builtin_memset(&data_62b090, 0, 0x14)
        data_62b0a8 = 0
    
    return result
}
