// 函数名称: sub_4ebc60
// 虚拟地址: 0x4ebc60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4ebc60(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t* eax = sub_4eeb50(arg3)
    *eax = arg2
    *(eax + 8) = *arg4
    *(eax + 0x18) = arg4[1]
    *(eax + 0x28) = arg4[2]
    *(eax + 0x38) = arg4[3]
    *(eax + 0x48) = arg4[4]
    int32_t eax_2 = arg4[5].d
    eax[0x16] = eax_2
    
    if (not(eax[0xf] f<= 0f))
        sub_4ebab0(eax)
        return eax[0x133]
    
    sub_489550(eax_2, &data_5b2591, "state.transform.t.s > 0", "d:\ax\trunk\ax2017\engine\fabdef.cpp", 
        0x213, "FabBegin")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
