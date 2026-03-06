// 函数名称: sub_50f800
// 虚拟地址: 0x50f800
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_50f800()
{
    // 第一条实际指令: LRESULT ecx
    LRESULT ecx
    LRESULT var_4 = ecx
    BOOL result = data_1151ad8
    
    if (result != 0)
        result = *(result + 4)
        LRESULT edx
        
        if (result == 0x19)
            return sub_50e390(ecx, edx)
        
        if (result == 0x1b)
            return sub_50e950(ecx)
    
    return result
}
