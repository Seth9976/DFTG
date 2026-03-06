// 函数名称: sub_4d6f80
// 虚拟地址: 0x4d6f80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_4d6f80(int32_t* arg1, void* arg2, char* arg3, int32_t* arg4, char* arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    void* edi = arg2
    void* var_8 = edi
    char* var_c = arg3
    
    if ((arg6 & 0x40) != 0)
        goto label_4d6fce
    
    char* var_24 = arg3
    void* const ecx_1
    
    if (arg5 != 0)
        sub_48a2c0(&var_24, arg5)
        var_c = sub_4d63c0(arg3)
    label_4d6fce:
        int32_t* edx_1 = arg4
        int32_t ebx = 0
        
        if (*edx_1 s<= 0)
            return 
        
        arg1 = nullptr
        int32_t* var_14_1 = nullptr
        
        while (true)
            int32_t* esi_1 = edx_1[2]
            int32_t edx_2 = *(esi_1 + arg1)
            int32_t* esi_2 = esi_1 + arg1
            
            if (edx_2 != 0xffffffff)
                arg6.d = &esi_2[2]
                char* eax_1 = sub_4f0f70(edi, edx_2)
                int32_t* eax_2 = sub_4f0fd0(edi, *esi_2)
                
                if (eax_2[4] - 1 u> 0x10)
                    arg1 = sub_4ce110(eax_2)
                    
                    if (arg1.b == 0)
                        if ((sub_4f1030(var_8, *esi_2) & 0x40) == 0)
                            *arg6.d
                            int32_t* eax_6 = sub_4d62d0(var_c, eax_1)
                            var_24 = nullptr
                            eax_6[2]
                            sub_4d78c0(eax_2, var_24)
                        else
                            arg1 = eax_2[1]
                            
                            if ((arg1[0xa].b & 0x40) == 0)
                                break
                            
                            var_24 = nullptr
                            int32_t var_28_5 = 0
                            sub_4d6590(arg1, *arg6.d, var_c, arg1[3], eax_1, 0, var_24)
                    else
                        var_24 = nullptr
                        int32_t var_28_4 = 0
                        sub_4d6590(arg1, *arg6.d, var_c, eax_2, eax_1, 0, var_24)
                else
                    char* eax_3 = sub_4f1080(var_8, *esi_2)
                    int32_t edx_5 = *esi_2
                    var_24 = eax_3
                    void* var_28_2 = var_8
                    int32_t eax_4 = sub_4f1030(var_8, edx_5)
                    sub_4d6590(eax_4, arg6.d, var_c, eax_2, eax_1, eax_4, var_24)
                
                edi = var_8
            
            edx_1 = arg4
            ebx += 1
            var_14_1 = &var_14_1[4]
            
            if (ebx s>= *edx_1)
                return 
            
            arg1 = var_14_1
        
        var_24 = "DefParseTreeMakeFromDefinitionTagValue"
        int32_t var_28_7 = 0x6fb
        char const* const var_2c_4 = "d:\ax\trunk\ax2017\engine\defparsetree.cpp"
        ecx_1 = "pDefMap->pDTMapFields[0].fieldFlags & DEF_FIELD_FLAG_INLINE_XML"
    else
        char const* const var_28_1 = "XString::XString"
        int32_t var_2c_1 = 0x94
        char const* const var_30_1 = "d:\ax\trunk\ax2017\engine\xstring.cpp"
        ecx_1 = &data_5efbf0
    
    sub_489550(arg1, &data_5b2591, ecx_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
