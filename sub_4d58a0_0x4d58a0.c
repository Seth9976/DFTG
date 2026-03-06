// 函数名称: sub_4d58a0
// 虚拟地址: 0x4d58a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4d58a0(int32_t arg1, int32_t* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t* var_c = arg2
    int32_t* var_c = arg2
    int32_t eax = arg2[2]
    
    if (eax != 0)
        char* esi_1 = *arg2
        arg2[2] = eax + 1
        char* eax_3 = sub_4c2e40((eax + 1) * 0x18)
        *arg2 = eax_3
        sub_579300(eax_3, esi_1, arg2[2] * 0x18)
        
        if (esi_1 != 0)
            _aligned_free_base(esi_1)
    else
        arg2[2] = 1
        *arg2 = sub_4c2e40(eax + 0x18)
    
    void* result = *arg2 + arg2[2] * 0x18 - 0x18
    void* result_2 = result
    char const* const var_30_2
    int32_t var_2c_2
    char const* const var_28_3
    char* ecx_7
    
    if (arg4 != 0)
        void* ecx_8 = arg3
        result = *(ecx_8 + 0xc)
        
        if (*(result + 0x10) == 0x14)
            int32_t* esi_2 = *(arg4 + 4)
            int32_t edi_1 = 0
            
            if (esi_2 != 0)
                while (true)
                    int32_t* eax_7 = *esi_2
                    char* edx = *(ecx_8 + 4)
                    char* const ecx_9 = &data_5b2591
                    esi_2 = esi_2[1]
                    char* eax_8 = *eax_7
                    
                    if (eax_8 != 0)
                        ecx_9 = eax_8
                    
                    int32_t ecx_11
                    
                    while (true)
                        eax_8.b = *ecx_9
                        char temp0_1 = *edx
                        bool c_1 = eax_8.b u< temp0_1
                        
                        if (eax_8.b == temp0_1)
                            if (eax_8.b == 0)
                                ecx_11 = 0
                                break
                            
                            eax_8.b = ecx_9[1]
                            char temp2_1 = edx[1]
                            c_1 = eax_8.b u< temp2_1
                            
                            if (eax_8.b == temp2_1)
                                ecx_9 = &ecx_9[2]
                                edx = &edx[2]
                                
                                if (eax_8.b != 0)
                                    continue
                                
                                ecx_11 = 0
                                break
                        
                        ecx_11 = sbb.d(ecx_9, ecx_9, c_1) | 1
                        break
                    
                    int32_t eax_9 = edi_1 + 1
                    ecx_8 = arg3
                    
                    if (ecx_11 != 0)
                        eax_9 = edi_1
                    
                    edi_1 = eax_9
                    
                    if (esi_2 == 0)
                        break
            
            int32_t esi_4 = *(arg4 + 0xc) - edi_1
            int32_t* result_3 = result_2
            void* ecx_14 = arg3
            result_3[2] = sub_4c2e40(esi_4 << 4)
            *result_3 = esi_4
            result_3[4] = edi_1
            int32_t* edi_2 = *(arg4 + 4)
            result = *(ecx_14 + 0x1c)
            void* result_1 = result
            
            if (edi_2 == 0)
                return result
            
            int32_t ebx_2 = 0
            
            if (edi_2 != 0)
                while (true)
                    int32_t* esi_5 = *edi_2
                    char* edx_1 = *(ecx_14 + 4)
                    edi_2 = edi_2[1]
                    char* const ecx_15 = &data_5b2591
                    char* eax_13 = *esi_5
                    
                    if (eax_13 != 0)
                        ecx_15 = eax_13
                    
                    int32_t eax_15
                    
                    while (true)
                        eax_13.b = *ecx_15
                        char temp1_1 = *edx_1
                        bool c_2 = eax_13.b u< temp1_1
                        
                        if (eax_13.b == temp1_1)
                            if (eax_13.b == 0)
                                eax_15 = 0
                                break
                            
                            eax_13.b = ecx_15[1]
                            char temp3_1 = edx_1[1]
                            c_2 = eax_13.b u< temp3_1
                            
                            if (eax_13.b == temp3_1)
                                ecx_15 = &ecx_15[2]
                                edx_1 = &edx_1[2]
                                
                                if (eax_13.b != 0)
                                    continue
                                
                                eax_15 = 0
                                break
                        
                        eax_15 = sbb.d(eax_13, eax_13, c_2) | 1
                        break
                    
                    if (eax_15 != 0)
                        int32_t* var_28_5 = esi_5
                        result = sub_4d5710(eax_15, result_3[2] + ebx_2, result_1, ecx_15)
                        
                        if (result.b != 0)
                            ebx_2 += 0x10
                        else
                            char* eax_16 = *esi_5
                            char* const ecx_17 = &data_5b2591
                            
                            if (eax_16 != 0)
                                ecx_17 = eax_16
                            
                            char* const var_28_6 = ecx_17
                            result = sub_4892e0("unknown tag %s")
                    else
                        result = sub_4d58a0(arg3, esi_5[2])
                    
                    ecx_14 = arg3
                    result_3 = result_2
                    
                    if (edi_2 == 0)
                        break
                
                return result
            
            var_28_3 = "XList<struct DefParseItem *>::GetNextIter"
            var_2c_2 = 0x1a1
            ecx_7 = "iter != NULL"
            var_30_2 = "d:\ax\trunk\ax2017\engine\xlist.h"
        else
            var_28_3 = "DefParseReadAttribTree"
            var_2c_2 = 0x337
            var_30_2 = "d:\ax\trunk\ax2017\engine\defparsetree.cpp"
            ecx_7 = "pField->pDefMap->defType == DT_ATTRIB_TREE"
    else
        var_28_3 = "DefParseReadAttribTree"
        var_2c_2 = 0x336
        var_30_2 = "d:\ax\trunk\ax2017\engine\defparsetree.cpp"
        ecx_7 = "pParseTree"
    
    sub_489550(result, &data_5b2591, ecx_7, var_30_2, var_2c_2, var_28_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
