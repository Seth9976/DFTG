// 函数名称: sub_45bb90
// 虚拟地址: 0x45bb90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_45bb90(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: void* eax_1 = sub_436a20(arg3, arg2)
    void* eax_1 = sub_436a20(arg3, arg2)
    void* result = *eax_1
    int32_t ebx = *(eax_1 + 0x10)
    
    if (result != arg5 + arg4)
        void* eax_2 = result + ebx
        
        if (eax_2 != arg4)
            sub_489550(eax_2, &data_5b2591, "log.logBytes + log.logSizePlayed == bytes", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x26b4, "LogAdd")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_4 = arg5 + ebx
        *(eax_1 + 0x10) = eax_4
        *(eax_1 + 0xc) = eax_4
        void* eax_5 = sub_41c5b0()
        result = *(eax_5 + 0x834)
        
        if (result != 5)
            if (result != 1)
                *(eax_5 + 0xc) += 1
                int32_t edx_4 = *(eax_5 + 0x14)
                int16_t var_27_1 = 0
                char var_25_1 = 0
                char* var_44 = *(eax_5 + 0xc)
                int32_t var_40_1 = *arg3
                int32_t var_3c_1 = arg2
                int32_t var_34_1 = arg4
                void* var_2c_1 = arg5
                void* eax_12 = data_126b8e8
                int32_t* eax_13 = data_aca0dc
                int32_t var_30_1 = 0
                int32_t var_38_1 = ebx
                char var_28_1 = 0
                
                if (edx_4 != 0)
                    int32_t esi_1 = eax_13[1]
                    uint32_t ecx_6 = zx.d(edx_4.w)
                    
                    if (ecx_6 u< esi_1)
                        int32_t ebx_1 = *eax_13
                        int32_t eax_15 = *(ecx_6 * 0x4c + ebx_1 + 0x48)
                        
                        if (eax_15 == edx_4)
                            void* ebx_2
                            
                            if (ecx_6 u< esi_1)
                                ebx_2 = ecx_6 * 0x4c + ebx_1
                                
                                if (eax_15 != edx_4)
                                    ebx_2 = nullptr
                            else
                                ebx_2 = nullptr
                            
                            void* eax_16 = *(eax_12 + 0xc)
                            char const* const var_60_1
                            int32_t var_5c_1
                            char const* const var_58_1
                            char* ecx_8
                            
                            if (eax_16 == 0)
                                var_58_1 = "DefinitionGetSize"
                                var_5c_1 = 0x6d
                                var_60_1 = "d:\ax\trunk\ax2017\engine\definition.cpp"
                                ecx_8 = "pDefMap->definitionSize != 0"
                            label_45bdb8:
                                sub_489550(eax_16, &data_5b2591, ecx_8, var_60_1, var_5c_1, var_58_1)
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* var_18_1 = eax_16
                            int32_t var_c = 0
                            int32_t* var_10_1 = &var_c
                            int32_t var_20 = 0
                            int32_t var_1c_1 = 0
                            char var_14_1 = 1
                            int32_t var_60_2 = 0xf42b2
                            sub_48be40(sub_4c67f0(&var_20, eax_12, &var_44, 0, &var_20), var_18_1, 
                                ebx_2 + 0x3c)
                            eax_16 = sub_48bb80(ebx_2 + 0x3c, var_18_1)
                            int32_t* esi_2 = *(ebx_2 + 0x40)
                            
                            if (esi_2 == 0)
                                var_58_1 = "XList<struct NetBuffer *>::GetTail"
                                var_5c_1 = 0x5a
                                var_60_1 = "d:\ax\trunk\ax2017\engine\xlist.h"
                                ecx_8 = "mpTail != NULL"
                                goto label_45bdb8
                            
                            void* esi_3 = *esi_2
                            char* eax_21 = *(esi_3 + 0xfde8) + *(esi_3 + 0xfdec) + esi_3
                            sub_4c6a60(eax_21, eax_12, &var_44, eax_21, nullptr)
                            *(esi_3 + 0xfdec) += var_18_1
                
                result = sub_425fe0(&arg3[2], arg2)
                
                if (*(result + 0x14) != 3)
                    *arg3
                    return sub_41c3a0()
            else
                *(eax_5 + 0x838)
                TPI1::QueryTiForCVRecord(arg3)
                result = sub_425fe0(&arg3[2], arg2)
                
                if (*(result + 0x14) != 3)
                    *arg3
                    return sub_41c3a0()
    
    return result
}
