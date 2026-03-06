// 函数名称: sub_45a5a0
// 虚拟地址: 0x45a5a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_45a5a0(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4, char arg5, char arg6)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t var_18
    char const* const var_14
    char* ecx
    
    if (*arg2 == 1)
        int32_t eax = arg2[4]
        int32_t edi_1 = arg2[0x22a]
        
        if (eax != arg4)
            arg2[5] = eax
            arg2[4] = arg4
        
        if (arg4 == 1 || arg4 == 2)
            return 0
        
        arg1 = *(arg3 + (arg4 << 2) + 0x2b4)
        arg2[0xa] = arg1
        *(arg3 + (arg4 << 2) + 0x2b4) = edi_1
        
        if (arg5 != 0)
            return sub_45a140(arg1, arg4, arg3, arg2, arg6)
        
        var_14 = "DieMoveInsert"
        var_18 = 0x219f
        ecx = "doReorg"
    else
        var_14 = "GetRollD"
        var_18 = 0xb38
        ecx = "gfx.type == ROLLGFX_DIE"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_18, 
        var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
