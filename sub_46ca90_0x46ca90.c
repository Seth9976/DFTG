// 函数名称: sub_46ca90
// 虚拟地址: 0x46ca90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46ca90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x2c4)
    int32_t ecx = *(arg1 + 0x2c4)
    int32_t result = 0
    int32_t* ecx_1
    int32_t esi
    
    if (ecx == 0)
        int32_t var_c
        esi = var_c
        ecx_1 = nullptr
    else
        ecx_1 = sub_452c30(ecx)
        esi = ecx_1[0xa]
    
    int32_t var_10
    int64_t* eax_2 = sub_4538b0(&var_10)
    int32_t ebx = var_10
    
    while (ecx_1 != ebx)
        if (ecx_1 == 0)
            sub_489550(eax_2, &data_5b2591, "gfx", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x5da, "Dice::DiceIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t result_1 = result + 1
        eax_2 = sub_452cc0(ecx_1[7])[0xc]
        
        if (eax_2[6].d != arg2)
            result_1 = result
        
        result = result_1
        
        if (esi != 0)
            eax_2 = sub_452c30(esi)
            ecx_1 = eax_2
            esi = ecx_1[0xa]
        else
            ecx_1 = nullptr
    
    return result
}
