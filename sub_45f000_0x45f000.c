// 函数名称: sub_45f000
// 虚拟地址: 0x45f000
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_45f000(int64_t* arg1, void* arg2)
{
    // 第一条实际指令: int64_t* eax = arg1
    int64_t* eax = arg1
    int64_t* var_c = eax
    char const* const var_30
    int32_t var_2c
    char const* const var_28_5
    char* ecx
    
    if (*arg2 == 1)
        int32_t ecx_1 = *(eax + 0x2c4)
        int32_t edi_2 = *(arg2 + 8) - 1
        int64_t* var_10
        int64_t* ebx_1
        int32_t* esi_1
        
        if (ecx_1 == 0)
            ebx_1 = var_10
            esi_1 = nullptr
        else
            esi_1 = sub_452c30(ecx_1)
            ebx_1 = esi_1[0xa]
        
        int32_t var_14
        eax = sub_4538b0(&var_14)
        
        if (esi_1 != var_14)
            while (true)
                if (esi_1 == 0)
                label_45f400:
                    var_28_5 = "Dice::DiceIt::operator *"
                    ecx = &data_5e3f90
                    var_2c = 0x5da
                    goto label_45f40f
                
                if (*esi_1 != 1)
                    goto label_45f013
                
                int32_t edx = esi_1[7]
                int32_t edi_4 = esi_1[2] - 1
                
                if (edx == 0)
                label_45f100:
                    var_28_5 = "DataArray<struct RollGfx>::DataArrayGet"
                    var_2c = 0x6c
                    var_30 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                    ecx = "id != DATAID_NULL"
                    goto label_45f419
                
                eax = zx.d(edx.w)
                
                if (eax u< data_62d6c8)
                    int32_t* ecx_3 = eax * 0x8ac + data_62d6c4
                    
                    if (ecx_3[0x22a] == edx)
                        eax = sub_4616b0(ecx_3)
                        
                        if ((edi_2 == eax || edi_2 == 6) && (edi_4 == eax || edi_4 == 6))
                            return esi_1
                        
                        if (ebx_1 != 0)
                            eax = sub_452c30(ebx_1)
                            esi_1 = eax
                            ebx_1 = esi_1[0xa]
                        else
                            esi_1 = nullptr
                        
                        if (esi_1 == var_14)
                            break
                        
                        continue
                
            label_45f0ea:
                var_28_5 = "DataArray<struct RollGfx>::DataArrayGet"
                var_2c = 0x6d
                var_30 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                ecx = "DataArrayTryToGet(id) != NULL"
                goto label_45f419
        
        int32_t ecx_7 = *(var_c + 0x2c4)
        int64_t* eax_3
        int32_t* ecx_8
        
        if (ecx_7 == 0)
            eax_3 = var_10
            ecx_8 = nullptr
        else
            ecx_8 = sub_452c30(ecx_7)
            eax_3 = ecx_8[0xa]
        
        int64_t* var_8_2 = eax_3
        eax = sub_4538b0(&var_14)
        int32_t ebx_2 = data_62d6c4
        
        if (ecx_8 == var_14)
        label_45f1dd:
            int32_t ecx_10 = *(var_c + 0x2c4)
            int64_t* eax_9
            
            if (ecx_10 == 0)
                eax_9 = var_10
                ecx_8 = nullptr
            else
                int32_t* eax_8 = sub_452c30(ecx_10)
                ebx_2 = data_62d6c4
                ecx_8 = eax_8
                eax_9 = ecx_8[0xa]
            
            int64_t* var_8_3 = eax_9
            eax = sub_4538b0(&var_14)
            
            if (ecx_8 == var_14)
            label_45f2f4:
                int32_t edi_7 = 0xffffffff
                int64_t* var_8_4 = nullptr
                int32_t ecx_12 = *(var_c + 0x2c4)
                int64_t* eax_15
                int64_t* ecx_13
                
                if (ecx_12 == 0)
                    eax_15 = var_10
                    ecx_13 = nullptr
                else
                    int64_t* eax_14 = sub_452c30(ecx_12)
                    ebx_2 = data_62d6c4
                    ecx_13 = eax_14
                    eax_15 = ecx_13[5].d
                
                int64_t* var_c_1 = eax_15
                eax = sub_4538b0(&var_14)
                
                if (ecx_13 == var_14)
                    return 0
                
                while (true)
                    if (ecx_13 == 0)
                        goto label_45f400
                    
                    int32_t edx_7 = *(ecx_13 + 0x1c)
                    
                    if (edx_7 == 0)
                        goto label_45f100
                    
                    uint32_t esi_4 = zx.d(edx_7.w)
                    
                    if (esi_4 u>= data_62d6c8)
                        goto label_45f0ea
                    
                    eax = esi_4 * 0x8ac
                    
                    if (*(eax + ebx_2 + 0x8a8) != edx_7)
                        goto label_45f0ea
                    
                    eax = esi_4 * 0x8ac
                    
                    if (*(eax + ebx_2) != 0)
                        break
                    
                    int32_t* edx_8 = *(eax + ebx_2 + 0x30)
                    int32_t eax_16
                    
                    if (*edx_8 != 1)
                        eax_16 = *(eax + ebx_2 + 0x38)
                    
                    int32_t eax_17
                    
                    if (*edx_8 == 1 || eax_16 == 0 || eax_16 == 2 || eax_16 == 4)
                        eax_17 = edx_8[6]
                    else
                        eax_17 = edx_8[0xc]
                    
                    if (eax_17 == 0)
                        eax_17 = 7
                    else if (eax_17 == 1)
                        eax_17 = 7
                    
                    int32_t esi_5 = eax_17
                    
                    if (eax_17 s<= edi_7)
                        ecx_13 = var_8_4
                    
                    if (eax_17 s<= edi_7)
                        esi_5 = edi_7
                    
                    eax = ecx_13
                    var_8_4 = eax
                    
                    if (var_c_1 != 0)
                        int64_t* eax_18 = sub_452c30(var_c_1)
                        ebx_2 = data_62d6c4
                        ecx_13 = eax_18
                        var_c_1 = ecx_13[5].d
                        eax = var_8_4
                    else
                        ecx_13 = nullptr
                    
                    edi_7 = esi_5
                    
                    if (ecx_13 == var_14)
                        return eax
            else
                while (true)
                    if (ecx_8 == 0)
                        goto label_45f400
                    
                    if (*ecx_8 != 1)
                        goto label_45f013
                    
                    int32_t edx_4 = ecx_8[7]
                    int32_t edi_6 = ecx_8[2] - 1
                    
                    if (edx_4 == 0)
                        goto label_45f100
                    
                    uint32_t esi_3 = zx.d(edx_4.w)
                    
                    if (esi_3 u>= data_62d6c8)
                        goto label_45f0ea
                    
                    eax = esi_3 * 0x8ac
                    
                    if (*(eax + ebx_2 + 0x8a8) != edx_4)
                        goto label_45f0ea
                    
                    eax = esi_3 * 0x8ac
                    
                    if (*(eax + ebx_2) != 0)
                        break
                    
                    int32_t* edx_5 = *(eax + ebx_2 + 0x30)
                    int32_t eax_11
                    
                    if (*edx_5 != 1)
                        eax_11 = *(eax + ebx_2 + 0x38)
                    
                    if (*edx_5 == 1 || eax_11 == 0 || eax_11 == 2 || eax_11 == 4)
                        eax = edx_5[6]
                    else
                        eax = edx_5[0xc]
                    
                    if (eax == 0)
                        eax = 7
                    else if (eax == 1)
                        eax = 7
                    
                    if (edi_6 == eax)
                        return ecx_8
                    
                    if (edi_6 == 6)
                        return ecx_8
                    
                    if (var_8_3 != 0)
                        int32_t* eax_12 = sub_452c30(var_8_3)
                        ebx_2 = data_62d6c4
                        ecx_8 = eax_12
                        eax = ecx_8[0xa]
                        var_8_3 = eax
                    else
                        ecx_8 = nullptr
                    
                    if (ecx_8 == var_14)
                        goto label_45f2f4
        else
            while (true)
                if (ecx_8 == 0)
                    goto label_45f400
                
                int32_t edx_1 = ecx_8[7]
                
                if (edx_1 == 0)
                    goto label_45f100
                
                uint32_t esi_2 = zx.d(edx_1.w)
                
                if (esi_2 u>= data_62d6c8)
                    goto label_45f0ea
                
                eax = esi_2 * 0x8ac
                
                if (*(eax + ebx_2 + 0x8a8) != edx_1)
                    goto label_45f0ea
                
                eax = esi_2 * 0x8ac
                
                if (*(eax + ebx_2) != 0)
                    break
                
                int32_t* edx_2 = *(eax + ebx_2 + 0x30)
                int32_t eax_5
                
                if (*edx_2 != 1)
                    eax_5 = *(eax + ebx_2 + 0x38)
                
                if (*edx_2 == 1 || eax_5 == 0 || eax_5 == 2 || eax_5 == 4)
                    eax = edx_2[6]
                else
                    eax = edx_2[0xc]
                
                if (eax == 0)
                    eax = 7
                else if (eax == 1)
                    eax = 7
                
                if (edi_2 == eax || edi_2 == 6)
                    return ecx_8
                
                if (var_8_2 != 0)
                    int32_t* eax_6 = sub_452c30(var_8_2)
                    ebx_2 = data_62d6c4
                    ecx_8 = eax_6
                    eax = ecx_8[0xa]
                    var_8_2 = eax
                else
                    ecx_8 = nullptr
                
                if (ecx_8 == var_14)
                    goto label_45f1dd
        
        var_28_5 = "TileGetColor"
        var_2c = 0x3d27
        ecx = "tile.type == ROLLGFX_TILE"
    else
    label_45f013:
        var_28_5 = "DieGetColor"
        var_2c = 0x3d3f
        ecx = "die.type == ROLLGFX_DIE"
    
    label_45f40f:
    var_30 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    label_45f419:
    sub_489550(eax, &data_5b2591, ecx, var_30, var_2c, var_28_5)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
