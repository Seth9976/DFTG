// 函数名称: sub_464830
// 虚拟地址: 0x464830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_464830(void* arg1)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x2d0)
    int32_t ecx = *(arg1 + 0x2d0)
    int32_t result = 0
    int32_t* esi
    int32_t edi
    
    if (ecx == 0)
        int32_t var_8
        edi = var_8
        esi = nullptr
    else
        esi = sub_452c30(ecx)
        edi = esi[0xa]
    
    int32_t var_c
    int64_t* eax_2 = sub_4538b0(&var_c)
    
    if (esi != var_c)
        while (true)
            int32_t var_24
            char const* const var_20_1
            char* ecx_4
            
            if (esi == 0)
                var_20_1 = "Dice::DiceIt::operator *"
                var_24 = 0x5da
                ecx_4 = &data_5e3f90
            else if (esi[3] s> 6)
                var_20_1 = "GetSide"
                var_24 = 0x150b
                ecx_4 = "die.face <= 6"
            else
                eax_2 = sub_457270(esi[2])
                int32_t result_1 = result + 1
                
                if (*(eax_2 + (esi[3] << 2)) != 0)
                    result_1 = result
                
                result = result_1
                
                if (edi != 0)
                    eax_2 = sub_452c30(edi)
                    esi = eax_2
                    edi = esi[0xa]
                else
                    esi = nullptr
                
                if (esi == var_c)
                    break
                
                continue
            
            sub_489550(eax_2, &data_5b2591, ecx_4, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                var_24, var_20_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    return result
}
