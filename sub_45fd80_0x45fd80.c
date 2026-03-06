// 函数名称: sub_45fd80
// 虚拟地址: 0x45fd80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_45fd80(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = arg1
    void* var_158 = esi
    int32_t ecx = *(esi + 0x2e8)
    uint32_t result_1
    uint32_t result_15
    int32_t* i_1
    
    if (ecx == 0)
        result_15 = result_1
        i_1 = nullptr
    else
        i_1 = sub_452c30(ecx)
        result_15 = i_1[0xa]
    
    uint32_t result_22 = result_15
    int32_t var_168
    sub_4538b0(&var_168)
    int32_t ebx = var_168
    int32_t var_184_4
    char const* const var_180_9
    uint32_t result
    char* ecx_17
    int32_t var_160
    
    if (i_1 == ebx)
    label_45feb8:
        int32_t ecx_5 = *(esi + 0x2e8)
        uint32_t result_16
        int32_t* edi
        
        if (ecx_5 == 0)
            result_16 = result_1
            edi = nullptr
        else
            edi = sub_452c30(ecx_5)
            result_16 = edi[0xa]
        
        uint32_t result_23 = result_16
        sub_4538b0(&var_168)
        int32_t ebx_1 = var_168
        
        if (edi != ebx_1)
            result = result_1
            uint32_t result_3 = result
            
            while (true)
                if (edi == 0)
                    goto label_46039d
                
                if (edi[2] == 7)
                    int32_t ecx_6 = *(esi + 0x2c4)
                    int32_t* result_10
                    
                    if (ecx_6 == 0)
                        result_10 = nullptr
                    else
                        result_10 = sub_452c30(ecx_6)
                        result = result_10[0xa]
                        result_3 = result
                    
                    uint32_t result_7 = result
                    result = sub_4538b0(&var_160)
                    
                    if (result_10 == var_160)
                    label_45ff76:
                        esi = var_158
                    else
                        while (true)
                            if (result_10 == 0)
                                goto label_46039d
                            
                            result = sub_45fbd0(edi, result_10)
                            
                            if (result == 3)
                                esi = var_158
                                sub_468190(result, edi, esi, result_10, arg2)
                                break
                            
                            if (result_7 != 0)
                                result = sub_452c30(result_7)
                                result_10 = result
                                result_7 = result_10[0xa]
                            else
                                result_10 = nullptr
                            
                            if (result_10 == var_160)
                                goto label_45ff76
                    
                    result_16 = result_23
                    ebx_1 = var_168
                
                if (result_16 != 0)
                    edi = sub_452c30(result_16)
                    result_16 = edi[0xa]
                    result_23 = result_16
                else
                    edi = nullptr
                
                if (edi == ebx_1)
                    break
                
                result = result_3
        
        int32_t ecx_10 = *(esi + 0x2e8)
        uint32_t result_17
        int32_t* result_13
        
        if (ecx_10 == 0)
            result_17 = result_1
            result_13 = nullptr
        else
            result_13 = sub_452c30(ecx_10)
            result_17 = result_13[0xa]
        
        uint32_t result_24 = result_17
        result = sub_4538b0(&var_168)
        int32_t ebx_2 = var_168
        
        if (result_13 != ebx_2)
            uint32_t result_19 = result_1
            uint32_t result_20 = result_19
            
            while (true)
                if (result_13 == 0)
                    goto label_46039d
                
                result = result_13[2]
                
                if (result != 7 && result != 1 && result != 2 && result != 0xa && result != 9)
                    int32_t ecx_11 = *(esi + 0x2c4)
                    int32_t* result_11
                    
                    if (ecx_11 == 0)
                        result_11 = nullptr
                    else
                        result_11 = sub_452c30(ecx_11)
                        result_19 = result_11[0xa]
                        result_20 = result_19
                    
                    uint32_t result_27 = result_19
                    result = sub_4538b0(&var_160)
                    
                    if (result_11 == var_160)
                    label_4600ff:
                        esi = var_158
                    else
                        while (true)
                            if (result_11 == 0)
                                goto label_46039d
                            
                            result = sub_45b560(result_11)
                            
                            if (*result_13 != 1)
                                var_180_9 = "DieGetColor"
                                var_184_4 = 0x3d3f
                                ecx_17 = "die.type == ROLLGFX_DIE"
                                goto label_4603b6
                            
                            int32_t edx_5 = result_13[2] - 1
                            
                            if (*result != 0)
                                var_180_9 = "TileGetColorWorld"
                                var_184_4 = 0x38f5
                                ecx_17 = "tile.type == ROLLGFX_TILE"
                                goto label_4603b6
                            
                            int32_t* eax_10 = *(result + 0x30)
                            int32_t ecx_14
                            
                            if (*eax_10 != 1)
                                ecx_14 = *(result + 0x38)
                            
                            if (*eax_10 == 1 || ecx_14 == 2 || ecx_14 == 4)
                                result = eax_10[6]
                            else
                                result = eax_10[0xc]
                            
                            if (result == 0)
                                result = 7
                            else if (result == 1)
                                result = 7
                            
                            if (edx_5 == result || edx_5 == 6)
                                esi = var_158
                                result = sub_468190(result, result_13, esi, result_11, arg2)
                                break
                            
                            if (result_27 != 0)
                                result = sub_452c30(result_27)
                                result_11 = result
                                result_27 = result_11[0xa]
                            else
                                result_11 = nullptr
                            
                            if (result_11 == var_160)
                                goto label_4600ff
                            
                            continue
                    
                    result_17 = result_24
                    ebx_2 = var_168
                
                if (result_17 != 0)
                    result = sub_452c30(result_17)
                    result_13 = result
                    result_17 = result_13[0xa]
                    result_24 = result_17
                else
                    result_13 = nullptr
                
                if (result_13 == ebx_2)
                    break
                
                result_19 = result_20
        
        uint32_t result_14 = result_1
        uint32_t esi_1 = 0
        void* const edi_1 = &data_5ed31c
        uint32_t result_21 = result_14
        int32_t var_14c[0x28]
        int64_t* result_5
        uint32_t result_26
        
        while (true)
            int32_t ecx_19 = *(var_158 + 0x2e8)
            
            if (ecx_19 == 0)
                result_5 = nullptr
            else
                result_5 = sub_452c30(ecx_19)
                result_14 = result_5[5].d
                result_21 = result_14
            
            result_26 = result_14
            result = sub_4538b0(&var_160)
            int32_t ebx_3 = var_160
            
            while (result_5 != ebx_3)
                if (result_5 == 0)
                    goto label_46039d
                
                result = result_5[1].d
                
                if (result == *edi_1)
                    var_14c[esi_1] = result_5
                    esi_1 += 1
                
                if (result_26 != 0)
                    result = sub_452c30(result_26)
                    result_5 = result
                    result_26 = result_5[5].d
                else
                    result_5 = nullptr
            
            edi_1 += 4
            
            if (edi_1 s>= 0x5ed340)
                break
            
            result_14 = result_21
        
        int32_t var_ac[0x29]
        int32_t (* var_180_11)[0x29] = &var_ac
        uint32_t eax_13 = sub_45fc50(&var_ac, result_26, var_158, result_5)
        uint32_t edi_2 = eax_13
        
        if (esi_1 s< edi_2)
            edi_2 = esi_1
        
        int32_t esi_2 = 0
        
        if (edi_2 s> 0)
            do
                eax_13 = sub_468190(eax_13, var_14c[esi_2], var_158, var_ac[esi_2], arg2)
                esi_2 += 1
            while (esi_2 s< edi_2)
        
        int32_t ecx_23 = *(var_158 + 0x2e8)
        uint32_t result_18
        int32_t* i
        
        if (ecx_23 == 0)
            result_18 = result_1
            i = nullptr
        else
            i = sub_452c30(ecx_23)
            result_18 = i[0xa]
        
        uint32_t result_25 = result_18
        result = sub_4538b0(&var_168)
        int32_t ebx_5 = var_168
        
        if (i == ebx_5)
        label_46038c:
            data_632a50.o = data_60c6d0
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        result = result_1
        uint32_t result_4 = result
        
        while (i != 0)
            if (i[2] == 7)
                int32_t ecx_25 = *(var_158 + 0x2c4)
                int32_t* result_12
                
                if (ecx_25 == 0)
                    result_12 = nullptr
                else
                    result_12 = sub_452c30(ecx_25)
                    result = result_12[0xa]
                    result_4 = result
                
                uint32_t result_8 = result
                result = sub_4538b0(&var_160)
                
                while (result_12 != var_160)
                    if (result_12 == 0)
                        goto label_46039d
                    
                    result = sub_45fbd0(i, result_12)
                    
                    if (result == 2)
                        result = sub_468190(result, i, var_158, result_12, arg2)
                        break
                    
                    if (result_8 != 0)
                        result = sub_452c30(result_8)
                        result_12 = result
                        result_8 = result_12[0xa]
                    else
                        result_12 = nullptr
                
                result_18 = result_25
                ebx_5 = var_168
            
            if (result_18 != 0)
                result = sub_452c30(result_18)
                i = result
                result_18 = i[0xa]
                result_25 = result_18
            else
                i = nullptr
            
            if (i == ebx_5)
                goto label_46038c
            
            result = result_4
    else
        result = result_1
        uint32_t result_2 = result
        
        while (i_1 != 0)
            if (i_1[2] != 7)
                int32_t ecx_1 = *(esi + 0x2c4)
                int32_t* result_9
                
                if (ecx_1 == 0)
                    result_9 = nullptr
                else
                    result_9 = sub_452c30(ecx_1)
                    result = result_9[0xa]
                    result_2 = result
                
                uint32_t result_6 = result
                result = sub_4538b0(&var_160)
                
                if (result_9 == var_160)
                label_45fe64:
                    esi = var_158
                else
                    while (true)
                        if (result_9 == 0)
                            goto label_46039d
                        
                        result = sub_45fbd0(i_1, result_9)
                        
                        if (result == 3)
                            esi = var_158
                            sub_468190(result, i_1, esi, result_9, arg2)
                            break
                        
                        if (result_6 != 0)
                            result = sub_452c30(result_6)
                            result_9 = result
                            result_6 = result_9[0xa]
                        else
                            result_9 = nullptr
                        
                        if (result_9 == var_160)
                            goto label_45fe64
                
                result_15 = result_22
                ebx = var_168
            
            if (result_15 != 0)
                i_1 = sub_452c30(result_15)
                result_15 = i_1[0xa]
                result_22 = result_15
            else
                i_1 = nullptr
            
            if (i_1 == ebx)
                goto label_45feb8
            
            result = result_2
    label_46039d:
    var_180_9 = "Dice::DiceIt::operator *"
    var_184_4 = 0x5da
    ecx_17 = &data_5e3f90
    label_4603b6:
    sub_489550(result, &data_5b2591, ecx_17, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        var_184_4, var_180_9)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
