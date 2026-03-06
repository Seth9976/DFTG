// 函数名称: sub_4af0d0
// 虚拟地址: 0x4af0d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4af0d0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* const esi = &data_5b2591
    char* const esi = &data_5b2591
    char* eax_1 = *arg2
    
    if (eax_1 != 0)
        esi = eax_1
    
    void* edi = arg1
    char* const eax_2 = &data_5b2591
    char* result
    
    while (true)
        arg1.b = *esi
        char temp0_1 = *eax_2
        bool c_1 = arg1.b u< temp0_1
        
        if (arg1.b == temp0_1)
            if (arg1.b == 0)
                result = nullptr
                break
            
            arg1.b = esi[1]
            char temp1_1 = eax_2[1]
            c_1 = arg1.b u< temp1_1
            
            if (arg1.b == temp1_1)
                esi = &esi[2]
                eax_2 = &eax_2[2]
                
                if (arg1.b != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(eax_2, eax_2, c_1) | 1
        break
    
    if (result == 0)
        return result
    
    int32_t* eax_4 = sub_498ef0(edi)
    char const (** ecx_1)[0xa] = &data_6218dc
    int32_t* edi_1 = sub_4f0e70(eax_4, eax_4, &data_6218dc, data_126cc78, 0x68)
    
    if (edi_1 == 0)
        int128_t var_20
        char* eax_9
        int32_t edx_3
        edx_3:eax_9 = &var_20
        var_20 = zx.o(0)
        ecx_1 = &data_6218dc
        edi_1 = sub_4f0e70(sub_4f0910(eax_9, eax_4, &data_6218dc, 0x68, eax_9, edx_3), eax_4, 
            &data_6218dc, data_126cc78, 0x68)
    else
        int32_t esi_2 = 0
        
        if (edi_1[2] s> 0)
            char const (*** edi_2)[0xa] = *edi_1
            char* edx_2 = *arg2
            char* var_24_1 = edx_2
            
            while (true)
                ecx_1 = *edi_2
                char* const eax_6 = &data_5b2591
                
                if (edx_2 != 0)
                    eax_6 = edx_2
                
                while (true)
                    edx_2.b = *ecx_1
                    char temp2_1 = *eax_6
                    bool c_2 = edx_2.b u< temp2_1
                    
                    if (edx_2.b == temp2_1)
                        if (edx_2.b == 0)
                            result = nullptr
                            break
                        
                        edx_2.b = *(ecx_1 + 1)
                        char temp3_1 = eax_6[1]
                        c_2 = edx_2.b u< temp3_1
                        
                        if (edx_2.b == temp3_1)
                            ecx_1 += 2
                            eax_6 = &eax_6[2]
                            
                            if (edx_2.b != 0)
                                continue
                            
                            result = nullptr
                            break
                    
                    result = sbb.d(eax_6, eax_6, c_2) | 1
                    break
                
                if (result == 0)
                    return result
                
                esi_2 += 1
                edx_2 = var_24_1
                edi_2 = &edi_2[8]
                
                if (esi_2 s>= edi_1[2])
                    break
            
            edi_1 = edi_1
    
    int32_t var_44_2 = edi_1[2]
    char const (** var_48_4)[0xa] = ecx_1
    int32_t* eax_11 = sub_4cf8e0(data_126cc78, 0)
    sub_518870(eax_11, eax_11, edi_1, var_44_2)
    char* const edx_7 = &data_5b2591
    char* eax_15 = *arg2
    
    if (eax_15 != 0)
        edx_7 = eax_15
    
    return sub_4ceb40((edi_1[2] << 5) + *edi_1 - 0x20, edx_7)
}
