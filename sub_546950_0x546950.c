// 函数名称: sub_546950
// 虚拟地址: 0x546950
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_546950()
{
    // 第一条实际指令: void* edi = data_114e818
    void* edi = data_114e818
    void* eax
    
    if (edi != 0)
        int32_t* edi_1 = *(edi + 0xc)
        void* esi_1 = nullptr
        
        while (true)
            void* ecx_1
            
            if (esi_1 != 0)
                ecx_1 = *edi_1
                esi_1 += 0x94
            else
                esi_1 = *edi_1
                ecx_1 = esi_1
            
            eax = edi_1[1] * 0x94 + ecx_1
            
            if (esi_1 u>= eax)
                break
            
            while ((*(esi_1 + 0x90) & 0xffff0000) == 0)
                esi_1 += 0x94
                
                if (esi_1 u>= eax)
                    goto label_5469a6
            
            sub_4f97b0(esi_1)
        
    label_5469a6:
        void* edi_2 = data_114e818
        
        if (edi_2 != 0)
            int32_t* edi_3 = *(edi_2 + 0x10)
            void* esi_2 = nullptr
            
            while (true)
                void* ecx_2
                
                if (esi_2 != 0)
                    ecx_2 = *edi_3
                    esi_2 += 0x7c
                else
                    esi_2 = *edi_3
                    ecx_2 = esi_2
                
                eax = edi_3[1] * 0x7c + ecx_2
                
                if (esi_2 u>= eax)
                    break
                
                while ((*(esi_2 + 0x78) & 0xffff0000) == 0)
                    esi_2 += 0x7c
                    
                    if (esi_2 u>= eax)
                        goto label_5469f2
                
                sub_4fd2f0(esi_2)
            
        label_5469f2:
            int32_t* edi_4 = data_114e818
            
            if (edi_4 != 0)
                int32_t* edi_5 = *edi_4
                void* esi_3 = nullptr
                
                while (true)
                    void* ecx_4
                    
                    if (esi_3 != 0)
                        ecx_4 = *edi_5
                        esi_3 += 0x6c
                    else
                        esi_3 = *edi_5
                        ecx_4 = esi_3
                    
                    void* result = edi_5[1] * 0x6c + ecx_4
                    
                    if (esi_3 u>= result)
                        return result
                    
                    while ((*(esi_3 + 0x68) & 0xffff0000) == 0)
                        esi_3 += 0x6c
                        
                        if (esi_3 u>= result)
                            return result
                    
                    eax = sub_4dc250()
                    int32_t* ecx_7 = *(esi_3 + 0x2c)
                    
                    if (ecx_7 != 0)
                        eax = sub_4f14a0(ecx_7)
                    
                    void** ecx_8 = data_114e818
                    
                    if (ecx_8 == 0)
                        break
                    
                    sub_4dd960(*ecx_8, esi_3)
    
    sub_489550(eax, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
