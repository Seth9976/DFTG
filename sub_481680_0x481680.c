// 函数名称: sub_481680
// 虚拟地址: 0x481680
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_481680(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t eax = *arg3
    int32_t eax = *arg3
    
    if (eax == 0)
        *arg4 = *(arg3 + 4)
        arg4[1] = *(arg3 + 0x14)
        arg4[2] = *(arg3 + 0x24)
        arg4[3] = *(arg3 + 0x34)
        arg4[4] = *(arg3 + 0x44)
        arg4[5] = *(arg3 + 0x54)
        return arg4
    
    if (eax != 1)
        sub_489550(eax - 1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\cardmotion.h", 
            0x3b, "CalcTransform")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void var_68
    int128_t* eax_4 = sub_458af0(&var_68, arg2, &arg3[0x19], &var_68)
    *arg4 = *eax_4
    arg4[1] = eax_4[1]
    arg4[2] = eax_4[2]
    arg4[3] = eax_4[3]
    arg4[4] = eax_4[4]
    arg4[5] = eax_4[5]
    return arg4
}
