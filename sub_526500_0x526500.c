// 函数名称: sub_526500
// 虚拟地址: 0x526500
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_526500(int32_t arg1, char* arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    
    if (arg4 == 0)
        sub_526410(arg3)
    else
        sub_526470(arg3)
    
    int32_t var_14 = *arg3
    uint32_t eax = _fwrite(0x6081a8, 1, 1)
    
    if (eax == 1)
        uint32_t result = sub_5262e0(arg3, arg2)
        arg3[2] += 1
        arg3[1] = 1
        return result
    
    sub_489550(eax, &data_5b2591, "resultCount == len", "d:\ax\trunk\ax2017\engine\xmlwriter.cpp", 
        0x29, "sXmlEmit")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
