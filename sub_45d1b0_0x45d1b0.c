// 函数名称: sub_45d1b0
// 虚拟地址: 0x45d1b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_45d1b0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* ecx = data_6cfe4c
    char const* const var_18
    int32_t var_14
    char const* const var_10
    void* result
    char* ecx_1
    
    if (ecx == 0)
    label_45d1bf:
        var_10 = "GetClient"
        var_14 = 0x75
        var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    label_45d3f9:
        sub_489550(result, &data_5b2591, ecx_1, var_18, var_14, var_10)
        
        if (IsDebuggerPresent() != 1)
            sub_489700()
            noreturn
        
        breakpoint
    
    result = sub_452b90(*(ecx + 0xa68))
    void* result_1 = result
    
    if (arg1 u> 0xc)
        var_10 = "CalcLargeTrayState"
        var_14 = 0x2f06
        ecx_1 = "Halt"
    else
        switch (arg1)
            case 0
                var_10 = "CalcLargeTrayState"
                var_14 = 0x2f09
                ecx_1 = "Halt"
            case 1
                result = sub_45d190(3)
                
                if (result.b != 0)
                label_45d303:
                    void* ecx_9 = data_6cfe4c
                    
                    if (ecx_9 == 0)
                        goto label_45d1bf
                    
                    if (*(sub_452b90(*(ecx_9 + 0xa68)) + 4) == 0x1b)
                        return 5
                else
                    result = sub_45d190(2)
                    
                    if (result.b != 0)
                        goto label_45d303
                
                char eax_12 = sub_45d190(3)
                char eax_13
                
                if (eax_12 == 0)
                    eax_13 = sub_45d190(2)
                
                if (eax_12 != 0 || eax_13 != 0)
                    result = sub_453650(result_1)
                    
                    if (result == 0x17)
                        return 1
                    
                    void* ecx_12 = data_6cfe4c
                    
                    if (ecx_12 == 0)
                        goto label_45d1bf
                    
                    if (*(sub_452b90(*(ecx_12 + 0xa68)) + 4) == 0x19 || data_632590 == 6)
                        return 1
                else if (data_632590 == 6)
                    return 1
                
                result = data_6329c8
                
                if (result != 0)
                    return result
                
                var_10 = "CalcLargeTrayState"
                var_14 = 0x2ee4
                ecx_1 = "gRollClient.lastLargeTrayState[tray] != 0"
            case 2
                int32_t eax_7 = data_632590
                
                if (eax_7 == 2 || eax_7 == 4 || eax_7 == 3 || eax_7 == 6)
                    return 1
                
                if (sub_453650(result_1) == 0x17)
                    return 5
                
                if (sub_45d190(3) != 0)
                    return 1
                
                if (sub_45d190(2) != 0)
                    return 1
                
                result = data_6329cc
                
                if (result != 0)
                    return result
                
                var_10 = "CalcLargeTrayState"
                var_14 = 0x2ecd
                ecx_1 = "gRollClient.lastLargeTrayState[tray] != 0"
            case 3, 4
                int32_t eax = data_632590
                char eax_1
                
                if (eax != 1 && eax != 3)
                    eax_1 = sub_45d140()
                
                if (eax == 1 || eax == 3 || eax_1 != 0)
                    return 3
                
                if (sub_453650(result_1) != 0x17)
                    int32_t eax_3 = data_632590
                    
                    if (eax_3 != 6)
                        if (eax_3 == 5 && sub_45d190(eax_3 - 4) != 0 && (arg1 == 3 || arg1 == 4))
                            return 2
                        
                        return 4
                
                return 5
            case 5, 6, 7, 8, 9
                if (data_632590 != 5)
                    return 0
                
                if (sub_453650(result_1) == 0x17)
                    return 0
                
                int32_t ecx_15
                
                switch (arg1)
                    case 0, 1, 2, 3, 4, 0xa, 0xb, 0xc
                        ecx_15 = 0xffffffff
                    case 5, 6, 7, 8, 9
                        ecx_15 = arg1 - 4
                
                if (sub_45d190(ecx_15) == 0)
                    return 0
                
                return 1
            case 0xa
                return 1
            case 0xb, 0xc
                return 5
    
    var_18 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    goto label_45d3f9
}
