// 函数名称: sub_49f910
// 虚拟地址: 0x49f910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct InputHitResult::UI2HitResult::VTable** __convention("regparm")sub_49f910(int32_t arg1, int32_t arg2, struct InputHitResult::UI2HitResult::VTable** arg3, int32_t* arg4)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        *arg3 = &UI2HitResult::`vftable'{for `InputHitResult'}
        arg3[1] = data_63c748
        arg3[2] = data_63c74c
        arg3[3] = data_63c750
        arg3[4] = data_63c754
        return arg3
    
    uint32_t eax_5 = zx.d(arg2.w)
    
    if (eax_5 u< data_63e5ac)
        eax_5 = data_63e5a8 + eax_5 * 0x1418
        
        if (*(eax_5 + 0x1410) == arg2)
            sub_49f240(eax_5, eax_5, arg3, 0xff, arg4, 0)
            return arg3
    
    sub_489550(eax_5, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
