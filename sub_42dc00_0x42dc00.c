// 函数名称: sub_42dc00
// 虚拟地址: 0x42dc00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_42dc00(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    sub_4a8930(sub_4a8930(sub_4b2440(arg1, sub_42da90), &data_62bf54, arg1, &data_62b298, 0xffffffff), 
        &data_62bf70, arg1, &data_62b29c, 0xffffffff)
    void* ecx_4 = data_62b2a0
    void* eax_2 = &data_5b2591
    
    if (ecx_4 != 0)
        eax_2 = ecx_4
    
    char* const ecx_5 = &data_5b2591
    void* result
    
    while (true)
        char edx_1 = *eax_2
        char temp0_1 = *ecx_5
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                result = nullptr
                break
            
            edx_1 = *(eax_2 + 1)
            char temp1_1 = ecx_5[1]
            c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                eax_2 += 2
                ecx_5 = &ecx_5[2]
                
                if (edx_1 != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(eax_2, eax_2, c_1) | 1
        break
    
    if (result == 0)
        return result
    
    return sub_4a8930(result, &data_62bf8c, arg1, &data_62b2a0, 0xffffffff)
}
