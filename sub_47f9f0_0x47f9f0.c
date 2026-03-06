// 函数名称: sub_47f9f0
// 虚拟地址: 0x47f9f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_47f9f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e1f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = arg1
    sub_4b2440(edi, sub_47ecd0)
    void* result = data_6cfe4c
    
    if (result == 0)
        sub_489550(result, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(result + 0x834) != 0)
        int32_t* eax_3 = sub_425de0()
        int32_t ebx_1 = eax_3[0x3b]
        void* eax_4 = sub_4a8830(eax_3, &data_639b88, edi, ebx_1, 0xffffffff)
        
        if (ebx_1 - 2 u> 3)
            sub_489550(eax_4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x89af, "RollScorescreenUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        switch (ebx_1)
            case 5
                int32_t var_58_1 = 0xffffffff
                result = sub_4a8570(edi)
                int32_t ebx_2 = 0
                int32_t var_20_1 = 0
                
                if (ebx_1 s> 0)
                    void* esi_2 = &eax_3[2]
                    void* var_30_1 = &data_1514e38
                    void* var_44_1 = esi_2
                    
                    do
                        int32_t eax_5 = sub_425f70(ebx_2)
                        int32_t* eax_6 = sub_425fe0(esi_2, eax_5)
                        int32_t var_3c
                        int32_t* var_58_2 = &var_3c
                        char* result_1
                        sub_421310(eax_6, esi_2, &result_1, eax_6)
                        int32_t var_8_1 = 0
                        sub_465a40(var_3c)
                        int32_t eax_8 = sub_426ed0(var_30_1, edi, "tbl_players", ebx_2)
                        
                        if (eax_8 != 0)
                            int32_t var_58_4 = 0xffffffff
                            sub_4a8570(eax_8)
                        
                        int32_t ecx_10 = eax_5 * 0x1bc
                        int32_t eax_9 = data_632804
                        int32_t esi_4 = *(ecx_10 + eax_9 + 0x198)
                        int32_t eax_10 = *(ecx_10 + eax_9 + 0x190)
                        sub_4a8930(&result_1, &data_637b98, edi, &result_1, ebx_2)
                        int32_t var_60_2 = esi_4
                        char* const var_14
                        sub_48a9d0(&var_14, &data_5efc90)
                        var_8_1.b = 1
                        sub_4a8930(&var_14, &data_639ba4, edi, &var_14, ebx_2)
                        var_8_1.b = 2
                        
                        if (data_aca1f4 != 0)
                            char* eax_13 = var_14
                            
                            if (eax_13 != 0 && *eax_13 != 0)
                                char* eax_14 = sub_48a080(&var_14)
                                int32_t temp0_1 = *(eax_14 + 4)
                                *(eax_14 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                                    var_14 = &data_5b2591
                        
                        int32_t var_58_6 = eax_10
                        var_8_1.b = 0
                        char* const var_18
                        sub_48a9d0(&var_18, &data_5efc90)
                        var_8_1.b = 3
                        sub_4a8930(&var_18, &data_639bc0, edi, &var_18, ebx_2)
                        var_8_1.b = 4
                        
                        if (data_aca1f4 != 0)
                            char* eax_16 = var_18
                            
                            if (eax_16 != 0 && *eax_16 != 0)
                                char* eax_17 = sub_48a080(&var_18)
                                int32_t temp1_1 = *(eax_17 + 4)
                                *(eax_17 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                        
                        var_8_1.b = 0
                        void* eax_18 = data_632804
                        void* var_28_2 = eax_18
                        
                        if (*(ecx_10 + eax_18 + 0x1a4) != 0)
                            int32_t var_58_7 = ebx_2
                            sub_4a8570(edi)
                            var_28_2 = data_632804
                        
                        int32_t edi_1 = 0
                        int32_t esi_5 = 0
                        int32_t var_24_1 = 0
                        int32_t eax_20 = sub_425e70()
                        
                        if (eax_20 s> 0)
                            int32_t* ebx_4 = var_28_2 + 0x198
                            int32_t eax_22
                            
                            do
                                int32_t eax_21 = *ebx_4
                                
                                if (eax_21 == esi_5)
                                    edi_1 += 1
                                else if (eax_21 s> esi_5)
                                    edi_1 = 1
                                    esi_5 = eax_21
                                
                                var_24_1 += 1
                                ebx_4 = &ebx_4[0x6f]
                                eax_22 = sub_425e70()
                            while (var_24_1 s< eax_22)
                            ebx_2 = var_20_1
                        
                        if (eax_20 s<= 0 || edi_1 s<= 1)
                            edi = arg1
                        else
                            edi = arg1
                            
                            if (*(ecx_10 + var_28_2 + 0x198) == esi_5)
                                int32_t var_58_8 = ebx_2
                                int32_t esi_6 = *(ecx_10 + data_632804 + 0x1a0)
                                sub_4a8570(edi)
                                int32_t var_5c_4 = esi_6
                                char* var_2c
                                int32_t* eax_25 = sub_48a9d0(&var_2c, "Tiebreaker: %d")
                                var_8_1.b = 5
                                sub_4a8930(eax_25, &data_639bf8, edi, eax_25, ebx_2)
                                var_8_1.b = 6
                                
                                if (data_aca1f4 != 0)
                                    char* eax_26 = var_2c
                                    
                                    if (eax_26 != 0 && *eax_26 != 0)
                                        char* eax_27 = sub_48a080(&var_2c)
                                        int32_t temp3_1 = *(eax_27 + 4)
                                        *(eax_27 + 4) -= 1
                                        
                                        if (temp3_1 == 1)
                                            sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
                                            var_2c = &data_5b2591
                                
                                var_8_1.b = 0
                        
                        result = sub_436d30(eax_6)
                        
                        if (result.b != 0)
                            int32_t var_58_9 = ebx_2
                            result = sub_4a8570(edi)
                        
                        int32_t var_8_2 = 7
                        
                        if (data_aca1f4 != 0)
                            result = result_1
                            
                            if (result != 0 && *result != 0)
                                result = sub_48a080(&result_1)
                                int32_t temp2_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                                    result_1 = &data_5b2591
                        
                        var_30_1 += 0x24
                        ebx_2 += 1
                        esi_2 = var_44_1
                        int32_t var_8_3 = 0xffffffff
                        var_20_1 = ebx_2
                    while (ebx_2 s< ebx_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
