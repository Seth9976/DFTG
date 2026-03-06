// 函数名称: sub_526e30
// 虚拟地址: 0x526e30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_526e30(char* arg1)
{
    // 第一条实际指令: int32_t eax_1 = data_1151ae0
    int32_t eax_1 = data_1151ae0
    uint32_t (* result_1)[0x4]
    
    if (eax_1 == 0)
        int32_t var_c_1 = 0xa0
        result_1 = _malloc()
    else
        result_1 = eax_1(0xa0, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\regionattachment.c", 0x45)
    
    int32_t* result = result_1
    
    if (result != 0)
        result_1 = _memset(result, 0, 0xa0)
    
    result[8] = 0x3f800000
    result[9] = 0x3f800000
    result[0xd] = 0x3f800000
    result[0xe] = 0x3f800000
    result[0xf] = 0x3f800000
    result[0x10] = 0x3f800000
    sub_56d7b0(&result[0xd])
    sub_56d710(result_1, arg1, result, 0, sub_526ce0, sub_526d30)
    return result
}
