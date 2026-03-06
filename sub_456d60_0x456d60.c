// 函数名称: sub_456d60
// 虚拟地址: 0x456d60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_456d60(void* arg1, int32_t arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: char const* const var_2c
    char const* const var_2c
    int32_t var_28_1
    char const* const var_24
    char* ecx
    
    if (*arg3 == 1)
        arg1 = data_6cfe4c
        
        if (arg1 != 0)
            int32_t ecx_1 = arg3[6]
            
            if (ecx_1 == *(arg1 + 0xa68))
                void* eax = sub_452b90(ecx_1)
                uint32_t edi_1 = eax
                void* var_14
                char ecx_3 = sub_4565d0(eax, edi_1, &var_14, arg3)
                arg1 = var_14
                
                if (arg1 u<= 7)
                    int32_t* var_c
                    
                    switch (arg1)
                        case nullptr
                            goto label_456e7d
                        case 1
                            int32_t var_10
                            
                            if (var_10 == 4)
                                int32_t var_24_2 = 0
                                sub_45a730(var_10, arg3, edi_1, var_c, 1, ecx_3)
                                goto label_456e7d
                            
                            if (var_10 != 0xf)
                                sub_45a830(var_10, arg3, edi_1, var_10, false, 1, 5, 1, 0)
                                goto label_456e7d
                            
                            sub_474ed0(edi_1, arg3)
                        case 2
                            sub_474cc0(edi_1, arg3)
                            goto label_456e7d
                        case 3
                            sub_4747e0(edi_1, arg3)
                            goto label_456e7d
                        case 4
                            int32_t* var_8 = arg3
                            sub_474a90(arg1, &var_8, edi_1, 1, 0)
                            goto label_456e7d
                        case 5
                            sub_4749e0(edi_1, arg3)
                            goto label_456e7d
                        case 6
                            sub_468190(arg1, arg3, edi_1, var_c, 0)
                            goto label_456e7d
                        case 7
                            sub_474db0(edi_1, arg3)
                        label_456e7d:
                            
                            if (arg4 != 0)
                                data_126be00
                                sub_4c5ce0()
                    
                    sub_46a420(8)
                    return sub_46a420(9)
                
                var_24 = "RollHandleAutoDieOne"
                var_28_1 = 0x10d7
                ecx = "Halt"
            else
                var_24 = "RollHandleAutoDieOne"
                var_28_1 = 0x10a4
                ecx = "gfx.die.owner == LocalWho()"
            
            var_2c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        else
            var_24 = "GetClient"
            var_28_1 = 0x75
            var_2c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx = "gClient"
    else
        var_24 = "RollHandleAutoDieOne"
        var_28_1 = 0x10a3
        ecx = "gfx.type == ROLLGFX_DIE"
        var_2c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    
    sub_489550(arg1, &data_5b2591, ecx, var_2c, var_28_1, var_24)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
