// 函数名称: sub_45dd60
// 虚拟地址: 0x45dd60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_45dd60(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    void* ecx = data_6cfe4c
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    int32_t* result
    char* ecx_1
    
    if (ecx != 0)
        if (*(ecx + 0x10) != *(ecx + 0xc))
            *arg1 = 0xffffffff
        label_45dd97:
            result.b = 1
            return result
        
        result = sub_425e70()
        int32_t esi_1 = 0
        int32_t* result_1 = result
        
        if (result s<= 0)
        label_45de05:
            result.b = 0
            return result
        
        int32_t* edi_1 = &data_62d6e4
        
        while (true)
            *arg1 = esi_1
            
            if (edi_1 s< &data_62d6e4)
                var_18 = "RollPlayerGui"
                var_1c = 0x211
                ecx_1 = "who >= 0"
            else
                result = sub_425e70()
                
                if (esi_1 s>= result)
                    var_18 = "RollPlayerGui"
                    var_1c = 0x212
                    ecx_1 = "who < RollNumPlayers()"
                else
                    result = sub_425de0()
                    int32_t edx_1 = *arg1
                    
                    if (*((edx_1 << 3) + &data_a9fb80) == *result
                            && *((edx_1 << 3) + &data_a9fb84) != 0)
                        goto label_45dd97
                    
                    result = *edi_1
                    
                    if (result u> 0x1e)
                        goto label_45dd97
                    
                    result = zx.d(*(result + &lookup_table_45de58))
                    
                    switch (result)
                        case nullptr
                            esi_1 += 1
                            edi_1 = &edi_1[0x3ec]
                            
                            if (esi_1 s>= result_1)
                                goto label_45de05
                            
                            continue
                        case 1
                            goto label_45dd97
            
            var_20 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            break
    else
        var_18 = "GetClient"
        var_1c = 0x75
        var_20 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_489550(result, &data_5b2591, ecx_1, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
