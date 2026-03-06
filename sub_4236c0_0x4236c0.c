// 函数名称: sub_4236c0
// 虚拟地址: 0x4236c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4236c0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    void* ecx = data_6cfe4c
    void* var_14 = esi
    char const* const var_30_2
    int32_t var_2c_2
    char const* const var_28_3
    int32_t* result
    char* ecx_7
    
    if (ecx != 0)
        result = sub_426880(ecx + 0x848, arg2)
        int32_t* result_1 = result
        int32_t* result_2 = result_1
        int32_t i_1 = 0
        
        if (*(esi + 0x10) s> 0)
            int32_t ebx_1 = 0
            int32_t var_c_1 = 0
            int32_t i
            
            do
                int32_t* esi_2 = *(esi + 8) + ebx_1
                int32_t ecx_2 = *esi_2
                
                if (ecx_2 s< 0)
                    var_28_3 = "LogGet"
                    var_2c_2 = 0x39
                    var_30_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesave.cpp"
                    ecx_7 = "who >= 0"
                    goto label_42387c
                
                result = result_1[0x3b]
                
                if (result s> 5)
                    var_28_3 = "LogGet"
                    var_2c_2 = 0x3a
                    var_30_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesave.cpp"
                    ecx_7 = "save.setup.numPlayers <= MAX_PLAYERS"
                    goto label_42387c
                
                if (ecx_2 s>= result)
                    var_28_3 = "LogGet"
                    var_2c_2 = 0x3b
                    var_30_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesave.cpp"
                    ecx_7 = "who < save.setup.numPlayers"
                    goto label_42387c
                
                void* edi_1 = &result_1[ecx_2 * 6]
                int32_t ecx_3 = esi_2[4]
                void* eax_2 = &result_1[ecx_2 * 3]
                int32_t eax_3 = *(edi_1 + 0x118)
                
                if (eax_3 s< ecx_3 || eax_3 == 0)
                    int32_t ebx_2 = ecx_3 * 2
                    result = 0x1000
                    
                    if (ebx_2 s< 0x1000)
                        ebx_2 = 0x1000
                    
                    if (*(edi_1 + 0x110) != 0)
                        var_28_3 = "AllocateLog"
                        var_2c_2 = 0x7a1
                        var_30_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
                        ecx_7 = "log.logBytes == NULL"
                        goto label_42387c
                    
                    *(edi_1 + 0x110) = sub_4c2e40(ebx_2)
                    *(edi_1 + 0x118) = ebx_2
                    ebx_1 = var_c_1
                
                int32_t ecx_5 = esi_2[5]
                
                if (ecx_5 == 0)
                    *(edi_1 + 0x124) = ecx_5
                    ecx_5 = esi_2[5]
                
                sub_579300(*(edi_1 + 0x110) + ecx_5, esi_2[2], esi_2[4])
                result = esi_2[4] + esi_2[5]
                *(edi_1 + 0x11c) = result
                *(edi_1 + 0x120) = result
                
                if (*(edi_1 + 0x124) s> result)
                    var_28_3 = "SetLog"
                    var_2c_2 = 0x7c7
                    var_30_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
                    ecx_7 = "log.logRead <= log.logSizeWritten"
                    goto label_42387c
                
                ebx_1 += 0x20
                i = i_1 + 1
                var_c_1 = ebx_1
                *(eax_2 + 0x18c) = esi_2[6]
                result = esi_2[7]
                esi = var_14
                *(eax_2 + 0x190) = result
                i_1 = i
                result_1 = result_2
            while (i s< *(esi + 0x10))
        
        if (data_6cfe4c != 0)
            return result
    
    var_28_3 = "GetClient"
    var_2c_2 = 0x75
    var_30_2 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
    ecx_7 = "gClient"
    label_42387c:
    sub_489550(result, &data_5b2591, ecx_7, var_30_2, var_2c_2, var_28_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
