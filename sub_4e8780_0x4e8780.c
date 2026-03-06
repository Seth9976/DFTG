// 函数名称: sub_4e8780
// 虚拟地址: 0x4e8780
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_4e8780(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x30) == 0)
    if (*(arg1 + 0x30) == 0)
        return 
    
    int32_t i = 0
    
    do
        int32_t eax_1 = *(arg1 + 0x30)
        int32_t* j = *(eax_1 + (i << 2))
        
        if (j != 0)
            do
                int32_t* j_1 = j
                j = j[2]
                sub_4984f0(j_1, 0xc)
            while (j != 0)
            
            eax_1 = *(arg1 + 0x30)
        
        *(eax_1 + (i << 2)) = 0
        i += 1
    while (i u<= *(arg1 + 0x34))
    
    int32_t eax_2 = *(arg1 + 0x34)
    int32_t* ecx_1 = *(arg1 + 0x30)
    *(arg1 + 0x38) = 0
    sub_4984f0(ecx_1, (eax_2 << 2) + 4)
    *(arg1 + 0x30) = 0
}
