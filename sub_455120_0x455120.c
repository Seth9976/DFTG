// 函数名称: sub_455120
// 虚拟地址: 0x455120
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_455120(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t* esi = arg3
    int32_t* esi = arg3
    int32_t* var_8 = esi
    int32_t edx = arg2[0xd]
    int32_t var_30_1
    char const* const var_2c_1
    char* ecx
    
    if (*arg2 == 0)
        int32_t eax = arg2[0x22a]
        
        if (edx == 1)
        label_4551c5:
            
            if (arg5 == 3 || arg5 == 1)
                sub_454d90(arg5, edx, esi, arg2, arg6)
            
            arg2[0xd] = arg4
            
            if (arg4 == 1)
                return 0xffffffff
            
            arg2[0x10] = 0
            int32_t eax_8 = sub_453010(esi, arg4)
            
            if (eax_8 == 0)
                esi[arg4 + 0xa7] = eax
                return sub_453570(*esi, arg4) - 1
            
            int32_t* eax_12 = sub_452cc0(eax_8)
            eax_12[0x10] = sub_454390(arg2)
            return sub_453570(*var_8, arg4) - 1
        
        arg1 = arg2[0xf]
        
        if (arg1 == *esi)
            int32_t i = esi[0xa7 + edx]
            int32_t i_1 = 0
            void* ebx_1
            
            for (; i != 0; i = *ebx_1)
                ebx_1 = sub_452de0(i) + 0x10
                
                if (i == eax)
                    if (i_1 == 0)
                        esi[0xa7 + edx] = *ebx_1
                    else
                        void* eax_4 = sub_452de0(i_1)
                        *(eax_4 + 0x10) = *ebx_1
                    
                    break
                
                i_1 = i
            
            esi = var_8
            goto label_4551c5
        
        var_2c_1 = "TileMoveBack"
        var_30_1 = 0xc2b
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
