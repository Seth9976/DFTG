// 函数名称: sub_484ed0
// 虚拟地址: 0x484ed0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_484ed0(int32_t arg1, int32_t arg2, char** arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e599
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg3
    int32_t var_18 = 0
    *arg3 = &data_5b2591
    int32_t esi = 1
    int32_t var_8_1 = 0
    int32_t var_18_1 = 1
    
    if (arg5 s> 0)
        int32_t var_30_1 = arg2
        int32_t var_8_2 = 1
        char* const var_14
        sub_48a560(arg3, sub_48a9d0(&var_14, "{normal_log}%s gains"))
        int32_t var_8_3 = 2
        
        if (data_aca1f4 != 0)
            char* eax_4 = var_14
            
            if (eax_4 != 0 && *eax_4 != 0)
                char* eax_5 = sub_48a080(&var_14)
                int32_t temp0_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
                    var_14 = &data_5b2591
        
        int32_t ebx_1 = 0
        var_8_3.b = 0
        
        if (arg5 s> 0)
            do
                int32_t eax_6 = *(arg4 + (ebx_1 << 3))
                
                if (eax_6 u> 4)
                    sub_489550(eax_6, &data_5b2591, "Halt", 
                        "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x24b, "MakeShipMiscPowerDesc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                switch (eax_6)
                    case 0
                        sub_48a2c0(&var_14, "1 VP {vp_blue} from Galactic Salon")
                    case 1
                        sub_48a2c0(&var_14, "2 credits {credit} from Free Trade Association")
                    case 2
                        sub_48a2c0(&var_14, "1 credit {credit} from Space Tourism")
                    case 3
                        sub_48a2c0(&var_14, "2 credits {credit} from Space Tourism")
                    case 4
                        int32_t ecx_8 = *(arg4 + (ebx_1 << 3) + 4)
                        char const* const eax_7 = "credit"
                        
                        if (ecx_8 != 1)
                            eax_7 = "credits"
                        
                        char const* const var_30_3 = eax_7
                        int32_t var_34_1 = ecx_8
                        sub_48a9d0(&var_14, "%d %s {credit} from Space Piracy")
                
                esi |= 2
                int32_t var_18_2 = esi
                int32_t var_8_4 = 3
                char const* const var_30_4
                
                if (arg5 == 1 || ebx_1 == 0)
                    var_30_4 = &data_5d59f8
                else if (arg5 s< 2 || ebx_1 != arg5 - 1)
                    var_30_4 = &data_5ee4a4
                else
                    var_30_4 = " and "
                
                sub_48a670(arg3, var_30_4)
                char* const eax_10 = var_14
                char* ecx_10 = &data_5b2591
                
                if (eax_10 != 0)
                    ecx_10 = eax_10
                
                sub_48a670(arg3, ecx_10)
                int32_t var_8_5 = 4
                
                if (data_aca1f4 != 0)
                    char* const eax_11 = var_14
                    
                    if (eax_11 != 0 && *eax_11 != 0)
                        char* eax_12 = sub_48a080(&var_14)
                        int32_t temp1_1 = *(eax_12 + 4)
                        *(eax_12 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
                            var_14 = &data_5b2591
                
                ebx_1 += 1
                var_8_5.b = 0
            while (ebx_1 s< arg5)
        
        sub_48a670(arg3, ".{br}")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
