// 函数名称: sub_434060
// 虚拟地址: 0x434060
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_434060()
{
    // 第一条实际指令: int32_t* esi = &data_62b1c0
    int32_t* esi = &data_62b1c0
    int32_t i_3 = 6
    int32_t i
    
    do
        sub_49a5a0(&esi[-4])
        sub_49a5a0(esi)
        esi = &esi[0xa]
        i = i_3
        i_3 -= 1
    while (i != 1)
    void* eax = data_62b2b8
    
    if (eax != 0 && eax != &data_5b2591)
        if (data_aca1f4 != i_3 && *eax != 0)
            char* eax_1 = sub_48a080(&data_62b2b8)
            int32_t temp1_1 = *(eax_1 + 4)
            *(eax_1 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_1, *(eax_1 + 0xc) + 0x10)
        
        data_62b2b8 = &data_5b2591
    
    void* eax_2 = data_62b298
    
    if (eax_2 != 0 && eax_2 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_2 != 0)
            char* eax_3 = sub_48a080(&data_62b298)
            int32_t temp2_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
        
        data_62b298 = &data_5b2591
    
    void* eax_4 = data_62b29c
    
    if (eax_4 != 0 && eax_4 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_4 != 0)
            char* eax_5 = sub_48a080(&data_62b29c)
            int32_t temp3_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
        
        data_62b29c = &data_5b2591
    
    void* eax_6 = data_62b2a0
    
    if (eax_6 != 0 && eax_6 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&data_62b2a0)
            int32_t temp4_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
        
        data_62b2a0 = &data_5b2591
    
    void* result = data_62b2a4
    
    if (result != 0 && result != &data_5b2591)
        if (data_aca1f4 != 0 && *result != 0)
            result = sub_48a080(&data_62b2a4)
            int32_t temp5_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp5_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
        
        data_62b2a4 = &data_5b2591
    
    int32_t* i_1 = data_126b8cc
    
    while (i_1 != 0)
        int32_t* i_2 = i_1
        i_1 = i_1[1]
        result = sub_4984f0(i_2, 0xc)
    
    data_126b8d4 = 0
    data_126b8cc = 0
    data_126b8d0 = 0
    return result
}
