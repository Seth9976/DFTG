// 函数名称: sub_4c4890
// 虚拟地址: 0x4c4890
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4c4890(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    char const* const ecx
    
    if (arg4 - 0x23 s< 7)
        if (arg4 - 0x23 s>= 0)
            void* const ecx_1 = 0x46
            
            if (arg2 != 0)
                ecx_1 = 0x4d
            
            int32_t result
            result.b = arg5
            (ecx_1 + arg4 - 0x23)[arg3] = result.b
            return result
        
        char const* const var_10_1 = "ButtonSourceCacheSetHand"
        var_14 = 0x1f7
        ecx = "idx >= 0"
    else
        char const* const var_10 = "ButtonSourceCacheSetHand"
        var_14 = 0x1f6
        ecx = "idx < NUM_BUTTONSOURCES_HANDED"
    
    sub_489550(arg4 - 0x23, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\controller.cpp", var_14, 
        "ButtonSourceCacheSetHand")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
