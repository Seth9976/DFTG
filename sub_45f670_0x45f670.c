// 函数名称: sub_45f670
// 虚拟地址: 0x45f670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_45f670(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *arg2 = 0
    *arg3 = 0
    *arg4 = 0
    int32_t var_124[0x47]
    int32_t* ecx
    int32_t edx
    int32_t eax_4 = sub_45f510(&var_124, edx, ecx, &var_124)
    int32_t ecx_1 = arg1
    int32_t edx_1 = 0
    int32_t var_13c
    int32_t* result
    char* ecx_2
    
    if (eax_4 s<= 0)
    label_45f6d6:
        result = arg4
        *arg2 = ecx_1
        
        if (*result s< 0)
            char const* const var_138_1 = "ComputeConstructionDice"
            var_13c = 0x387d
            ecx_2 = "numHanging >= 0"
        else if (ecx_1 s>= 0)
            if (*arg3 s>= 0)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            char const* const var_138_6 = "ComputeConstructionDice"
            var_13c = 0x387f
            ecx_2 = "numCit >= 0"
        else
            char const* const var_138_5 = "ComputeConstructionDice"
            var_13c = 0x387e
            ecx_2 = "numCup >= 0"
    else
        while (true)
            int32_t esi_1 = var_124[edx_1]
            
            if (esi_1 s> ecx_1)
                break
            
            *arg3 += esi_1
            int32_t temp0_1 = ecx_1
            ecx_1 -= esi_1
            
            if (temp0_1 == esi_1)
                goto label_45f6d6
            
            edx_1 += 1
            
            if (edx_1 s>= eax_4)
                goto label_45f6d6
        
        result = arg4
        *result = ecx_1
        
        if (ecx_1 s< 0)
            char const* const var_138_2 = "ComputeConstructionDice"
            var_13c = 0x386c
            ecx_2 = "numHanging >= 0"
        else if (*arg2 s>= 0)
            if (*arg3 s>= 0)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            char const* const var_138_4 = "ComputeConstructionDice"
            var_13c = 0x386e
            ecx_2 = "numCit >= 0"
        else
            char const* const var_138_3 = "ComputeConstructionDice"
            var_13c = 0x386d
            ecx_2 = "numCup >= 0"
    
    sub_489550(result, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        var_13c, "ComputeConstructionDice")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
