// 函数名称: sub_571d60
// 虚拟地址: 0x571d60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_571d60(int32_t arg1, int32_t arg2, void* arg3, char* arg4, void* arg5)
{
    // 第一条实际指令: int32_t* ecx = nullptr
    int32_t* ecx = nullptr
    char* edi = arg4
    int32_t edx_3 = arg2 u% 0x64
    int32_t var_10 = edx_3
    int32_t* esi_1 = *(arg3 + (edx_3 << 2) + 0x18)
    
    if (esi_1 != 0)
        while (true)
            int32_t* eax_2 = *esi_1
            
            if (*eax_2 == arg2)
                char* eax_3 = eax_2[1]
                char* ecx_1 = edi
                int32_t eax_5
                
                while (true)
                    edx_3.b = *eax_3
                    char temp0_1 = *ecx_1
                    bool c_1 = edx_3.b u< temp0_1
                    
                    if (edx_3.b == temp0_1)
                        if (edx_3.b == 0)
                            eax_5 = 0
                            break
                        
                        edx_3.b = eax_3[1]
                        char temp1_1 = ecx_1[1]
                        c_1 = edx_3.b u< temp1_1
                        
                        if (edx_3.b == temp1_1)
                            eax_3 = &eax_3[2]
                            ecx_1 = &ecx_1[2]
                            
                            if (edx_3.b != 0)
                                continue
                            
                            eax_5 = 0
                            break
                    
                    eax_5 = sbb.d(eax_3, eax_3, c_1) | 1
                    break
                
                if (eax_5 == 0)
                    ecx = esi_1
                    break
            
            esi_1 = esi_1[1]
            
            if (esi_1 == 0)
                ecx = nullptr
                break
    
    if (arg5 != 0)
        *(arg5 + 0xc) += 1
    
    if (ecx != 0)
        void* ecx_2 = *(*esi_1 + 8)
        
        if (ecx_2 != 0)
            *(ecx_2 + 0xc) -= 1
            
            if (*(ecx_2 + 0xc) s<= 0)
                (**(ecx_2 + 8))(ecx_2)
        
        void* eax_9 = *esi_1
        *(eax_9 + 8) = arg5
        return eax_9
    
    int32_t eax_10 = data_1151ae0
    int128_t* eax_11
    
    if (eax_10 == 0)
        int32_t var_20_2 = 0x10
        eax_11 = _malloc()
    else
        eax_11 = eax_10(0x10, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x28)
    
    if (eax_11 != 0)
        *eax_11 = zx.o(0)
    
    char* ecx_3 = edi
    *eax_11 = arg2
    void* edx_4 = &ecx_3[1]
    int32_t eax_12
    
    do
        eax_12.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_12.b != 0)
    int32_t eax_13 = data_1151ae0
    int32_t eax_14
    
    if (eax_13 == 0)
        void* var_20_3 = ecx_3 - edx_4 + 1
        eax_14 = _malloc()
    else
        eax_14 = eax_13(ecx_3 - edx_4 + 1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x2a)
    
    *(eax_11 + 4) = eax_14
    void* ecx_7 = eax_14 - edi
    
    do
        eax_14.b = *edi
        edi = &edi[1]
        *(ecx_7 + edi - 1) = eax_14.b
    while (eax_14.b != 0)
    
    *(eax_11 + 8) = arg5
    *(eax_11 + 0xc) = *(arg3 + 0x14)
    int32_t eax_16 = data_1151ae0
    *(arg3 + 0x14) = eax_11
    void** eax_17
    
    if (eax_16 == 0)
        int32_t var_20_4 = 8
        eax_17 = _malloc()
    else
        eax_17 = eax_16(8, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x36)
    
    if (eax_17 != 0)
        *eax_17 = nullptr
    
    *eax_17 = eax_11
    int32_t eax_18 = *(arg3 + (var_10 << 2) + 0x18)
    eax_17[1] = eax_18
    *(arg3 + (var_10 << 2) + 0x18) = eax_17
    return eax_18
}
