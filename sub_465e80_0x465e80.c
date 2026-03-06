// 函数名称: sub_465e80
// 虚拟地址: 0x465e80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_465e80(int32_t arg1)
{
    // 第一条实际指令: void* ecx = data_6cfe4c
    void* ecx = data_6cfe4c
    char const* const var_18
    int32_t var_14_1
    char const* const var_10_1
    int32_t* eax
    char* ecx_1
    
    if (ecx == 0)
    label_465e8f:
        var_10_1 = "GetClient"
        var_14_1 = 0x75
        var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    label_466018:
        sub_489550(eax, &data_5b2591, ecx_1, var_18, var_14_1, var_10_1)
        
        if (IsDebuggerPresent() != 1)
            sub_489700()
            noreturn
        
        breakpoint
    
    if (*(ecx + 0x834) == 0)
        return 
    
    void* eax_1 = sub_452b90(*(ecx + 0xa68))
    int32_t* var_14_2
    
    if (sub_453650(eax_1) != 0x19 && sub_453650(eax_1) != 0x1a)
        eax = data_632590
        
        if (eax != 3 && eax != 2 && eax != 6)
            void* ecx_5 = data_6cfe4c
            
            if (ecx_5 == 0)
                goto label_465e8f
            
            eax = *(sub_452b90(*(ecx_5 + 0xa68)) + 0x34)
            
            if (eax u> 0xd)
                var_10_1 = "RollTrayIsLarge"
                var_14_1 = 0x47bf
            else
                eax = zx.d(*(eax + &lookup_table_466044))
                
                switch (eax)
                    case nullptr
                        var_10_1 = "RollTrayIsLarge"
                        var_14_1 = 0x47af
                    case 1
                        void** var_10_2 = &data_63827c
                        *(eax_1 + 0xbd4) = 0
                        sub_465e20(eax, arg1, eax_1, 7, &data_638260)
                        goto label_465fa2
                    case 2
                        int32_t var_10_3 = 0xffffffff
                        var_14_2 = *(eax_1 + 0xbd4)
                    label_465f93:
                        sub_4a8830(eax, &data_637e38, arg1, var_14_2, 0xffffffff)
                    label_465fa2:
                        eax = sub_452ed0(eax_1, 3)
                        
                        if (eax s> 0x10)
                            sub_4a8830(sub_4a8830(eax, &data_638298, arg1, 5, 0xffffffff), 
                                &data_6382b4, arg1, 5, 0xffffffff)
                            return 
                        
                        if (eax s> 9)
                            sub_4a8830(sub_4a8830(eax, &data_638298, arg1, 4, 0xffffffff), 
                                &data_6382b4, arg1, 4, 0xffffffff)
                        
                        return 
                    case 3
                        var_10_1 = "RollTrayIsLarge"
                        var_14_1 = 0x47bf
            
            ecx_1 = "Halt"
            var_18 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            goto label_466018
    
    int32_t* ebx_1 = *(eax_1 + 0xbd4)
    eax = sub_453510(*eax_1, 7)
    
    if (ebx_1 s<= eax)
        eax = sub_453510(*eax_1, 7)
        ebx_1 = eax
    
    int32_t var_10_4 = 0xffffffff
    var_14_2 = ebx_1
    *(eax_1 + 0xbd4) = ebx_1
    goto label_465f93
}
