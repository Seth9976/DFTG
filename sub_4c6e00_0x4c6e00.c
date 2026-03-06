// 函数名称: sub_4c6e00
// 虚拟地址: 0x4c6e00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4c6e00(void* arg1, void* arg2, void* arg3, void* arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: void* esi = arg4
    void* esi = arg4
    
    if (*(esi + 8) != 0)
        int32_t edx = arg6
        int32_t edi_1 = 0
        
        while (true)
            int32_t edi_2 = edi_1 + 1
            int32_t* esi_1 = *(esi + 4) + edi_1 * 0x3c
            
            if (edi_2 s>= *(arg4 + 8))
                edi_2 = 0xffffffff
            
            void* eax_2 = esi_1[3]
            int32_t edi_3 = *(eax_2 + 0x10)
            
            if (edi_3 != 0xf)
                arg1 = sub_4ce0a0(eax_2)
                
                if (arg1.b == 0)
                    void* var_24_2 = eax_2
                    sub_4c62a0(esi_1[3])
                label_4c70c2:
                    edx = arg6
                    goto label_4c70c5
                
                if (edi_3 == 0x11)
                    sub_4c6d20()
                    noreturn
                
                if (edi_3 != 5)
                    if (edi_3 == 6)
                        arg1 = sub_4c6bc0(arg1, *esi_1 + arg2, arg3, esi_1[7], esi_1, nullptr, arg6)
                        goto label_4c70be
                    
                    if (edi_3 == 8 || edi_3 == 0xc)
                    label_4c70b6:
                        arg1 = sub_4c6b00(arg1, *esi_1 + arg2, arg3, arg6)
                    else if (edi_3 == 0xb)
                        void** ecx_12 = *esi_1
                        int32_t edi_5 = *(ecx_12 + arg2)
                        
                        if (edi_5 == 0)
                            *(ecx_12 + arg2) = edi_5
                            goto label_4c70c2
                        
                        arg1 = esi_1[0xa]
                        
                        if ((arg1.b & 0x10) != 0)
                            goto label_4c70c2
                        
                        if ((arg1 & 0x100) != 0)
                            edx = arg6
                        
                        if ((arg1 & 0x100) != 0 && edi_5 s>= edx)
                            *(ecx_12 + arg2) = edi_5
                            goto label_4c70c5
                        
                        void* eax_8 = arg3 + edi_5
                        *(ecx_12 + arg2) = eax_8
                        arg1 = sub_4ce1a0(esi_1[6]) + edi_5
                        
                        if (arg1 s> arg6 || eax_8 s<= arg2)
                            arg1.b = 0
                            return arg1
                        
                        arg1 = sub_4c6bc0(arg1, *(ecx_12 + arg2), arg3, 1, esi_1, nullptr, arg6)
                    else
                        int32_t var_28_4
                        char const* const var_24_11
                        void* eax_14
                        char* ecx_30
                        
                        if (edi_3 != 9)
                            eax_14 = *(eax_2 + 0x10) - 1
                            
                            if (eax_14 u<= 0x10)
                                var_24_11 = "DefBinReadFixupField"
                                var_28_4 = 0x415
                                ecx_30 = "!DefTypeIsBuiltIn(pFieldDefMap)"
                            label_4c7111:
                                sub_489550(eax_14, &data_5b2591, ecx_30, 
                                    "d:\ax\trunk\ax2017\engine\defbin.cpp", var_28_4, var_24_11)
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* eax_20 = arg5
                            
                            if (arg5 == 0 && (edi_3 == 0x13 || edi_3 == 0x14))
                                eax_20 = esi_1[7]
                            
                            arg1 = sub_4c7140(eax_20, *esi_1 + arg2, arg3, eax_2, eax_20, arg6)
                        else
                            void* eax_11 = esi_1[4] + arg2
                            int32_t edx_8 = *eax_11
                            *eax_11 = edx_8
                            void* eax_12 = sub_4f0fd0(arg5, edx_8)
                            
                            if (*(eax_12 + 0x10) != 0xf)
                                if (sub_4ce0a0(eax_12) == 0)
                                    sub_4f0830(arg5, *eax_11)
                                    void* var_24_7 = arg5
                                    sub_4c62a0(eax_12)
                                    goto label_4c70c2
                                
                                arg1 = *(eax_12 + 0x10)
                                
                                if (arg1 == 8)
                                    goto label_4c70b6
                                
                                eax_14 = arg1 - 1
                                
                                if (eax_14 u<= 0x10)
                                    var_24_11 = "DefBinReadFixupTagValue"
                                    var_28_4 = 0x3a5
                                    ecx_30 = "!DefTypeIsBuiltIn(pDefMap)"
                                    goto label_4c7111
                                
                                int32_t* eax_15 = *esi_1
                                void* esi_3 = *(eax_15 + arg2)
                                
                                if (sub_4ce1a0(eax_12) + esi_3 s> arg6)
                                    arg1.b = 0
                                    return arg1
                                
                                void* edx_13 = esi_3 + arg3
                                
                                if (edx_13 s<= arg2)
                                    arg1.b = 0
                                    return arg1
                                
                                *(eax_15 + arg2) = edx_13
                                arg1 = sub_4c7140(arg3, edx_13, arg3, eax_12, nullptr, arg6)
                            else
                                int32_t var_24_6 = esi_1[8]
                                arg1 = sub_4c6b60(eax_12, *esi_1 + arg2, arg3, arg6)
                else
                    void** eax_6 = esi_1[4]
                    arg1 = sub_4c6d60(eax_6, arg2, arg3, esi_1, arg5, *(eax_6 + arg2), arg6)
                
            label_4c70be:
                
                if (arg1.b != 0)
                    goto label_4c70c2
                
                arg1.b = 0
                return arg1
            
            void* eax_3 = *esi_1
            int32_t* edi_4 = eax_3 + arg2
            int32_t esi_2 = esi_1[8]
            
            if (*(eax_3 + arg2) != 0)
                if (sub_4c6b00(eax_3, edi_4, arg3, edx).b == 0)
                    arg1.b = 0
                    return arg1
                
                char* eax_4 = *edi_4
                
                if (esi_2 != 0)
                    edx = arg6
                    *edi_4 = sub_4d0b50(eax_4, esi_2)
                else if (*eax_4 != 0)
                    if (esi_2 == 0)
                        esi_2 = sub_4dfc80(eax_4)
                    
                    edx = arg6
                    *edi_4 = sub_4d0b50(eax_4, esi_2)
                else
                    edx = arg6
                    *edi_4 = 0
                
                goto label_4c70c5
            
            *edi_4 = 0
        label_4c70c5:
            edi_1 = edi_2
            
            if (edi_1 == 0xffffffff)
                break
            
            esi = arg4
    
    arg1.b = 1
    return arg1
}
