// 函数名称: sub_43da90
// 虚拟地址: 0x43da90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_43da90(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: void* ebx_1 = arg2 * 0x1bc + arg3
    void* ebx_1 = arg2 * 0x1bc + arg3
    int32_t result = *arg4
    
    if (result == 1)
        int32_t eax = arg4[2]
        int32_t ecx = arg4[7]
        *(ebx_1 + (eax << 3) + 0x2b) |= 1
        *(ebx_1 + (eax << 3) + 0x29) = ecx.b
        *(ebx_1 + 0x180) = ecx
        result = *arg4
    
    void* esi
    
    if (result == 0 || result == 3)
        esi = &arg4[7]
        result.b = *esi
        *(ebx_1 + (arg4[2] << 3) + 0x29) = result.b
        result = *arg4
    else
        esi = &arg4[7]
    
    if (result == 2)
        int32_t* eax_1 = arg4[6]
        void* ecx_2 = &arg4[2]
        int32_t eax_2 = arg4[1]
        void* var_c_1 = ecx_2
        
        if (eax_2 s>= 0)
            result = eax_2 * 3
            *(arg3 + (result << 2) + 0x8cd) = 1
        else
            result = *ecx_2
            *(ebx_1 + (result << 3) + 0x25) = 7
            *(ebx_1 + 0x188) = 1
        
        int32_t edx_1 = 0
        
        if (eax_1 s> 0)
            do
                int32_t ecx_3 = *(ecx_2 + (edx_1 << 2))
                esi += 4
                result.b = *(esi - 4)
                edx_1 += 1
                *(ebx_1 + (ecx_3 << 3) + 0x29) = result.b
                ecx_2 = var_c_1
            while (edx_1 s< eax_1)
    
    return result
}
