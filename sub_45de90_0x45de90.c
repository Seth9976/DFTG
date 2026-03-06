// 函数名称: sub_45de90
// 虚拟地址: 0x45de90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_45de90()
{
    // 第一条实际指令: void* var_44
    void* var_44
    int32_t eax_1 = __security_cookie ^ &var_44
    int32_t* eax_2 = data_6cfe4c
    char const* const var_5c_2
    int32_t var_58_2
    char const* const var_54_2
    char* ecx_11
    
    if (eax_2 == 0)
    label_45e0fa:
        var_54_2 = "GetClient"
        var_58_2 = 0x75
        var_5c_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_11 = "gClient"
    else
        int32_t ecx_1 = eax_2[0x29a]
        
        if (ecx_1 == 0xffffffff)
        label_45deeb:
            int32_t esi_1 = 0
            
            if (sub_425e70() s<= 0)
                goto label_45dfef
            
            int32_t edi_1 = 0
            
            while (true)
                int32_t* eax_5 = sub_425de0()
                
                if (*((esi_1 << 3) + &data_a9fb80) == *eax_5)
                    int32_t eax_6 = *((esi_1 << 3) + &data_a9fb84)
                    
                    if (eax_6 != 0)
                        if (eax_6 == 1)
                            eax_2 = sub_452b90(esi_1)
                            int32_t* ecx_13 = data_6cfe4c
                            
                            if (ecx_13 != 0)
                                data_6327f0 = *ecx_13
                                data_6327f4 = ecx_13[1]
                                data_6327e8 = 1
                                
                                if (data_632a64 != esi_1)
                                    int32_t eax_30 = data_632810
                                    
                                    if (eax_30 == 0 || eax_30 == 2)
                                        data_632a64 = 0xffffffff
                                        sub_421710(esi_1)
                                    else
                                        data_632a64 = esi_1
                                
                                sub_45c530(eax_2, esi_1 * 0x33c + 0xa9fba8)
                                eax_2 = data_6cfe4c
                                *((esi_1 << 3) + &data_a9fb84) = 0
                                
                                if (eax_2 != 0)
                                    if (eax_2[0x20d] == 2)
                                        if (*(sub_41c5b0() + 0x844) != 0)
                                            int32_t var_3c[0x5]
                                            sub_4c5670(data_126be50, &var_3c)
                                            char var_25_1 = 1
                                            sub_4c5920(&var_3c)
                                        
                                        eax_2 = data_6cfe4c
                                    
                                    if (eax_2 != 0)
                                        eax_2[0x211].b = 0
                                        eax_2.b = 1
                                        @__security_check_cookie@4(eax_1 ^ &var_44)
                                        return eax_2
                            
                            goto label_45e0fa
                        
                        eax_2 = eax_6 - 2
                        
                        if (eax_6 != 2)
                            var_54_2 = "TryQueueActiveTurn"
                            var_58_2 = 0x31e7
                            var_5c_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                            ecx_11 = "Halt"
                            break
                        
                        eax_2 = data_6cfe4c
                        
                        if (eax_2 == 0)
                            goto label_45e0fa
                        
                        if (eax_2[0x20d] == 2)
                            int32_t* eax_9 = sub_425de0()
                            void* eax_10 = sub_436a20(eax_9, esi_1)
                            void* ecx_5 = data_632804 + edi_1
                            var_44 = ecx_5
                            int32_t eax_12
                            int32_t edx_2
                            edx_2:eax_12 = sx.q(*(eax_10 + 0xc))
                            
                            if ((eax_12 + (edx_2 & 3)) s>> 2 != *(ecx_5 + 0x1c0))
                                *((esi_1 << 3) + &data_a9fb80) = *eax_9
                                *((esi_1 << 3) + &data_a9fb84) = 0
                                int32_t ecx_7 = *(ecx_5 + 0x1c0) << 2
                                sub_579300(*(var_44 + 0x1bc) + ecx_7, *eax_10 + ecx_7, 
                                    *(eax_10 + 0xc) - ecx_7)
                                int32_t eax_25
                                int32_t edx_4
                                edx_4:eax_25 = sx.q(*(eax_10 + 0xc))
                                *(var_44 + 0x1c0) = (eax_25 + (edx_4 & 3)) s>> 2
                
                esi_1 += 1
                edi_1 += 0x1bc
                
                if (esi_1 s>= sub_425e70())
                    goto label_45dfef
        else
            uint32_t eax_4 = *(sub_452b90(ecx_1) + 4)
            
            if (eax_4 u> 0x1e)
            label_45dfef:
                eax_4.b = 0
                @__security_check_cookie@4(eax_1 ^ &var_44)
                return eax_4
            
            switch (eax_4)
                case 0, 2, 5, 7, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e
                    if (data_632a64 != 0xffffffff)
                        goto label_45dfef
                    
                    goto label_45deeb
                case 1, 3, 4, 6, 8, 9, 0xb, 0xd, 0xf, 0x11, 0x13, 0x15, 0x17, 0x19, 0x1b, 0x1d
                    goto label_45dfef
    
    sub_489550(eax_2, &data_5b2591, ecx_11, var_5c_2, var_58_2, var_54_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
