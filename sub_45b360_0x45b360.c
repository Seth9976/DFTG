// 函数名称: sub_45b360
// 虚拟地址: 0x45b360
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_45b360(int32_t arg1, uint32_t arg2, uint32_t arg3, int32_t arg4))[0x4]
{
    // 第一条实际指令: uint32_t var_8 = arg3
    uint32_t var_8 = arg3
    int32_t* eax = sub_4570b0(arg2)
    
    if (eax != 0)
        *(eax + 0x6d) = 1
    
    uint32_t (* result)[0x4] = sub_481490(&data_62d6c4)
    *result = 0
    (*result)[0x11] = arg2
    int32_t var_18
    char const* const ecx_2
    
    if (arg4 s>= 0)
        if (arg4 s<= 0x4a)
            (*result)[0xd] = 0
            (*result)[0xf] = arg3
            result[3][0] = arg4 * 0x34 + &data_5b6ba8
            
            if (*(arg4 * 0x34 + &data_5b6ba8) == 3)
                data_632554 -= 1
            
            return result
        
        char const* const var_14_1 = "RollTileDefGet"
        var_18 = 0x13e1
        ecx_2 = "designIdx <= NUM_TILE_DEFS_BASE"
    else
        char const* const var_14 = "RollTileDefGet"
        var_18 = 0x13e0
        ecx_2 = "designIdx >= 0"
    
    sub_489550(arg4, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_18, 
        "RollTileDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
