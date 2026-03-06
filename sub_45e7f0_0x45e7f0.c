// 函数名称: sub_45e7f0
// 虚拟地址: 0x45e7f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45e7f0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* var_c = ebx
    int32_t result = 0
    int32_t* i_1 = nullptr
    sub_481430(&data_62d6c4, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 1 && i[6] == *ebx && *(i + 0x21) == 0)
            int32_t ebx_1 = i[4]
            
            if (ebx_1 - 9 u<= 4)
                int32_t eax_5 = sub_457310(*(sub_457270(i[2]) + (i[3] << 2)), ebx_1 - 8)
                
                if (eax_5.b == 0)
                    if (result s>= 0x28)
                        sub_489550(eax_5, &data_5b2591, "numDice < maxCount", 
                            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x34ef, 
                            "GetMismatchDice")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    *(arg2 + (result << 2)) = i
                    result += 1
            
            ebx = var_c
        
        sub_481430(&data_62d6c4, &i_1)
    
    return result
}
