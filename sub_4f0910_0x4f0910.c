// 函数名称: sub_4f0910
// 虚拟地址: 0x4f0910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_4f0910(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4, char* arg5, int32_t arg6)
{
    // 第一条实际指令: void* eax_1 = sub_4f0fd0(arg3, arg4)
    void* eax_1 = sub_4f0fd0(arg3, arg4)
    int32_t ebx = *arg2
    int32_t esi = 0
    int32_t* edi_1
    
    if (ebx s<= 0)
    label_4f094f:
        int32_t ebx_1 = ebx << 4
        char* eax_2 = sub_4c2e40(ebx_1 + 0x10)
        sub_579300(eax_2, arg2[2], ebx_1)
        
        if (*arg2 s> 0)
            int32_t eax_3 = arg2[2]
            
            if (eax_3 != 0)
                _aligned_free_base(eax_3)
        
        arg2[2] = eax_2
        *arg2 += 1
        edi_1 = &eax_2[ebx_1]
    else
        edi_1 = arg2[2]
        
        while (*edi_1 != arg4)
            esi += 1
            edi_1 = &edi_1[4]
            
            if (esi s>= ebx)
                goto label_4f094f
        
        sub_4f0880(&edi_1[2], arg4, arg3, &edi_1[2])
    
    *edi_1 = arg4
    
    if (sub_4ce0a0(eax_1) == 0)
        edi_1[2] = arg5
        edi_1[3] = arg6
        return arg6
    
    int32_t eax_8 = *(eax_1 + 0x10)
    
    if (eax_8 == 8)
        char* esi_3 = arg5
        void* ecx_4 = &esi_3[1]
        
        do
            eax_8.b = *esi_3
            esi_3 = &esi_3[1]
        while (eax_8.b != 0)
        
        char* eax_10
        int32_t edx_2
        edx_2:eax_10 = sx.q(sub_4c2e40(esi_3 - ecx_4 + 1))
        edi_1[2] = eax_10
        edi_1[3] = edx_2
        return sub_579300(eax_10, arg5, esi_3 - ecx_4 + 1)
    
    if (eax_8 - 1 u<= 0x10)
        sub_489550(eax_8 - 1, &data_5b2591, "!DefTypeIsBuiltIn(pDefMap)", 
            "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0xf4, "AttribMapSetValue")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if ((arg5 | arg6) != 0)
        char* eax_15 = sub_4cf020(arg5, eax_1)
        edi_1[2] = eax_15
        return eax_15
    
    char* eax_16 = sub_4f0c00(arg3, arg4)
    
    if (eax_16 == 0)
        int32_t* eax_19 = sub_4c2e40(sub_4ce1a0(eax_1))
        edi_1[2] = eax_19
        return sub_4ce680(eax_19, eax_1)
    
    char* eax_17 = sub_4cf020(eax_16, eax_1)
    edi_1[2] = eax_17
    return eax_17
}
