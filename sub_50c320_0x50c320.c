// 函数名称: sub_50c320
// 虚拟地址: 0x50c320
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_50c320(void* arg1)
{
    // 第一条实际指令: if (data_114e818 == 0)
    if (data_114e818 == 0)
        return 
    
    int32_t* ecx_1 = *(arg1 + 0x10)
    
    if (ecx_1 != 0)
        sub_4d0720(ecx_1)
        *(arg1 + 0x10) = 0
    
    int32_t* ecx_2 = *(arg1 + 0x18)
    
    if (ecx_2 != 0)
        sub_4d0720(ecx_2)
        *(arg1 + 0x18) = 0
}
