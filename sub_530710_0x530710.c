// 函数名称: sub_530710
// 虚拟地址: 0x530710
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_530710(int32_t arg1))[0x4]
{
    // 第一条实际指令: if (data_15117d0 == 0)
    if (data_15117d0 == 0)
        data_15117d0 = 1
        data_15117d0 = sub_56d840("<empty>")
    
    int32_t eax_2 = data_1151ae0
    uint32_t (* result)[0x4]
    
    if (eax_2 == 0)
        int32_t __saved_ebx_1 = 0x38
        result = _malloc()
    else
        result = eax_2(0x38, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0xe4)
    
    if (result != 0)
        _memset(result, 0, 0x38)
    
    int32_t eax_3 = data_1151ae0
    *result = arg1
    result[1][0] = 0x3f800000
    uint32_t eax_4
    
    if (eax_3 == 0)
        int32_t __saved_ebx_2 = 0x14
        eax_4 = _malloc()
    else
        eax_4 = eax_3(0x14, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0x45)
    
    if (eax_4 != 0)
        *(eax_4 + 4) = 0
        *(eax_4 + 0x10) = 0
    
    int32_t eax_5 = data_1151ae0
    *eax_4 = result
    *(eax_4 + 8) = 0
    *(eax_4 + 0xc) = 0x10
    uint32_t (* eax_6)[0x4]
    
    if (eax_5 == 0)
        int32_t var_10_1 = 0x40
        eax_6 = _malloc()
    else
        eax_6 = eax_5(0x40, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0x49)
    
    if (eax_6 != 0)
        _memset(eax_6, 0, 0x40)
    
    int32_t eax_7 = data_1151ae0
    *(eax_4 + 4) = eax_6
    *(eax_4 + 0x10) = 0
    (*result)[9] = eax_4
    uint32_t eax_8
    
    if (eax_7 == 0)
        int32_t __saved_ebx_3 = 0x200
        eax_8 = _malloc()
    else
        eax_8 = eax_7(0x200, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0xeb)
    
    if (eax_8 != 0)
        _memset(eax_8, 0, 0x200)
    
    int32_t eax_9 = data_1151ae0
    result[2][0] = eax_8
    uint32_t eax_10
    
    if (eax_9 == 0)
        int32_t __saved_ebx_4 = 0x200
        eax_10 = _malloc()
    else
        eax_10 = eax_9(0x200, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0xed)
    
    if (eax_10 != 0)
        _memset(eax_10, 0, 0x200)
    
    (*result)[0xa] = eax_10
    result[3][0] = 0x80
    return result
}
