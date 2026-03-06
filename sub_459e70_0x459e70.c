// 函数名称: sub_459e70
// 虚拟地址: 0x459e70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_459e70(int32_t arg1, void* arg2, uint32_t arg3, uint32_t (* arg4)[0x4], uint32_t arg5))[0x4]
{
    // 第一条实际指令: uint32_t var_8 = arg3
    uint32_t var_8 = arg3
    void* eax = sub_452b90(*(arg2 + 0x3c))
    
    if (arg5 != 0 && arg3 != 0x23)
        int32_t* eax_1 = sub_453300(eax, 4, eax, 0x40, nullptr)
        
        if (eax_1.b == 0)
            sub_489550(eax_1, &data_5b2591, "Has2GoodPower(pgui)", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x2041, "RollLocationSetTile")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    _memset(arg4, 0, 0xa0)
    *arg4 = *(arg2 + 0x3c)
    uint32_t ecx_3 = *(arg2 + 0x8a8)
    (*arg4)[2] = arg5
    (*arg4)[1] = arg3
    (*arg4)[5] = ecx_3
    arg4[8][0] = 0
    return arg4
}
