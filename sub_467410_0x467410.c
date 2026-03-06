// 函数名称: sub_467410
// 虚拟地址: 0x467410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_467410(int32_t* arg1, char arg2)
{
    // 第一条实际指令: void var_404
    void var_404
    int32_t eax_1 = __security_cookie ^ &var_404
    int32_t var_c = eax_1
    int32_t var_418_1
    char const* const var_414_1
    char* ecx
    
    if (*arg1 == 2)
        int32_t* eax_2 = sub_452c30(arg1[0x14])
        int32_t* eax_3 = sub_452c30(arg1[0x15])
        void* ebx_2 = sub_452b90(eax_2[6])
        int32_t result = 0
        void* var_3f8_1 = ebx_2
        int32_t result_1 = 0
        int32_t edx = *(ebx_2 + 0x298)
        
        if (edx s<= 0)
            @__security_check_cookie@4(var_c ^ &var_404)
            return result
        
        void* ecx_4 = ebx_2 + 0xb8
        
        while (*(ecx_4 + 4) != eax_2[0xb])
            result += 1
            ecx_4 += 0xc
            result_1 = result
            
            if (result s>= edx)
                @__security_check_cookie@4(var_c ^ &var_404)
                return result
        
        eax_1 = *(ecx_4 + 8)
        
        if (eax_1 == eax_3[0xb])
            int32_t eax_5 = *ecx_4
            int32_t* var_3fc_1
            uint32_t (* eax_9)[0x4]
            
            if (eax_5 == 0)
                void var_1a0
                eax_9 = sub_461720(&var_1a0, eax_2, ebx_2, &var_1a0, eax_3)
            label_467534:
                var_3fc_1.b = 0
            label_467547:
                int32_t var_350
                __builtin_memcpy(&var_350, eax_9, 0x90)
                int32_t var_3f0
                int32_t var_3e0
                uint32_t var_3dc[0x8][0x4]
                int32_t var_34c
                void var_b0
                
                if (var_34c != 0)
                    int32_t edi_3 = neg.d(var_34c)
                    int32_t var_110[0xc]
                    
                    if (edi_3 != 0)
                        if (edi_3 s> 0)
                            sub_4c5670(data_126be7c, &var_110)
                            sub_4c5920(&var_110)
                        
                        sub_452770(ebx_2, 0, edi_3, var_3fc_1.b)
                        
                        if (edi_3 s<= 0)
                            *(ebx_2 + 0x318) += edi_3
                        else
                            *(ebx_2 + 0x310) += edi_3
                        
                        int32_t* ebx_3 = sub_481490(&data_62d6c4)
                        int32_t* eax_12
                        eax_12.b = var_3fc_1.b
                        void* var_414_6 = 0x8c
                        char var_418_6 = 0
                        *ebx_3 = 3
                        ebx_3[0x16] = 0
                        ebx_3[0x19].b = eax_12.b
                        uint32_t (* var_41c_4)[0x8][0x4] = &var_3dc
                        ebx_3[0x17] = *var_3f8_1
                        ebx_3[0x18] = edi_3
                        ebx_3[0x1a] = 7
                        int32_t var_3e4_1 = 0
                        _memset(var_41c_4, var_418_6, var_414_6)
                        var_3f0 = *var_3f8_1
                        int32_t var_3ec_1 = 0x26
                        int32_t var_3e8_1 = 0xffffffff
                        var_3e0 = 0xffffffff
                        __builtin_memcpy(&var_b0, &var_3f0, 0xa0)
                        sub_452860(&ebx_3[0x1c], &var_b0)
                        ebx_2 = var_3f8_1
                    
                    if (arg2 != 0)
                        sub_4c5670(data_126be78, &var_110)
                        sub_4c5920(&var_110)
                
                int32_t edi_4 = var_350
                
                if (edi_4 != 0)
                    data_632550 += edi_4
                    int32_t edi_5 = neg.d(edi_4)
                    int32_t var_e0[0xc]
                    
                    if (edi_5 != 0)
                        if (edi_5 s> 0)
                            sub_4c5670(data_126be88, &var_e0)
                            sub_4c5920(&var_e0)
                        
                        sub_452770(ebx_2, 1, edi_5, 0)
                        
                        if (edi_5 s<= 0)
                            *(ebx_2 + 0x31c) += edi_5
                        else
                            *(ebx_2 + 0x314) += edi_5
                        
                        int32_t* eax_14 = sub_481490(&data_62d6c4)
                        void* var_414_8 = 0x8c
                        int32_t var_3e4_2 = 0
                        char var_418_8 = 0
                        *eax_14 = 3
                        eax_14[0x16] = 1
                        uint32_t (* var_41c_6)[0x8][0x4] = &var_3dc
                        eax_14[0x17] = *var_3f8_1
                        eax_14[0x18] = edi_5
                        eax_14[0x19].b = 0
                        eax_14[0x1a] = 7
                        _memset(var_41c_6, var_418_8, var_414_8)
                        var_3f0 = *var_3f8_1
                        int32_t var_3ec_2 = 0x27
                        int32_t var_3e8_2 = 0xffffffff
                        var_3e0 = 0xffffffff
                        __builtin_memcpy(&var_b0, &var_3f0, 0xa0)
                        sub_452860(&eax_14[0x1c], &var_b0)
                    
                    if (arg2 != 0)
                        sub_4c5670(data_126be84, &var_e0)
                        sub_4c5920(&var_e0)
                
                *(var_3f8_1 + 0x298) -= 1
                int32_t eax_17 = *(var_3f8_1 + 0x298) * 3
                void* ecx_25 = var_3f8_1 + result_1 * 0xc
                *(ecx_25 + 0xb8) = *(var_3f8_1 + (eax_17 << 2) + 0xb8)
                result = *(var_3f8_1 + (eax_17 << 2) + 0xc0)
                *(ecx_25 + 0xc0) = result
                @__security_check_cookie@4(var_c ^ &var_404)
                return result
            
            if (eax_5 == 1)
                uint32_t var_230[0x9][0x4]
                eax_9 = sub_461900(&var_230, edx, ebx_2, &var_230, eax_3, 0)
                goto label_467534
            
            eax_1 = eax_5 - 2
            
            if (eax_5 == 2)
                uint32_t var_2c0[0x9][0x4]
                eax_9 = sub_461900(&var_2c0, edx, ebx_2, &var_2c0, eax_3, 1)
                var_3fc_1.b = 1
                goto label_467547
            
            var_414_1 = "DoShipTrayRefunds"
            var_418_1 = 0x4be7
            ecx = "Halt"
        else
            var_414_1 = "DoShipTrayRefunds"
            var_418_1 = 0x4bd6
            ecx = "shipAction.goodDieCidx == gfxGood.die.cidx"
    else
        var_414_1 = "DoShipTrayRefunds"
        var_418_1 = 0x4bca
        ecx = "gfx.type == ROLLGFX_TRAY_SHIPPING"
    
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_418_1, 
        var_414_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
