// 函数名称: sub_477720
// 虚拟地址: 0x477720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_477720(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_22c
    void var_22c
    int32_t var_c = __security_cookie ^ &var_22c
    int32_t ecx = arg2 - 1
    int32_t result
    result.b = 0
    char var_229 = 0
    int32_t var_210
    int32_t var_bc
    
    if (ecx u<= 4)
        int32_t eax_1 = sub_425e70()
        result = 0
        var_210 = eax_1
        int32_t result_1 = 0
        
        if (eax_1 s> 0)
            int32_t var_b8
            int32_t edi_1 = var_b8
            int32_t var_218_1 = edi_1
            
            while (true)
                void* esi_1 = sub_452b90(result)
                int32_t ebx_1 = 0
                void* var_204_1 = esi_1
                int32_t var_220_1 = 0
                int32_t ecx_4 = *(esi_1 + (sub_4776a0(arg2) << 2) + 0x2b4)
                int32_t* i
                
                if (ecx_4 == 0)
                    i = nullptr
                else
                    i = sub_452c30(ecx_4)
                    edi_1 = i[0xa]
                    var_218_1 = edi_1
                
                int32_t edx = edi_1
                int64_t* i_1 = sub_4538b0(&var_bc)
                int32_t edi_2 = var_bc
                int32_t var_240_6
                char const* const var_23c_7
                char* ecx_15
                int32_t var_b0[0x29]
                
                if (i == edi_2)
                label_477805:
                    void* eax_5 = nullptr
                    void* var_224_1 = nullptr
                    
                    if (ebx_1 s<= 0)
                    label_477943:
                        result = result_1 + 1
                        result_1 = result
                        
                        if (result s>= var_210)
                            result.b = var_229
                            break
                        
                        edi_1 = var_218_1
                        continue
                    else
                        while (true)
                            int32_t* ebx_2 = var_b0[eax_5]
                            
                            if (*(ebx_2 + 0x22) != 0)
                                sub_45a830(eax_5, ebx_2, esi_1, 1, false, 1, 5, 1, arg1)
                                
                                if (arg1.b != 0)
                                    if (ebx_2[1] != 0)
                                        sub_49a5a0(&ebx_2[1])
                                    
                                    int32_t ecx_8 = data_62d6d0
                                    data_62d6d0 = zx.d(ebx_2[0x22a].w)
                                    ebx_2[0x22a] = ecx_8
                                    data_62d6d4 -= 1
                            else if (ebx_2[4] != 7 || *(ebx_2 + 0x21) != 0)
                                i_1 = sub_45a640(eax_5, ebx_2, esi_1, 7, 0, arg1.b)
                                
                                if (ebx_2[4] != 7)
                                    var_23c_7 = "QueueMoveDie"
                                    var_240_6 = 0x229b
                                    ecx_15 = "gfx.die.where == where"
                                    break
                                
                                void* var_23c_5 = 0x8c
                                *(ebx_2 + 0x21) = 0
                                char var_240_4 = 0
                                uint32_t var_1ec[0x8][0x4]
                                uint32_t (* var_244_3)[0x8][0x4] = &var_1ec
                                ebx_2[7] = 0
                                int32_t var_1f4_1 = 0
                                _memset(var_244_3, var_240_4, var_23c_5)
                                char var_23c_6 = arg1.b
                                int32_t var_1fc_1 = sub_459da0(7)
                                int32_t eax_8 = ebx_2[6]
                                int64_t* i_2 = i_1
                                int32_t var_200 = eax_8
                                int32_t var_1f0_1 = 0xffffffff
                                void var_160
                                __builtin_memcpy(&var_160, &var_200, 0xa0)
                                sub_4528c0(eax_8, &var_160, &ebx_2[0x1c], 5, var_23c_6)
                                esi_1 = var_204_1
                            else
                                sub_45aa00(eax_5, ebx_2, esi_1, 7, arg1)
                            
                            eax_5 = var_224_1 + 1
                            var_224_1 = eax_5
                            
                            if (eax_5 s>= var_220_1)
                                goto label_477943
                else
                    while (i != 0)
                        var_b0[ebx_1] = i
                        ebx_1 += 1
                        var_220_1 = ebx_1
                        var_229 = 1
                        
                        if (edx != 0)
                            i_1 = sub_452c30(edx)
                            i = i_1
                            edx = i[0xa]
                        else
                            i = nullptr
                        
                        if (i == edi_2)
                            goto label_477805
                    
                    var_23c_7 = "Dice::DiceIt::operator *"
                    var_240_6 = 0x5da
                    ecx_15 = &data_5e3f90
                sub_489550(i_1, &data_5b2591, ecx_15, 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_240_6, var_23c_7)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
    
    if (arg1.b == 0 && result.b == 0 && ecx u<= 4)
        var_bc = 0x15e
        int32_t var_b8_1 = 0xc8
        int32_t var_b4_1 = 0x32
        var_210 = 1
        int32_t var_20c_1 = (&var_bc)[sub_459a20()]
        result = sub_477300(&var_210)
    
    @__security_check_cookie@4(var_c ^ &var_22c)
    return result
}
