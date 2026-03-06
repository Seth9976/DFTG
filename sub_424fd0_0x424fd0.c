// 函数名称: sub_424fd0
// 虚拟地址: 0x424fd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_424fd0()
{
    // 第一条实际指令: int32_t eax = data_1511874
    int32_t eax = data_1511874
    int32_t* edx = data_114e838
    int32_t edi = data_126bd2c
    int32_t ecx_4
    
    if (eax == 0)
        ecx_4 = 0
    else
        uint32_t ecx_1 = zx.d(eax.w)
        
        if (ecx_1 u>= edx[1])
            ecx_4 = 0
        else
            void* ecx_3 = ecx_1 * 0x64 + *edx
            
            if (*(ecx_3 + 0x60) != eax)
                ecx_4 = 0
            else
                ecx_4 = *(ecx_3 + 4)
    
    if (ecx_4 == edi)
        void* eax_7 = nullptr
        
        while (true)
            void* esi_4
            
            if (eax_7 != 0)
                esi_4 = *edx
                eax_7 += 0x64
            else
                eax_7 = *edx
                esi_4 = eax_7
            
            void* ecx_11 = edx[1] * 0x64 + esi_4
            
            if (eax_7 u>= ecx_11)
                break
            
            while ((*(eax_7 + 0x60) & 0xffff0000) == 0)
                eax_7 += 0x64
                
                if (eax_7 u>= ecx_11)
                    goto label_425060_1
            
            if (*(eax_7 + 0x5a) != 0)
                if (*eax_7 == edi)
                    goto label_425065
                
                if (*(eax_7 + 4) == edi)
                    goto label_425065
        
    label_425060:
        data_1511874 = sub_4c5c00(0x3e4ccccd)
    else
        if (eax != 0)
            uint32_t ecx_5 = zx.d(eax.w)
            
            if (ecx_5 u< edx[1])
                void* esi_2 = ecx_5 * 0x64 + *edx
                
                if (*(esi_2 + 0x60) == eax)
                    *(esi_2 + 0x2c) = *(data_114e818 + 0x28)
                    int32_t eax_3 = *(esi_2 + 0x3c)
                    *(esi_2 + 0x30) = 0x3e99999a
                    *(esi_2 + 0x34) = eax_3
                    *(esi_2 + 0x38) = 0
                    *(esi_2 + 0x28) = 1
        
        if (edi != 0)
        label_425060_1:
            data_1511874 = sub_4c5c00(0x3e4ccccd)
    
    label_425065:
    int32_t result = data_1511870
    int32_t* edx_1 = data_114e838
    
    if (result != 0)
        int32_t esi_3 = edx_1[1]
        uint32_t ecx_7 = zx.d(result.w)
        
        if (ecx_7 u< esi_3)
            int32_t edi_1 = *edx_1
            int32_t edx_2 = ecx_7 * 0x64
            
            if (*(edx_2 + edi_1 + 0x60) == result && *(edx_2 + edi_1 + 4) != 0 && ecx_7 u< esi_3)
                void* ecx_9 = ecx_7 * 0x64 + edi_1
                
                if (*(edx_2 + edi_1 + 0x60) == result)
                    *(ecx_9 + 0x2c) = *(data_114e818 + 0x28)
                    result = *(ecx_9 + 0x3c)
                    *(ecx_9 + 0x30) = 0x3e99999a
                    *(ecx_9 + 0x34) = result
                    *(ecx_9 + 0x38) = 0
                    *(ecx_9 + 0x28) = 1
    
    return result
}
