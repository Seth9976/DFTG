// 函数名称: sub_45bde0
// 虚拟地址: 0x45bde0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_45bde0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t eax_1 = data_632800 << 4
    int64_t var_28 = 0
    
    if (data_6327e8 != 0)
        int32_t* ecx = data_6cfe4c
        
        if (ecx == 0)
            sub_489550(eax_1, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t ecx_2 = *ecx - data_6327f0
        int32_t edx = *(eax_1 + 0x5b57cc)
        
        if (ecx_2 s>= edx)
            int32_t eax_3 = data_6327f8 + edx
            
            if (ecx_2 s< eax_3)
                esi = eax_3 - ecx_2
        else
            esi = data_6327f8
    else
        esi = data_6327f8
    
    void* ebx_2 = arg2 * 0x1bc + arg3
    data_6327f8 = esi
    data_6327f0.q = 0
    data_6327e8 = 0
    int32_t* ecx_4 = *(ebx_2 + 0x1bc) + (*(ebx_2 + 0x1c0) << 2)
    *ecx_4 = arg4
    void* edx_1 = &ecx_4[3]
    ecx_4[1] = arg5
    
    if (arg7 == 0)
        ecx_4[2] = 0
    else
        ecx_4[2] = arg7
        int32_t ecx_5 = 0
        
        if (arg7 s> 0)
            do
                int32_t eax_7 = *(arg6 + (ecx_5 << 2))
                ecx_5 += 1
                *edx_1 = eax_7
                edx_1 += 4
            while (ecx_5 s< arg7)
    
    void* ecx_6 = edx_1 + 4
    
    if (arg9 == 0)
        *edx_1 = 0
    else
        *edx_1 = arg9
        int32_t edx_2 = 0
        
        if (arg9 s> 0)
            do
                int32_t eax_8 = *(arg8 + (edx_2 << 2))
                edx_2 += 1
                *ecx_6 = eax_8
                ecx_6 += 4
            while (edx_2 s< arg9)
    
    *(ebx_2 + 0x1c0) = (ecx_6 - *(ebx_2 + 0x1bc)) s>> 2
    
    if (*(arg3 + 0x10) != 0)
        return arg3
    
    return sub_45bb90(ecx_4, arg2, data_63280c, ecx_4, (ecx_6 - ecx_4) & 0xfffffffc)
}
