// 函数名称: sub_4c6660
// 虚拟地址: 0x4c6660
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4c6660(int32_t arg1, int32_t* arg2, int32_t* arg3, char** arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t* eax = arg2[4]
    int32_t i = *(arg3 + eax)
    int32_t edi = arg4[2]
    
    if (edi s> 0)
        int32_t* eax_1 = arg4[1]
        
        while (*eax_1 != i)
            esi += 1
            eax_1 = &eax_1[0xf]
            
            if (esi s>= edi)
                return eax_1
        
        void* eax_2 = sub_4f0fd0(arg4, i)
        int32_t edi_1 = *(eax_2 + 0x10)
        
        if (edi_1 != 0xf)
            eax = sub_4ce0a0(eax_2)
            
            if (eax.b != 0)
                if (edi_1 == 8)
                    return sub_4c63b0(eax, *arg2, arg3, arg2, arg5)
                
                int32_t* eax_7 = *(eax_2 + 0x10) - 1
                int32_t var_24_2
                char const* const ecx_6
                
                if (eax_7 u<= 0x10)
                    char const* const var_20_3 = "DefBinSerializeTagValue"
                    var_24_2 = 0x222
                    ecx_6 = "!DefTypeIsBuiltIn(pDefMap)"
                label_4c67c8:
                    sub_489550(eax_7, &data_5b2591, ecx_6, "d:\ax\trunk\ax2017\engine\defbin.cpp", 
                        var_24_2, "DefBinSerializeTagValue")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                eax_7 = arg5[4]
                
                if (eax_7 != 0 && *eax_7 != 0)
                    char const* const var_20_6 = "DefBinSerializeTagValue"
                    var_24_2 = 0x225
                    ecx_6 = "!tSerializer.pDataSizeWithoutHWBuffers || *tSerializer."
                    "pDataSizeWithoutHWBuffers == 0"
                    goto label_4c67c8
                
                int32_t edx_6 = (arg5[2] + 3) & 0xfffffffc
                bool cond:1_1 = arg5[3].b != 0
                arg5[2] = edx_6
                
                if (not(cond:1_1))
                    *(arg5[1] + *arg2 + *arg5) = edx_6
                
                char** eax_10 = *(arg3 + *arg2)
                void* eax_11 = sub_4ce1a0(eax_2)
                int32_t ebx_1 = arg5[2]
                
                if (arg5[3].b == 0)
                    sub_579300(*arg5 + ebx_1, eax_10, eax_11)
                
                int32_t esi_3 = arg5[1]
                void* eax_12 = eax_11 + ebx_1
                arg5[1] = ebx_1
                arg5[2] = eax_12
                eax = sub_4c67f0(eax_12, eax_2, eax_10, 0, arg5)
                arg5[1] = esi_3
        else
            eax = *arg2
            void* ecx_2 = *(eax + arg3)
            
            if (ecx_2 != 0)
                int32_t* eax_3 = *(ecx_2 + 0x20)
                char* const ecx_3 = &data_5b2591
                
                if (eax_3 != 0)
                    ecx_3 = eax_3
                
                return sub_4c6300(eax_3, arg5[1] + *arg5 + eax, ecx_3, arg5)
    
    return eax
}
