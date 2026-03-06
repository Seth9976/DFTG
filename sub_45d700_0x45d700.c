// 函数名称: sub_45d700
// 虚拟地址: 0x45d700
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45d700(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    void* eax = data_6cfe4c
    char const* const var_1c
    int32_t var_18
    char const* const var_14_1
    char* ecx
    
    if (eax != 0)
        if (arg2 == *(eax + 0xa68))
            int32_t eax_1 = sub_45ced0(*arg1, 0)
            int32_t eax_2 = sub_45ced0(*arg1, 1)
            
            if (*arg1 == 0)
                return 0
            
            int32_t result = 0
            eax = arg1[2] - 1
            
            if (eax u> 3)
                var_14_1 = "RollWorkTrayUpdate"
                var_18 = 0x306a
            else
                switch (eax)
                    case nullptr
                        eax = arg1[1] - 1
                        
                        if (eax u> 9)
                            var_14_1 = "RollWorkTrayUpdate"
                            var_18 = 0x2fde
                        else
                            switch (eax)
                                case nullptr, 4
                                    arg1[1] = 1
                                label_45d8d7:
                                    
                                    if (eax_1 != 0)
                                        sub_45d490(eax, *arg1, eax_1, arg1[1])
                                    
                                    return result
                                case 1, 2
                                    arg1[1] = 4
                                    goto label_45d8d7
                                case 3
                                label_45d7a8:
                                    
                                    if (eax_1 == 0)
                                    label_45d8c7:
                                        result = 1
                                        goto label_45d8d7
                                    
                                    eax = sub_4bbf60(eax_2)
                                    
                                    if (eax.b != 0)
                                        goto label_45d8c7
                                    
                                    arg1[1] = 1
                                    result = 1
                                    goto label_45d8d7
                                case 5, 6
                                label_45d7ce:
                                    arg1[1] = 5
                                    result = 1
                                    goto label_45d8d7
                                case 7, 8
                                label_45d7df:
                                    arg1[1] = 0xa
                                    result = 1
                                    goto label_45d8d7
                                case 9
                                label_45d7f0:
                                    
                                    if (eax_1 == 0)
                                        goto label_45d8c7
                                    
                                    eax = sub_4bbf60(eax_2)
                                    
                                    if (eax.b != 0)
                                        goto label_45d8c7
                                    
                                    arg1[1] = 7
                                    result = 1
                                    goto label_45d8d7
                    case 1
                        eax = arg1[1] - 1
                        
                        if (eax u> 9)
                            var_14_1 = "RollWorkTrayUpdate"
                            var_18 = 0x3008
                        else
                            switch (eax)
                                case nullptr, 3, 4
                                    arg1[1] = 2
                                    result = 1
                                    goto label_45d8d7
                                case 1
                                    if (eax_1 == 0)
                                        goto label_45d8c7
                                    
                                    eax = sub_4bbf60(eax_2)
                                    
                                    if (eax.b != 0)
                                        goto label_45d8c7
                                    
                                    arg1[1] = 3
                                    result = 1
                                    goto label_45d8d7
                                case 2
                                    arg1[1] = 3
                                    goto label_45d8d7
                                case 5, 6
                                    goto label_45d7ce
                                case 7, 8
                                    goto label_45d7df
                                case 9
                                    goto label_45d7f0
                    case 2, 3
                        eax = arg1[1] - 1
                        
                        if (eax u> 9)
                            var_14_1 = "RollWorkTrayUpdate"
                            var_18 = 0x3033
                        else
                            switch (eax)
                                case nullptr, 4
                                    arg1[1] = 6
                                    result = 1
                                    goto label_45d8d7
                                case 1, 2
                                    arg1[1] = 4
                                    result = 1
                                    goto label_45d8d7
                                case 3
                                    goto label_45d7a8
                                case 5, 6, 9
                                    arg1[1] = 8
                                    result = 1
                                    goto label_45d8d7
                                case 7
                                    if (eax_1 != 0)
                                        eax = sub_4bbf60(eax_2)
                                        
                                        if (eax.b == 0)
                                            arg1[1] = 9
                                    
                                    goto label_45d8c7
                                case 8
                                    arg1[1] = 9
                                    goto label_45d8d7
            
            ecx = "Halt"
        else
            var_14_1 = "RollWorkTrayUpdate"
            var_18 = 0x2f82
            ecx = "who == LocalWho()"
        
        var_1c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    else
        var_14_1 = "GetClient"
        var_18 = 0x75
        var_1c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_489550(eax, &data_5b2591, ecx, var_1c, var_18, var_14_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
