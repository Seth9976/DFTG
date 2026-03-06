// 函数名称: sub_47f3f0
// 虚拟地址: 0x47f3f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_47f3f0(int32_t arg1)
{
    // 第一条实际指令: float xmm0 = data_620d84
    float xmm0 = data_620d84
    int32_t edi = 0
    char var_5 = 0
    void* result = sub_425e70()
    char const* const var_24
    int32_t var_20
    char const* const var_1c
    int32_t eax_1
    char* ecx_2
    
    if (result s<= 0)
    label_47f4c8:
        eax_1 = 2
    else
        void* ebx_1 = &data_62d988
        
        while (true)
            if (ebx_1 s< &data_62d988)
                var_1c = "RollPlayerGui"
                var_20 = 0x211
                ecx_2 = "who >= 0"
                goto label_47f5d3
            
            result = sub_425e70()
            
            if (edi s>= result)
                var_1c = "RollPlayerGui"
                var_20 = 0x212
                ecx_2 = "who < RollNumPlayers()"
                goto label_47f5d3
            
            int32_t i = *ebx_1
            int32_t esi_1 = 0
            
            if (i != 0)
                do
                    esi_1 += 1
                    i = *(sub_452de0(i) + 0x10)
                while (i != 0)
                
                if (esi_1 s>= 0xc)
                    result = data_6cfe4c
                    var_5 = 1
                    
                    if (result == 0)
                        var_1c = "GetClient"
                        var_20 = 0x75
                        var_24 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                        ecx_2 = "gClient"
                        goto label_47f5dd
                    
                    if (edi == *(result + 0xa68))
                        eax_1 = 0
                        break
            
            edi += 1
            ebx_1 += 0xfb0
            result = sub_425e70()
            
            if (edi s>= result)
                if (var_5 == 0)
                    goto label_47f4c8
                
                eax_1 = 1
                break
    
    if (eax_1 != 0 && eax_1 != 1)
        result = eax_1 - 2
    
    if (eax_1 == 0 || eax_1 == 1 || eax_1 == 2)
        int32_t var_1c_1 = 0xffffffff
        sub_4a8570(arg1)
        result = data_6329f8
        
        if (result u> 4)
            var_1c = "RollGameOverUpdate"
            var_20 = 0x8920
            ecx_2 = "Halt"
        else
            switch (result)
                case 3
                    int32_t var_1c_2 = 0xffffffff
                    sub_4a8570(arg1)
                    int32_t ecx_5 = data_6329f8
                    float xmm1_2 = data_6329fc + xmm0
                    result = ecx_5 * 3
                    data_6329fc = xmm1_2
                    
                    if (*((result << 2) + &data_61fbec) == ecx_5)
                        float xmm0_1 = *((result << 2) + &data_61fbf0)
                        xmm0_1 - -1f
                        result:1.b = (xmm0_1 == -1f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_1, -1f) ? 1 : 0) << 2 | (xmm0_1 < -1f ? 1 : 0)
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (p_1 && not(xmm1_2 < xmm0_1))
                            data_6329fc = 0
                            data_6329f8 = ecx_5 + 1
                            result = *((ecx_5 + 1) * 0xc + &data_61fbf4)
                            
                            if (result != 0)
                                return result()
                        
                        return result
                    
                    var_1c = "StateTransitionUpdate"
                    var_20 = 0x88ae
                    ecx_2 = "seq[state.state].state == state.state"
    else
        var_1c = "RollGameOverUpdate"
        var_20 = 0x8909
        ecx_2 = "Halt"
    
    label_47f5d3:
    var_24 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    label_47f5dd:
    sub_489550(result, &data_5b2591, ecx_2, var_24, var_20, var_1c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
