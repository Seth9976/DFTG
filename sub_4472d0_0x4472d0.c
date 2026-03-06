// 函数名称: sub_4472d0
// 虚拟地址: 0x4472d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_4472d0(void* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t var_c = arg2
    void* esi_1 = arg2 * 0x1bc + arg3
    
    if (*(esi_1 + 0x164) s<= 0)
        return 
    
    arg1 = esi_1
    void* ecx = esi_1 + 0x2b
    void* var_10_1 = ecx
    void* esi_2 = esi_1 + 0x25
    
    do
        if (*esi_2 == 4)
            uint32_t eax = zx.d(*(esi_2 + 4))
            
            if (eax == arg4)
                *esi_2 = 1
                
                if (*(arg3 + 0x10) == 0)
                    int32_t eax_1 = sub_444430(eax, 0x30, arg3, arg2, i, 0, 0, 0)
                    ecx = var_10_1
                    
                    if ((*ecx & 2) != 0)
                        sub_444430(eax_1, 0x2d, arg3, var_c, i, 0, 0, 0)
                        ecx = var_10_1
                    
                    arg2 = var_c
            
            arg1 = esi_1
        
        i += 1
        ecx += 8
        esi_2 += 8
        var_10_1 = ecx
    while (i s< *(arg1 + 0x164))
}
