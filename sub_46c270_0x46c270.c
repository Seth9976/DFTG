// 函数名称: sub_46c270
// 虚拟地址: 0x46c270
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46c270(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t ebx
    ebx.b = arg2
    int32_t ecx = arg1[0x1c]
    
    if (ecx != 1 || arg1[0x36] != 3)
        int32_t eax_1 = arg1[0x5d]
        
        if (eax_1 != 1 || arg1[0x77] != 3)
            int32_t edx = arg1[0x1aa]
            
            if ((edx == 0 || arg1[0xb8] != 3) && (ecx != 1 || arg1[0x36] != 4)
                    && (eax_1 != 1 || arg1[0x77] != 4) && (edx == 0 || arg1[0xb8] != 4))
                if ((ecx != 1 || arg1[0x36] != 2) && (eax_1 != 1 || arg1[0x77] != 2)
                        && (edx == 0 || arg1[0xb8] != 2) && sub_4542f0(arg1, 1) == 0)
                    if (sub_46b4c0(arg1) == 0 && (sub_46b510(arg1) == 0 || ebx.b != 0))
                        if (sub_46be80(arg1) != 0)
                            return 0x2d84
                        
                        int32_t eax_8 = sub_45c310(arg1)
                        
                        if (eax_8.b != 0)
                            return 0x2d52
                        
                        char const* const var_18
                        int32_t var_14
                        char const* const var_10
                        char* ecx_7
                        
                        if (*arg1 == 0)
                            int32_t ecx_8 = arg1[0xf]
                            bool cond:1_1
                            
                            if (ecx_8 != 0xffffffff)
                                eax_8 = data_6cfe4c
                                
                                if (eax_8 != 0)
                                    cond:1_1 = ecx_8 != *(eax_8 + 0xa68)
                                label_46c409:
                                    eax_8.b = cond:1_1
                                    
                                    if (eax_8.b != 0)
                                        if (sub_46bdf0(ecx_8) != 0)
                                            int32_t eax_11
                                            eax_11.b = arg1[0xd] == 3
                                            return (eax_11 << 1) + 0x2cbc
                                        
                                        if (sub_46bd40(arg1[0xf]) == 0)
                                            return 0x2bfe
                                        
                                        int32_t eax_14
                                        eax_14.b = arg1[0xd] == 3
                                        return (eax_14 << 1) + 0x2c8a
                                    
                                    eax_8 = sub_4543d0(arg1)
                                    void* ecx_14 = data_6cfe4c
                                    
                                    if (ecx_14 == 0)
                                        goto label_46c4a8
                                    
                                    if (arg1[0xf] == *(ecx_14 + 0xa68) && arg1[0xd] == 3)
                                        return 0x2b11
                                    
                                    if (eax_8 == 0)
                                        return 0x2bc1
                                    
                                    return 0x2b5d
                                
                            label_46c4a8:
                                var_10 = "GetClient"
                                var_14 = 0x75
                                var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                                ecx_7 = "gClient"
                            else if (arg1[0x1aa] s> 0)
                                if (arg1[0x9e] == 1)
                                    int32_t edx_1 = data_6cfe4c
                                    
                                    if (edx_1 == 0)
                                        goto label_46c4a8
                                    
                                    cond:1_1 = arg1[0xb7] != *(edx_1 + 0xa68)
                                    goto label_46c409
                                
                                var_10 = "IsOpponentTile"
                                var_14 = 0x5a6a
                                var_18 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                                ecx_7 = "gfx.move.locTargets[0].target.type == LOC_USER"
                            else
                                var_10 = "IsOpponentTile"
                                var_14 = 0x5a69
                                var_18 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                                ecx_7 = "gfx.move.numTargets > 0"
                        else
                            var_10 = "IsOpponentTile"
                            var_14 = 0x5a66
                            var_18 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                            ecx_7 = "gfx.type == ROLLGFX_TILE"
                        
                        sub_489550(eax_8, &data_5b2591, ecx_7, var_18, var_14, var_10)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    return 0x2eb0
                
                return 0x2e27
    
    return 0x2e2c
}
