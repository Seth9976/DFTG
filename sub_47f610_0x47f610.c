// 函数名称: sub_47f610
// 虚拟地址: 0x47f610
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_47f610()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* result = sub_425de0()
    void* edx = data_6cfe4c
    int32_t* result_3 = result
    int32_t* result_1 = result_3
    char const* const var_38
    int32_t var_34
    char const* const var_30_3
    char* ecx_21
    
    if (edx == 0)
    label_47f8d0:
        var_30_3 = "GetClient"
        var_34 = 0x75
        ecx_21 = "gClient"
        var_38 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
    else
        if (*(edx + 0x834) != 1 || result_3[0x41] == 2)
            goto label_47f7ab
        
        result_3[0x41] = 2
        sub_438a30(result_3, *(sub_41c5b0() + 0x838))
        void* ecx_2 = result_3[0x3b]
        result = ecx_2 - 2
        
        if (result u> 3)
            var_30_3 = "GameOverProcessing"
            var_34 = 0x8940
            var_38 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx_21 = "Halt"
        else
            int32_t esi
            
            switch (result)
                case nullptr
                    esi = 0
                case 1
                    esi = 1
                case 2
                    esi = 2
                case 3
                    esi = 3
            
            int32_t var_1c_1 = 0
            
            if (ecx_2 s<= 0)
            label_47f7a2:
                edx = data_6cfe4c
                result_3 = result_1
            label_47f7ab:
                
                if (edx == 0)
                    goto label_47f8d0
                
                int32_t ebx_3
                
                if (*(edx + 0x834) == 2 && result_3[0x41] != 2)
                    ebx_3 = 0
                    result_3[0x41] = 2
                
                if (*(edx + 0x834) != 2 || result_3[0x41] == 2 || result_3[0x3b] s<= 0)
                label_47f89b:
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return result
                
                void* edi_1 = &result_3[0xb]
                
                while (true)
                    int32_t eax_8 = *(edi_1 - 8)
                    result = eax_8 - 1
                    
                    if (eax_8 == 1)
                        result = data_632804
                        
                        if (result[*edi_1 * 0x6f + 0x69] != 0)
                            int32_t var_14 = *result_3
                            result = *(edi_1 - 4)
                            int32_t var_c_1 = 0xffffffff
                            int32_t* result_2 = result
                            
                            if (edx == 0)
                                break
                            
                            result = *(edx + 0x14)
                            int32_t ecx_16 = data_aca0dc
                            
                            if (result != 0)
                                uint32_t esi_1 = zx.d(result.w)
                                result_3 = result_1
                                
                                if (esi_1 u< *(ecx_16 + 4))
                                    void* esi_3 = esi_1 * 0x4c + *ecx_16
                                    
                                    if (*(esi_3 + 0x48) == result)
                                        int32_t var_30_1 = 0xf42b3
                                        sub_48be40(result, 0xc, esi_3 + 0x3c)
                                        result = sub_48bc20(&var_14, 0xc, esi_3 + 0x3c, &var_14)
                                        edx = data_6cfe4c
                                    
                                    result_3 = result_1
                    
                    ebx_3 += 1
                    edi_1 += 0x2c
                    
                    if (ebx_3 s>= result_3[0x3b])
                        goto label_47f89b
                
                goto label_47f8d0
            
            result = result_1
            void* ebx_2 = &result_1[0xb]
            int32_t ecx_3 = 0
            
            while (true)
                if (*(ebx_2 - 8) == 0x3e8)
                    int32_t i = *(ebx_2 - 4)
                    int32_t eax_4 = *(*ebx_2 * 0x1bc + data_632804 + 0x1a4)
                    int32_t ecx_5 = 0
                    void* eax_5 = data_6d00d8
                    int32_t edx_2 = *(eax_5 + 0xbe0)
                    
                    if (edx_2 s> 0)
                        while (*(eax_5 + 0x240) != i)
                            ecx_5 += 1
                            eax_5 += 0x2f8
                            
                            if (ecx_5 s>= edx_2)
                                goto label_47f789
                        
                        if (eax_5 != 0)
                            result = sub_437f10(i) + 0x268
                            int32_t ecx_7
                            ecx_7.b = eax_4 == 0
                            
                            if (ecx_7 == 0)
                                result[esi + 0x18] += 1
                                result[esi + 0xc] += 1
                            else if (ecx_7 == 1)
                                result[esi + 0x1c] += 1
                                result[esi + 0x10] += 1
                            else
                                if (ecx_7 != 2)
                                    var_30_3 = "StatsSubmitLocal"
                                    var_34 = 0x83c
                                    var_38 =
                                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
                                    ecx_21 = "Halt"
                                    break
                                
                                result[esi + 0x20] += 1
                                result[esi + 0x14] += 1
                            
                            sub_437ba0(data_6d00d8)
                            
                            if (*(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x240) == i)
                                sub_422d20(esi)
                    
                label_47f789:
                    result = result_1
                    ecx_3 = var_1c_1
                
                ecx_3 += 1
                ebx_2 += 0x2c
                var_1c_1 = ecx_3
                
                if (ecx_3 s>= result[0x3b])
                    goto label_47f7a2
    
    sub_489550(result, &data_5b2591, ecx_21, var_38, var_34, var_30_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
