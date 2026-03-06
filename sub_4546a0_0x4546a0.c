// 函数名称: sub_4546a0
// 虚拟地址: 0x4546a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4546a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t* i_3 = nullptr
    int32_t result_1 = 0
    float var_14 = 0f
    int64_t var_24 = 0
    
    if (data_62b224 == 0 && data_62b24c == 0)
        void* eax_1 = sub_41c5b0()
        
        if (*(eax_1 + 0x834) != 0)
            char const* const var_88
            int32_t var_84_1
            char const* const var_80_7
            char* ecx_1
            
            if (data_632564 == 0)
            label_454752:
                int32_t* var_1c_1 = &data_62d6c4
                int32_t* i_2 = nullptr
                sub_481430(&data_62d6c4, &i_2)
                
                for (int32_t* i = i_2; i != 0xffffffff; i = i_2)
                    int32_t ecx_6 = data_632564
                    
                    if (i[0x22a] != ecx_6)
                        int32_t edx_3 = *i
                        
                        if (edx_3 != 3 && (i_3 == 0 || edx_3 s>= *i_3))
                            int32_t* eax_7
                            
                            if (ecx_6 != 0)
                                uint32_t eax_8 = zx.d(ecx_6.w)
                                
                                if (eax_8 u< data_62d6c8)
                                    eax_7 = eax_8 * 0x8ac + data_62d6c4
                                    
                                    if (eax_7[0x22a] != ecx_6)
                                        eax_7 = nullptr
                                else
                                    eax_7 = nullptr
                            else
                                eax_7 = nullptr
                            
                            int128_t var_3c
                            int32_t var_2c
                            
                            if (edx_3 != 0)
                            label_45494a:
                                
                                if (*i != 1 || data_632564 != 0)
                                label_45499c:
                                    
                                    if (*i == 2 && sub_453610(i) != 0 && data_632564 == 0)
                                        void* eax_25 = sub_4541a0()
                                        
                                        if (eax_25.b == 0)
                                            int32_t edx_13 = i[1]
                                            
                                            if (edx_13 != 0)
                                                sub_49f910(eax_25, edx_13, &var_3c, arg1)
                                                
                                                if (var_2c != 0)
                                                    result = i[0x22a]
                                                    i_3 = i
                                                    result_1 = result
                                else
                                    if (sub_46b360(i) == 0)
                                        goto label_45499c
                                    
                                    if (sub_4541a0() == 0)
                                        void* eax_23 = sub_454600(i)
                                        int32_t edx_12 = *eax_23
                                        
                                        if (edx_12 != 0)
                                            sub_49f910(eax_23, edx_12, &var_3c, arg1)
                                            
                                            if (var_2c != 0)
                                                result = i[0x22a]
                                                i_3 = i
                                                result_1 = result
                                            
                                            goto label_45499c
                            else
                                if (eax_7 == 0)
                                    if (data_6326b0 != 0)
                                        goto label_45494a
                                    
                                    goto label_4547f3
                                
                                if (*eax_7 == edx_3 || data_6326b0 != 0)
                                    goto label_45494a
                                
                            label_4547f3:
                                
                                if (sub_46be80(i) == 0 && sub_454100(i) == 0)
                                    eax_1 = data_6cfe4c
                                    
                                    if (eax_1 == 0)
                                        goto label_4546fb
                                    
                                    int32_t ecx_9 = i[0xf]
                                    int32_t eax_12
                                    
                                    if (ecx_9 == *(eax_1 + 0xa68))
                                        eax_12 = i[0xd]
                                        
                                        if (eax_12 != 4 && eax_12 != 5)
                                        label_454862:
                                            int32_t edx_4 = i[1]
                                            
                                            if (edx_4 != 0)
                                                sub_49f910(eax_12, edx_4, &var_3c, arg1)
                                                
                                                if (var_2c == 0)
                                                    result = result_1
                                                else
                                                    void* eax_14
                                                    
                                                    if (sub_4543d0(i) != 6)
                                                        int32_t var_80_3 = i[1]
                                                        void var_6c
                                                        void var_5c
                                                        
                                                        if (*i[0xc] != 0)
                                                            eax_14 = &var_6c
                                                        else
                                                            eax_14 = &var_5c
                                                    else
                                                        int32_t* i_1 = i
                                                        i[1]
                                                        void var_4c
                                                        eax_14 = &var_4c
                                                    
                                                    var_3c = *sub_4bacb0(eax_14)
                                                    float xmm0_3 = *arg1 f- var_3c.d
                                                    float var_c_1 = xmm0_3
                                                    
                                                    if (not(0f <= xmm0_3))
                                                        var_c_1 = 10000f
                                                    
                                                    if (i_3 == 0)
                                                    label_454935:
                                                        i_3 = i
                                                        result = i[0x22a]
                                                        result_1 = result
                                                        var_14 = var_c_1
                                                    else
                                                        if (sub_46c270(i, 1) s> sub_46c270(i_3, 1))
                                                            goto label_454935
                                                        
                                                        if (var_14 <= var_c_1)
                                                            result = result_1
                                                        else
                                                            if (sub_46c270(i, 1) == sub_46c270(i_3, 1))
                                                                goto label_454935
                                                            
                                                            result = result_1
                                                
                                                goto label_45494a
                                        else if (data_632564 == 0)
                                            eax_12 = sub_46bc10(i)
                                            
                                            if (eax_12.b != 0)
                                                goto label_454862
                                    else
                                        eax_12 = sub_425f20(ecx_9)
                                        
                                        if (data_6327d4 == eax_12)
                                            goto label_454862
                    
                    sub_481430(var_1c_1, &i_2)
                
                if (i_3 == 0)
                    return result
                
                int32_t eax_26 = *i_3
                
                if (eax_26 == 0)
                    sub_46c270(i_3, 0)
                    return result
                
                if (eax_26 == 1)
                    sub_46c0a0(i_3)
                    return result
                
                eax_1 = eax_26 - 2
                
                if (eax_26 == 2)
                    return result
                
                var_80_7 = "RollGetLayer"
                var_84_1 = 0x989
                var_88 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                ecx_1 = "Halt"
            else
                void* ecx = data_6cfe4c
                
                if (ecx != 0)
                    void* eax_2 = sub_452b90(*(ecx + 0xa68))
                    
                    if (sub_453650(eax_2) == 0x1d)
                        return 0
                    
                    if (sub_453650(eax_2) == 9)
                        return 0
                    
                    if (sub_453650(eax_2) == 0x17)
                        return 0
                    
                    result = 0
                    goto label_454752
                
            label_4546fb:
                var_80_7 = "GetClient"
                var_84_1 = 0x75
                var_88 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_1 = "gClient"
            
            sub_489550(eax_1, &data_5b2591, ecx_1, var_88, var_84_1, var_80_7)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    return var_24.d
}
