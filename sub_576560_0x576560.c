// 函数名称: sub_576560
// 虚拟地址: 0x576560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_576560(char* arg1)
{
    // 第一条实际指令: int32_t eax_3 = data_1151ae0
    int32_t eax_3 = data_1151ae0
    int32_t* result
    
    if (eax_3 == 0)
        int32_t var_c_1 = 0x34
        result = _malloc()
    else
        result = eax_3(0x34, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\clippingattachment.c", 0x32)
    
    if (result != 0)
        __builtin_memset(result, 0, 0x28)
        result[0xc] = 0
    
    int32_t ecx = data_151186c
    uint32_t eax_1 = zx.d(ecx.w) << 0xb
    data_151186c = ecx + 1
    result[0xb] = eax_1
    result[0xa] = result
    sub_56d710(eax_1, arg1, result, 6, sub_5764e0, sub_576530)
    result[0xc] = 0
    return result
}
