// 函数名称: sub_45ad50
// 虚拟地址: 0x45ad50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_45ad50(int32_t arg1, void** arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void** esi = arg2
    void* result = sub_452b90(arg1)
    int32_t arg_4
    int32_t ecx = arg_4
    void* result_2 = result
    
    if (ecx s> 0)
        while (true)
            char const* const var_694_5
            int32_t var_690_5
            char const* const var_68c_7
            char* ecx_17
            
            if (ecx s<= 0)
                var_68c_7 = "ParseMove"
                var_690_5 = 0x236f
                ecx_17 = "size > 0"
            label_45b044:
                var_694_5 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            label_45b04e:
                sub_489550(result, &data_5b2591, ecx_17, var_694_5, var_690_5, var_68c_7)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* result_1
            
            if (ecx u>= 4)
                result = *esi
                arg_4 = ecx - 4
                result_1 = result
            
            if (ecx u< 4 || ecx - 4 u< 4)
                var_68c_7 = "ParseInt"
                var_690_5 = 0x2354
                ecx_17 = "size >= sizeof(int)"
                goto label_45b044
            
            int32_t ecx_1 = esi[1]
            void* var_344 = &esi[2]
            arg_4 = ecx - 8
            int32_t var_670
            int32_t eax_5 = sub_45aca0(&var_670, &arg_4, &var_344, &var_670)
            char var_4dc[0x190]
            int32_t eax_7
            int32_t edx_3
            eax_7, edx_3 = sub_45aca0(&var_4dc, &arg_4, &var_344, &var_4dc)
            int32_t var_34c_1 = eax_7
            result = result_1
            void var_340
            __builtin_memcpy(&var_340, &result_1, 0x330)
            
            if (result u> 4)
                var_68c_7 = "ProcessPartialMove"
                var_690_5 = 0x23dc
                ecx_17 = "Halt"
                goto label_45b044
            
            switch (result)
                case nullptr
                    result = sub_4570b0(var_670)
                    int32_t* result_4 = result
                    int32_t* result_3
                    
                    if (result_4 != 0)
                        int32_t var_66c
                        result = sub_4570b0(var_66c)
                        result_3 = result
                    
                    if (result_4 == 0 || result_3 == 0)
                        var_68c_7 = "LookupTile"
                        var_690_5 = 0x1138
                        ecx_17 = "tile"
                        goto label_45b044
                    
                    if (result_3[0xe] == 0)
                        goto label_45ae87
                    
                    if (data_6cfe4c != 0)
                        result = sub_46a420(6)
                        result_3[0xe] = 0
                        result_3[0x223] = 0
                    label_45ae87:
                        int32_t var_6a0_1
                        __builtin_memcpy(&var_6a0_1, 
                            "\x04\x00\x00\x00\x01\x00\x00\x00\x05\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x"
                        "00\x01", 
                            0x15)
                        int32_t var_69c_1
                        int32_t var_698_1
                        int32_t var_694_1
                        int32_t var_690_1
                        char var_68c_3
                        result = sub_4554e0(result, result_4, result_2, var_6a0_1, var_69c_1, 
                            var_698_1, var_694_1, var_690_1, var_68c_3)
                        
                        if (result_3[0xe] == 1)
                            goto label_45aecd
                        
                        if (data_6cfe4c != 0)
                            result = sub_46a420(6)
                            result_3[0xe] = 1
                            result_3[0x223] = 0x3f800000
                        label_45aecd:
                            int32_t var_6a0_2
                            __builtin_memcpy(&var_6a0_2, 
                                "\x05\x00\x00\x00\x01\x00\x00\x00\x05\x00\x00\x00\x01\x00\x00\x00\x01\x00\x"
                            "00\x00\x01", 
                                0x15)
                            int32_t var_69c_2
                            int32_t var_698_2
                            int32_t var_694_2
                            int32_t var_690_2
                            char var_68c_4
                            result = sub_4554e0(result, result_3, result_2, var_6a0_2, var_69c_2, 
                                var_698_2, var_694_2, var_690_2, var_68c_4)
                            *(result_2 + 0x10) = 0xc
                            goto label_45afb4
                    
                    var_68c_7 = "GetClient"
                    var_690_5 = 0x75
                    var_694_5 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                    ecx_17 = "gClient"
                    goto label_45b04e
                case 1, 4
                    int32_t esi_1 = 0
                    
                    if (eax_5 s<= 0)
                        goto label_45afbb
                    
                    while (true)
                        int32_t var_338[0x65]
                        result = sub_457200(*result_2, var_338[esi_1])
                        int32_t var_1a4[0x66]
                        int32_t edx_7 = var_1a4[esi_1]
                        int32_t edx_8
                        
                        if (edx_7 == 0xffffffff)
                            edx_8 = 8
                        else
                            if (edx_7 - 1 u> 4)
                                break
                            
                            edx_8 = edx_7 + 8
                        
                        result = sub_45a830(result, result, result_2, edx_8, false, 0, 5, 1, 1)
                        esi_1 += 1
                        
                        if (esi_1 s>= eax_5)
                            goto label_45afbb
                case 2
                    edx_3.b = 1
                    sub_45fa50(result_2, edx_3)
                    result = sub_457200(*result_2, var_670)
                    int32_t edx_12
                    
                    if (ecx_1 == 0xffffffff)
                        edx_12 = 8
                    label_45af94:
                        result = sub_45a830(result, result, result_2, edx_12, true, 0, 5, 1, 1)
                        data_632590 = 4
                        data_632594 = 0xffffffff
                        *(result_2 + 0x10) = 0x5b
                    label_45afb4:
                        *(result_2 + 0x14) = 1
                    label_45afbb:
                        ecx = arg_4
                        
                        if (ecx s<= 0)
                            break
                        
                        esi = var_344
                        continue
                    else if (ecx_1 - 1 u<= 4)
                        edx_12 = ecx_1 + 8
                        goto label_45af94
                case 3
                    goto label_45afbb
            
            var_68c_7 = "RollMoveDieLocChoiceToWhere"
            var_690_5 = 0x2388
            ecx_17 = "Halt"
            goto label_45b044
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
