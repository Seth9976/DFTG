// 函数名称: sub_459f20
// 虚拟地址: 0x459f20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_459f20(void* arg1)
{
    // 第一条实际指令: int32_t eax = 8
    int32_t eax = 8
    int32_t* ecx = arg1 + 0x2d4
    int32_t var_c
    void* edx_1
    int32_t esi
    
    while (true)
        edx_1 = *ecx
        
        if (edx_1 != 0)
            edx_1 = sub_452c30(edx_1)
            esi = *(edx_1 + 0x28)
            var_c = *(edx_1 + 0x10)
            break
        
        eax += 1
        ecx = &ecx[1]
        
        if (eax s> 0xd)
            int32_t var_8
            esi = var_8
            break
    
    void* var_10
    var_10.q = edx_1.q
    int32_t var_1c
    sub_458110(&var_1c)
    int32_t ebx = var_1c
    
    if (edx_1 != ebx)
        int32_t edi_1 = var_c
        void* const eax_2 = var_10
        
        do
            if (eax_2 == 0)
                sub_489550(eax_2, &data_5b2591, "gfx", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x17e8, 
                    "DiceAssigning::DiceIt::operator *")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (*(eax_2 + 0x21) != 0)
                return *(eax_2 + 0x10)
            
            int32_t ecx_5
            
            if (esi != 0)
                ecx_5 = esi
            label_459fbf:
                eax_2 = sub_452c30(ecx_5)
                esi = *(eax_2 + 0x28)
                edi_1 = *(eax_2 + 0x10)
            else
                void* eax_3 = sub_452b90(*(eax_2 + 0x18))
                int32_t ecx_4 = edi_1 + 1
                
                if (ecx_4 s<= 0xd)
                    void* eax_5 = eax_3 + (ecx_4 << 2) + 0x2b4
                    
                    while (true)
                        int32_t edx_2 = *eax_5
                        
                        if (edx_2 != 0)
                            ecx_5 = edx_2
                            break
                        
                        ecx_4 += 1
                        eax_5 += 4
                        
                        if (ecx_4 s> 0xd)
                            goto label_459fb5
                    
                    goto label_459fbf
                
            label_459fb5:
                eax_2 = nullptr
        while (eax_2 != ebx)
    
    return 0
}
