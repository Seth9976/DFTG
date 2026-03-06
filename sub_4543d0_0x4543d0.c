// 函数名称: sub_4543d0
// 虚拟地址: 0x4543d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4543d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t edi = arg1[0x1c]
    int32_t edx_1
    
    if (edi != 1 || arg1[0x36] != 0x22)
        edx_1 = arg1[0x5d]
    
    if ((edi != 1 || arg1[0x36] != 0x22) && (edx_1 != 1 || arg1[0x77] != 0x22)
            && (arg1[0x1aa] == 0 || arg1[0xb8] != 0x22))
        void* ecx_1 = data_6cfe4c
        char const* const var_18
        int32_t var_14
        char const* const var_10
        void* eax
        char* ecx_2
        
        if (*(arg1 + 0x6e) != 0)
            if (ecx_1 != 0)
                eax = arg1[0xf]
                
                if (eax != *(ecx_1 + 0xa68))
                    return 5
                
                goto label_45445c
            
        label_454437:
            var_10 = "GetClient"
            var_14 = 0x75
            var_18 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_2 = "gClient"
        label_4545da:
            sub_489550(eax, &data_5b2591, ecx_2, var_18, var_14, var_10)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
    label_45445c:
        
        if (ecx_1 == 0)
            goto label_454437
        
        char eax_11
        
        if (arg1[0xf] != *(ecx_1 + 0xa68))
            int32_t eax_12 = arg1[0xd]
            
            if (eax_12 == 1 || eax_12 == 2)
                return 0
            
            int32_t eax_13 = sub_425f20(arg1[0xf])
            
            if (sub_454240(eax_13) == 0)
                if (sub_454290(eax_13) != 0 && arg1[0xd] == 3)
                    return 0
            else if (arg1[0xd] == 3)
                return 0
            
            void* eax_16 = sub_452b90(arg1[0xf])
            eax = arg1[0xd]
            
            if (eax == 4 || eax == 5)
                eax = sub_478020(arg1[0xf])
                
                if (eax.b == 0)
                    goto label_45456a
                
                int32_t eax_17 = sub_454390(arg1)
                
                if (*(eax_16 + (arg1[0xd] << 2) + 0x29c) != eax_17)
                    return 5
            else
            label_45456a:
                int32_t edx_2 = arg1[0xd]
                
                if (edx_2 != 3)
                    if (edx_2 != 4 && edx_2 != 5)
                        var_10 = "TileGetSize"
                        var_14 = 0x95a
                        var_18 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                        ecx_2 = "Halt"
                        goto label_4545da
                    
                    if (sub_454330(eax_16, edx_2) != arg1)
                        return 5
                    
                    eax_11 = sub_4542f0(arg1, 3)
                label_4545b0:
                    
                    if (eax_11 != 0)
                        return 0
                    
                    return 4
                
                if (sub_46be80(arg1) == 0)
                    return 6
        else
            if ((edi == 1 && arg1[0x36] == 3) || (edx_1 == 1 && arg1[0x77] == 3)
                    || (arg1[0x1aa] != 0 && arg1[0xb8] == 3))
                return 0
            
            if (sub_4542f0(arg1, 4) != 0)
                return 0
            
            if (sub_4542f0(arg1, 1) != 0)
                return 0
            
            if (sub_4542f0(arg1, 2) != 0)
                return 0
            
            int32_t eax_8 = arg1[0xd]
            
            if (eax_8 != 3)
                if (eax_8 != 4 && eax_8 != 5)
                    return 0
                
                eax_11 = sub_46bc10(arg1)
                goto label_4545b0
            
            if (sub_41fea0() == 0)
                return 0
    else
        int32_t eax_2 = *arg1[0xc]
        
        if (eax_2 == 0 || eax_2 == 1)
            return 3
    
    return 1
}
