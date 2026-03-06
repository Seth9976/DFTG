// 函数名称: sub_526580
// 虚拟地址: 0x526580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_526580(int32_t arg1, char* arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    arg3[2] -= 1
    
    if (arg4 == 0)
        sub_526410(arg3)
    else
        sub_526470(arg3)
    
    int32_t var_14 = *arg3
    uint32_t result = _fwrite(0x6081ac, 1, 2)
    
    if (result == 2)
        sub_5262e0(arg3, arg2)
        int32_t var_14_1 = *arg3
        result = _fwrite(0x6081a0, 1, 1)
        
        if (result == 1)
            arg3[1] = 2
            return result
    
    sub_489550(result, &data_5b2591, "resultCount == len", "d:\ax\trunk\ax2017\engine\xmlwriter.cpp", 
        0x29, "sXmlEmit")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
