// 函数名称: sub_45c330
// 虚拟地址: 0x45c330
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t*sub_45c330()
{
    // 第一条实际指令: int64_t* result = data_6cfe4c
    int64_t* result = data_6cfe4c
    char const* const var_20
    int32_t var_1c
    char const* const var_18_1
    char* ecx_1
    
    if (result != 0)
        int32_t esi_1 = result[0x14d].d
        
        if (esi_1 == 0xffffffff)
        label_45c458:
            result.b = 1
            return result
        
        int32_t edx_1 = 1
        void* ecx_3 = sub_452b90(esi_1) + 0x28
        
        while (true)
            result = *(ecx_3 + 4)
            
            if (result u> 4)
                var_18_1 = "IsAnyTrayAnimating"
                var_1c = 0x2920
                ecx_1 = "Halt"
            label_45c486:
                var_20 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                break
            
            bool cond:0_1
            
            switch (result)
                case nullptr
                label_45c3a1:
                    edx_1 += 1
                    ecx_3 += 0xc
                    
                    if (edx_1 s< 0xd)
                        continue
                    else
                        int32_t ecx_5 = *(sub_452b90(esi_1) + 0x2d0)
                        int64_t* result_1
                        int32_t* result_2
                        int64_t* result_3
                        
                        if (ecx_5 == 0)
                            result_3 = result_1
                            result_2 = nullptr
                        else
                            result_2 = sub_452c30(ecx_5)
                            result_3 = result_2[0xa]
                        
                        int32_t* var_c
                        result = sub_4538b0(&var_c)
                        int32_t* esi_2 = var_c
                        
                        while (result_2 != esi_2)
                            if (result_2 == 0)
                                var_18_1 = "Dice::DiceIt::operator *"
                                var_1c = 0x5da
                                ecx_1 = &data_5e3f90
                                goto label_45c486
                            
                            if (result_2[0x1aa] s> 0 && result_2[0xdf] == 3)
                                goto label_45c470
                            
                            if (result_3 != 0)
                                result = sub_452c30(result_3)
                                result_2 = result
                                result_3 = result_2[0xa]
                            else
                                result_2 = nullptr
                        
                        var_c = &data_62d6c4
                        result_1 = nullptr
                        sub_481430(&data_62d6c4, &result_1)
                        result = result_1
                        
                        if (result == 0xffffffff)
                            goto label_45c458
                        
                        while (result[0xd5].d == 0 || *(result + 0x37c) == 1)
                            sub_481430(var_c, &result_1)
                            result = result_1
                            
                            if (result == 0xffffffff)
                                goto label_45c458
                case 1
                    result = *ecx_3
                    
                    if (result == 1)
                        goto label_45c3a1
                    
                    cond:0_1 = result != 7
                    goto label_45c39b
                case 2
                    cond:0_1 = *ecx_3 != 3
                label_45c39b:
                    
                    if (not(cond:0_1))
                        goto label_45c3a1
                case 3, 4
                    cond:0_1 = *ecx_3 != 9
                    goto label_45c39b
            
        label_45c470:
            result.b = 0
            return result
    else
        var_18_1 = "GetClient"
        var_1c = 0x75
        var_20 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_489550(result, &data_5b2591, ecx_1, var_20, var_1c, var_18_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
