// 函数名称: sub_498f80
// 虚拟地址: 0x498f80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_498f80(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* eax = sub_4f0fd0(&data_6218dc, arg4)
    void* eax = sub_4f0fd0(&data_6218dc, arg4)
    
    if (*(eax + 0x10) == 8)
        return *(arg3 + 8)
    
    sub_489550(eax, &data_5b2591, 
        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING", 
        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x902, "AttribAsString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
