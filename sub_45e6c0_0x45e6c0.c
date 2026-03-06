// 函数名称: sub_45e6c0
// 虚拟地址: 0x45e6c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45e6c0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t* i_1 = nullptr
    sub_481430(&data_62d6c4, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 1 && i[6] == *arg1 && *(i + 0x21) != 0)
            int32_t eax_2 = i[4]
            int32_t var_28
            char const* const ecx
            
            if (eax_2 s< 9 || eax_2 s> 0xd)
                char const* const var_24_3 = "GetPhaseSelectionDice"
                var_28 = 0x34c0
                ecx = "Halt"
            label_45e75f:
                sub_489550(eax_2, &data_5b2591, ecx, 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_28, "GetPhaseSelectionDice")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (result s>= 0x28)
                char const* const var_24_2 = "GetPhaseSelectionDice"
                var_28 = 0x34c3
                ecx = "count < maxCount"
                goto label_45e75f
            
            *(arg2 + (result << 2)) = i
            result += 1
        
        sub_481430(&data_62d6c4, &i_1)
    
    return result
}
