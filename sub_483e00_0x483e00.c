// 函数名称: sub_483e00
// 虚拟地址: 0x483e00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_483e00(int32_t arg1, int32_t arg2, char** arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e451
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_30 = arg3
    int32_t var_8_1 = 0
    int32_t var_2c = 0
    int32_t eax_3 = arg4[5]
    
    if (eax_3 == 0)
        sub_489550(eax_3, &data_5b2591, "desc.numVP != 0", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x31b, "MakeConsumePhaseDesc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* const ecx = &data_5d596c
    
    if (eax_3 s> 1)
        ecx = &data_5ee5d4
    
    int32_t eax_4 = sub_483110(*arg4)
    int32_t ecx_2 = arg4[1]
    int32_t eax_5 = *(*(data_632804 + ecx_2 * 0xc + 0x8c4) + 4)
    int32_t eax_7 = sub_483020(sub_480c10(ecx_2, 1))
    char const* const esi_1
    
    switch (*arg4 - 1)
        case 0
            esi_1 = "{good_white}"
        label_483ee6:
            int32_t var_44 = arg4[4]
            char* var_14
            sub_4831b0(eax_7, arg4[3].b, &var_14, arg4[2])
            void* const var_4c = ecx
            int32_t var_8_2 = 1
            char* const ecx_7 = &data_5b2591
            int32_t var_50 = arg4[5]
            char* eax_8 = var_14
            
            if (eax_8 != 0)
                ecx_7 = eax_8
            
            char* const var_54 = ecx_7
            int32_t var_58 = eax_7
            int32_t var_5c = eax_5
            char const* const var_60 = esi_1
            int32_t var_64 = eax_4
            int32_t var_68 = arg2
            sub_48a9d0(arg3, 
                "{normal_log}%s consumes a %s good %s from %s %s with %s for %d %s {vp_blue}")
            int32_t ebx_1 = 0
            int32_t var_2c_1 = 1
            int32_t eax_9 = arg4[6]
            
            if (eax_9 s> 0)
                void* ecx_9 = &arg4[7]
                void* var_18_1 = ecx_9
                
                do
                    int32_t ecx_10 = *ecx_9
                    
                    if (ecx_10 u> 3)
                        sub_489550(eax_9, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x2c2, 
                            "MakeConsumePowerDesc")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    char* esi_2
                    
                    switch (ecx_10)
                        case 0
                            esi_2 = "1 credit {credit} from Minor Research Labs"
                        case 1
                            esi_2 = "1 VP {vp_blue} from Space Refineries"
                        case 2
                            esi_2 = "1 credit {credit} from Trade Levies"
                        case 3
                            esi_2 = "2 credits {credit} from New Economy"
                    
                    char* var_44_1
                    
                    if (eax_9 == 1)
                        var_44_1 = " and "
                    else if (eax_9 s< 2 || ebx_1 != eax_9 - 1)
                        var_44_1 = &data_5ee4a4
                    else
                        var_44_1 = " and "
                    
                    sub_48a670(arg3, var_44_1)
                    sub_48a670(arg3, esi_2)
                    ebx_1 += 1
                    ecx_9 = var_18_1 + 4
                    var_18_1 = ecx_9
                    eax_9 = arg4[6]
                while (ebx_1 s< eax_9)
            
            sub_48a670(arg3, ".{br}")
            int32_t var_8_3 = 2
            
            if (data_aca1f4 != 0)
                char* eax_12 = var_14
                
                if (eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_48a080(&var_14)
                    int32_t temp0_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3
        case 1
            esi_1 = "{good_red}"
            goto label_483ee6
        case 2
            esi_1 = "{good_blue}"
            goto label_483ee6
        case 3
            esi_1 = "{good_brown}"
            goto label_483ee6
        case 4
            esi_1 = "{good_green}"
            goto label_483ee6
        case 5
            esi_1 = "{good_yellow}"
            goto label_483ee6
        case 6
            esi_1 = "{good_purple}"
            goto label_483ee6
        case 8
            esi_1 = "{good_black}"
            goto label_483ee6
        case 9
            esi_1 = "{good_orange}"
            goto label_483ee6
    
    sub_489550(eax_7, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x1b0, 
        "GoodColorToFancyText")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
