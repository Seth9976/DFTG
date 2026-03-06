// 函数名称: sub_4f9eb0
// 虚拟地址: 0x4f9eb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_4f9eb0(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (data_114e818 == 0)
        return 
    
    int32_t* eax_1 = sub_4d0b50(arg1, 0x18)
    void* ecx_2 = data_114e818
    int32_t* edx_1 = eax_1
    int32_t* var_8_1 = edx_1
    
    if (ecx_2 == 0)
        sub_489550(eax_1, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
            "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t** edi_1 = *(ecx_2 + 0xc)
    int32_t* esi_1 = nullptr
    
    while (true)
        int32_t* ecx_3
        
        if (esi_1 != 0)
            ecx_3 = *edi_1
            esi_1 = &esi_1[0x25]
        else
            esi_1 = *edi_1
            ecx_3 = esi_1
        
        void* eax = edi_1[1] * 0x94 + ecx_3
        
        if (esi_1 u>= eax)
            break
        
        while ((esi_1[0x24] & 0xffff0000) == 0)
            esi_1 = &esi_1[0x25]
            
            if (esi_1 u>= eax)
                return 
        
        if (*esi_1 == edx_1)
            int32_t eax_3 = esi_1[0x1b]
            
            if (eax_3 s> 0 && eax_3 != *(arg2 + 0x28))
                sub_4f9560(esi_1)
                int32_t eax_4 = esi_1[0x1b]
                
                if (esi_1[0x1e] s>= eax_4)
                    esi_1[0x1e] = eax_4 - 1
            
            int32_t edx_2 = esi_1[3]
            int32_t ecx_5 = *(arg2 + 0x58)
            
            if (edx_2 s>= ecx_5)
                esi_1[4] = 1
                esi_1[3] = ecx_5 - 1
            else if (esi_1[4] + edx_2 s>= ecx_5)
                esi_1[4] = ecx_5 - edx_2
            
            edx_1 = var_8_1
}
