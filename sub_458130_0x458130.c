// 函数名称: sub_458130
// 虚拟地址: 0x458130
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_458130(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    char var_6 = 0
    int32_t* eax_1 = arg1 + 0x2d4
    char var_5 = 0
    int32_t var_c = 0
    int32_t esi = 8
    *(arg2 + 0x3c0) = 0
    int32_t* var_24
    int32_t* edx
    int32_t ebx
    
    while (true)
        int32_t ecx = *eax_1
        
        if (ecx != 0)
            edx = sub_452c30(ecx)
            ebx = edx[0xa]
            var_24 = edx[4]
            break
        
        esi += 1
        eax_1 = &eax_1[1]
        
        if (esi s> 0xd)
            int32_t var_20
            ebx = var_20
            edx = nullptr
            break
    
    int32_t* var_28
    var_28.q = edx.q
    int32_t var_34
    int32_t* eax_3 = sub_458110(&var_34)
    
    if (edx != var_34)
        eax_3 = var_24
        int32_t* esi_1 = var_28
        int32_t* var_10_1 = eax_3
        
        while (true)
            int32_t var_4c
            char const* const var_48_1
            char* ecx_12
            
            if (esi_1 == 0)
                var_48_1 = "DiceAssigning::DiceIt::operator *"
                var_4c = 0x17e8
                ecx_12 = &data_5e3f90
            else
                void* ecx_2 = *(arg2 + 0x3c0)
                void* edi_1 = arg2 + ecx_2 * 0x18
                eax_3 = ecx_2 + 1
                *(arg2 + 0x3c0) = eax_3
                *(edi_1 + 0x14) = 0
                *edi_1 = esi_1
                
                if (esi_1[3] s> 6)
                    var_48_1 = "GetSide"
                    var_4c = 0x150b
                    ecx_12 = "die.face <= 6"
                else
                    int32_t eax_5 = sub_457270(esi_1[2])
                    int32_t edx_2 = esi_1[4]
                    int32_t ecx_5 = *(eax_5 + (esi_1[3] << 2))
                    
                    if (edx_2 == 7)
                        *(edi_1 + 4) = 3
                        var_6 = 1
                        edi = var_c
                    else if (edx_2 != 8)
                        if (*(esi_1 + 0x21) == 0)
                            *(edi_1 + 8) = edx_2 - 8
                            int32_t edx_4
                            edx_4.b = sub_457310(ecx_5, edx_2 - 8) != 0
                            *(edi_1 + 4) = edx_4
                        else
                            *(edi_1 + 4) = 2
                            var_5 = 1
                            *(edi_1 + 8) = esi_1[4] - 8
                        
                        edi = var_c
                    else
                        *(edi_1 + 4) = 4
                        edi = var_c + 1
                        var_c = edi
                    
                    int32_t ecx_9
                    
                    if (ebx != 0)
                        ecx_9 = ebx
                    label_45828e:
                        esi_1 = sub_452c30(ecx_9)
                        eax_3 = esi_1[4]
                        ebx = esi_1[0xa]
                        var_10_1 = eax_3
                    else
                        eax_3 = sub_452b90(esi_1[6])
                        void* ecx_8 = var_10_1 + 1
                        
                        if (ecx_8 s<= 0xd)
                            eax_3 = &eax_3[ecx_8 + 0xad]
                            
                            while (true)
                                int32_t edx_5 = *eax_3
                                
                                if (edx_5 != 0)
                                    ecx_9 = edx_5
                                    break
                                
                                ecx_8 += 1
                                eax_3 = &eax_3[1]
                                
                                if (ecx_8 s> 0xd)
                                    goto label_45827f
                            
                            goto label_45828e
                        
                    label_45827f:
                        esi_1 = nullptr
                    
                    if (esi_1 == var_34)
                        break
                    
                    continue
            
            sub_489550(eax_3, &data_5b2591, ecx_12, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                var_4c, var_48_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    ebx.b = 0
    
    if (edi s> 1)
        eax_3 = sub_453300(eax_3, 0, arg1, 0x80, nullptr)
        ebx = 0
        
        if (eax_3.b == 0)
            ebx = 1
    
    sub_453300(eax_3, 0, arg1, 0x40, nullptr)
    int32_t result = 0
    result.b = var_5
    result:1.b = ebx.b
    result:2.b = var_6
    return result
}
