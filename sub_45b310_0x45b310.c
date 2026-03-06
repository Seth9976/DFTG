// 函数名称: sub_45b310
// 虚拟地址: 0x45b310
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_45b310(int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4))[0x4]
{
    // 第一条实际指令: uint32_t var_8 = arg3
    uint32_t var_8 = arg3
    uint32_t (* result)[0x4] = sub_481490(&data_62d6c4)
    *result = 1
    (*result)[0xb] = arg2
    (*result)[2] = arg4
    (*result)[6] = arg3
    (*result)[3] = 0
    uint32_t ecx = result[1][0]
    
    if (ecx != 0)
        (*result)[5] = ecx
        result[1][0] = 0
    
    return result
}
