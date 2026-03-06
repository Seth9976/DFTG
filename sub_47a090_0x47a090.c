// 函数名称: sub_47a090
// 虚拟地址: 0x47a090
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_47a090(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t esi = arg8
    int32_t esi = arg8
    arg8 = esi
    int32_t eax_1 = arg5 - 2
    int32_t var_20
    char const* const ecx
    int32_t i
    int32_t edi_1
    
    if (arg5 != 2)
        int32_t temp1_1 = eax_1
        eax_1 -= 1
        
        if (temp1_1 != 1)
            int32_t temp3_1 = eax_1
            eax_1 -= 5
            
            if (temp3_1 == 5)
                edi_1 = arg6
                
                if (edi_1 == 1)
                    i = 4
                    goto label_47a1b0
                
                if (edi_1 == 4)
                    i = 5
                    goto label_47a1b0
                
                eax_1 = edi_1 - 8
                
                if (edi_1 == 8)
                    i = 3
                    goto label_47a1b0
                
                char const* const var_1c_1 = "RollLogPlacementPower"
                var_20 = 0x7c8f
                ecx = "Halt"
            else
                char const* const var_1c = "RollLogPlacementPower"
                var_20 = 0x7c93
                ecx = "Halt"
        else if (esi == 1)
            edi_1 = arg6
            arg8 = 0
            
            if (edi_1 == 1)
                goto label_47a1a7
            
            if (edi_1 == 2)
                goto label_47a1a0
            
            eax_1 = edi_1 - 0x40
            
            if (edi_1 == 0x40)
                goto label_47a1ab
            
            char const* const var_1c_3 = "RollLogPlacementPower"
            var_20 = 0x7c7f
            ecx = "Halt"
        else
            char const* const var_1c_2 = "RollLogPlacementPower"
            var_20 = 0x7c71
            ecx = "placementSide == TILE_SIDE_SETTLE"
    else if (esi == 0)
        edi_1 = arg6
        arg8 = 0
        
        if (edi_1 == 1)
        label_47a1ab:
            i = 1
        label_47a1b0:
            int32_t eax_11 = data_a755e8
            
            if (eax_11 != 0)
                void* eax_13 = eax_11 * 0x15e7c
                void* ecx_2 = arg3 * 0x4618
                void* ecx_3
                int32_t* esi_2
                
                if (esi != 0)
                    esi_2 = eax_13 + 0x70cd38 + ecx_2
                    ecx_3 = ecx_2 + 0x70b028
                else
                    esi_2 = eax_13 + 0x70afa4 + ecx_2
                    ecx_3 = ecx_2 + 0x709294
                
                int32_t* ecx_4 = ecx_3 + eax_13
                int32_t esi_4 = *esi_2
                int32_t eax_14 = 0
                int32_t* var_8 = ecx_4
                
                if (esi_4 s<= 0)
                label_47a243:
                    ecx_4 = esi_4 * 0xf8 + var_8
                    *esi_2 = esi_4 + 1
                    *ecx_4 = arg2
                    ecx_4[0x3d] = 0
                else
                    while (*ecx_4 != arg2)
                        eax_14 += 1
                        ecx_4 = &ecx_4[0x3e]
                        
                        if (eax_14 s>= esi_4)
                            goto label_47a243
                
                int32_t ebx_1 = ecx_4[0x3d]
                void* esi_6 = &ecx_4[1]
                int32_t eax_16 = 0
                
                if (ebx_1 s<= 0)
                label_47a279:
                    esi_6 = ebx_1 * 0x28 + 4 + ecx_4
                    eax_16 = ebx_1 + 1
                    ecx_4[0x3d] = eax_16
                    *esi_6 = i
                    *(esi_6 + 0x10) = 0
                    *(esi_6 + 4) = 0
                else
                    while (*esi_6 != i)
                        eax_16 += 1
                        esi_6 += 0x28
                        
                        if (eax_16 s>= ebx_1)
                            goto label_47a279
                
                sub_481890(eax_16, esi_6 + 0x10, esi_6 + 8, arg4)
                
                if (arg5 == 8)
                    if (edi_1 == 4)
                        *(esi_6 + (*(esi_6 + 0x20) << 2) + 0x18) = arg7
                        *(esi_6 + 0x20) += 1
                        *(esi_6 + 0x24) = arg8
                        return arg8
                    
                    if (edi_1 == 1)
                        *(esi_6 + 0x14) = arg7
                        *(esi_6 + 0x24) = arg8
                        return arg8
                
                *(esi_6 + 4) += arg7
                *(esi_6 + 0x24) = arg8
                return arg8
            
            eax_1 = arg3 * 5
            
            if (arg5 == 8 && edi_1 == 4)
                *((eax_1 << 3) + &data_a75520 + (*((eax_1 << 3) + 0xa75544) << 2) + 0x18) = arg7
                *((eax_1 << 3) + 0xa75544) += 1
                return arg7
            
            char const* const var_1c_7 = "RollLogPlacementPower"
            var_20 = 0x7c99
            ecx = "powerPhase == PHASE_IMMEDIATE && powerCode == P8_GAIN_DIE"
        else
            if (edi_1 == 2)
            label_47a1a7:
                i = 0
                goto label_47a1b0
            
            eax_1 = edi_1 - 4
            
            if (edi_1 == 4)
            label_47a1a0:
                i = 2
                goto label_47a1b0
            
            char const* const var_1c_5 = "RollLogPlacementPower"
            var_20 = 0x7c6d
            ecx = "Halt"
    else
        char const* const var_1c_4 = "RollLogPlacementPower"
        var_20 = 0x7c5f
        ecx = "placementSide == TILE_SIDE_DEV"
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_20, 
        "RollLogPlacementPower")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
