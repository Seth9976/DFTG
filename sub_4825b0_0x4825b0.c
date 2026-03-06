// 函数名称: sub_4825b0
// 虚拟地址: 0x4825b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4825b0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ecx = arg4
    int32_t ecx = arg4
    int32_t esi = arg2
    int32_t eax = ecx - 1
    int32_t var_8 = esi
    int32_t edi = esi
    int32_t eax_1 = eax s>> 1
    int32_t var_c = eax_1
    
    if (esi s< eax_1)
        do
            int32_t ecx_1 = edi * 2
            edi = ecx_1 + 2
            
            if (*(arg3 + edi * 0xc) == 2 && *(arg3 + ecx_1 * 0xc + 0xc) != 2)
                edi = ecx_1 + 1
            
            int32_t eax_4 = edi * 3
            int32_t eax_5 = esi * 3
            esi = edi
            int64_t* ecx_2 = arg3 + (eax_5 << 2)
            *ecx_2 = *(arg3 + (eax_4 << 2))
            ecx_2[1].d = *(arg3 + (eax_4 << 2) + 8)
            eax_1 = var_c
        while (edi s< eax_1)
        
        ecx = arg4
    
    if (edi == eax_1 && (ecx.b & 1) == 0)
        int32_t eax_7 = ecx * 3
        int32_t eax_8 = esi * 3
        esi = eax
        int64_t* ecx_3 = arg3 + (eax_8 << 2)
        *ecx_3 = *(arg3 + (eax_7 << 2) - 0xc)
        ecx_3[1].d = *(arg3 + (eax_7 << 2) - 4)
    
    if (var_8 s< esi)
        int32_t eax_11
        
        do
            eax_11 = (esi - 1) s>> 1
            int32_t ecx_4 = eax_11 * 3
            int64_t* edi_1 = arg3 + (ecx_4 << 2)
            
            if (*(arg3 + (ecx_4 << 2)) != 2)
                break
            
            if (*arg5 == 2)
                break
            
            int64_t* edx_3 = arg3 + esi * 0xc
            esi = eax_11
            *edx_3 = *edi_1
            edx_3[1].d = edi_1[1].d
        while (var_8 s< eax_11)
    
    int64_t* ecx_8 = arg3 + esi * 0xc
    int64_t* eax_13 = arg5
    *ecx_8 = *eax_13
    int32_t result = eax_13[1].d
    ecx_8[1].d = result
    return result
}
