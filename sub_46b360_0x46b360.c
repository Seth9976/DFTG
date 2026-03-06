// 函数名称: sub_46b360
// 虚拟地址: 0x46b360
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46b360(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    void* result
    
    if (arg1[6] != 0xffffffff)
        result = sub_46bf50(arg1)
        
        if (result.b == 0)
            void* ecx = data_6cfe4c
            char const* const var_18
            int32_t var_14
            char const* const var_10
            char* ecx_1
            
            if (ecx == 0)
            label_46b386:
                var_10 = "GetClient"
                var_14 = 0x75
                var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_1 = "gClient"
            label_46b482:
                sub_489550(result, &data_5b2591, ecx_1, var_18, var_14, var_10)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t eax = arg1[6]
            
            if (eax != *(ecx + 0xa68))
                int32_t eax_1 = sub_425f20(eax)
                
                if (sub_454240(eax_1).b == 0)
                    if (sub_454290(eax_1).b == 0 || arg1[4] != 4)
                        result.b = 0
                        return result
                else if (arg1[4] != 4)
                    result.b = 0
                    return result
                
                ecx = data_6cfe4c
            
            result = arg1[4]
            
            if (result u> 0x10)
                var_10 = "IsDieLarge"
                var_14 = 0x5866
                var_18 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                ecx_1 = "Halt"
                goto label_46b482
            
            result = zx.d(*(result + &lookup_table_46b4a8))
            
            switch (result)
                case 1
                    int32_t eax_5 = sub_46b290(arg1[5])
                    
                    if (sub_4584c0(sub_46b290(arg1[4]), arg1[6]).b == 0
                            && (sub_4584c0(eax_5, arg1[6]).b == 0 || arg1[0x1aa] s<= 0))
                        result.b = 0
                        return result
                case 2
                    if (ecx == 0)
                        goto label_46b386
                    
                    result = *(sub_452b90(*(ecx + 0xa68)) + 0xc)
                    
                    if (result != 0x65 && result != 0x64)
                        return sub_4584c0(sub_46b290(arg1[4]), arg1[6])
                    
                    result.b = 0
                    return result
    
    result.b = 1
    return result
}
