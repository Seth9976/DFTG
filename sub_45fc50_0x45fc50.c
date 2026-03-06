// 函数名称: sub_45fc50
// 虚拟地址: 0x45fc50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_45fc50(int32_t arg1, int32_t arg2, void* arg3, int64_t* arg4)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    int32_t eax = var_14
    void* const edx = &data_5ed30c
    void* var_10 = arg3
    int32_t result = 0
    void* const var_8 = &data_5ed30c
    int32_t var_c = eax
    
    while (true)
        int32_t ecx = *(arg3 + 0x2c4)
        int32_t* esi_1
        
        if (ecx == 0)
            esi_1 = nullptr
        else
            edx = var_8
            esi_1 = sub_452c30(ecx)
            eax = esi_1[0xa]
            var_c = eax
        
        int32_t ebx_1 = eax
        int32_t var_18
        int64_t* eax_2 = sub_4538b0(&var_18)
        
        if (esi_1 != var_18)
            while (true)
                int32_t var_2c
                char const* const var_28_2
                char* ecx_5
                
                if (esi_1 == 0)
                    var_28_2 = "Dice::DiceIt::operator *"
                    var_2c = 0x5da
                    ecx_5 = &data_5e3f90
                else
                    eax_2 = sub_452cc0(esi_1[7])
                    
                    if (*eax_2 != 0)
                        var_28_2 = "TileGetColorWorld"
                        var_2c = 0x38f5
                        ecx_5 = "tile.type == ROLLGFX_TILE"
                    else
                        int32_t* eax_3 = eax_2[6].d
                        int32_t ecx_3
                        
                        if (*eax_3 != 1)
                            ecx_3 = eax_2[7].d
                        
                        if (*eax_3 == 1 || ecx_3 == 2 || ecx_3 == 4)
                            eax_2 = eax_3[6]
                        else
                            eax_2 = eax_3[0xc]
                        
                        if (eax_2 == 0)
                            eax_2 = 7
                        else if (eax_2 == 1)
                            eax_2 = 7
                        
                        edx = var_8
                        
                        if (eax_2 == *edx)
                            eax_2 = arg4
                            *(eax_2 + (result << 2)) = esi_1
                            result += 1
                        
                        if (ebx_1 != 0)
                            eax_2 = sub_452c30(ebx_1)
                            edx = var_8
                            esi_1 = eax_2
                            ebx_1 = esi_1[0xa]
                        else
                            esi_1 = nullptr
                        
                        if (esi_1 == var_18)
                            break
                        
                        continue
                
                sub_489550(eax_2, &data_5b2591, ecx_5, 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_2c, var_28_2)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
        
        edx += 4
        var_8 = edx
        
        if (edx s>= &data_5ed31c)
            break
        
        eax = var_c
        arg3 = var_10
    
    return result
}
