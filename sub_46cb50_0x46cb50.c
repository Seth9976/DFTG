// 函数名称: sub_46cb50
// 虚拟地址: 0x46cb50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __fastcallsub_46cb50(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax
    void* eax
    
    if (*(arg2 + 0x34) == 3)
        eax = *(arg2 + 0x38)
        
        if (eax == 0 || eax == 2)
            int32_t eax_1 = data_632804
            int32_t i = 0
            int32_t ecx = *(arg2 + 0x44)
            int32_t i_1 = 0
            
            if (*(*(eax_1 + ecx * 0xc + 0x8c4) + 0x34) s> 0)
                void* esi_1 = nullptr
                void* var_14_1 = nullptr
                int32_t var_1c
                int32_t var_10_1 = var_1c
                
                do
                    void* esi_2 = esi_1 + *(eax_1 + ecx * 0xc + 0x8c4)
                    
                    if (*(esi_2 + 0x38) == 4)
                        int64_t* eax_6
                        
                        if ((*(esi_2 + 0x3c) & 4) != 0)
                            eax_6 = sub_46ca90(arg1, 2)
                        
                        if ((*(esi_2 + 0x3c) & 4) != 0 && eax_6 s> 0)
                            eax_6.b = 1
                            return eax_6
                        
                        if ((*(esi_2 + 0x3c) & 0x80) != 0)
                            eax_6 = sub_46ca90(arg1, 3)
                        
                        if ((*(esi_2 + 0x3c) & 0x80) != 0 && eax_6 != 0)
                            eax_6.b = 1
                            return eax_6
                        
                        if ((*(esi_2 + 0x3c) & 8) != 0)
                            int32_t ecx_4 = *(arg1 + 0x2c4)
                            int64_t* esi_3 = nullptr
                            int32_t eax_8
                            int32_t* ecx_5
                            
                            if (ecx_4 == 0)
                                eax_8 = var_10_1
                                ecx_5 = nullptr
                            else
                                ecx_5 = sub_452c30(ecx_4)
                                eax_8 = ecx_5[0xa]
                                var_10_1 = eax_8
                            
                            int32_t edx_1 = eax_8
                            int32_t var_20
                            eax_6 = sub_4538b0(&var_20)
                            int32_t edi_1 = var_20
                            
                            if (ecx_5 == edi_1)
                                i = i_1
                            else
                                do
                                    if (ecx_5 == 0)
                                        sub_489550(eax_6, &data_5b2591, "gfx", 
                                            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x5da, 
                                            "Dice::DiceIt::operator *")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    eax_6 = esi_3 + 1
                                    
                                    if (ecx_5[2] != 5)
                                        eax_6 = esi_3
                                    
                                    esi_3 = eax_6
                                    
                                    if (edx_1 != 0)
                                        eax_6 = sub_452c30(edx_1)
                                        ecx_5 = eax_6
                                        edx_1 = ecx_5[0xa]
                                    else
                                        ecx_5 = nullptr
                                while (ecx_5 != edi_1)
                                
                                if (esi_3 != 0)
                                    eax_6.b = 1
                                    return eax_6
                                
                                i = i_1
                    
                    i += 1
                    esi_1 = var_14_1 + 0xc
                    i_1 = i
                    ecx = *(arg2 + 0x44)
                    var_14_1 = esi_1
                while (i s< *(*(eax_1 + ecx * 0xc + 0x8c4) + 0x34))
    
    eax.b = 0
    return eax
}
