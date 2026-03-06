// 函数名称: sub_5269a0
// 虚拟地址: 0x5269a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_5269a0(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    void* esi = arg1
    char* eax = *(esi + 8)
    arg1.b = *eax
    void* eax_2
    
    if (arg1.b == 0x3e)
        *(esi + 8) = &eax[1]
        *(esi + 0xc) = &eax[1]
        char* ecx_3 = *(esi + 8)
        
        while (true)
            eax_2.b = *ecx_3
            
            if (eax_2.b == 0)
                break
            
            if (eax_2.b == 0x3c)
                break
            
            if (eax_2.b == 0xa)
                *(esi + 0x118) += 1
            
            ecx_3 = &ecx_3[1]
            *(esi + 8) = ecx_3
        
        char* edx_1 = *(esi + 0xc)
        int32_t edi_1 = 0
        void* ecx_4 = ecx_3 - edx_1
        *(esi + 0x10) = ecx_4
        
        if (ecx_4 s> 0)
            while (true)
                eax_2.b = *edx_1
                
                if (eax_2.b != 0x20 && eax_2.b != 9 && eax_2.b != 0xd && eax_2.b != 0xa)
                    *(esi + 4) = 3
                    break
                
                edi_1 += 1
                edx_1 = &edx_1[1]
                
                if (edi_1 s>= ecx_4)
                    goto label_526a3a
            
            eax_2.b = 1
            return eax_2
        
    label_526a3a:
        
        if (sub_5268a0(esi).b != 0)
            eax_2.b = 1
            return eax_2
    else if (arg1.b != 0x2f)
        if (sub_5267d0(esi).b != 0)
            *(esi + 4) = 2
            eax_2.b = 1
            return eax_2
    else
        *(esi + 8) = &eax[1]
        sub_5267a0(esi)
        eax_2 = *(esi + 8)
        
        if (*eax_2 == 0x3e)
            *(esi + 4) = 4
            *(esi + 8) = eax_2 + 1
            void* eax_3
            eax_3.b = 1
            return eax_3
    
    eax_2.b = 0
    return eax_2
}
