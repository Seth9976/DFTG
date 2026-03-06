// 函数名称: sub_553980
// 虚拟地址: 0x553980
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_553980(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (data_11e7060.b != 0 || data_11e7062 != 0)
    if (data_11e7060.b != 0 || data_11e7062 != 0)
        return 
    
    if (arg2 == 0)
        data_11e705c = arg2
        return sub_5539f0() __tailcall
    
    int32_t edx_1 = 0
    int32_t* edi_1 = sub_4c8c70(data_11e6050)
    
    if (arg2 s> 0)
        do
            (&data_11e605c)[edx_1] = *(*(arg1 + (edx_1 << 2)) * 0x178 + *edi_1)
            edx_1 += 1
        while (edx_1 s< arg2)
    
    data_11e705c = arg2
}
