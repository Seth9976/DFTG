// 函数名称: sub_444560
// 虚拟地址: 0x444560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_444560(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: void* ebx_1 = arg2 * 0x1bc + arg3
    void* ebx_1 = arg2 * 0x1bc + arg3
    int32_t ecx = *(ebx_1 + 0x1c4)
    int32_t* eax_1 = *(ebx_1 + 0x1bc) + (ecx << 2)
    
    if (ecx s>= *(ebx_1 + 0x1c0))
        int32_t var_1c = arg2
        sub_444530("No data available in choice log who %d!\n")
        noreturn
    
    int32_t ecx_1 = *eax_1
    
    if (ecx_1 != arg4)
        int32_t var_1c_1 = ecx_1
        int32_t var_20 = arg2
        int32_t var_24 = *(ebx_1 + 0x18)
        int32_t var_28 = arg4
        sub_444530("Expected %d in choice log for player %s (%d), found %d!\n")
        noreturn
    
    int32_t result = eax_1[1]
    int32_t esi_1 = eax_1[2]
    void* eax_2 = &eax_1[3]
    
    if (arg6 != 0)
        int32_t edx = 0
        *arg6 = esi_1
        
        if (esi_1 s> 0)
            do
                int32_t ecx_3 = *eax_2
                eax_2 += 4
                *(arg5 + (edx << 2)) = ecx_3
                edx += 1
            while (edx s< esi_1)
    else if (esi_1 != 0)
        sub_444530("Log has items but nowhere to copy them!\n")
        noreturn
    
    int32_t esi_2 = *eax_2
    void* eax_3 = eax_2 + 4
    
    if (arg8 != 0)
        int32_t edx_1 = 0
        *arg8 = esi_2
        
        if (esi_2 s> 0)
            do
                int32_t ecx_5 = *eax_3
                eax_3 += 4
                *(arg7 + (edx_1 << 2)) = ecx_5
                edx_1 += 1
            while (edx_1 s< esi_2)
    else if (esi_2 != 0)
        sub_444530("Log has specials but nowhere to copy them!\n")
        noreturn
    
    *(ebx_1 + 0x1c4) = (eax_3 - *(ebx_1 + 0x1bc)) s>> 2
    return result
}
