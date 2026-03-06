// 函数名称: sub_4c6bc0
// 虚拟地址: 0x4c6bc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4c6bc0(int32_t arg1, int32_t* arg2, void* arg3, void* arg4, void* arg5, void* arg6, int32_t arg7)
{
    // 第一条实际指令: void* edi = arg5
    void* edi = arg5
    int32_t* esi = arg2
    int32_t eax_1 = *(*(edi + 0x18) + 0xc)
    int32_t var_10 = eax_1
    char const* const var_28_1
    int32_t var_24_1
    char const* const var_20_1
    char* ecx
    
    if (eax_1 != 0)
        int32_t ebx_1 = 0
        int32_t var_c_1 = 0
        void* result
        
        if (arg4 s<= 0)
        label_4c6cd0:
            result.b = 1
            return result
        
        while (true)
            void* ecx_1 = *(edi + 0x18)
            
            if (*(ecx_1 + 0x10) != 0xf)
                char eax_4 = sub_4ce0a0(ecx_1)
                void* ecx_5 = *(edi + 0x18)
                
                if (eax_4 != 0)
                    int32_t eax_5 = *(ecx_5 + 0x10)
                    
                    if (eax_5 != 8)
                        eax_1 = eax_5 - 1
                        
                        if (eax_1 u<= 0x10)
                            var_20_1 = "DefBinReadFixupArray"
                            var_24_1 = 0x326
                            var_28_1 = "d:\ax\trunk\ax2017\engine\defbin.cpp"
                            ecx = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
                            break
                        
                        result = sub_4c7140(eax_1, esi, arg3, ecx_5, arg6, arg7)
                    else
                        result = sub_4c6b00(eax_5, esi, arg3, arg7)
                    
                    if (result.b == 0)
                        result.b = 0
                        return result
                else
                    void* var_20_3 = ecx_5
                    sub_4c62a0(ecx_5)
            else
                int32_t edi_1 = *(edi + 0x20)
                
                if (*esi != 0)
                    if (sub_4c6b00(arg7, esi, arg3, arg7).b == 0)
                        result.b = 0
                        return result
                    
                    char* ebx_2 = *esi
                    
                    if (edi_1 != 0)
                    label_4c6c67:
                        ebx_1 = var_c_1
                        edi = arg5
                        *esi = sub_4d0b50(ebx_2, edi_1)
                    else
                        if (*ebx_2 != 0)
                            if (edi_1 == 0)
                                edi_1 = sub_4dfc80(ebx_2)
                            
                            goto label_4c6c67
                        
                        ebx_1 = var_c_1
                        edi = arg5
                        *esi = 0
                else
                    edi = arg5
                    *esi = 0
            
            esi += var_10
            ebx_1 += 1
            var_c_1 = ebx_1
            
            if (ebx_1 s>= arg4)
                goto label_4c6cd0
    else
        var_20_1 = "DefinitionGetSize"
        var_24_1 = 0x6d
        var_28_1 = "d:\ax\trunk\ax2017\engine\definition.cpp"
        ecx = "pDefMap->definitionSize != 0"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_28_1, var_24_1, var_20_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
