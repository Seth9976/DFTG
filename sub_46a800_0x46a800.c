// 函数名称: sub_46a800
// 虚拟地址: 0x46a800
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_46a800(int32_t arg1)
{
    // 第一条实际指令: char const* const var_28_2
    char const* const var_28_2
    int32_t var_24_1
    char const* const var_20_1
    uint32_t eax
    char* ecx
    
    if (data_632a00 != 0)
        var_20_1 = "SharedDataCopy"
        var_24_1 = 0x1ef
        ecx = "gRollClient.threadRunning == false"
        var_28_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    else
        sub_579300(&data_a9fb80, &data_a75620, 0x2a55c)
        eax = data_6cfe4c
        data_a78474 = 0
        data_a9fb78 = 0
        __builtin_memset(&data_a75620, 0, 0x28)
        
        if (eax == 0)
            var_20_1 = "GetClient"
            var_24_1 = 0x75
            var_28_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx = "gClient"
        else
            eax = *(eax + 0x834)
            
            if (eax == 0)
                var_20_1 = "ProcessAIChoices"
                var_24_1 = 0x2b49
                ecx = "GetClient().activeGame.gameType != GAME_NONE"
            else if (eax != 2)
                eax = data_632804
                int32_t* ecx_1 = data_63280c
                int32_t* var_8_1 = ecx_1
                uint32_t var_c_1 = eax
                
                if (*(eax + 0x10) == 0)
                    eax = data_aa29d4
                    int32_t ebx_1 = 0
                    
                    if (eax s> 0)
                        void* esi_1 = &data_aa0bd8
                        
                        do
                            if (arg1 == *(esi_1 - 4))
                                int32_t ecx_2 = *(sub_436a20(ecx_1, *esi_1) + 0x10)
                                int32_t ecx_3 = ecx_2
                                
                                if (ecx_3 s< 0)
                                    ecx_3 += 3
                                
                                int32_t eax_7 = *((*esi_1 + 1) * 0x1bc + var_c_1) + (ecx_3 s>> 2 << 2)
                                sub_45bb90(eax_7, *esi_1, var_8_1, eax_7, *(esi_1 + 4) - ecx_2)
                                eax = data_aa29d4
                                ecx_1 = var_8_1
                            
                            ebx_1 += 1
                            esi_1 += 0xc
                        while (ebx_1 s< eax)
                    
                    goto label_46a91b
                
                var_20_1 = "ProcessAIChoices"
                var_24_1 = 0x2b55
                ecx = "g->simulation == false"
            else if (data_aa29d4 == 0)
            label_46a91b:
                int32_t ecx_6 = data_aca0d8
                int32_t ebx_2 = 0
                
                if (ecx_6 s> 0)
                    uint32_t* esi_2 = &data_aa29f0
                    
                    do
                        if (esi_2[-6] == arg1)
                            eax.b = esi_2[1].b
                            
                            if (eax.b == 0)
                                eax = (data_6fadf0 << 5) + 0x6d36f0
                                *eax = *(esi_2 - 0x18)
                                *(eax + 0x10) = *(esi_2 - 8)
                                data_6fadf0 += 1
                            else
                                sub_47dd90(eax, esi_2[-4], esi_2[-5], esi_2[-3], esi_2[-2], esi_2[-1], 
                                    *esi_2, eax.b)
                                ecx_6 = data_aca0d8
                        
                        ebx_2 += 1
                        esi_2 = &esi_2[8]
                    while (ebx_2 s< ecx_6)
                
                void* ecx_8 = &data_a9fbac
                eax = &data_a9fb84
                
                while (true)
                    if (*(eax - 4) == arg1 && *eax == 1 && *(ecx_8 - 4) == arg1)
                        int32_t edx_6 = *ecx_8
                        
                        if (edx_6 == 1)
                            break
                        
                        if (edx_6 s> 2 && edx_6 s<= 4)
                            break
                    
                    eax += 8
                    ecx_8 += 0x33c
                    
                    if (eax s>= &data_a9fbac)
                        return sub_45de90()
                
                var_20_1 = "ProcessPostResume"
                var_24_1 = 0x564a
                ecx = "Halt"
            else
                var_20_1 = "ProcessAIChoices"
                var_24_1 = 0x2b4f
                ecx = "local.numAiChoices == 0"
            
            var_28_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    
    sub_489550(eax, &data_5b2591, ecx, var_28_2, var_24_1, var_20_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
