// 函数名称: sub_460e00
// 虚拟地址: 0x460e00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_460e00(void* arg1)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x2d0)
    int32_t ecx = *(arg1 + 0x2d0)
    int32_t result = 0
    int32_t* ecx_1
    int32_t edx
    
    if (ecx == 0)
        int32_t var_8
        edx = var_8
        ecx_1 = nullptr
    else
        ecx_1 = sub_452c30(ecx)
        edx = ecx_1[0xa]
    
    int32_t var_c
    int64_t* eax_2 = sub_4538b0(&var_c)
    int32_t edi = var_c
    
    while (ecx_1 != edi)
        if (ecx_1 == 0)
            sub_489550(eax_2, &data_5b2591, "gfx", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x5da, "Dice::DiceIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result += 1
        
        if (edx != 0)
            eax_2 = sub_452c30(edx)
            ecx_1 = eax_2
            edx = ecx_1[0xa]
        else
            ecx_1 = nullptr
    
    return result
}
