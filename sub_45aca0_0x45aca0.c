// 函数名称: sub_45aca0
// 虚拟地址: 0x45aca0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_45aca0(void* arg1, int32_t* arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t var_1c
    char const* const ecx
    
    if (*arg2 u>= 4)
        int32_t* eax = *arg3
        int32_t result = *eax
        arg1 = &eax[1]
        *arg3 = arg1
        *arg2 -= 4
        int32_t ebx_1 = result << 2
        
        if (*arg2 s>= ebx_1)
            sub_579300(arg4, *arg3, ebx_1)
            *arg3 += ebx_1
            *arg2 -= ebx_1
            return result
        
        char const* const var_18_2 = "ParseList"
        var_1c = 0x2365
        ecx = "size >= len"
    else
        char const* const var_18 = "ParseList"
        var_1c = 0x235f
        ecx = "size >= sizeof(int)"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_1c, 
        "ParseList")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
