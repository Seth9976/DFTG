// 函数名称: sub_454f80
// 虚拟地址: 0x454f80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_454f80(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* edx = arg3
    int32_t* edx = arg3
    int32_t* var_8 = edx
    int32_t esi = arg2[0xd]
    int32_t var_30_1
    char const* const var_2c
    char* ecx
    
    if (*arg2 == 0)
        int32_t eax = arg2[0x22a]
        
        if (esi == 1)
        label_45503b:
            arg2[0xd] = arg4
            
            if (arg4 == 1)
                return 0xffffffff
            
            arg2[0x10] = 0
            void* edx_3 = &edx[arg4 + 0xa7]
            int32_t ecx_6 = *edx_3
            int32_t var_c_1 = ecx_6
            
            if (ecx_6 == 0 || arg5 == 0)
            label_4550c3:
                arg2[0x10] = *edx_3
                *edx_3 = eax
                sub_454d90(eax, arg4, var_8, arg2, 0)
                return arg5
            
            int32_t esi_2 = 1
            arg1 = sub_452cc0(ecx_6)
            
            if (arg1[0xd] == arg4)
                while (true)
                    int32_t eax_3 = arg1[0x10]
                    
                    if (eax_3 == 0)
                        break
                    
                    if (arg5 == esi_2)
                        break
                    
                    var_c_1 = eax_3
                    esi_2 += 1
                    arg1 = sub_452cc0(eax_3)
                    
                    if (arg1[0xd] != arg4)
                        goto label_4550e5
                
                if (var_c_1 == 0)
                    goto label_4550c3
                
                int32_t* eax_4 = sub_452cc0(var_c_1)
                arg2[0x10] = eax_4[0x10]
                int32_t eax_5 = sub_454390(arg2)
                eax_4[0x10] = eax_5
                sub_454d90(eax_5, arg4, var_8, arg2, 0)
                return arg5
            
        label_4550e5:
            var_2c = "TileAtSlot"
            var_30_1 = 0x2e4
            ecx = "gfx.tile.where == where"
        else
            arg1 = arg2[0xf]
            
            if (arg1 == *edx)
                int32_t i_1 = 0
                void* eax_1 = &edx[esi + 0xa7]
                int32_t i = *eax_1
                void** var_14_1 = eax_1
                void* ebx_1
                
                for (; i != 0; i = *ebx_1)
                    eax_1 = sub_452de0(i)
                    ebx_1 = eax_1 + 0x10
                    
                    if (i == eax)
                        if (i_1 == 0)
                            eax_1 = *ebx_1
                            *var_14_1 = eax_1
                        else
                            eax_1 = sub_452de0(i_1)
                            *(eax_1 + 0x10) = *ebx_1
                        
                        break
                    
                    i_1 = i
                
                sub_454d90(eax_1, esi, var_8, arg2, 0)
                edx = var_8
                goto label_45503b
            
            var_2c = "TileMoveSlot"
            var_30_1 = 0xbe5
            ecx = "gfx.tile.owner == pgui.who"
    else
        var_2c = "GetRollT"
        var_30_1 = 0x8fb
        ecx = "gfx.type == ROLLGFX_TILE"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_30_1, 
        var_2c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
