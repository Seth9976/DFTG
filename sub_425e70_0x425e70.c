// 函数名称: sub_425e70
// 虚拟地址: 0x425e70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_425e70()
{
    // 第一条实际指令: int32_t* eax_5 = data_6cfe4c
    int32_t* eax_5 = data_6cfe4c
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx_1
    
    if (eax_5 != 0)
        if (eax_5[0x20d] == 0)
            return 0
        
        int32_t result = 0
        int32_t i = 0
        
        if (sub_425d50()[0x3b] s> 0)
            int32_t edi_1 = 0
            int32_t* eax_3
            
            do
                int32_t result_1 = result + 1
                edi_1 += 0x2c
                
                if (*(sub_425d50() + edi_1 - 8) == 0)
                    result_1 = result
                
                i += 1
                result = result_1
                eax_3 = sub_425d50()
            while (i s< eax_3[0x3b])
        
        eax_5 = sub_425d50()
        
        if (result == eax_5[0x3b])
            return result
        
        var_10 = "ActiveNumPlayers"
        var_14 = 0xb7e
        var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_1 = "total == ActiveGameSafe().setup.numPlayers"
    else
        var_10 = "GetClient"
        var_14 = 0x75
        var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_489550(eax_5, &data_5b2591, ecx_1, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
