// 函数名称: sub_572210
// 虚拟地址: 0x572210
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*sub_572210(int32_t* arg1))[0x4]
{
    // 第一条实际指令: if (arg1[0x23] != 0)
    if (arg1[0x23] != 0)
        return sub_572450(arg1) __tailcall
    
    uint32_t (* result)[0x4] = sub_572540(*arg1)
    result[3][0] = arg1[0xc]
    (*result)[0x13] = arg1[0x13]
    result[5][0] = arg1[0x14]
    (*result)[0x15] = arg1[0x15]
    (*result)[0x16] = arg1[0x16]
    (*result)[0x17] = arg1[0x17]
    result[6][0] = arg1[0x18]
    (*result)[0xd] = arg1[0xd]
    (*result)[0xe] = arg1[0xe]
    (*result)[0xf] = arg1[0xf]
    result[4][0] = arg1[0x10]
    (*result)[0x11] = arg1[0x11]
    (*result)[0x12] = arg1[0x12]
    char* edi = arg1[0x19]
    char* ecx_8 = edi
    void* edx_1 = &ecx_8[1]
    uint32_t eax_8
    
    do
        eax_8.b = *ecx_8
        ecx_8 = &ecx_8[1]
    while (eax_8.b != 0)
    int32_t eax_9 = data_1151ae0
    uint32_t eax_10
    
    if (eax_9 == 0)
        int32_t var_14_1 = ecx_8 - edx_1 + 1
        eax_10 = _malloc()
    else
        eax_10 = eax_9(ecx_8 - edx_1 + 1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\meshattachment.c", 0x43)
    
    (*result)[0x19] = eax_10
    void* ecx_12 = eax_10 - edi
    
    do
        eax_10.b = *edi
        edi = &edi[1]
        *(ecx_12 + edi - 1) = eax_10.b
    while (eax_10.b != 0)
    
    (*result)[0x1e] = arg1[0x1e]
    (*result)[0x1f] = arg1[0x1f]
    result[8][0] = arg1[0x20]
    (*result)[0x21] = arg1[0x21]
    sub_576c70(arg1, result)
    int32_t ecx_14 = data_1151ae0
    int32_t eax_16 = arg1[9] << 2
    uint32_t eax_17
    
    if (ecx_14 == 0)
        int32_t var_14_2 = eax_16
        eax_17 = _malloc()
    else
        eax_17 = ecx_14(eax_16, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\meshattachment.c", 0x47)
    
    (*result)[0x1a] = eax_17
    sub_579300(eax_17, arg1[0x1a], arg1[9] << 2)
    int32_t ecx_16 = data_1151ae0
    int32_t eax_21 = arg1[9] << 2
    uint32_t eax_22
    
    if (ecx_16 == 0)
        int32_t var_14_4 = eax_21
        eax_22 = _malloc()
    else
        eax_22 = ecx_16(eax_21, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\meshattachment.c", 0x49)
    
    (*result)[0x1b] = eax_22
    sub_579300(eax_22, arg1[0x1b], arg1[9] << 2)
    int32_t ecx_18 = data_1151ae0
    result[7][0] = arg1[0x1c]
    int32_t eax_27 = arg1[0x1c] * 2
    uint32_t eax_28
    
    if (ecx_18 == 0)
        int32_t var_14_6 = eax_27
        eax_28 = _malloc()
    else
        eax_28 = ecx_18(eax_27, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\meshattachment.c", 0x4c)
    
    (*result)[0x1d] = eax_28
    sub_579300(eax_28, arg1[0x1d], arg1[0x1c] * 2)
    (*result)[0x22] = arg1[0x22]
    uint32_t eax_32 = arg1[0x24]
    
    if (eax_32 s> 0)
        int32_t ecx_20 = data_1151ae0
        result[9][0] = eax_32
        int32_t eax_34 = arg1[0x24] << 2
        uint32_t eax_35
        
        if (ecx_20 == 0)
            int32_t var_14_8 = eax_34
            eax_35 = _malloc()
        else
            eax_35 = ecx_20(eax_34, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\meshattachment.c", 0x51)
        
        (*result)[0x25] = eax_35
        sub_579300(eax_35, arg1[0x25], arg1[0x24] << 2)
    
    (*result)[0x26] = arg1[0x26]
    (*result)[0x27] = arg1[0x27]
    return result
}
