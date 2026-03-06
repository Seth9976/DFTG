// 函数名称: sub_52f770
// 虚拟地址: 0x52f770
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_52f770(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4))[0x4]
{
    // 第一条实际指令: int32_t eax = data_1151ae0
    int32_t eax = data_1151ae0
    uint32_t (* result)[0x4]
    
    if (eax == 0)
        int32_t var_14_1 = 0x70
        result = _malloc()
    else
        result = eax(0x70, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\bone.c", 0x2c)
    
    if (result != 0)
        _memset(result, 0, 0x70)
    
    *result = arg3
    (*result)[1] = arg2
    (*result)[2] = arg4
    result[5][0] = 0x3f800000
    result[6][0] = 0x3f800000
    (*result)[5] = *(arg3 + 0x10)
    (*result)[6] = *(arg3 + 0x14)
    (*result)[7] = *(arg3 + 0x18)
    result[2][0] = *(arg3 + 0x1c)
    (*result)[9] = *(arg3 + 0x20)
    (*result)[0xa] = *(arg3 + 0x24)
    (*result)[0xb] = *(arg3 + 0x28)
    return result
}
