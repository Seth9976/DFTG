// 函数名称: sub_570d10
// 虚拟地址: 0x570d10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_570d10(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = data_1151ae0
    int32_t eax = data_1151ae0
    int32_t* result
    
    if (eax == 0)
        int32_t var_1c_1 = 0x24
        result = _malloc()
    else
        result =
            eax(0x24, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x46a)
    
    if (result != 0)
        __builtin_memset(&result[1], 0, 0x20)
    
    int32_t eax_1 = data_1151ae0
    *result = 6
    int32_t* eax_2
    
    if (eax_1 == 0)
        int32_t var_1c_2 = 0xc
        eax_2 = _malloc()
    else
        eax_2 =
            eax_1(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x52)
    
    if (eax_2 != 0)
        *eax_2 = 0
        eax_2[1] = 0
    
    result[1] = eax_2
    eax_2[2] = sub_570cb0
    *result[1] = sub_56ee30
    *(result[1] + 4) = sub_570c90
    int32_t eax_5 = data_1151ae0
    uint32_t (* eax_6)[0x4]
    
    if (eax_5 == 0)
        void* var_1c_3 = arg1 * 0x4c - 0x4c
        eax_6 = _malloc()
    else
        eax_6 = eax_5(arg1 * 0x4c - 0x4c, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x75)
    
    if (eax_6 != 0)
        _memset(eax_6, 0, arg1 * 0x4c - 0x4c)
    
    int32_t eax_7 = data_1151ae0
    result[2] = eax_6
    result[3] = arg1
    int32_t edi_2 = arg1 << 2
    uint32_t (* eax_8)[0x4]
    
    if (eax_7 == 0)
        int32_t var_1c_5 = edi_2
        eax_8 = _malloc()
    else
        eax_8 = eax_7(edi_2, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
            0x46d)
    
    if (eax_8 != 0)
        _memset(eax_8, 0, edi_2)
    
    int32_t eax_9 = data_1151ae0
    result[4] = eax_8
    uint32_t (* eax_10)[0x4]
    
    if (eax_9 == 0)
        int32_t var_1c_7 = edi_2
        eax_10 = _malloc()
    else
        eax_10 = eax_9(edi_2, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
            0x46e)
    
    if (eax_10 != 0)
        _memset(eax_10, 0, edi_2)
    
    result[5] = arg2
    result[6] = eax_10
    return result
}
