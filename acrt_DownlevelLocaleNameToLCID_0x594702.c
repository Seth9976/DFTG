// 函数名称: ___acrt_DownlevelLocaleNameToLCID
// 虚拟地址: 0x594702
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___acrt_DownlevelLocaleNameToLCID(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t eax_1 = GetTableIndexFromLocaleName(arg1)
        
        if (eax_1 s>= 0 && eax_1 u< 0xe4)
            return *((eax_1 << 3) + &data_5ac080)
    
    return 0
}
