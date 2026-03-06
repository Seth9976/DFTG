// 函数名称: sub_46a220
// 虚拟地址: 0x46a220
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46a220(void* arg1)
{
    // 第一条实际指令: void* ecx = data_6cfe4c
    void* ecx = data_6cfe4c
    char const* const var_40
    int32_t var_3c
    char const* const var_38_1
    void* result
    char* ecx_1
    
    if (ecx != 0)
        void* eax = sub_452b90(*(ecx + 0xa68))
        
        if (arg1 - 3 u> 0x1b)
        label_46a334:
            result.b = 0
            return result
        
        int32_t edx_1
        bool cond:0_1
        
        switch (arg1 + &jump_table_46a3e0[8]:1)
            case &lookup_table_46a404, &lookup_table_46a404[1], &lookup_table_46a404[3], 
                    &lookup_table_46a404[4], &lookup_table_46a404[0xd], &lookup_table_46a404[0xe], 
                    &lookup_table_46a404[0xf], &lookup_table_46a404[0x11], &lookup_table_46a404[0x12], 
                    &lookup_table_46a404[0x16], &lookup_table_46a404[0x17], &lookup_table_46a404[0x18], 
                    &lookup_table_46a404[0x19], &lookup_table_46a404[0x1b]
                result.b = 1
                return result
            case &lookup_table_46a404[2], &lookup_table_46a404[0xa], &lookup_table_46a404[0xc], 
                    &lookup_table_46a404[0x10], &lookup_table_46a404[0x13], &lookup_table_46a404[0x14], 
                    &lookup_table_46a404[0x15]
                goto label_46a334
            case &lookup_table_46a404[5]
                edx_1 = 7
            label_46a3a1:
                cond:0_1 = sub_452ea0(eax, edx_1) != 0
            label_46a3a3:
                
                if (cond:0_1)
                    goto label_46a334
                
                result.b = 1
                return result
            case &lookup_table_46a404[6]
                if (sub_452ea0(eax, 7) != 0)
                    goto label_46a334
                
                int64_t var_10
                sub_4580c0(&var_10, eax)
                int64_t xmm0_1 = var_10
                int32_t var_8
                int32_t edi_1 = var_8
                void* result_1
                sub_458110(&result_1)
                result = result_1
                
                if (var_10.d == result)
                    result.b = 1
                    return result
                
                int32_t ebx_1 = xmm0_1:4.d
                void* result_2 = xmm0_1.d
                
                while (true)
                    if (result_2 == 0)
                        var_38_1 = "DiceAssigning::DiceIt::operator *"
                        var_3c = 0x17e8
                        var_40 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                        ecx_1 = &data_5e3f90
                        break
                    
                    result = sub_457400(result_2 + 8) + 8
                    
                    if (*(result_2 + 0x10) != result)
                        goto label_46a334
                    
                    int32_t ecx_9
                    
                    if (edi_1 != 0)
                        ecx_9 = edi_1
                    label_46a30e:
                        result = sub_452c30(ecx_9)
                        result_2 = result
                        edi_1 = *(result_2 + 0x28)
                        ebx_1 = *(result_2 + 0x10)
                    else
                        result = sub_452b90(*(result_2 + 0x18))
                        int32_t ecx_8 = ebx_1 + 1
                        
                        if (ecx_8 s<= 0xd)
                            result = result + (ecx_8 << 2) + 0x2b4
                            
                            while (true)
                                int32_t edx_2 = *result
                                
                                if (edx_2 != 0)
                                    ecx_9 = edx_2
                                    break
                                
                                ecx_8 += 1
                                result += 4
                                
                                if (ecx_8 s> 0xd)
                                    goto label_46a304
                            
                            goto label_46a30e
                        
                    label_46a304:
                        result_2 = nullptr
                    
                    if (result_2 == result_1)
                        result.b = 1
                        return result
            case &lookup_table_46a404[7]
                if (sub_45e8f0(eax) == 0)
                    goto label_46a334
                
                result.b = 1
                return result
            case &lookup_table_46a404[8]
                int32_t* esi_2 = sub_45e8f0(eax)
                
                if (esi_2 != 0)
                    result = sub_457400(esi_2) + 8
                    
                    if (esi_2[2] != result)
                        result.b = 1
                        return result
                
                goto label_46a334
            case &lookup_table_46a404[9]
                result = sub_45e8f0(eax)
                
                if (result == 0)
                    goto label_46a334
                
                cond:0_1 = *(result + 8) != 0xb
                goto label_46a3a3
            case &lookup_table_46a404[0xb]
                if (sub_45e8c0(eax) == 0)
                    goto label_46a334
                
                result.b = 1
                return result
            case &lookup_table_46a404[0x1a]
                *(eax + 0x300)
                
                if (*(eax + 0x308) == neg.d(*(eax + 0x300)))
                    result.b = 1
                    return result
                
                edx_1 = 3
                goto label_46a3a1
    else
        var_38_1 = "GetClient"
        var_3c = 0x75
        var_40 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_489550(result, &data_5b2591, ecx_1, var_40, var_3c, var_38_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
