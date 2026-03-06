// 函数名称: sub_457f30
// 虚拟地址: 0x457f30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_457f30(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 0x578) = 0
    *(arg2 + 0x578) = 0
    int32_t ecx = arg1[0xaa]
    int32_t edx = data_632804
    int32_t var_8 = edx
    int32_t* result_1
    
    if (ecx == 0)
        result_1 = nullptr
    else
        edx = var_8
        result_1 = sub_452cc0(ecx)
    
    int32_t* result_2 = result_1
    int32_t var_14
    int32_t* result = Unlock(&var_14)
    int32_t edi = var_14
    
    while (result_1 != edi)
        if (result_1 == 0)
            sub_489550(result, &data_5b2591, "gfx", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x2ac, "Tiles::TileIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t ebx_1 = result_1[0x11]
        int32_t i_1 = 0
        result = *(edx + ebx_1 * 0xc + 0x8c4)
        
        if (result[0xd] s> 0)
            int32_t ecx_1 = var_8
            int32_t edi_1 = 0
            int32_t i = 0
            
            do
                int32_t eax_3 = ebx_1
                
                if (result_1[0xe] == 0)
                    eax_3 = ebx_1
                    int32_t* ecx_4 = *(ecx_1 + ebx_1 * 0xc + 0x8c4) + 0x38 + edi_1
                    
                    if (*ecx_4 == 0)
                        char edx_1 = (ecx_4[1]).b
                        
                        if ((edx_1 & 1) != 0)
                            int32_t var_10_1 = ecx_4[2]
                            int32_t eax_7
                            
                            if ((edx_1 & 0x20) != 0)
                                eax_7 = sub_444f80(data_632804, *arg1)
                                eax_3 = ebx_1
                                var_10_1 = eax_7
                            
                            if ((edx_1 & 0x20) == 0 || eax_7 != 0)
                                int32_t ecx_7 = *(arg2 + 0x578)
                                void* edx_3 = arg2 + ecx_7 * 0x14
                                *(arg2 + 0x578) = ecx_7 + 1
                                *(edx_3 + 8) = 0
                                *(edx_3 + 0xc) = ecx_4[1]
                                *(edx_3 + 0x10) = var_10_1
                                *edx_3 = result_1[0x11]
                                *(edx_3 + 4) = i_1
                                eax_3 = result_1[0x11]
                        
                        i = i_1
                    
                    ecx_1 = var_8
                
                ebx_1 = eax_3
                i += 1
                i_1 = i
                result = *(ecx_1 + eax_3 * 0xc + 0x8c4)
                edi_1 += 0xc
            while (i s< result[0xd])
            
            edi = var_14
        
        int32_t ecx_8 = result_1[0x10]
        
        if (ecx_8 != 0)
            result = sub_452cc0(ecx_8)
            result_1 = result
        else
            result_1 = nullptr
        
        edx = var_8
    
    return result
}
