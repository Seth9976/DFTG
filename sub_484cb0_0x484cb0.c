// 函数名称: sub_484cb0
// 虚拟地址: 0x484cb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_484cb0(int32_t arg1, int32_t arg2, char** arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e551
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_20 = 0
    
    if (arg4[3] == 0)
        sub_489550(&ExceptionList, &data_5b2591, "desc.numCredits != 0", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x3b8, "MakeTradePhaseDesc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx = *arg4
    int32_t ebx = *(*(data_632804 + ecx * 0xc + 0x8c4) + 4)
    int32_t eax_7 = sub_483020(sub_480c10(ecx, 1))
    char* var_14
    sub_483370(eax_7, arg4[1].b, &var_14, arg4[2])
    int32_t var_8_2 = 1
    int32_t esi_1 = arg4[3]
    char const* const edx_2 = "credit"
    char* const ecx_3 = &data_5b2591
    
    if (esi_1 s> 1)
        edx_2 = "credits"
    
    char* eax_8 = var_14
    char const* const var_38 = edx_2
    int32_t var_3c = esi_1
    
    if (eax_8 != 0)
        ecx_3 = eax_8
    
    char* const var_40 = ecx_3
    int32_t var_44 = eax_7
    int32_t var_48 = ebx
    int32_t var_4c = arg2
    sub_48a9d0(arg3, "{normal_log}%s trades a good from %s %s %sfor %d %s {credit}")
    int32_t edx_3 = 0
    int32_t var_20_1 = 1
    int32_t var_18_1 = 0
    int32_t ecx_4 = arg4[4]
    
    if (ecx_4 s> 0)
        void* esi_2 = &arg4[5]
        
        do
            int32_t eax_10 = *esi_2
            
            if (eax_10 u> 3)
                sub_489550(eax_10, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x236, "MakeTradePowerDesc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char* edi_1
            
            switch (eax_10)
                case 0
                    edi_1 = "1 credit {credit} from Export Duties"
                case 1
                    edi_1 = "2 credits {credit} from Galactic Demand"
                case 2
                    edi_1 = "1 credit {credit} from Jumpdrive Research"
                case 3
                    edi_1 = "spending 1 credit for 1 VP {vp_blue} from Galactic Bankers"
            
            char const* const var_34_1
            
            if (ecx_4 == 1)
                var_34_1 = " and "
            else if (ecx_4 s< 2 || edx_3 != ecx_4 - 1)
                var_34_1 = &data_5ee4a4
            else
                var_34_1 = " and "
            
            sub_48a670(arg3, var_34_1)
            sub_48a670(arg3, edi_1)
            esi_2 += 4
            edx_3 = var_18_1 + 1
            var_18_1 = edx_3
            ecx_4 = arg4[4]
        while (edx_3 s< ecx_4)
    
    sub_48a670(arg3, ".{br}")
    int32_t var_8_3 = 2
    
    if (data_aca1f4 != 0)
        char* eax_13 = var_14
        
        if (eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
