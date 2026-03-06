// 函数名称: ___acrt_strtok_s_novalidation
// 虚拟地址: 0x58db0e
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*___acrt_strtok_s_novalidation(char* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    int32_t var_30 = ebx
    char* esi = arg2
    int32_t i = 0
    int32_t edi
    int32_t var_38 = edi
    char* edi_1 = arg1
    bool cond:0 = false
    char var_28[0x20]
    
    do
        if (cond:0)
            ___report_rangecheckfailure()
            noreturn
        
        var_28[i] = 0
        i += 1
        cond:0 = i u>= 0x20
    while (i s< 0x20)
    
    do
        ebx.b = *esi
        uint32_t edx_1 = zx.d(ebx.b)
        uint32_t ecx_2 = edx_1 u>> 3
        esi = &esi[1]
        var_28[ecx_2] |= (1 << ((edx_1 & 7) u% 0x20)).b
    while (ebx.b != 0)
    
    if (edi_1 == 0)
        edi_1 = *arg3
    
    uint32_t edx_3 = zx.d(*edi_1)
    char* ebx_1 = edi_1
    
    if ((var_28[edx_3 u>> 3] & (1 << (edx_3.b & 7)).b) != 0)
        char* esi_1 = edi_1
        uint32_t edx_5
        
        do
            ebx_1 = esi_1
            
            if (*edi_1 == 0)
                break
            
            edi_1 = &esi_1[1]
            edx_5 = zx.d(*edi_1)
            esi_1 = edi_1
            ebx_1 = edi_1
        while ((var_28[edx_5 u>> 3] & (1 << (edx_5.b & 7)).b) != 0)
    
    char* esi_2 = ebx_1
    
    while (*edi_1 != 0)
        uint32_t edx_7 = zx.d(*esi_2)
        esi_2 = &esi_2[1]
        
        if ((var_28[edx_7 u>> 3] & (1 << (edx_7.b & 7)).b) != 0)
            *edi_1 = 0
            edi_1 = esi_2
            break
        
        edi_1 = esi_2
    
    int32_t esi_3 = esi_2 - ebx_1
    int32_t esi_4 = neg.d(esi_3)
    *arg3 = edi_1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return sbb.d(esi_4, esi_4, esi_3 != 0) & ebx_1
}
