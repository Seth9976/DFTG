// 函数名称: sub_4f8410
// 虚拟地址: 0x4f8410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4f8410(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char* eax_4
    char* eax_4
    int32_t* ecx
    int32_t* result
    
    if (_strncmp(&(*U"][}{\r")[1], *(arg2 + 4), 1) == 0)
        *(arg2 + 4) += 1
        sub_4f59f0(arg2)
        result = arg1
        ecx = &result[2]
        *result = data_6ca2b4
        result[1] = data_6ca2b8
        *ecx = data_6ca2bc
        eax_4 = data_6ca2bc
    else
        result = arg1
        ecx = &result[2]
        *result = data_12bacb8
        result[1] = data_12bacbc
        *ecx = data_12bacc0
        eax_4 = data_12bacc0
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_8 = sub_48a080(ecx)
        *(eax_8 + 4) += 1
    
    return result
}
