// 函数名称: sub_45c530
// 虚拟地址: 0x45c530
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_45c530(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    __builtin_memcpy(&arg1[0xcd], arg2, 0x33c)
    int32_t ecx = *(arg2 + 0x330)
    int32_t result = *(arg2 + 4)
    int32_t var_1c
    int32_t esi_1
    
    if (result u> 0x12)
        char const* const var_18_2 = "RollChoiceToPhase"
        var_1c = 0x2812
    else
        switch (result)
            case 0
                esi_1 = 1
            label_45c603:
                arg1[1] = esi_1
                
                if (*(arg2 + 4) != 3)
                    result = sub_469070(esi_1, *(arg2 + 0x334))
                
                int32_t ecx_3 = *arg1
                
                if (data_632a64 != ecx_3)
                    result = data_632810
                    
                    if (result == 0 || result == 2)
                        data_632a64 = 0xffffffff
                        return sub_421710(ecx_3)
                    
                    data_632a64 = ecx_3
                
                return result
            case 1, 2, 3, 4
                esi_1 = 6
                result = sub_453650(arg1)
                
                if (result == 2)
                    esi_1 = result + 1
                
                goto label_45c603
            case 5, 0x11
                esi_1 = 4
                goto label_45c603
            case 6
                esi_1 = 8
                goto label_45c603
            case 7
                esi_1 = 9
                goto label_45c603
            case 8
                esi_1 = 0xb
                goto label_45c603
            case 9
                esi_1 = 0xd
                goto label_45c603
            case 0xa
                if (ecx == 2)
                    esi_1 = ecx + 0xd
                    goto label_45c603
                
                if (ecx == 3)
                    esi_1 = ecx + 0xe
                    goto label_45c603
                
                char const* const var_18 = "RollChoiceToPhase"
                var_1c = 0x27fb
            case 0xb
                esi_1 = 0x1b
                goto label_45c603
            case 0xc
                esi_1 = 0x19
                goto label_45c603
            case 0xd
                esi_1 = 0x13
                goto label_45c603
            case 0xe
                esi_1 = 0x15
                goto label_45c603
            case 0xf
                char const* const var_18_1 = "RollChoiceToPhase"
                var_1c = 0x2804
            case 0x10
                esi_1 = 0x17
                goto label_45c603
            case 0x12
                esi_1 = 0x1d
                goto label_45c603
    sub_489550(result, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        var_1c, "RollChoiceToPhase")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
