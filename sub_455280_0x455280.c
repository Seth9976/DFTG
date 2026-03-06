// 函数名称: sub_455280
// 虚拟地址: 0x455280
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_455280(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t edx = *(arg2 + 0x34)
    int32_t edx = *(arg2 + 0x34)
    int32_t var_30_1
    char const* const var_2c_1
    char* ecx
    
    if (*arg2 == 0)
        int32_t esi_1 = *(arg2 + 0x8a8)
        int32_t ecx_1 = arg5
        
        if (edx == 1)
        label_455355:
            *(arg2 + 0x34) = arg4
            
            if (arg4 == 1)
                return 0xffffffff
            
            int32_t eax_3 = arg3[arg4 + 0xa7]
            *(arg2 + 0x40) = eax_3
            arg3[arg4 + 0xa7] = esi_1
            
            if (ecx_1 == 3 || ecx_1 == 2)
                sub_454d90(eax_3, arg4, arg3, arg2, arg6)
            
            return 0
        
        arg1 = *(arg2 + 0x3c)
        
        if (arg1 == *arg3)
            int32_t i = arg3[0xa7 + edx]
            void* eax_1 = &arg3[0xa7 + edx]
            int32_t i_1 = 0
            void* var_c_1 = eax_1
            void* ebx_1
            
            for (; i != 0; i = *ebx_1)
                eax_1 = sub_452de0(i)
                ebx_1 = eax_1 + 0x10
                
                if (i == esi_1)
                    if (i_1 == 0)
                        eax_1 = *ebx_1
                        *var_c_1 = eax_1
                    else
                        eax_1 = sub_452de0(i_1)
                        *(eax_1 + 0x10) = *ebx_1
                    
                    break
                
                i_1 = i
            
            ecx_1 = arg5
            
            if (ecx_1 == 3 || ecx_1 == 1)
                sub_454d90(eax_1, edx, arg3, arg2, arg6)
                ecx_1 = arg5
            
            goto label_455355
        
        var_2c_1 = "TileMoveFront"
        var_30_1 = 0xc75
        ecx = "gfx.tile.owner == pgui.who"
    else
        var_2c_1 = "GetRollT"
        var_30_1 = 0x8fb
        ecx = "gfx.type == ROLLGFX_TILE"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_30_1, 
        var_2c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
