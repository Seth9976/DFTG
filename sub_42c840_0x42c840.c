// 函数名称: sub_42c840
// 虚拟地址: 0x42c840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_42c840()
{
    // 第一条实际指令: void* eax_4 = data_62b2b8
    void* eax_4 = data_62b2b8
    char* const edi = &data_5b2591
    void* esi = &data_5b2591
    
    if (eax_4 != 0)
        esi = eax_4
    
    char* eax = sub_4cfa30(esi, U"@.")
    
    if (eax == 0 || eax == esi)
    label_42c890:
        char result = sub_42a4f0(esi)
        
        if (result == 0)
            return result
    else
        char* edx_1 = sub_4cfa30(eax, &data_5b3a68)
        
        if (edx_1 == 0)
            goto label_42c890
        
        char* eax_1
        
        do
            eax_1.b = *edx_1
            edx_1 = &edx_1[1]
        while (eax_1.b != 0)
        
        if (edx_1 - &edx_1[1] u< 3)
            goto label_42c890
    
    void* eax_2 = data_62b2b8
    
    if (eax_2 != 0)
        edi = eax_2
    
    sub_4259d0(edi)
    return sub_4361a0(4) __tailcall
}
