// 函数名称: sub_484450
// 虚拟地址: 0x484450
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_484450(int32_t arg1, int32_t arg2, char** arg3, int32_t* arg4, char arg5)
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
    int32_t* ebx = arg4
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    int32_t ecx = *ebx
    
    if (ecx == 0)
        sub_489550(&ExceptionList, &data_5b2591, "desc.numDice != 0", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x360, "MakeScoutPhaseDesc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* const eax_4 = &data_5d59fc
    
    if (ecx s> 1)
        eax_4 = "dice"
    
    void* const var_3c = eax_4
    int32_t var_40 = ecx
    int32_t var_44 = arg2
    sub_48a9d0(arg3, "{normal_log}%s scouts with %d %s {die_any}")
    int32_t var_8_2 = 0
    char* ecx_1 = nullptr
    int32_t var_14_1 = 1
    char* var_24 = nullptr
    char* const var_20
    char* const var_1c
    
    if (ebx[4] != 0)
        var_24 = nullptr
        
        if (arg5 != 0)
            int32_t eax_5 = ebx[0xd]
            
            if (eax_5 != 1 && eax_5 != 2)
                sub_489550(eax_5, &data_5b2591, 
                    "desc.numVirtualDiceSources == 1 || desc.numVirtualDiceSources == 2", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x36a, "MakeScoutPhaseDesc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char* const var_18
            char** eax_9
            int32_t ebx_1
            
            if (eax_5 == 0)
                int32_t ecx_4 = data_632804
                int32_t var_3c_2 = **(ecx_4 + ebx[6] * 0xc + 0x8c4)
                int32_t var_40_1 = **(ecx_4 + ebx[5] * 0xc + 0x8c4)
                eax_9 = sub_48a9d0(&var_18, "%s and %s")
                int32_t var_8_4 = 2
                ebx_1 = 5
                int32_t var_14_3 = 5
                var_20 = 4
            else
                eax_9 = sub_48a320(&var_1c, **(data_632804 + ebx[5] * 0xc + 0x8c4))
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
                        int32_t temp2_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp2_1 == 1)
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
                        int32_t temp3_1 = *(eax_21 + 4)
                        *(eax_21 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_4984f0(eax_21, *(eax_21 + 0xc) + 0x10)
                            var_1c = &data_5b2591
                
                var_8_5.b = 6
            
            ebx = arg4
            char const* const edx_5 = "dice"
            int32_t ecx_11 = ebx[4]
            
            if (ecx_11 s<= 1)
                edx_5 = &data_5d59fc
            
            char* eax_22 = &data_5b2591
            
            if (esi_1 != 0)
                eax_22 = esi_1
            
            char* var_3c_3 = eax_22
            char const* const var_40_2 = edx_5
            int32_t var_44_1 = ecx_11
            var_8_5.b = 8
            char* ecx_12 = &data_5b2591
            char* eax_24 = *sub_48a9d0(&var_20, " including %d virtual %s from %s")
            
            if (eax_24 != 0)
                ecx_12 = eax_24
            
            sub_48a670(arg3, ecx_12)
            var_8_5.b = 9
            
            if (data_aca1f4 != 0)
                char* eax_25 = var_20
                
                if (eax_25 != 0 && *eax_25 != 0)
                    char* eax_26 = sub_48a080(&var_20)
                    int32_t temp4_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_4984f0(eax_26, *(eax_26 + 0xc) + 0x10)
                        var_20 = &data_5b2591
            
            int32_t var_8_6 = 0xa
            
            if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_27 = sub_48a080(&var_24)
                int32_t temp5_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
                    var_24 = &data_5b2591
            
            ecx_1 = 1
            var_8_6.b = 0
            var_24 = 1
    
    int32_t eax_28 = ebx[3]
    int32_t esi_2 = 0
    
    if (eax_28 s> 0)
        char* const edx_10 = ecx_1
        void* ecx_18 = &ebx[1]
        var_20 = edx_10
        var_1c = ecx_18
        
        do
            int32_t ecx_19 = *ecx_18
            char* ebx_3
            
            if (ecx_19 == 0)
                ebx_3 = "gaining 1 credit {credit} from scouting with a yellow die {explorer_yellow} "
                "from Alien Research Team"
            label_48473f:
                
                if (edx_10 != 0)
                    char* var_3c_5
                    
                    if (&var_24[eax_28] s< 2 || esi_2 != eax_28 - 1)
                        var_3c_5 = &data_5ee4a4
                    else
                        var_3c_5 = " and "
                    
                    sub_48a670(arg3, var_3c_5)
                
                sub_48a670(arg3, ebx_3)
                edx_10 = var_20
                eax_28 = arg4[3]
            else
                if (ecx_19 != 1)
                    sub_489550(eax_28, &data_5b2591, "Halt", 
                        "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x28d, "MakeScoutPowerDesc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (arg5 != ecx_19.b - 1)
                    ebx_3 = "placing on top of the construction stack with Improved Reconnaissance"
                    goto label_48473f
            esi_2 += 1
            edx_10 = &edx_10[1]
            ecx_18 = &var_1c[4]
            var_20 = edx_10
            var_1c = ecx_18
        while (esi_2 s< eax_28)
    
    sub_48a670(arg3, ".{br}")
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
