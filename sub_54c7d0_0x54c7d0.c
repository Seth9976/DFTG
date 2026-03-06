// 函数名称: sub_54c7d0
// 虚拟地址: 0x54c7d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_54c7d0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (data_11e6020 != 0)
    if (data_11e6020 != 0)
        return 
    
    if (arg2 == 0)
        data_1152b94 = arg2
        return sub_5475f0() __tailcall
    
    int32_t ecx_1 = 0
    
    if (arg2 s> 0)
        do
            (&data_1151b94)[ecx_1] = *(arg1 + (ecx_1 << 2))
            ecx_1 += 1
        while (ecx_1 s< arg2)
    
    data_1152b94 = arg2
    return sub_5475f0() __tailcall
}
