// 函数名称: sub_4a8380
// 虚拟地址: 0x4a8380
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_4a8380(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t var_8_1 = arg2
    
    if (*(arg3 + 0x1130) != 0)
        return 
    
    if (*(arg3 + 0x109c) != 0)
        sub_489550(arg1, &data_5b2591, "el.worldInfo.index == 0", "d:\ax\trunk\ax2017\engine\ui2.cpp", 
            0x2111, "FlattenTreeRec")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t i = 0
    int32_t eax = *arg4
    int32_t ecx_1 = eax * 2
    *arg4 = eax + 1
    *(arg2 + (ecx_1 << 3)) = arg3
    *(arg2 + (ecx_1 << 3) + 4) = arg5
    
    if (*(arg3 + 0x1190) s<= 0)
        return 
    
    do
        sub_49ea50(arg3, i)
        sub_4a8380(arg4, arg5 + 1)
        i += 1
    while (i s< *(arg3 + 0x1190))
}
