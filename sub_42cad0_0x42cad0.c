// 函数名称: sub_42cad0
// 虚拟地址: 0x42cad0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_42cad0(void* arg1)
{
    // 第一条实际指令: sub_48a560(&data_62b2b8, arg1 + 8)
    sub_48a560(&data_62b2b8, arg1 + 8)
    void* eax_1 = data_62b2b8
    void* esi = &data_5b2591
    
    if (eax_1 != 0)
        esi = eax_1
    
    char* eax_2 = sub_4cfa30(esi, U"@.")
    char* result
    
    if (eax_2 == 0 || eax_2 == esi)
    label_42cb30:
        result = sub_42a4f0(esi)
        
        if (result.b != 0)
        label_42cb39:
            
            if (*(arg1 + 0x10) != 0)
                return sub_42c840() __tailcall
        
        return result
    
    char* edx_1 = sub_4cfa30(eax_2, &data_5b3a68)
    
    if (edx_1 == 0)
        goto label_42cb30
    
    do
        result.b = *edx_1
        edx_1 = &edx_1[1]
    while (result.b != 0)
    
    if (edx_1 - &edx_1[1] u>= 3)
        goto label_42cb39
    
    goto label_42cb30
}
