// 函数名称: sub_532a70
// 虚拟地址: 0x532a70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_532a70(int32_t arg1, void* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: if (*(arg2 + 4) != 4)
    if (*(arg2 + 4) != 4)
        return 
    
    int32_t ecx = *(arg2 + 0x18)
    arg1 = *(arg2 + 0x14)
    int32_t var_8_1 = ecx
    int32_t var_14_1 = arg1
    
    if (ecx == 0)
        sub_532a10(arg3, arg4)
        return 
    
    int32_t edx_1 = *(arg3 + 8)
    int32_t esi_1 = 0
    int32_t var_c_1 = edx_1
    
    if (arg1 s<= 0)
        return 
    
    do
        int32_t eax_1 = *(ecx + (esi_1 << 2))
        esi_1 += 1
        arg1 = eax_1 + esi_1
        int32_t var_10_1 = arg1
        
        if (esi_1 s< arg1)
            do
                void* ebx_1 = *(edx_1 + (*(ecx + (esi_1 << 2)) << 2))
                
                if (*(ebx_1 + 0x68) == 0)
                    void* edx_2 = *(ebx_1 + 8)
                    
                    if (edx_2 != 0)
                        sub_532a10(arg3, edx_2)
                    
                    *(ebx_1 + 0x68) = 1
                    int32_t ecx_3 = *(arg3 + 0x5c)
                    int32_t eax_2 = *(arg3 + 0x60)
                    
                    if (ecx_3 == eax_2)
                        int32_t eax_3 = eax_2 * 2
                        *(arg3 + 0x60) = eax_3
                        int32_t var_24_1 = eax_3 << 3
                        int32_t var_28_1 = *(arg3 + 0x64)
                        int32_t eax_5 = sub_57fb2f()
                        ecx_3 = *(arg3 + 0x5c)
                        *(arg3 + 0x64) = eax_5
                    
                    arg1 = *(arg3 + 0x64)
                    edx_1 = var_c_1
                    *(arg1 + (ecx_3 << 3)) = 0
                    *(arg1 + (ecx_3 << 3) + 4) = ebx_1
                    *(arg3 + 0x5c) += 1
                    ecx = var_8_1
                
                esi_1 += 1
            while (esi_1 s< var_10_1)
    while (esi_1 s< var_14_1)
}
