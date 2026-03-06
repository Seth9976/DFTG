// 函数名称: sub_5270e0
// 虚拟地址: 0x5270e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_5270e0(char** arg1)
{
    // 第一条实际指令: char* var_14 = nullptr
    char* var_14 = nullptr
    int32_t var_10 = 0
    int32_t* ecx
    int32_t edx
    sub_527090(&var_14, edx, ecx, &var_14)
    char* edi = var_14
    
    while (edi != var_10)
        char eax_1 = *edi
        edi = &edi[1]
        
        if (eax_1 == 0x3a)
            char** edx_1 = arg1
            int32_t eax_3 = 0
            int32_t var_c = 0
            char* esi = edi
            char** var_10_1 = edx_1
        label_527131:
            *edx_1 = edi
            
            if (esi != var_10)
                do
                    eax_3.b = *esi
                    char* ecx_1 = esi
                    esi = &esi[1]
                    
                    if (eax_3.b == 0x2c)
                        edi = esi
                        edx_1[1] = &ecx_1[0xffffffff]
                        sub_527030(edx_1)
                        eax_3 = var_c + 1
                        edx_1 = &var_10_1[2]
                        var_c = eax_3
                        var_10_1 = edx_1
                        
                        if (eax_3 s< 3)
                            goto label_527131
                        
                        goto label_52714a
                while (esi != var_10)
                
                eax_3 = var_c
            
        label_52714a:
            char** ecx_2 = &arg1[eax_3 * 2]
            *ecx_2 = edi
            ecx_2[1] = var_10
            sub_527030(ecx_2)
            return var_c + 1
    
    return 0
}
