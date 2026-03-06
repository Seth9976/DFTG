// 函数名称: sub_572540
// 虚拟地址: 0x572540
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_572540(char* arg1))[0x4]
{
    // 第一条实际指令: int32_t eax_3 = data_1151ae0
    int32_t eax_3 = data_1151ae0
    uint32_t (* result)[0x4]
    
    if (eax_3 == 0)
        int32_t var_c_1 = 0xa0
        result = _malloc()
    else
        result = eax_3(0xa0, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\meshattachment.c", 0x73)
    
    if (result != 0)
        _memset(result, 0, 0xa0)
    
    int32_t ecx = data_151186c
    (*result)[0xa] = result
    uint32_t eax_1 = zx.d(ecx.w) << 0xb
    (*result)[0xb] = eax_1
    data_151186c = ecx + 1
    (*result)[0x1e] = 0x3f800000
    (*result)[0x1f] = 0x3f800000
    result[8][0] = 0x3f800000
    (*result)[0x21] = 0x3f800000
    sub_56d7b0(&(*result)[0x1e])
    sub_56d710(eax_1, arg1, result, 2, sub_572160, sub_572210)
    return result
}
