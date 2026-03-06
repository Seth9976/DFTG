// 函数名称: sub_51b9f0
// 虚拟地址: 0x51b9f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_51b9f0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edi = data_114e818
    int32_t result
    
    if (edi != 0)
        int32_t* edi_1 = *(edi + 0x14)
        void* esi_1 = nullptr
        
        while (true)
            void* ecx_1
            
            if (esi_1 != 0)
                ecx_1 = *edi_1
                esi_1 += 0x34
            else
                esi_1 = *edi_1
                ecx_1 = esi_1
            
            result = edi_1[1] * 0x34 + ecx_1
            
            if (esi_1 u>= result)
                break
            
            while ((*(esi_1 + 0x30) & 0xffff0000) == 0)
                esi_1 += 0x34
                
                if (esi_1 u>= result)
                    goto label_51ba40
            
            sub_51b950(esi_1)
        
    label_51ba40:
        void* ebx_1 = data_114e818
        
        if (ebx_1 != 0)
            int32_t* esi_2 = *(ebx_1 + 0x14)
            
            if (*esi_2 != 0)
                int32_t edx_1 = 0
            label_51ba66:
                int32_t ebx_2 = *esi_2
                int32_t edi_2 = ebx_2
                
                if (edx_1 != 0)
                    edx_1 += 0x34
                else
                    edx_1 = ebx_2
                
                int32_t ecx_4 = esi_2[1] * 0x34 + edi_2
                
                if (edx_1 u< ecx_4)
                    do
                        result = *(edx_1 + 0x30)
                        
                        if ((result & 0xffff0000) != 0)
                            int32_t ecx_6 = esi_2[3]
                            result = zx.d(result.w)
                            esi_2[3] = result
                            *(edx_1 + 0x30) = ecx_6
                            esi_2[4] -= 1
                            goto label_51ba66
                        
                        edx_1 += 0x34
                    while (edx_1 u< ecx_4)
                    
                    edi_2 = ebx_2
                
                esi_2[1] = 0
                esi_2[3] = 0
                
                if (edi_2 != 0)
                    result = _aligned_free_base(edi_2)
                
                __builtin_memset(esi_2, 0, 0x14)
                esi_2[6] = 0
                esi_2 = *(ebx_1 + 0x14)
            
            if (esi_2 != 0)
                result = sub_4984f0(esi_2, 0x1c)
                *(ebx_1 + 0x14) = 0
            
            return result
    
    sub_489550(result, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
        "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
