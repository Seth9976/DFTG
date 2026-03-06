// 函数名称: sub_571a80
// 虚拟地址: 0x571a80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_571a80(int32_t arg1)
{
    // 第一条实际指令: int32_t eax_3 = data_1151ae0
    int32_t eax_3 = data_1151ae0
    int32_t* result
    
    if (eax_3 == 0)
        int32_t var_10_1 = 0xc
        result = _malloc()
    else
        result = eax_3(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\array.c", 0x22)
    
    if (result != 0)
        result[2] = 0
    
    int32_t eax = data_1151ae0
    result[1] = arg1
    int32_t ebx_1 = arg1 << 2
    *result = 0
    uint32_t (* eax_1)[0x4]
    
    if (eax == 0)
        int32_t var_10_2 = ebx_1
        eax_1 = _malloc()
    else
        eax_1 = eax(ebx_1, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\array.c", 0x22)
    
    if (eax_1 != 0)
        _memset(eax_1, 0, ebx_1)
    
    result[2] = eax_1
    return result
}
