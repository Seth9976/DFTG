// 函数名称: sub_46a060
// 虚拟地址: 0x46a060
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_46a060()
{
    // 第一条实际指令: void* result = sub_46a6a0()
    void* result = sub_46a6a0()
    
    if (result != 0)
        while (true)
            int32_t esi_1 = *(result + 0x28)
            void* eax = *(result + 0x24)
            char const* const var_24
            int32_t var_20
            char const* const var_1c_2
            char* ecx_7
            
            if (eax u> 4)
                var_1c_2 = "TutorialExecutAction"
                var_20 = 0x536b
            label_46a189:
                var_24 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                ecx_7 = "Halt"
            else
                switch (eax)
                    case nullptr
                        goto label_46a142
                    case 1
                        void* eax_2 = sub_437f10(*(data_6d00d8 + 0xbe4))
                        
                        if (*(sub_41c5b0() + 0x834) != 0)
                            int32_t ecx_4 = sub_425d50()[0x3e]
                            int32_t eax_5 = *(eax_2 + 0x264)
                            
                            if (eax_5 s<= ecx_4 - 0x64)
                                eax_5 = ecx_4 - 0x64
                            
                            *(eax_2 + 0x264) = eax_5
                            sub_437ba0(data_6d00d8)
                        
                        eax = data_6cfe4c
                        
                        if (eax != 0)
                            *(eax + 0x82c) = 5
                            goto label_46a142
                        
                        var_1c_2 = "GetClient"
                        var_20 = 0x75
                        var_24 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                        ecx_7 = "gClient"
                    case 2
                        int32_t* var_c = nullptr
                        
                        while (true)
                            eax = sub_481430(&data_62d6c4, &var_c)
                            int32_t* ecx_1 = var_c
                            
                            if (ecx_1 == 0xffffffff)
                                var_1c_2 = "FindCardByName"
                                var_20 = 0x5303
                                goto label_46a189
                            
                            if (*ecx_1 == 0)
                                void* eax_1 = ecx_1[0xc]
                                
                                if (*(eax_1 + 4) != esi_1 && *(eax_1 + 0x1c) != esi_1)
                                    continue
                                
                                sub_4564b0(ecx_1)
                                break
                        
                        goto label_46a142
                    case 3
                        goto label_46a0dd
                    case 4
                        sub_4561d0()
                    label_46a0dd:
                        sub_4561d0()
                    label_46a142:
                        data_632820 += 1
                        result = sub_46a6a0()
                        
                        if (result == 0)
                            break
                        
                        if (*(result + 0x1c) != 1)
                            break
                        
                        continue
            
            sub_489550(eax, &data_5b2591, ecx_7, var_24, var_20, var_1c_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    return result
}
