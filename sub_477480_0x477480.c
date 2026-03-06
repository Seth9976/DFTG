// 函数名称: sub_477480
// 虚拟地址: 0x477480
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_477480(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t result = sub_425e70()
    int32_t ebx = 0
    uint32_t result_1 = result
    int32_t var_bc = 0
    
    if (result s<= 0)
    label_47763a:
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return result
    
    int32_t* edi_1 = &data_62d6e0
    int32_t* var_b0_1 = &data_62d6e0
    int32_t var_cc
    int32_t var_b8_1 = var_cc
    label_4774d0:
    int32_t var_e4
    char const* const var_e0_3
    char* ecx_8
    
    if (edi_1 s< &data_62d6e0)
        var_e0_3 = "RollPlayerGui"
        var_e4 = 0x211
        ecx_8 = "who >= 0"
    else
        result = sub_425e70()
        
        if (ebx s>= result)
            var_e0_3 = "RollPlayerGui"
            var_e4 = 0x212
            ecx_8 = "who < RollNumPlayers()"
        else
            int32_t esi_1 = 0
            int32_t var_c8 = 0xf
            int32_t var_c4_1 = 0xe
            int32_t* ebx_1 = &var_c8
            
            while (true)
                int32_t ecx_1 = edi_1[*ebx_1 + 0xad]
                int32_t eax_4
                uint32_t i
                
                if (ecx_1 == 0)
                    eax_4 = var_b8_1
                    i = 0
                else
                    i = sub_452c30(ecx_1)
                    eax_4 = *(i + 0x28)
                    var_b8_1 = eax_4
                
                int32_t edx_1 = eax_4
                int32_t var_d0
                result = sub_4538b0(&var_d0)
                int32_t edi_2 = var_d0
                int32_t var_ac[0x29]
                
                if (i != edi_2)
                    while (i != 0)
                        var_ac[esi_1] = i
                        esi_1 += 1
                        
                        if (edx_1 != 0)
                            result = sub_452c30(edx_1)
                            i = result
                            edx_1 = *(i + 0x28)
                        else
                            i = 0
                        
                        if (i == edi_2)
                            goto label_47756c
                    
                    var_e0_3 = "Dice::DiceIt::operator *"
                    var_e4 = 0x5da
                    ecx_8 = &data_5e3f90
                    break
                
            label_47756c:
                edi_1 = var_b0_1
                result = &result_1
                ebx_1 = &ebx_1[1]
                
                if (ebx_1 == &result_1)
                    int32_t ebx_2 = 0
                    
                    if (esi_1 s> 0)
                        do
                            int32_t* edi_3 = var_ac[ebx_2]
                            
                            if (*(edi_3 + 0x22) == 0)
                                result = sub_45a830(result, edi_3, var_b0_1, 3, false, 0, 5, 1, arg1)
                            else
                                result = sub_45a830(result, edi_3, var_b0_1, 1, false, 1, 5, 1, arg1)
                                
                                if (arg1.b != 0)
                                    if (edi_3[1] != 0)
                                        sub_49a5a0(&edi_3[1])
                                    
                                    result = zx.d(edi_3[0x22a].w)
                                    int32_t ecx_5 = data_62d6d0
                                    data_62d6d0 = result
                                    edi_3[0x22a] = ecx_5
                                    data_62d6d4 -= 1
                            
                            ebx_2 += 1
                        while (ebx_2 s< esi_1)
                    
                    ebx = var_bc + 1
                    edi_1 = &var_b0_1[0x3ec]
                    var_bc = ebx
                    var_b0_1 = edi_1
                    
                    if (ebx s< result_1)
                        goto label_4774d0
                    
                    goto label_47763a
    
    sub_489550(result, &data_5b2591, ecx_8, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_e4, 
        var_e0_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
