// 函数名称: sub_48ffa0
// 虚拟地址: 0x48ffa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_48ffa0(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x48)
    *(arg1 + 0x48)
    void* edi = *(arg1 + 4)
    int32_t eax = sub_48ff40()
    int32_t ebx = 0
    int32_t var_c = *(edi + 0x10)
    int32_t ecx_2 = *(edi + 0x28)
    int32_t var_8 = *(edi + 0x14)
    int32_t var_14
    int32_t ecx_6
    int32_t edx_3
    int32_t esi_3
    
    if (eax != 1)
        if ((*(*data_114ec78 + 0x28))(*(edi + 0x38)) == 0)
            *(edi + 0x38) = (*(*data_114ec78 + 0x24))(*(edi + 0x20), *(edi + 0x18), *(edi + 0x10), 0)
        
        if (*(edi + 0x2c) s> 0 && (*(*data_114ec78 + 0x34))(*(edi + 0x3c)) == 0)
            int32_t edx_4 = *(edi + 0x2c)
            int32_t eax_12
            eax_12.b = edx_4 != *(edi + 0x28) * 2
            *(edi + 0x3c) =
                (*(*data_114ec78 + 0x30))(*(edi + 0x30), edx_4, zx.d(eax_12.b), 0, *(edi + 0x38))
        
        ecx_6 = *(edi + 0x3c)
        
        if (eax == 2)
            ebx = data_114e7d4
        
        edx_3 = var_8
        esi_3 = ecx_2
        var_14 = *(edi + 0x38)
    else
        void* eax_2 = sub_4eee80(sub_4eed40(*(arg1 + 0x48)))
        sub_48fd20(*(arg1 + 4), *eax_2)
        edx_3 = *(edi + 0x14) * data_114e7d4
        ecx_6 = *(edi + 0x44)
        var_14 = *(edi + 0x40)
        esi_3 = *(edi + 0x28) * data_114e7d4
        var_c = 0xc
        var_8 = edx_3
    
    int32_t edx_5
    int32_t eax_17
    int32_t eax_16
    
    if (ecx_6 == 0)
        edx_5:eax_17 = muls.dp.d(0x55555556, edx_3)
    else
        edx_5:eax_16 = muls.dp.d(0x55555556, esi_3)
    (*(*data_114ec78 + 0x3c))(4, var_14, ecx_6, var_c, (edx_5 u>> 0x1f) + edx_5, var_8, 0, ebx)
    int32_t ecx_12 = data_114e7d4
    void* result = data_114ec70
    
    if (ecx_12 s<= 0)
        *(result + 0x18) += 1
        *(result + 0x1c) += 1
        return result
    
    *(result + 0x18) += ecx_12
    *(result + 0x1c) += 1
    return result
}
