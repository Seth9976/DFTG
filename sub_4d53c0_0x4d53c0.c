// 函数名称: sub_4d53c0
// 虚拟地址: 0x4d53c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4d53c0(int32_t arg1, int32_t* arg2, int32_t arg3, void* const arg4)
{
    // 第一条实际指令: void* ebx = *(arg4 + 8)
    void* ebx = *(arg4 + 8)
    void* edi_1 = *arg2 + arg3
    sub_4d5350(edi_1 + 0xc, "mFreeListHead", ebx, edi_1 + 0xc)
    sub_4d5350(edi_1 + 0x10, "mUsedCount", ebx, edi_1 + 0x10)
    sub_4d5350(edi_1 + 0x14, "mNextKey", ebx, edi_1 + 0x14)
    uint32_t result = *(arg2[6] + 0xc)
    char const* const var_34
    int32_t var_30_1
    char const* const var_2c_3
    char* ecx_3
    
    if (result != 0)
        int32_t eax_5 = result + 4
        result = *(edi_1 + 8)
        uint32_t result_1 = result
        
        if (*(edi_1 + 4) == 0)
            int32_t* i = *(ebx + 4)
            
            while (i != 0)
                int32_t* esi_1 = *i
                char* const ecx_4 = &data_5b2591
                i = i[1]
                char* eax_6 = *esi_1
                
                if (eax_6 != 0)
                    ecx_4 = eax_6
                
                result = __stricmp(ecx_4, "item")
                
                if (result == 0)
                    uint32_t result_2 = result_1
                    int32_t var_30_5
                    char* ecx_15
                    
                    if (*(edi_1 + 4) s>= result_2)
                        char const* const var_2c_8 = "DefParseReadDataArray"
                        var_30_5 = 0x22f
                        ecx_15 = "(int)actualCount < maxCount"
                    label_4d5562:
                        sub_489550(result_2, &data_5b2591, ecx_15, 
                            "d:\ax\trunk\ax2017\engine\defparsetree.cpp", var_30_5, 
                            "DefParseReadDataArray")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    arg4 = nullptr
                    sub_4d5350(&arg4, "slot", esi_1[2], &arg4)
                    int32_t var_14
                    sub_4d5350(&var_14, "id", esi_1[2], &var_14)
                    int32_t eax_9 = var_14
                    int32_t* ecx_9 = arg4 * eax_5 + *edi_1
                    *(ecx_9 + eax_5 - 4) = eax_9
                    result = sub_4d64f0(esi_1[2], "value")
                    
                    if ((eax_9 s>> 0x10).w == 0)
                        *(edi_1 + 4) += 1
                    else
                        char eax_10 = sub_4ce110(arg2[6])
                        void* edx_1 = arg2[6]
                        
                        if (eax_10 == 0)
                            result_2 = *(edx_1 + 0x10) - 1
                            
                            if (result_2 u<= 0x10)
                                char const* const var_2c_7 = "DefParseReadDataArray"
                                var_30_5 = 0x248
                                ecx_15 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
                                goto label_4d5562
                            
                            result = sub_4d5fd0(result, edx_1, ecx_9, *(result + 8), 0)
                            *(edi_1 + 4) += 1
                        else
                            result = sub_4d4f40(result, edx_1, ecx_9, arg2, result)
                            *(edi_1 + 4) += 1
            
            return result
        
        var_2c_3 = "DefParseReadDataArray"
        var_30_1 = 0x223
        var_34 = "d:\ax\trunk\ax2017\engine\defparsetree.cpp"
        ecx_3 = "array->mMaxUsedCount == 0"
    else
        var_2c_3 = "DefinitionGetSize"
        var_30_1 = 0x6d
        var_34 = "d:\ax\trunk\ax2017\engine\definition.cpp"
        ecx_3 = "pDefMap->definitionSize != 0"
    
    sub_489550(result, &data_5b2591, ecx_3, var_34, var_30_1, var_2c_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
