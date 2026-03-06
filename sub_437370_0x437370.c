// 函数名称: sub_437370
// 虚拟地址: 0x437370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_437370(int32_t arg1, void* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t esi = *(arg3 + 0xbe0)
    int32_t esi = *(arg3 + 0xbe0)
    int32_t i_1 = 0
    arg4[3] = *(arg3 + 0xbe4)
    int32_t eax_1 = *(arg3 + 0xbe8)
    arg4[2] = esi
    arg4[4] = eax_1
    *arg4 = arg2
    
    if (esi s<= 0)
        return arg4
    
    void* edx_1 = arg3 + 0x224
    void* ebx_1 = arg2 + 0x1b0
    void* var_c = edx_1
    int32_t i
    
    do
        *(ebx_1 + 0x14) = *(edx_1 + 0x20)
        char* eax_3 = *edx_1
        char* const ecx = &data_5b2591
        
        if (eax_3 != 0)
            ecx = eax_3
        
        *ebx_1 = ecx
        char* const ecx_1 = &data_5b2591
        char* eax_4 = *(edx_1 + 0x14)
        
        if (eax_4 != 0)
            ecx_1 = eax_4
        
        *(ebx_1 - 0x1a8) = ecx_1
        char* const ecx_2 = &data_5b2591
        char* eax_5 = *(edx_1 + 0x18)
        
        if (eax_5 != 0)
            ecx_2 = eax_5
        
        *(ebx_1 - 0x198) = ecx_2
        char* const ecx_3 = &data_5b2591
        char* eax_6 = *(edx_1 - 4)
        
        if (eax_6 != 0)
            ecx_3 = eax_6
        
        *(ebx_1 - 8) = ecx_3
        char* const ecx_4 = &data_5b2591
        *(ebx_1 + 0x18) = *(edx_1 + 0x24)
        *(ebx_1 + 0x1c) = *(edx_1 + 0x28)
        *(ebx_1 + 0x20) = *(edx_1 + 0x2c)
        char* eax_10 = *(edx_1 - 0x220)
        
        if (eax_10 != 0)
            ecx_4 = eax_10
        
        *(ebx_1 - 0x1a0) = ecx_4
        char* const ecx_5 = &data_5b2591
        *(ebx_1 - 0x190) = *(edx_1 - 0x21c)
        char* eax_12 = *(edx_1 - 0x224)
        
        if (eax_12 != 0)
            ecx_5 = eax_12
        
        *(ebx_1 - 0x1b0) = ecx_5
        *(ebx_1 + 0x10) = *(edx_1 + 0x1c)
        *(ebx_1 + 0xc) = *(edx_1 + 8)
        *(ebx_1 + 0x30) = *(edx_1 + 0x3c)
        *(ebx_1 + 0x24) = *(edx_1 + 0x30)
        *(ebx_1 + 0x2c) = *(edx_1 + 0x38)
        void* edx_2 = edx_1 - 0x1fc
        *(ebx_1 + 0x34) = *(edx_1 + 0x40)
        void* eax_18 = ebx_1 - 0x180
        __builtin_memcpy(ebx_1 + 0x38, edx_1 + 0x44, 0x90)
        int32_t j_1 = 2
        int32_t j
        
        do
            eax_18 += 0xc0
            *(eax_18 - 0x24) = *(edx_2 + 0xd0)
            *(eax_18 - 0x14) = *(edx_2 + 0xe0)
            *(eax_18 - 0xc) = *(edx_2 + 0xe8)
            *(eax_18 - 0xb8) = *(edx_2 + 8)
            *(eax_18 - 0xc0) = *edx_2
            *(eax_18 - 0xb4) = *(edx_2 + 0xc)
            *(eax_18 - 0xb8) = *(edx_2 + 8)
            *(eax_18 - 0xc8) = edx_2 - 0x10
            *(eax_18 - 0xbc) = *(edx_2 + 4)
            *(eax_18 - 0x98) = *(edx_2 + 0x34)
            *(eax_18 - 0xa0) = *(edx_2 + 0x2c)
            *(eax_18 - 0x94) = *(edx_2 + 0x38)
            *(eax_18 - 0x98) = *(edx_2 + 0x34)
            *(eax_18 - 0xa8) = edx_2 + 0x1c
            *(eax_18 - 0x9c) = *(edx_2 + 0x30)
            *(eax_18 - 0x78) = *(edx_2 + 0x60)
            *(eax_18 - 0x80) = *(edx_2 + 0x58)
            *(eax_18 - 0x74) = *(edx_2 + 0x64)
            *(eax_18 - 0x78) = *(edx_2 + 0x60)
            *(eax_18 - 0x88) = edx_2 + 0x48
            *(eax_18 - 0x7c) = *(edx_2 + 0x5c)
            *(eax_18 - 0x58) = *(edx_2 + 0x8c)
            *(eax_18 - 0x60) = *(edx_2 + 0x84)
            *(eax_18 - 0x54) = *(edx_2 + 0x90)
            *(eax_18 - 0x58) = *(edx_2 + 0x8c)
            *(eax_18 - 0x68) = edx_2 + 0x74
            *(eax_18 - 0x5c) = *(edx_2 + 0x88)
            *(eax_18 - 0x38) = *(edx_2 + 0xb8)
            *(eax_18 - 0x40) = *(edx_2 + 0xb0)
            *(eax_18 - 0x34) = *(edx_2 + 0xbc)
            *(eax_18 - 0x38) = *(edx_2 + 0xb8)
            *(eax_18 - 0x48) = edx_2 + 0xa0
            edx_2 += 0x108
            *(eax_18 - 0x3c) = *(edx_2 - 0x54)
            j = j_1
            j_1 -= 1
        while (j != 1)
        ebx_1 += 0x278
        i = i_1 + 1
        edx_1 = var_c + 0x2f8
        i_1 = i
        var_c = edx_1
    while (i s< *(arg3 + 0xbe0))
    return arg4
}
