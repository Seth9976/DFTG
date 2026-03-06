// 函数名称: sub_426240
// 虚拟地址: 0x426240
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_426240(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = data_6cfe4c
    
    if (result == 0)
        sub_489550(result, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(result + 0x834) == 2)
        int32_t eax_3 = *(result + 0xa68)
        result = sub_425de0()
        void* ecx = data_6cfe4c
        int32_t result_1 = result
        
        if (ecx == 0)
            sub_489550(result, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (*(ecx + 0x834) == 2)
            int32_t* var_20 = result + 8
            int32_t edi_1 = 0
            void* ecx_2 = sub_425fe0(result + 8, arg2)
            void* var_1c = ecx_2
            
            if (*(ecx_2 + 0x20) == 4)
                int32_t eax_7
                int32_t edx_1
                edx_1:eax_7 = muls.dp.d(0x10624dd3, sub_498220(var_20))
                ecx_2 = var_1c
                int32_t edx_2 = edx_1 s>> 6
                edi_1 = *(ecx_2 + 0x24) + (edx_2 u>> 0x1f) + edx_2
            
            result = *(result_1 + 0x100)
            
            if (result u> 4)
                sub_489550(result, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x39b, 
                    "TimeControlGetGameTimeSec")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t esi_1
            
            switch (result)
                case 0
                    esi_1 = 0x708
                label_426332:
                    int32_t esi_3 = esi_1 - *(ecx_2 + 0x28) - edi_1
                    int32_t var_40_1 = 0xffffffff
                    sub_4a8570(arg1)
                    int32_t edi_3 = 0
                    
                    if (esi_3 s> 0)
                        edi_3 = esi_3
                    
                    if (edi_3 == 0 && sub_425de0()[0x41] != 0x3e8)
                        char* const var_18
                        int32_t* ecx_17
                        
                        if (arg2 == eax_3)
                            *(result_1 + 0x104) = 0x3e8
                            sub_48a2c0(&var_18, &data_5b2591)
                            int32_t var_8_3 = 8
                            sub_48a2c0(&var_1c, &data_5b2591)
                            var_8_3.b = 9
                            sub_48a2c0(&var_20, "Your time has expired.")
                            var_8_3.b = 0xa
                            int32_t var_40_3 = sub_48a2c0(&result_1, "TIME EXPIRED")
                            var_8_3.b = 0xb
                            sub_436200(&var_1c, &var_20, &result_1, 0x1c, &var_1c, &var_18, sub_426740)
                            var_8_3.b = 0xc
                            
                            if (data_aca1f4 != 0)
                                int32_t result_4 = result_1
                                
                                if (result_4 != 0 && *result_4 != 0)
                                    char* eax_25 = sub_48a080(&result_1)
                                    int32_t temp1_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp1_1 == 1)
                                        sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_3.b = 0xd
                            
                            if (data_aca1f4 != 0)
                                int32_t* eax_26 = var_20
                                
                                if (eax_26 != 0 && *eax_26 != 0)
                                    char* eax_27 = sub_48a080(&var_20)
                                    int32_t temp3_1 = *(eax_27 + 4)
                                    *(eax_27 + 4) -= 1
                                    
                                    if (temp3_1 == 1)
                                        sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
                            
                            var_8_3.b = 0xe
                            
                            if (data_aca1f4 != 0)
                                void* eax_28 = var_1c
                                
                                if (eax_28 != 0 && *eax_28 != 0)
                                    char* eax_29 = sub_48a080(&var_1c)
                                    int32_t temp5_1 = *(eax_29 + 4)
                                    *(eax_29 + 4) -= 1
                                    
                                    if (temp5_1 == 1)
                                        sub_4984f0(eax_29, *(eax_29 + 0xc) + 0x10)
                            
                            int32_t var_8_4 = 0xf
                            
                            if (data_aca1f4 != 0)
                                char* const eax_30 = var_18
                                
                                if (eax_30 != 0 && *eax_30 != 0)
                                    ecx_17 = &var_18
                                label_4265f6:
                                    char* eax_31 = sub_48a080(ecx_17)
                                    int32_t temp7_1 = *(eax_31 + 4)
                                    *(eax_31 + 4) -= 1
                                    
                                    if (temp7_1 == 1)
                                        sub_4984f0(eax_31, *(eax_31 + 0xc) + 0x10)
                        else
                            int32_t* ecx_6 = var_20
                            *(result_1 + 0x104) = 0x3e8
                            void* eax_15 = sub_425fe0(ecx_6, arg2)
                            sub_48a2c0(&result_1, &data_5b2591)
                            int32_t var_8_1 = edi_3
                            sub_48a2c0(&var_20, &data_5b2591)
                            var_8_1.b = 1
                            sub_48a2c0(&var_1c, "TIME EXPIRED")
                            void* var_40_2 = eax_15
                            var_8_1.b = 2
                            char** eax_16 = sub_48a9d0(&var_18, "%s time has expired.")
                            var_8_1.b = 3
                            sub_436200(eax_16, eax_16, &var_1c, 0x1c, &var_20, &result_1, sub_4248c0)
                            var_8_1.b = 4
                            
                            if (data_aca1f4 != edi_3)
                                char* eax_17 = var_18
                                
                                if (eax_17 != 0 && *eax_17 != 0)
                                    char* eax_18 = sub_48a080(&var_18)
                                    int32_t temp2_1 = *(eax_18 + 4)
                                    *(eax_18 + 4) -= 1
                                    
                                    if (temp2_1 == 1)
                                        sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                                        var_18 = &data_5b2591
                            
                            var_8_1.b = 5
                            
                            if (data_aca1f4 != 0)
                                void* eax_19 = var_1c
                                
                                if (eax_19 != 0 && *eax_19 != 0)
                                    char* eax_20 = sub_48a080(&var_1c)
                                    int32_t temp4_1 = *(eax_20 + 4)
                                    *(eax_20 + 4) -= 1
                                    
                                    if (temp4_1 == 1)
                                        sub_4984f0(eax_20, *(eax_20 + 0xc) + 0x10)
                            
                            var_8_1.b = 6
                            
                            if (data_aca1f4 != 0)
                                int32_t* eax_21 = var_20
                                
                                if (eax_21 != 0 && *eax_21 != 0)
                                    char* eax_22 = sub_48a080(&var_20)
                                    int32_t temp6_1 = *(eax_22 + 4)
                                    *(eax_22 + 4) -= 1
                                    
                                    if (temp6_1 == 1)
                                        sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                            
                            int32_t var_8_2 = 7
                            
                            if (data_aca1f4 != 0)
                                int32_t result_3 = result_1
                                
                                if (result_3 != 0 && *result_3 != 0)
                                    ecx_17 = &result_1
                                    goto label_4265f6
                        int32_t var_8_5 = 0xffffffff
                    
                    int32_t result_2
                    sub_428b20(&result_2, edi_3)
                    void** edx_24 = &data_62b170
                    int32_t var_8_6 = 0x10
                    
                    if (arg2 == eax_3)
                        edx_24 = &data_62b138
                    
                    result = sub_4a8930(&result_2, edx_24, arg1, &result_2, 0xffffffff)
                    int32_t var_8_7 = 0x11
                    
                    if (data_aca1f4 != 0)
                        result = result_2
                        
                        if (result != 0 && *result != 0)
                            result = sub_48a080(&result_2)
                            int32_t temp0_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp0_1 == 1)
                                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                case 1
                    esi_1 = 0x93a80
                    goto label_426332
                case 2
                    esi_1 = 0x24ea00
                    goto label_426332
                case 4
                    esi_1 = 0x3f480
                    goto label_426332
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
