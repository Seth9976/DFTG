// 函数名称: sub_477a10
// 虚拟地址: 0x477a10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_477a10(int32_t arg1)
{
    // 第一条实际指令: void var_244
    void var_244
    int32_t eax_1 = __security_cookie ^ &var_244
    uint32_t result = sub_425e70()
    int32_t ebx = 0
    uint32_t result_1 = result
    int32_t var_22c = 0
    
    if (result s> 0)
        int32_t var_214
        int32_t esi_1 = var_214
        int32_t* edi_1 = &data_62d6e0
        int32_t* var_23c_1 = &data_62d6e0
        int32_t var_228_1 = esi_1
        int32_t var_20c
        int32_t var_230_1 = var_20c
        
        while (true)
            int32_t var_258_7
            char const* const var_254_9
            char* ecx_20
            
            if (edi_1 s< &data_62d6e0)
                var_254_9 = "RollPlayerGui"
                var_258_7 = 0x211
                ecx_20 = "who >= 0"
            else
                result = sub_425e70()
                
                if (ebx s>= result)
                    var_254_9 = "RollPlayerGui"
                    var_258_7 = 0x212
                    ecx_20 = "who < RollNumPlayers()"
                else
                    void* eax_2 = &edi_1[0xb5]
                    int32_t i = 8
                    void* var_224_1 = eax_2
                    int32_t* edx_1
                    
                    do
                        edx_1 = *eax_2
                        
                        if (edx_1 != 0)
                            edx_1 = sub_452c30(edx_1)
                            esi_1 = edx_1[0xa]
                            int32_t var_218_1 = edx_1[4]
                            var_228_1 = esi_1
                            break
                        
                        i += 1
                        eax_2 += 4
                    while (i s<= 0xd)
                    
                    int64_t xmm0_1 = edx_1.q
                    int32_t ebx_1 = 0
                    int32_t var_234_1 = 0
                    int32_t var_1fc
                    sub_458110(&var_1fc)
                    int32_t var_b0[0x29]
                    
                    if (edx_1 != var_1fc)
                        int32_t edi_2 = xmm0_1:4.d
                        result = xmm0_1.d
                        
                        while (true)
                            if (result == 0)
                                var_254_9 = "DiceAssigning::DiceIt::operator *"
                                var_258_7 = 0x17e8
                                ecx_20 = &data_5e3f90
                                goto label_477ddc
                            
                            var_b0[ebx_1] = result
                            ebx_1 += 1
                            var_234_1 = ebx_1
                            int32_t ecx_5
                            
                            if (esi_1 != 0)
                                ecx_5 = esi_1
                            label_477b2f:
                                result = sub_452c30(ecx_5)
                                esi_1 = *(result + 0x28)
                                edi_2 = *(result + 0x10)
                            else
                                void* eax_4 = sub_452b90(*(result + 0x18))
                                int32_t ecx_4 = edi_2 + 1
                                
                                if (ecx_4 s<= 0xd)
                                    void* eax_6 = eax_4 + (ecx_4 << 2) + 0x2b4
                                    
                                    while (true)
                                        int32_t edx_2 = *eax_6
                                        
                                        if (edx_2 != 0)
                                            ecx_5 = edx_2
                                            break
                                        
                                        ecx_4 += 1
                                        eax_6 += 4
                                        
                                        if (ecx_4 s> 0xd)
                                            goto label_477b25
                                    
                                    goto label_477b2f
                                
                            label_477b25:
                                result = 0
                            
                            if (result == var_1fc)
                                edi_1 = var_23c_1
                                break
                    
                    void* eax_7 = nullptr
                    void* var_238_1 = nullptr
                    
                    if (ebx_1 s<= 0)
                    label_477c82:
                        int32_t ebx_3 = 0
                        int32_t ecx_13 = *(var_224_1 - 0x14)
                        int32_t eax_13
                        uint32_t i_1
                        
                        if (ecx_13 == 0)
                            eax_13 = var_230_1
                            i_1 = 0
                        else
                            i_1 = sub_452c30(ecx_13)
                            eax_13 = *(i_1 + 0x28)
                            var_230_1 = eax_13
                        
                        int32_t edx_7 = eax_13
                        int32_t var_210
                        result = sub_4538b0(&var_210)
                        int32_t esi_3 = var_210
                        
                        if (i_1 == esi_3)
                        label_477cdd:
                            int32_t edi_3 = 0
                            
                            if (ebx_3 s> 0)
                                do
                                    int32_t* esi_4 = var_b0[edi_3]
                                    
                                    if (*(esi_4 + 0x22) != 0)
                                        result = sub_45a830(result, esi_4, var_23c_1, 1, false, 1, 5, 
                                            1, arg1)
                                        
                                        if (arg1.b != 0)
                                            if (esi_4[1] != 0)
                                                sub_49a5a0(&esi_4[1])
                                            
                                            result = zx.d(esi_4[0x22a].w)
                                            int32_t ecx_17 = data_62d6d0
                                            data_62d6d0 = result
                                            esi_4[0x22a] = ecx_17
                                            data_62d6d4 -= 1
                                    
                                    edi_3 += 1
                                while (edi_3 s< ebx_3)
                            
                            ebx = var_22c + 1
                            edi_1 = &var_23c_1[0x3ec]
                            var_22c = ebx
                            var_23c_1 = edi_1
                            
                            if (ebx s>= result_1)
                                break
                            
                            esi_1 = var_228_1
                            continue
                        else
                            while (i_1 != 0)
                                var_b0[ebx_3] = i_1
                                ebx_3 += 1
                                
                                if (edx_7 != 0)
                                    result = sub_452c30(edx_7)
                                    i_1 = result
                                    edx_7 = *(i_1 + 0x28)
                                else
                                    i_1 = 0
                                
                                if (i_1 == esi_3)
                                    goto label_477cdd
                            
                            var_254_9 = "Dice::DiceIt::operator *"
                            var_258_7 = 0x5da
                            ecx_20 = &data_5e3f90
                    else
                        while (true)
                            int32_t* ebx_2 = var_b0[eax_7]
                            
                            if (*(ebx_2 + 0x22) != 0)
                                sub_45a830(eax_7, ebx_2, edi_1, 1, false, 1, 5, 1, arg1)
                                
                                if (arg1.b != 0)
                                    if (ebx_2[1] != 0)
                                        sub_49a5a0(&ebx_2[1])
                                    
                                    int32_t ecx_8 = data_62d6d0
                                    data_62d6d0 = zx.d(ebx_2[0x22a].w)
                                    ebx_2[0x22a] = ecx_8
                                    data_62d6d4 -= 1
                            else if (ebx_2[4] != 7 || *(ebx_2 + 0x21) != 0)
                                result = sub_45a640(eax_7, ebx_2, edi_1, 7, 0, arg1.b)
                                
                                if (ebx_2[4] != 7)
                                    var_254_9 = "QueueMoveDie"
                                    var_258_7 = 0x229b
                                    ecx_20 = "gfx.die.where == where"
                                    break
                                
                                void* var_254_5 = 0x8c
                                *(ebx_2 + 0x21) = 0
                                char var_258_4 = 0
                                uint32_t var_1dc[0x8][0x4]
                                uint32_t (* var_25c_3)[0x8][0x4] = &var_1dc
                                ebx_2[7] = 0
                                int32_t var_1e4_1 = 0
                                _memset(var_25c_3, var_258_4, var_254_5)
                                char var_254_6 = arg1.b
                                int32_t var_1ec_1 = sub_459da0(7)
                                int32_t eax_10 = ebx_2[6]
                                uint32_t result_2 = result
                                int32_t var_1f0 = eax_10
                                int32_t var_1e0_1 = 0xffffffff
                                void var_150
                                __builtin_memcpy(&var_150, &var_1f0, 0xa0)
                                sub_4528c0(eax_10, &var_150, &ebx_2[0x1c], 5, var_254_6)
                                edi_1 = var_23c_1
                            else
                                sub_45aa00(eax_7, ebx_2, edi_1, 7, arg1)
                            
                            eax_7 = var_238_1 + 1
                            var_238_1 = eax_7
                            
                            if (eax_7 s>= var_234_1)
                                goto label_477c82
            
        label_477ddc:
            sub_489550(result, &data_5b2591, ecx_20, 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_258_7, var_254_9)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    @__security_check_cookie@4(eax_1 ^ &var_244)
    return result
}
