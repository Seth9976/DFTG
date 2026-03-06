// 函数名称: sub_45eb20
// 虚拟地址: 0x45eb20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_45eb20(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* var_8 = ebx
    int32_t eax = ebx[0x200]
    
    if (eax == 0)
        int32_t* eax_1 = sub_457200(*ebx, ebx[0x201])
        sub_45a830(eax_1, eax_1, ebx, 9, false, 0, 5, 1, 0)
        int32_t ecx_2 = *ebx
        ebx[0x201] = 0
        ebx[1] = 8
        void* eax_2 = sub_452b90(ecx_2)
        *(eax_2 + 0x10) = 0x64
        *(eax_2 + 0x14) = 1
        return eax_2
    
    int32_t var_c = 0
    char const* const var_38
    int32_t var_34_1
    char const* const var_30_2
    int32_t* eax_4
    char* ecx_22
    uint32_t var_14
    
    if (eax s<= 0)
    label_45ece2:
        ebx[0x200] = 0
        int32_t esi_7 = 0
        int32_t i = ebx[0xab]
        int32_t var_10_2 = 0
        
        if (i != 0)
            do
                esi_7 += 1
                i = *(sub_452de0(i) + 0x10)
            while (i != 0)
            
            var_10_2 = esi_7
        
        int32_t i_1 = ebx[0xac]
        int32_t esi_8 = 0
        int32_t var_c_1 = 0
        
        if (i_1 != 0)
            do
                esi_8 += 1
                i_1 = *(sub_452de0(i_1) + 0x10)
            while (i_1 != 0)
            
            var_c_1 = esi_8
        
        var_14 = 0
        eax_4 = sub_481430(&data_62d6c4, &var_14)
        int32_t* edx_4 = var_14
        
        if (edx_4 == 0xffffffff)
        label_45ee87:
            ebx[0xa9] = 0
            return eax_4
        
        while (true)
            if (*edx_4 == 0)
                void* ecx_19 = data_6cfe4c
                
                if (ecx_19 == 0)
                    break
                
                if (edx_4[0xf] == *(ecx_19 + 0xa68))
                    int32_t edi_2 = edx_4[0xd]
                    
                    if (edi_2 == 4 || edi_2 == 5)
                        int32_t ebx_2 = edx_4[0x11]
                        int32_t ecx_20 = data_632804
                        int32_t eax_21 = ebx_2 * 3
                        eax_4 = zx.d(*(ecx_20 + (eax_21 << 2) + 0x8c9))
                        
                        if (eax_4 != 3 && eax_4 != 4)
                            var_30_2 = "GetGameSlot"
                            var_34_1 = 0x3731
                            var_38 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                            ecx_22 = "where == 3 || where == 4"
                            goto label_45eeee
                        
                        int32_t esi_10 = 0
                        eax_4 += sx.d(*(ecx_20 + (eax_21 << 2) + 0x8c8)) * 0x6f
                        int32_t ecx_21 = *(ecx_20 + (eax_4 << 2) + 0x168)
                        
                        while (true)
                            if (ecx_21 == 0xffffffff)
                                var_30_2 = "GetGameSlot"
                                var_34_1 = 0x3741
                                var_38 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                                ecx_22 = "Halt"
                                goto label_45eeee
                            
                            if (ecx_21 == ebx_2)
                                break
                            
                            eax_4 = ecx_21 * 3
                            esi_10 += 1
                            ecx_21 = sx.d(*(data_632804 + (eax_4 << 2) + 0x8ca))
                            edx_4 = var_14
                        
                        void* ecx_24 = var_10_2 - esi_10
                        void* eax_24 = var_c_1 - esi_10
                        
                        if (edi_2 == 4)
                            eax_24 = ecx_24
                        
                        eax_4 = eax_24 - 1
                        
                        if (eax_24 - 1 s< 0)
                            var_30_2 = "ExecUndoDiscards"
                            var_34_1 = 0x377b
                            var_38 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                            ecx_22 = "slot >= 0"
                            goto label_45eeee
                        
                        ebx = var_8
                        void* var_30_3 = ecx_24
                        sub_4553d0(eax_4, edx_4, ebx, edi_2, 5, eax_4)
            
            eax_4 = sub_481430(&data_62d6c4, &var_14)
            edx_4 = var_14
            
            if (edx_4 == 0xffffffff)
                goto label_45ee87
    else
        void* ecx_3 = &ebx[0x19c]
        void* var_10_1 = ecx_3
        
        while (true)
            int32_t ebx_1 = *ecx_3
            uint32_t esi_1 = zx.d(*(ebx_1 * 0xc + data_632804 + 0x8cb))
            var_14 = esi_1
            eax_4 = sub_4570b0(ebx_1)
            int32_t* edi_1 = eax_4
            
            if (edi_1 != 0)
                void* ecx_7 = data_6cfe4c
                int32_t esi_3 = neg.d(esi_1 - 1)
                int32_t esi_5 = sbb.d(esi_3, esi_3, esi_1 != 1) + 5
                edi_1[0xd] = esi_5
                
                if (ecx_7 == 0)
                    break
                
                edi_1[0xf] = *(ecx_7 + 0xa68)
                edi_1[0xe] = var_14
                int32_t ecx_8
                
                if (esi_5 == 4)
                    ecx_8 = 0x174
                else
                    eax_4 = esi_5 - 5
                    
                    if (esi_5 != 5)
                        var_30_2 = "GetGamePrev"
                        var_34_1 = 0x370e
                        var_38 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                        ecx_22 = "Halt"
                        goto label_45eeee
                    
                    ecx_8 = 0x178
                
                int32_t ecx_9 = data_632804
                int32_t edx_3 = *(*var_8 * 0x1bc + ecx_8 + ecx_9)
                int32_t eax_14
                
                if (edx_3 == ebx_1)
                    eax_14 = 0
                else
                    int32_t ecx_10
                    
                    do
                        ecx_10 = edx_3
                        edx_3 = sx.d(*(ecx_9 + edx_3 * 0xc + 0x8ca))
                    while (edx_3 != ebx_1)
                    
                    if (ecx_10 == 0xffffffff)
                        eax_14 = 0
                    else
                        eax_14 = sub_454390(sub_4571c0())
                
                edi_1[0x10] = eax_14
                eax_4 = data_632804
                int32_t ecx_13 = sx.d(*(&eax_4[ebx_1 * 3] + 0x8ca))
                
                if (ecx_13 == 0xffffffff)
                label_45ecad:
                    
                    if (*edi_1 != 0)
                    label_45ee14:
                        var_30_2 = "GetRollT"
                        var_34_1 = 0x8fb
                        var_38 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                        ecx_22 = "gfx.type == ROLLGFX_TILE"
                        goto label_45eeee
                    
                    ebx = var_8
                    ebx[esi_5 + 0xa7] = edi_1[0x22a]
                label_45eccc:
                    int32_t eax_17 = var_c + 1
                    ecx_3 = var_10_1 + 4
                    var_c = eax_17
                    var_10_1 = ecx_3
                    
                    if (eax_17 s>= ebx[0x200])
                        goto label_45ece2
                    
                    continue
                else
                    eax_4 = sub_4570b0(ecx_13)
                    
                    if (eax_4 != 0)
                        if (*eax_4 != 0)
                            goto label_45ee14
                        
                        int32_t ecx_14 = eax_4[0x22a]
                        
                        if (ecx_14 == 0)
                            goto label_45ecad
                        
                        eax_4 = sub_452cc0(ecx_14)
                        
                        if (*edi_1 != 0)
                            goto label_45ee14
                        
                        ebx = var_8
                        eax_4[0x10] = edi_1[0x22a]
                        goto label_45eccc
            
            var_30_2 = "LookupTile"
            var_34_1 = 0x1138
            var_38 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx_22 = "tile"
            goto label_45eeee
    var_30_2 = "GetClient"
    var_34_1 = 0x75
    ecx_22 = "gClient"
    var_38 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
    label_45eeee:
    sub_489550(eax_4, &data_5b2591, ecx_22, var_38, var_34_1, var_30_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
