// 函数名称: sub_42dd10
// 虚拟地址: 0x42dd10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_42dd10(int32_t* arg1)
{
    // 第一条实际指令: void* eax = sub_4271e0(arg1)
    void* eax = sub_4271e0(arg1)
    int32_t esi = arg1[0x3f]
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x10624dd3, sub_498220(arg1))
    int32_t edx_2 = edx_1 s>> 6
    int32_t eax_5 = (edx_2 u>> 0x1f) + edx_2
    int32_t ecx_2 = arg1[0x41] - eax_5
    int32_t var_14
    
    if (eax == 0)
        switch (esi)
            case 0
                int32_t eax_25
                eax_25.b = ecx_2 s< 0
                return (eax_25 << 2) + 1
            case 1
                return 0xe
            case 2
                return esi + 0x10
            case 0x3e8
                return 0xa
            case 0x3e9
                return 7
            case 0x3ea
                return esi - 0x3dd
        
        char const* const var_10_1 = "GetMultiplayerGameState"
        var_14 = 0xdf6
    else
        int32_t result
        
        switch (esi)
            case 0
                int32_t eax_10 = *(eax + 0x20)
                
                if (ecx_2 s>= 0)
                    if (eax_10 != 1 && eax_10 == 2)
                        return 2
                    
                    return 0
                
                if (eax_10 != 1)
                    result = 4
                
                if (eax_10 == 1 || eax_10 != 2)
                    return 3
                
                return result
            case 1
                int32_t eax_7 = *(eax + 0x20)
                
                if (eax_7 != 3)
                    result = 0xf
                
                if (eax_7 == 3 || eax_7 != 4)
                    return 0x10
                
                return result
            case 2
                return esi + 0xf
            case 0x3e8
                int32_t eax_17
                eax_17.b = *(eax + 0x20) != 0x3ec
                return eax_17 + 8
            case 0x3e9
                int32_t edx_3 = arg1[0x39]
                int32_t ecx_3 = 0
                
                if (edx_3 s> 0)
                    void* eax_22 = &arg1[0xa]
                    
                    while (*eax_22 != 0x3eb)
                        ecx_3 += 1
                        eax_22 += 0x2c
                        
                        if (ecx_3 s>= edx_3)
                            break
                
                return 7
            case 0x3ea
                int32_t eax_19 = *(eax + 0x20)
                bool cond:5_1
                
                if (eax_19 s> 0x3ea)
                    cond:5_1 = eax_19 != 0x3ec
                label_42de29:
                    
                    if (not(cond:5_1))
                        return 8
                else if (eax_19 != 0x3ea && eax_19 s>= 3 && eax_19 s> 4)
                    cond:5_1 = eax_19 != 0x3e9
                    goto label_42de29
                return 0xc
        
        char const* const var_10 = "GetMultiplayerGameState"
        var_14 = 0xddd
    
    sub_489550(eax_5, &data_5b2591, "Halt", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", var_14, 
        "GetMultiplayerGameState")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
