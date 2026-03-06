// 函数名称: sub_484840
// 虚拟地址: 0x484840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_484840(int32_t arg1, int32_t arg2, char** arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e50b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_28 = arg3
    int32_t* esi = arg4
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    int32_t eax_3 = *esi
    
    if (eax_3 == 0)
        sub_489550(eax_3, &data_5b2591, "desc.numDice != 0", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x387, "MakeStockPhaseDesc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* const edx = &data_5d59fc
    
    if (eax_3 s> 1)
        edx = "dice"
    
    int32_t ecx = esi[1]
    
    if (ecx == 0)
        sub_489550(eax_3, &data_5b2591, "desc.numCredits != 0", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x38a, "MakeStockPhaseDesc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (ecx s<= 1)
        sub_489550(eax_3, &data_5b2591, "desc.numCredits > 1", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x38d, "MakeStockPhaseDesc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_3c = ecx
    void* const var_40 = edx
    int32_t var_44 = eax_3
    int32_t var_48 = arg2
    sub_48a9d0(arg3, "{normal_log}%s stocks %d %s {die_any} for %d credits {credit}")
    int32_t var_8_2 = 0
    char* eax_4 = nullptr
    int32_t var_14_1 = 1
    char* var_24 = nullptr
    char* const var_20
    char* const var_1c
    
    if (esi[4] != 0)
        var_24 = nullptr
        
        if (arg5 != 0)
            int32_t eax_5 = esi[0xd]
            
            if (eax_5 != 1 && eax_5 != 2)
                sub_489550(eax_5, &data_5b2591, 
                    "desc.numVirtualDiceSources == 1 || desc.numVirtualDiceSources == 2", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x396, "MakeStockPhaseDesc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char* const var_18
            char** eax_9
            int32_t ebx_1
            
            if (eax_5 == 0)
                int32_t ecx_3 = data_632804
                int32_t var_3c_2 = **(ecx_3 + esi[6] * 0xc + 0x8c4)
                int32_t var_40_1 = **(ecx_3 + esi[5] * 0xc + 0x8c4)
                eax_9 = sub_48a9d0(&var_18, "%s and %s")
                int32_t var_8_4 = 2
                ebx_1 = 5
                int32_t var_14_3 = 5
                var_20 = 4
            else
                eax_9 = sub_48a320(&var_1c, **(data_632804 + esi[5] * 0xc + 0x8c4))
                int32_t var_8_3 = 1
                ebx_1 = 3
                int32_t var_14_2 = 3
                var_20 = nullptr
            
            char* esi_1 = *eax_9
            var_24 = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_17 = sub_48a080(&var_24)
                *(eax_17 + 4) += 1
            
            int32_t var_8_5 = 3
            
            if (var_20 != 0)
                ebx_1 &= 0xfffffffb
                int32_t var_14_4 = ebx_1
                var_8_5.b = 5
                
                if (data_aca1f4 != 0)
                    char* eax_18 = var_18
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_48a080(&var_18)
                        int32_t temp0_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
                            var_18 = &data_5b2591
            
            var_8_5.b = 6
            
            if ((ebx_1.b & 2) != 0)
                int32_t var_14_5 = ebx_1 & 0xfffffffd
                var_8_5.b = 7
                
                if (data_aca1f4 != 0)
                    char* eax_20 = var_1c
                    
                    if (eax_20 != 0 && *eax_20 != 0)
                        char* eax_21 = sub_48a080(&var_1c)
                        int32_t temp1_1 = *(eax_21 + 4)
                        *(eax_21 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_21, *(eax_21 + 0xc) + 0x10)
                            var_1c = &data_5b2591
                
                var_8_5.b = 6
            
            char const* const edx_6 = "dice"
            int32_t ecx_10 = arg4[4]
            
            if (ecx_10 s<= 1)
                edx_6 = &data_5d59fc
            
            char* eax_23 = &data_5b2591
            
            if (esi_1 != 0)
                eax_23 = esi_1
            
            char* var_3c_3 = eax_23
            char const* const var_40_2 = edx_6
            int32_t var_44_1 = ecx_10
            var_8_5.b = 8
            char* ecx_11 = &data_5b2591
            char* eax_25 = *sub_48a9d0(&var_20, " including %d virtual %s from %s")
            
            if (eax_25 != 0)
                ecx_11 = eax_25
            
            sub_48a670(arg3, ecx_11)
            var_8_5.b = 9
            
            if (data_aca1f4 != 0)
                char* eax_26 = var_20
                
                if (eax_26 != 0 && *eax_26 != 0)
                    char* eax_27 = sub_48a080(&var_20)
                    int32_t temp2_1 = *(eax_27 + 4)
                    *(eax_27 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
                        var_20 = &data_5b2591
            
            int32_t var_8_6 = 0xa
            
            if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_28 = sub_48a080(&var_24)
                int32_t temp3_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_28, *(eax_28 + 0xc) + 0x10)
                    var_24 = &data_5b2591
            
            esi = arg4
            eax_4 = 1
            var_8_6.b = 0
            var_24 = 1
    
    char* ecx_17 = esi[3]
    int32_t ebx_3 = 0
    
    if (ecx_17 s> 0)
        char* const edx_11 = &esi[2]
        var_20 = eax_4
        var_1c = edx_11
        
        do
            if (*edx_11 != 0)
                sub_489550(eax_4, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x29e, "MakeStockPowerDesc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char const* const esi_2 = "gaining 2 extra credits {credit} from a yellow die {explorer_yellow} from Alien Archaeology"
            
            if (arg5 == 0)
                esi_2 = nullptr
            
            eax_4 = ecx_17
            
            if (esi_2 != 0)
                int16_t* const var_3c_5
                
                if (var_20 == 0)
                    var_3c_5 = &data_5d59f8
                else if (var_24 + ecx_17 s< 2 || ebx_3 != &ecx_17[0xffffffff])
                    var_3c_5 = &data_5ee4a4
                else
                    var_3c_5 = " and "
                
                sub_48a670(arg3, var_3c_5)
                sub_48a670(arg3, esi_2)
                edx_11 = var_1c
                eax_4 = arg4[3]
            
            var_20 = &var_20[1]
            ebx_3 += 1
            edx_11 = &edx_11[4]
            ecx_17 = eax_4
            var_1c = edx_11
        while (ebx_3 s< eax_4)
    
    sub_48a670(arg3, ".{br}")
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
