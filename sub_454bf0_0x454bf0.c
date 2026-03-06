// 函数名称: sub_454bf0
// 虚拟地址: 0x454bf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_454bf0(void* arg1, int32_t arg2, void* arg3, char arg4, char arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    
    if (*(arg3 + 0x38) == arg2)
        return 
    
    void* ecx = data_6cfe4c
    
    if (ecx == 0)
        sub_489550(arg1, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ebx
    ebx.b = arg4
    
    if (*(arg3 + 0x3c) == *(ecx + 0xa68) && arg5 == 0 && ebx.b == 1)
        data_126be64
        sub_4c5ce0()
    
    sub_46a420(6)
    *(arg3 + 0x38) = arg2
    
    if (ebx.b != 0)
        if (arg2 != 0)
            *(arg3 + 0x88c) = 0
            *(arg3 + 0x890) = 1
            return 
        
        *(arg3 + 0x88c) = 0x3f800000
        *(arg3 + 0x890) = 1
        return 
    
    if (arg2 == 1)
        *(arg3 + 0x88c) = 0x3f800000
        return 
    
    *(arg3 + 0x88c) = 0
}
