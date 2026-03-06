// 函数名称: sub_4af240
// 虚拟地址: 0x4af240
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_4af240(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: char* const esi = &data_5b2591
    char* const esi = &data_5b2591
    void* var_2c = arg3
    char* eax = *arg4
    
    if (eax != 0)
        esi = eax
    
    char* const eax_1 = &data_5b2591
    char* result
    
    while (true)
        arg3.b = *esi
        char temp0_1 = *eax_1
        bool c_1 = arg3.b u< temp0_1
        
        if (arg3.b == temp0_1)
            if (arg3.b == 0)
                result = nullptr
                break
            
            arg3.b = esi[1]
            char temp1_1 = eax_1[1]
            c_1 = arg3.b u< temp1_1
            
            if (arg3.b == temp1_1)
                esi = &esi[2]
                eax_1 = &eax_1[2]
                
                if (arg3.b != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(eax_1, eax_1, c_1) | 1
        break
    
    if (result == 0)
        return result
    
    if (sub_4a9a50(var_2c, arg2) == 0)
        return sub_4af0d0(var_2c, arg4)
    
    int32_t* eax_5 = sub_498ef0(var_2c)
    char const (** ecx_2)[0xa] = &data_6218dc
    int32_t* edi_1 = sub_4f0e70(eax_5, eax_5, &data_6218dc, data_126cc78, 0x68)
    
    if (edi_1 == 0)
        int128_t var_20
        char* eax_10
        int32_t edx_4
        edx_4:eax_10 = &var_20
        var_20 = zx.o(0)
        ecx_2 = &data_6218dc
        edi_1 = sub_4f0e70(sub_4f0910(eax_10, eax_5, &data_6218dc, 0x68, eax_10, edx_4), eax_5, 
            &data_6218dc, data_126cc78, 0x68)
    else
        int32_t esi_3 = 0
        
        if (edi_1[2] s> 0)
            char const (*** edi_2)[0xa] = *edi_1
            char* edx_3 = *arg4
            char* var_28_1 = edx_3
            
            while (true)
                ecx_2 = *edi_2
                char* const eax_7 = &data_5b2591
                
                if (edx_3 != 0)
                    eax_7 = edx_3
                
                while (true)
                    edx_3.b = *ecx_2
                    char temp2_1 = *eax_7
                    bool c_2 = edx_3.b u< temp2_1
                    
                    if (edx_3.b == temp2_1)
                        if (edx_3.b == 0)
                            result = nullptr
                            break
                        
                        edx_3.b = *(ecx_2 + 1)
                        char temp3_1 = eax_7[1]
                        c_2 = edx_3.b u< temp3_1
                        
                        if (edx_3.b == temp3_1)
                            ecx_2 += 2
                            eax_7 = &eax_7[2]
                            
                            if (edx_3.b != 0)
                                continue
                            
                            result = nullptr
                            break
                    
                    result = sbb.d(eax_7, eax_7, c_2) | 1
                    break
                
                if (result == 0)
                    return result
                
                esi_3 += 1
                edx_3 = var_28_1
                edi_2 = &edi_2[8]
                
                if (esi_3 s>= edi_1[2])
                    break
            
            edi_1 = edi_1
    
    int32_t var_44_2 = edi_1[2]
    char const (** var_48_4)[0xa] = ecx_2
    int32_t* eax_12 = sub_4cf8e0(data_126cc78, 0)
    sub_518870(eax_12, eax_12, edi_1, var_44_2)
    void* eax_13 = sub_4a9a50(var_2c, arg2)
    int32_t i = 0
    void** ecx_8 = *edi_1 - 0x20 + (edi_1[2] << 5)
    void* var_24_1 = eax_13
    
    if (*(eax_13 + 8) s> 0)
        int32_t* ecx_9 = &ecx_8[2]
        int32_t esi_4 = 0
        int32_t* var_28_2 = ecx_9
        
        do
            int32_t* eax_14 = *(eax_13 + 0x10)
            int32_t var_44_3 = *(eax_14 + esi_4 + 8)
            sub_4f0a90(eax_14, ecx_9, &data_6218dc, *(eax_14 + esi_4))
            eax_13 = var_24_1
            esi_4 += 0x10
            ecx_9 = var_28_2
            i += 1
        while (i s< *(eax_13 + 8))
    
    char* edx_12 = &data_5b2591
    char* eax_16 = *arg4
    
    if (eax_16 != 0)
        edx_12 = eax_16
    
    return sub_4ceb40(ecx_8, edx_12)
}
