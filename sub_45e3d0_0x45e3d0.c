// 函数名称: sub_45e3d0
// 虚拟地址: 0x45e3d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45e3d0(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg2
    char const* const var_30
    int32_t var_2c
    char const* const var_28
    uint32_t eax
    char* ecx
    
    if (*(arg1 + 0xc) s<= 6)
        eax = sub_457270(*(arg1 + 8))
        int32_t ecx_3 = *(eax + (*(arg1 + 0xc) << 2))
        
        if (ecx_3 u> 0x10)
            var_28 = "RollGetAutoAssignment"
            var_2c = 0x33cd
            ecx = "Halt"
            var_30 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        else
            eax = zx.d(lookup_table_45e540[ecx_3])
            
            switch (eax)
                case 0
                    if (ebx.b != 0)
                        return 7
                    
                    void* ecx_4 = data_6cfe4c
                    
                    if (ecx_4 != 0)
                        void* eax_2 = sub_452b90(*(ecx_4 + 0xa68))
                        int32_t eax_1 = sub_459f20(eax_2)
                        
                        if (eax_1 != 0)
                            return eax_1
                        
                        int32_t ecx_7 = 0
                        int32_t var_8 = 9
                        int32_t i = 0
                        int32_t var_10 = 0
                        int32_t i_1 = 0
                        void* const ebx_1 = &data_5ed364
                        int32_t edi_1
                        
                        do
                            edi_1 = *ebx_1
                            int32_t esi_1 = 0
                            int32_t j = *(eax_2 + (edi_1 << 2) + 0x2b4)
                            
                            if (j != 0)
                                do
                                    void* eax_7 = sub_452d50(j)
                                    int32_t ecx_9 = esi_1 + 1
                                    j = *(eax_7 + 0x20)
                                    
                                    if (*(eax_7 + 0x1a) != 0)
                                        ecx_9 = esi_1
                                    
                                    esi_1 = ecx_9
                                while (j != 0)
                                
                                ecx_7 = var_10
                                i = i_1
                            
                            if (esi_1 s<= ecx_7)
                                edi_1 = var_8
                            
                            i += 1
                            ebx_1 += 4
                            i_1 = i
                            var_8 = edi_1
                            
                            if (esi_1 s<= ecx_7)
                                esi_1 = ecx_7
                            
                            ecx_7 = esi_1
                            var_10 = ecx_7
                        while (i != (sbb.d(0x5ed378, 0x5ed378, false) & 0xfffffffb) + 5)
                        
                        return edi_1
                    
                    var_28 = "GetClient"
                    var_2c = 0x75
                    var_30 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                    ecx = "gClient"
                case 1
                    return ecx_3 + 8
                case 2
                    return ecx_3 + 3
                case 3
                    return 7
    else
        var_28 = "GetSide"
        var_2c = 0x150b
        ecx = "die.face <= 6"
        var_30 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    
    sub_489550(eax, &data_5b2591, ecx, var_30, var_2c, var_28)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
