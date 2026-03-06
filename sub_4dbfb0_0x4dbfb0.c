// 函数名称: sub_4dbfb0
// 虚拟地址: 0x4dbfb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_4dbfb0()
{
    // 第一条实际指令: int32_t* ebx = data_114e818
    int32_t* ebx = data_114e818
    void* result
    
    if (ebx != 0)
        int32_t* edi_1 = *ebx
        void* i = nullptr
    label_4dbfc5:
        void* i_1
        
        if (i != 0)
            i_1 = *edi_1
            i += 0x6c
        else
            i = *edi_1
            i_1 = i
        
        for (result = edi_1[1] * 0x6c + i_1; i u< result; i += 0x6c)
            if ((*(i + 0x68) & 0xffff0000) != 0)
                result = sub_4dc250()
                int32_t* ecx_2 = *(i + 0x2c)
                
                if (ecx_2 != 0)
                    result = sub_4f14a0(ecx_2)
                
                void** ecx_3 = data_114e818
                
                if (ecx_3 == 0)
                    goto label_4dc0e6
                
                sub_4dd960(*ecx_3, i)
                ebx = data_114e818
                goto label_4dbfc5
        
        if (ebx != 0)
            int32_t* edi_2 = *ebx
            
            if (*edi_2 != 0)
                int32_t* esi_1 = nullptr
            label_4dc038:
                int32_t* ecx_5 = *edi_2
                int32_t* edx_1 = ecx_5
                
                if (esi_1 != 0)
                    esi_1 = &esi_1[0x1b]
                else
                    esi_1 = ecx_5
                
                result = edi_2[1] * 0x6c + edx_1
                
                if (esi_1 u< result)
                    do
                        if ((esi_1[0x1a] & 0xffff0000) != 0)
                            sub_4dd960(edi_2, esi_1)
                            goto label_4dc038
                        
                        esi_1 = &esi_1[0x1b]
                    while (esi_1 u< result)
                    
                    edx_1 = ecx_5
                
                edi_2[1] = 0
                edi_2[3] = 0
                
                if (edx_1 != 0)
                    result = _aligned_free_base(edx_1)
                
                __builtin_memset(edi_2, 0, 0x14)
                edi_2[6] = 0
                edi_2 = *ebx
            
            if (edi_2 != 0)
                result = sub_4984f0(edi_2, 0x1c)
                *ebx = 0
            
            return result
    
    label_4dc0e6:
    sub_489550(result, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
        "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
