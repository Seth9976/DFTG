// 函数名称: ?get_global_action_nolock@@YAPAP6AXH@ZH@Z
// 虚拟地址: 0x59250b
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?get_global_action_nolock@@YAPAP6AXH@ZH@Z(int32_t arg1) __pure
{
    // 第一条实际指令: if (arg1 == 2)
    if (arg1 == 2)
        return &data_6cfd14
    
    if (arg1 != 6)
        if (arg1 == 0xf)
            return &data_6cfd20
        
        if (arg1 == 0x15)
            return &data_6cfd18
        
        if (arg1 != 0x16)
            return 0
    
    return &data_6cfd1c
}
