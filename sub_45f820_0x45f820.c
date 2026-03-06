// 函数名称: sub_45f820
// 虚拟地址: 0x45f820
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_45f820(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = 0
    int32_t eax_3
    eax_3.b = arg2 == 5
    int32_t ecx = *((eax_3 << 2) + 0x2dc + arg3)
    int32_t* ecx_1
    int32_t edx
    
    if (ecx == 0)
        edx = arg3
        ecx_1 = nullptr
    else
        ecx_1 = sub_452c30(ecx)
        edx = ecx_1[0xa]
    
    int32_t var_164
    int64_t* eax_6 = sub_4538b0(&var_164)
    int32_t esi = var_164
    int32_t var_150[0x28]
    
    while (ecx_1 != esi)
        if (ecx_1 == 0)
            sub_489550(eax_6, &data_5b2591, "gfx", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x5da, "Dice::DiceIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        var_150[result] = ecx_1
        result += 1
        
        if (edx != 0)
            eax_6 = sub_452c30(edx)
            ecx_1 = eax_6
            edx = ecx_1[0xa]
        else
            ecx_1 = nullptr
    
    int32_t var_160
    int32_t var_158
    int32_t var_154
    int32_t* eax_7 = sub_45f670(result, &var_160, &var_154, &var_158)
    int32_t var_180_1
    char const* const ecx_4
    
    if (var_160 s< 0)
        char const* const var_17c_2 = "ComputeDiceSequenceAuto"
        var_180_1 = 0x389d
        ecx_4 = "numCup >= 0"
    else if (var_154 s>= 0)
        if (var_158 s>= 0)
            void var_b0
            
            if (result s> 0)
                __builtin_memcpy(&var_b0, &var_150, result << 2)
            
            sub_4819d0(eax_7, &var_b0 + (result << 2), &var_b0, result, 0x5ed340)
            int32_t edi_1 = var_154 << 2
            int32_t esi_1 = var_158 << 2
            sub_579300(arg4, &var_b0 + esi_1, edi_1)
            sub_579300(&arg4[edi_1], &var_b0, esi_1)
            int32_t edx_5 = (var_154 + var_158) << 2
            sub_579300(&arg4[edx_5], &var_b0 + edx_5, var_160 << 2)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        char const* const var_17c_6 = "ComputeDiceSequenceAuto"
        var_180_1 = 0x389f
        ecx_4 = "numHanging >= 0"
    else
        char const* const var_17c_3 = "ComputeDiceSequenceAuto"
        var_180_1 = 0x389e
        ecx_4 = "numCit >= 0"
    
    sub_489550(eax_7, &data_5b2591, ecx_4, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        var_180_1, "ComputeDiceSequenceAuto")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
