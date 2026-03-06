// 函数名称: sub_571b00
// 虚拟地址: 0x571b00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_571b00(char* arg1)
{
    // 第一条实际指令: int32_t eax_19 = data_1151ae0
    int32_t eax_19 = data_1151ae0
    char* esi = arg1
    uint32_t (* result_1)[0x4]
    
    if (eax_19 == 0)
        int32_t var_c_1 = 0x1a8
        result_1 = _malloc()
    else
        result_1 =
            eax_19(0x1a8, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x42)
    
    int32_t* result = result_1
    
    if (result != 0)
        _memset(result, 0, 0x1a8)
    
    char* ecx = esi
    void* edx = &ecx[1]
    
    do
        result_1.b = *ecx
        ecx = &ecx[1]
    while (result_1.b != 0)
    
    int32_t eax = data_1151ae0
    int32_t eax_1
    
    if (eax == 0)
        void* var_c_2 = ecx - edx + 1
        eax_1 = _malloc()
    else
        eax_1 =
            eax(ecx - edx + 1, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x43)
    
    *result = eax_1
    void* ecx_4 = eax_1 - esi
    
    do
        eax_1.b = *esi
        esi = &esi[1]
        *(ecx_4 + esi - 1) = eax_1.b
    while (eax_1.b != 0)
    
    int32_t eax_2 = data_1151ae0
    int32_t* eax_3
    
    if (eax_2 == 0)
        int32_t var_c_3 = 0xc
        eax_3 = _malloc()
    else
        eax_3 = eax_2(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x22)
    
    if (eax_3 != 0)
        eax_3[2] = 0
    
    int32_t eax_4 = data_1151ae0
    *eax_3 = 0
    eax_3[1] = 4
    int128_t* eax_5
    
    if (eax_4 == 0)
        int32_t var_c_4 = 0x10
        eax_5 = _malloc()
    else
        eax_5 = eax_4(0x10, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x22)
    
    if (eax_5 != 0)
        *eax_5 = zx.o(0)
    
    eax_3[2] = eax_5
    int32_t eax_6 = data_1151ae0
    result[1] = eax_3
    int32_t* eax_7
    
    if (eax_6 == 0)
        int32_t var_c_5 = 0xc
        eax_7 = _malloc()
    else
        eax_7 = eax_6(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x23)
    
    if (eax_7 != 0)
        eax_7[2] = 0
    
    int32_t eax_8 = data_1151ae0
    *eax_7 = 0
    eax_7[1] = 4
    int128_t* eax_9
    
    if (eax_8 == 0)
        int32_t var_c_6 = 0x10
        eax_9 = _malloc()
    else
        eax_9 = eax_8(0x10, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x23)
    
    if (eax_9 != 0)
        *eax_9 = zx.o(0)
    
    eax_7[2] = eax_9
    int32_t eax_10 = data_1151ae0
    result[2] = eax_7
    int32_t* eax_11
    
    if (eax_10 == 0)
        int32_t var_c_7 = 0xc
        eax_11 = _malloc()
    else
        eax_11 = eax_10(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x24)
    
    if (eax_11 != 0)
        eax_11[2] = 0
    
    int32_t eax_12 = data_1151ae0
    *eax_11 = 0
    eax_11[1] = 4
    int128_t* eax_13
    
    if (eax_12 == 0)
        int32_t var_c_8 = 0x10
        eax_13 = _malloc()
    else
        eax_13 = eax_12(0x10, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x24)
    
    if (eax_13 != 0)
        *eax_13 = zx.o(0)
    
    eax_11[2] = eax_13
    int32_t eax_14 = data_1151ae0
    result[3] = eax_11
    int32_t* eax_15
    
    if (eax_14 == 0)
        int32_t var_c_9 = 0xc
        eax_15 = _malloc()
    else
        eax_15 = eax_14(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x25)
    
    if (eax_15 != 0)
        eax_15[2] = 0
    
    int32_t eax_16 = data_1151ae0
    *eax_15 = 0
    eax_15[1] = 4
    int128_t* eax_17
    
    if (eax_16 == 0)
        int32_t var_c_10 = 0x10
        eax_17 = _malloc()
    else
        eax_17 = eax_16(0x10, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skin.c", 0x25)
    
    if (eax_17 != 0)
        *eax_17 = zx.o(0)
    
    eax_15[2] = eax_17
    result[4] = eax_15
    return result
}
