// 函数名称: sub_45a640
// 虚拟地址: 0x45a640
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_45a640(void* arg1, int32_t* arg2, void* arg3, int32_t arg4, uint32_t arg5, char arg6)
{
    // 第一条实际指令: *(arg2 + 0x21) = 0
    *(arg2 + 0x21) = 0
    uint32_t eax = sub_45a470(arg1, arg2, arg3, arg5, arg6)
    int32_t var_20_1
    char const* const var_1c_1
    char* ecx
    
    if (*arg2 == 1)
        uint32_t eax_1 = arg2[0x22a]
        int32_t ecx_1 = arg2[4]
        
        if (ecx_1 != arg4)
            arg2[5] = ecx_1
            arg2[4] = arg4
        
        arg2[0xa] = 0
        
        if (arg4 == 4)
            return sub_45a5a0(arg4, arg2, arg3, arg4, 1, arg6)
        
        int32_t result = 0
        uint32_t* ecx_3 = arg3 + ((arg4 + 0xad) << 2)
        
        for (uint32_t i = *ecx_3; i != 0; i = *ecx_3)
            void* eax_5 = sub_452d50(i)
            int32_t result_1 = result + 1
            
            if (*(eax_5 + 0x19) != 0)
                result_1 = result
            
            ecx_3 = eax_5 + 0x20
            result = result_1
        
        eax = eax_1
        *ecx_3 = eax
        
        if (arg5 != 2 && arg5 != 3)
            return result
        
        var_1c_1 = "DieMoveBack"
        var_20_1 = 0x21dc
        ecx = "reorg != REORG_DEST && reorg != REORG_BOTH"
    else
        var_1c_1 = "GetRollD"
        var_20_1 = 0xb38
        ecx = "gfx.type == ROLLGFX_DIE"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_20_1, 
        var_1c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
