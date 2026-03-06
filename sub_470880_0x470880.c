// 函数名称: sub_470880
// 虚拟地址: 0x470880
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_470880(int64_t* arg1)
{
    // 第一条实际指令: int64_t* eax = arg1
    int64_t* eax = arg1
    int64_t* var_8 = eax
    int32_t var_34
    char const* const var_30
    char* ecx
    
    if (*eax == 1)
        int32_t result = 0
        void* eax_2 = sub_452b90(eax[3].d) + 0x2d4
        int32_t ecx_2 = 8
        int32_t var_10
        int64_t* edx_1
        int32_t esi_1
        
        while (true)
            edx_1 = *eax_2
            
            if (edx_1 != 0)
                edx_1 = sub_452c30(edx_1)
                esi_1 = edx_1[5].d
                var_10 = edx_1[2].d
                break
            
            ecx_2 += 1
            eax_2 += 4
            
            if (ecx_2 s> 0xd)
                int32_t var_c
                esi_1 = var_c
                break
        
        int64_t* var_14_1
        var_14_1.q = edx_1.q
        int32_t var_20
        eax = sub_458110(&var_20)
        
        if (edx_1 != var_20)
            int32_t edi_1 = var_10
            eax = var_14_1
            
            do
                if (eax == 0)
                    var_30 = "DiceAssigning::DiceIt::operator *"
                    var_34 = 0x17e8
                    ecx = &data_5e3f90
                    goto label_47098e
                
                if (eax == var_8)
                    return result
                
                result += 1
                int32_t ecx_7
                
                if (esi_1 != 0)
                    ecx_7 = esi_1
                label_470949:
                    eax = sub_452c30(ecx_7)
                    esi_1 = eax[5].d
                    edi_1 = eax[2].d
                else
                    void* eax_4 = sub_452b90(eax[3].d)
                    int32_t ecx_6 = edi_1 + 1
                    
                    if (ecx_6 s<= 0xd)
                        void* eax_6 = eax_4 + (ecx_6 << 2) + 0x2b4
                        
                        while (true)
                            int32_t edx_2 = *eax_6
                            
                            if (edx_2 != 0)
                                ecx_7 = edx_2
                                break
                            
                            ecx_6 += 1
                            eax_6 += 4
                            
                            if (ecx_6 s> 0xd)
                                goto label_47093f
                        
                        goto label_470949
                    
                label_47093f:
                    eax = nullptr
            while (eax != var_20)
        
        var_30 = "CalcCupSlot"
        var_34 = 0x665d
        ecx = "Halt"
    else
        var_30 = "CalcCupSlot"
        var_34 = 0x6651
        ecx = "gfxSource.type == ROLLGFX_DIE"
    
    label_47098e:
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_34, 
        var_30)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
