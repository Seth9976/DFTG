// 函数名称: sub_48deb0
// 虚拟地址: 0x48deb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_48deb0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_18
    int32_t var_18
    char const* const var_14
    char* ecx
    
    if (arg2 s<= arg3)
        if (arg3 - arg2 + 1 s> 0)
            return arg2 + modu.dp.d(0:(sub_48dd80()), arg3 - arg2 + 1)
        
        var_14 = "RandomInt"
        var_18 = 0x4f
        ecx = "maxPlusOne > 0"
    else
        var_14 = "RandomIntRange"
        var_18 = 0x58
        ecx = "min <= max"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\random.cpp", var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
