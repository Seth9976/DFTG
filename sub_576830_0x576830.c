// 函数名称: sub_576830
// 虚拟地址: 0x576830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_576830(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = sub_5768b0(*arg1)
    int32_t* result = sub_5768b0(*arg1)
    sub_576c70(arg1, result)
    result[0xc] = arg1[0xc]
    int32_t ecx_3 = data_1151ae0
    int32_t eax_1 = arg1[0xc] << 2
    char* eax_2
    
    if (ecx_3 == 0)
        int32_t var_10_1 = eax_1
        eax_2 = _malloc()
    else
        eax_2 = ecx_3(eax_1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathattachment.c", 0x2f)
    
    result[0xd] = eax_2
    sub_579300(eax_2, arg1[0xd], arg1[0xc] << 2)
    result[0xe] = arg1[0xe]
    result[0xf] = arg1[0xf]
    return result
}
