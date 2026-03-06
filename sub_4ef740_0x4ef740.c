// 函数名称: sub_4ef740
// 虚拟地址: 0x4ef740
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4ef740(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_440
    int32_t var_440
    int32_t eax_1 = __security_cookie ^ &var_440
    int32_t esi
    int32_t var_444 = esi
    int32_t edi
    int32_t var_448 = edi
    int32_t esi_1 = arg2
    int32_t edi_1 = 0
    int32_t var_414 = esi_1
    void var_410
    void* edx = &var_410
    var_440 = 0
    int32_t eax_2 = 0
    void* var_438 = &var_410
    int32_t var_424 = 0
    
    while (true)
        int32_t* ecx_5 = *(esi_1 + (eax_2 << 2))
        int32_t* var_418_1 = ecx_5
        int32_t var_42c_1 = 0
        
        if (*ecx_5 s> 0)
            int32_t eax_3 = 0
            int32_t var_428_1 = 0
            
            while (true)
                int32_t* ecx_1 = ecx_5[2] + eax_3
                uint32_t eax_4 = 0
                void* esi_2
                
                if (edi_1 s> 0)
                    esi_2 = var_438
                    
                    do
                        if (*esi_2 == *ecx_1)
                            goto label_4ef7da
                        
                        eax_4 += 1
                        esi_2 += 0x10
                    while (eax_4 s< edi_1)
                    
                    edx = var_438
                
                char const* const var_454_2
                int32_t var_450_2
                char const* const var_44c_1
                char* ecx_15
                
                if (edi_1 s>= 0x40)
                    var_44c_1 = "sMaterialCopyMap"
                    var_450_2 = 0x226
                    ecx_15 = "specialStackAttribMap.attributeCount < MAX_STACK_ATTRIBUTES"
                    var_454_2 = "d:\ax\trunk\ax2017\engine\material.cpp"
                else
                    esi_2 = (edi_1 << 4) + edx
                    var_440 = edi_1 + 1
                label_4ef7da:
                    int32_t ecx_2 = *ecx_1
                    
                    if (ecx_2 s< 0 || ecx_2 s>= data_624744)
                        var_44c_1 = "AttribTagGetField"
                        var_450_2 = 0x8b
                        var_454_2 = "d:\ax\trunk\ax2017\engine\attribmap.cpp"
                        ecx_15 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                    else
                        eax_4 = *(data_624740 + (ecx_2 << 2))
                        void* ecx_3 = *(eax_4 + 0xc)
                        
                        if (ecx_3 == 0)
                            var_44c_1 = "AttribTagGetDefMap"
                            var_450_2 = 0x1fe
                            var_454_2 = "d:\ax\trunk\ax2017\engine\attribmap.cpp"
                            ecx_15 = "pAttribField->pDefMap"
                        else
                            eax_4 = sub_4ce0a0(ecx_3)
                            
                            if (eax_4.b != 0)
                                var_44c_1 = "sMaterialCopyMap"
                                var_450_2 = 0x22c
                                ecx_15 = "
                                "!DefTypeIsDeepStructure(AttribTagGetDefMap(gMaterialAttribTable, "
                                "pTagSource->tag))"
                            else
                                *esi_2 = *ecx_1
                                *(esi_2 + 8) = ecx_1[2]
                                ecx_5 = var_418_1
                                *(esi_2 + 0xc) = ecx_1[3]
                                int32_t esi_6 = var_42c_1 + 1
                                edi_1 = var_440
                                eax_3 = var_428_1 + 0x10
                                edx = var_438
                                var_42c_1 = esi_6
                                var_428_1 = eax_3
                                
                                if (esi_6 s< *ecx_5)
                                    continue
                                
                                eax_2 = var_424
                                esi_1 = var_414
                                break
                            
                            var_454_2 = "d:\ax\trunk\ax2017\engine\material.cpp"
                
                sub_489550(eax_4, &data_5b2591, ecx_15, var_454_2, var_450_2, var_44c_1)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
        
        int32_t temp0_1 = eax_2
        eax_2 -= 1
        var_424 = eax_2
        
        if (temp0_1 - 1 s< 0)
            break
    
    if (sub_4f0cd0(eax_2, &var_440, &data_624734, 0x6b) == 0)
        arg1[0x1fa].b = 0
        @__security_check_cookie@4(eax_1 ^ &var_440)
        return arg1
    
    arg1[0x1fa].b = 1
    int32_t eax_13 = (*(*data_114ec78 + 0x4c))(&var_440)
    arg1[0x390] = eax_13
    int32_t* eax_14 = sub_4f0ef0(eax_13, &var_444, &data_624734, 0x5b)
    int32_t* eax_16 =
        sub_4f0ef0(sub_4ef420(eax_14, arg1, eax_14, &var_444, nullptr), &var_444, &data_624734, 0x5c)
    int32_t* eax_18 =
        sub_4f0c50(sub_4ef420(eax_16, &arg1[0xfc], eax_16, &var_444, 1), &var_444, &data_624734, 0x6a)
    int32_t edx_8 = var_444
    arg1[0x1f9] = eax_18
    
    for (int32_t i = 0; i u< 0x51; i += 1)
        int32_t ecx_9 = 0
        
        if (edx_8 s> 0)
            int32_t* var_43c
            eax_18 = var_43c
            
            do
                if (*eax_18 == i)
                    void* eax_22 = &arg1[arg1[0x1f8] * 5 + 0x1fb]
                    *eax_22 = i
                    eax_18 = sub_4ef550(eax_22, &var_444, i, eax_22)
                    edx_8 = var_444
                    
                    if (eax_18.b != 0)
                        arg1[0x1f8] += 1
                    
                    break
                
                ecx_9 += 1
                eax_18 = &eax_18[4]
            while (ecx_9 s< edx_8)
    
    int32_t var_10
    @__security_check_cookie@4(var_10 ^ &var_444)
    return eax_18
}
