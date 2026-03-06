// 函数名称: sub_5766a0
// 虚拟地址: 0x5766a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_5766a0(char* arg1)
{
    // 第一条实际指令: int32_t eax_1 = data_1151ae0
    int32_t eax_1 = data_1151ae0
    uint32_t (* result_1)[0x4]
    
    if (eax_1 == 0)
        int32_t var_c_1 = 0x30
        result_1 = _malloc()
    else
        result_1 = eax_1(0x30, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pointattachment.c", 0x32)
    
    int32_t* result = result_1
    
    if (result != 0)
        result_1 = _memset(result, 0, 0x30)
    
    sub_56d710(result_1, arg1, result, 5, sub_576620, sub_576660)
    return result
}
