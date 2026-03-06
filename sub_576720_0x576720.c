// 函数名称: sub_576720
// 虚拟地址: 0x576720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_576720(char* arg1)
{
    // 第一条实际指令: int32_t eax_3 = data_1151ae0
    int32_t eax_3 = data_1151ae0
    int32_t* result
    
    if (eax_3 == 0)
        int32_t var_c_1 = 0x30
        result = _malloc()
    else
        result = eax_3(0x30, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\boundingboxattachment.c", 0x31)
    
    if (result != 0)
        __builtin_memset(result, 0, 0x28)
    
    int32_t ecx = data_151186c
    uint32_t eax_1 = zx.d(ecx.w) << 0xb
    data_151186c = ecx + 1
    result[0xb] = eax_1
    result[0xa] = result
    sub_56d710(eax_1, arg1, result, 1, sub_5764e0, sub_576700)
    return result
}
