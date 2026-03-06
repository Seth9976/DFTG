// 函数名称: sub_48d300
// 虚拟地址: 0x48d300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_48d300()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    uint32_t result = __security_cookie ^ &__saved_ebp
    uint32_t result_1 = result
    
    if (data_aca0dc != 0)
        void* esi_1 = nullptr
        
        while (true)
            void* eax_1 = data_aca0dc
            void* ecx_1
            
            if (esi_1 != 0)
                ecx_1 = *(eax_1 + 0x1c)
                esi_1 += 0xc
            else
                esi_1 = *(eax_1 + 0x1c)
                ecx_1 = esi_1
            
            void* eax_4 = ecx_1 + *(eax_1 + 0x20) * 0xc
            
            if (esi_1 u>= eax_4)
                break
            
            while (true)
                if ((*(esi_1 + 8) & 0xffff0000) != 0)
                    int128_t var_30
                    int32_t i = (*(*data_aca1e4 + 0x24))(*(esi_1 + 4), &var_30)
                    
                    if (i == 0)
                        break
                    
                    do
                        void* eax_9 = sub_48b280()
                        *eax_9 = var_30
                        *(eax_9 + 0x10) = i
                        *(eax_9 + 0x28) = 1
                        *(eax_9 + 0x14) = 1
                        *(eax_9 + 0x24) = 4
                        sub_48b3f0(eax_9, 0x5dd)
                        i = (*(*data_aca1e4 + 0x24))(*(esi_1 + 4), &var_30)
                    while (i != 0)
                    
                    break
                
                esi_1 += 0xc
                
                if (esi_1 u>= eax_4)
                    goto label_48d36a
        
    label_48d36a:
        void* esi_2 = nullptr
        
        while (true)
            int32_t* eax_5 = data_aca0dc
            void* ecx_2
            
            if (esi_2 != 0)
                ecx_2 = *eax_5
                esi_2 += 0x4c
            else
                esi_2 = *eax_5
                ecx_2 = esi_2
            
            result = eax_5[1] * 0x4c + ecx_2
            int32_t var_48_3
            char const* const var_44_3
            int32_t eax_15
            char* ecx_7
            
            if (esi_2 u>= result)
            label_48d410:
                void* esi_3 = data_aca0dc
                
                if (*(esi_3 + 0x40) == 0)
                    break
                
                while (true)
                    int32_t* ecx_6 = *(esi_3 + 0x38)
                    void* eax_14 = ecx_6[1]
                    *(esi_3 + 0x38) = eax_14
                    
                    if (eax_14 == 0)
                        *(esi_3 + 0x3c) = 0
                    else
                        *(eax_14 + 8) = 0
                    
                    int32_t* edi_2 = *ecx_6
                    *(esi_3 + 0x40) -= 1
                    eax_15 = sub_4984f0(ecx_6, 0xc)
                    
                    if (edi_2[1] s<= 0x3e8)
                        var_44_3 = "NetworkProcessMessages"
                        var_48_3 = 0x5fe
                        ecx_7 = "message->messageType > NETMSG_MIN_VALUE"
                        break
                    
                    sub_48d170(edi_2)
                    result = edi_2[1]
                    
                    if (result == 0x5de || result == 0x3ec || result == 0xfa2)
                        result = *edi_2
                        void* edx_2 = data_aca0dc
                        
                        if (result != 0)
                            uint32_t ecx_16 = zx.d(result.w)
                            
                            if (ecx_16 u< *(edx_2 + 4))
                                int128_t* ecx_18 = ecx_16 * 0x4c + *edx_2
                                
                                if (*(ecx_18 + 0x48) == result)
                                    result = sub_48b510(ecx_18)
                    
                    if (*(esi_3 + 0x40) == 0)
                        goto label_48d69a
            else
                while ((*(esi_2 + 0x48) & 0xffff0000) == 0)
                    esi_2 += 0x4c
                    
                    if (esi_2 u>= result)
                        goto label_48d410
                
                eax_15 = *(esi_2 + 0x14)
                
                if (eax_15 == 1 || eax_15 == 2 || eax_15 == 3 || eax_15 == 4)
                    eax_15 = *(esi_2 + 0x24)
                    uint32_t edx_1
                    
                    if (eax_15 != 1)
                        if (eax_15 == 3 || eax_15 != 2)
                            goto label_48d546
                        
                        eax_15 = (*(*data_aca1e4 + 0x1c))(*(esi_2 + 0x10))
                        
                        if (eax_15 == 2)
                            goto label_48d546
                        
                        if (eax_15 == 4)
                            int32_t eax_21 = *(esi_2 + 0x14)
                            
                            if (eax_21 == 3 || eax_21 == 4)
                                *(esi_2 + 0x2c) = 0
                            
                            int32_t var_34
                            
                            if ((eax_21 == 3 || eax_21 == 4) && var_34 == 1)
                                *(esi_2 + 0x24) = 3
                                goto label_48d546
                            
                            *(esi_2 + 0x24) = 4
                            edx_1 = 0x3ea
                            goto label_48d541
                        
                        if (eax_15 != 5)
                            var_44_3 = "UpdateTCPConnectStatus"
                            var_48_3 = 0x494
                            ecx_7 = "Halt"
                        else
                            *(esi_2 + 0x24) = eax_15
                            eax_15 = *(esi_2 + 0x28)
                            
                            if (eax_15 == 2)
                                edx_1 = 0x3eb
                                goto label_48d541
                            
                            if (eax_15 == 3)
                                edx_1 = 0xfa1
                                goto label_48d541
                            
                            var_44_3 = "UpdateTCPConnectStatus"
                            var_48_3 = 0x48d
                            ecx_7 = "Halt"
                    else if (*(esi_2 + 0x10) != 0xffffffff)
                        var_44_3 = "UpdateTCPConnectStatus"
                        var_48_3 = 0x444
                        ecx_7 = "loc.socket == TG_INVALID_SOCKET"
                    else
                        int32_t eax_18 = (*(*data_aca1e4 + 0x18))(esi_2)
                        *(esi_2 + 0x10) = eax_18
                        
                        if (eax_18 == 0xffffffff)
                            *(esi_2 + 0x24) = 5
                            edx_1 = 0x3eb
                        label_48d541:
                            sub_48b3f0(esi_2, edx_1)
                            goto label_48d546
                        
                        *(esi_2 + 0x24) = 2
                    label_48d546:
                        
                        if (*(esi_2 + 0x24) != 4)
                            continue
                        else
                            eax_15 = *(esi_2 + 0x14)
                            
                            if (eax_15 == 5)
                                goto label_48d584
                            
                            if (eax_15 == 1 || eax_15 == 2 || eax_15 == 3 || eax_15 == 4)
                                sub_48ca80(esi_2)
                            label_48d584:
                                eax_15 = *(esi_2 + 0x14)
                                
                                if (eax_15 == 2 || eax_15 == 3)
                                    sub_48c480(esi_2)
                                    continue
                                
                                if (eax_15 == 4)
                                    continue
                                else
                                    if (eax_15 == 1 || eax_15 == 5)
                                        sub_48c840(esi_2)
                                        continue
                                    
                                    if (eax_15 == 0)
                                        continue
                                    else
                                        var_44_3 = "NetworkLocReceive"
                                        var_48_3 = 0x594
                                        ecx_7 = "Halt"
                            else
                                if (eax_15 == 0)
                                    sub_48cc60(esi_2)
                                    goto label_48d584
                                
                                var_44_3 = "NetworkLocReceive"
                                var_48_3 = 0x580
                                ecx_7 = "Halt"
                else
                    if (eax_15 == 0 || eax_15 == 5)
                        goto label_48d546
                    
                    var_44_3 = "NetworkUpdateReceive"
                    var_48_3 = 0x640
                    ecx_7 = "Halt"
            
            sub_489550(eax_15, &data_5b2591, ecx_7, "d:\ax\trunk\ax2017\engine\network.cpp", var_48_3, 
                var_44_3)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    label_48d69a:
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
