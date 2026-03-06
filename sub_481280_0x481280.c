// 函数名称: sub_481280
// 虚拟地址: 0x481280
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_481280(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[0x18e]
    int32_t eax = arg1[0x18e]
    int32_t var_14
    char const* const ecx
    
    if (eax s> 0)
        arg1[0x1d1] = 0
        __builtin_memcpy(&arg1[0x41], &arg1[0x82], 0x104)
        __builtin_memcpy(arg1, &arg1[0x41], 0x104)
        
        if (*arg1 == 1)
            if (arg1[0x41] == 1)
                arg1[0x18e] = eax - 1
                return sub_579a90(&arg1[0x82], &arg1[0xc5], (eax - 1) * 0x10c)
            
            char const* const var_10_3 = "MoveComponent<struct RollLocation>::MoveComplete"
            var_14 = 0xa4
            ecx = "locCurrent.type == LOC_USER"
        else
            char const* const var_10_1 = "MoveComponent<struct RollLocation>::MoveComplete"
            var_14 = 0xa3
            ecx = "locPrev.type == LOC_USER"
    else
        char const* const var_10 = "MoveComponent<struct RollLocation>::MoveComplete"
        var_14 = 0x9e
        ecx = "numTargets > 0"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\cardmotion.h", var_14, 
        "MoveComponent<struct RollLocation>::MoveComplete")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
