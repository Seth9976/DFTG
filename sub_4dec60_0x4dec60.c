// 函数名称: sub_4dec60
// 虚拟地址: 0x4dec60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_4dec60()
{
    // 第一条实际指令: void* ecx = data_114e818
    void* ecx = data_114e818
    
    if (ecx == 0)
        return 
    
    if (((*(ecx + 0x1c) u>> 6).b & 1) != 0)
        long double x87_r0
        sub_4de860(x87_r0)
        ecx = data_114e818
    
    if (ecx == 0)
        return 
    
    if (((*(ecx + 0x1c) u>> 7).b & 1) != 0)
        sub_4e4500()
        ecx = data_114e818
    
    if (ecx == 0)
        return 
    
    int32_t ecx_1 = *(ecx + 0x1c)
    
    if (((ecx_1 u>> 5).b & 1) != 0 || ((ecx_1 u>> 7).b & 1) != 0 || ((ecx_1 u>> 6).b & 1) != 0)
        sub_4de5c0()
}
