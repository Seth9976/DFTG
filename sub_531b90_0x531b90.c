// 函数名称: sub_531b90
// 虚拟地址: 0x531b90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_531b90(int32_t arg1, int32_t arg2, void** arg3, void* arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t eax = data_1151ae0
    int32_t eax = data_1151ae0
    int32_t* result
    
    if (eax == 0)
        int32_t var_14_1 = 0x84
        result = _malloc()
    else
        result = eax(0x84, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 
            0x32e)
    
    if (result != 0)
        *(result + 4) = zx.o(0)
        _memset(&result[0xc], 0, 0x54)
    
    int32_t xmm1 = (zx.o(0)).d
    result[5] = 0
    *result = arg4
    result[6] = arg5
    __builtin_memset(&result[7], 0, 0x14)
    int32_t* eax_3 = *(arg4 + 4)
    result[0xc] = eax_3
    result[0xd] = 0xbf800000
    result[0xe] = 0xbf800000
    result[0xf] = 0
    result[0x10] = 0
    __builtin_memcpy(&result[0x11], 
        "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x00\x4f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
    result[0x18] = 0x3f800000
    result[0x16] = 0
    
    if (arg6 != 0)
        xmm1 = sub_52f330(eax_3, *arg6, *arg3, arg4)
    
    result[0x17] = xmm1
    result[0x1a] = 2
    result[0x1b] = sub_571a80(0x10)
    int32_t eax_5 = data_1151ae0
    int32_t* eax_6
    
    if (eax_5 == 0)
        int32_t var_14_3 = 0xc
        eax_6 = _malloc()
    else
        eax_6 = eax_5(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 
            0x28)
    
    if (eax_6 != 0)
        eax_6[2] = 0
    
    int32_t eax_7 = data_1151ae0
    *eax_6 = 0
    eax_6[1] = 0x10
    uint32_t (* eax_8)[0x4]
    
    if (eax_7 == 0)
        int32_t var_14_4 = 0x40
        eax_8 = _malloc()
    else
        eax_8 = eax_7(0x40, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0x28)
    
    if (eax_8 != 0)
        _memset(eax_8, 0, 0x40)
    
    eax_6[2] = eax_8
    result[0x1c] = eax_6
    return result
}
