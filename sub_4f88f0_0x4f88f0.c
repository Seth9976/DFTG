// 函数名称: sub_4f88f0
// 虚拟地址: 0x4f88f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4f88f0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (_strchr(arg2[1], 0x5b) == 0)
    if (_strchr(arg2[1], 0x5b) == 0)
        *arg1 = data_12bacb8
        arg1[1] = data_12bacbc
        arg1[2] = data_12bacc0
        char* eax_6 = data_12bacc0
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&arg1[2])
            *(eax_7 + 4) += 1
        
        return arg1
    
    char* ebx = arg2[1]
    char* esi = ebx
    void* eax
    
    do
        eax.b = *esi
        esi = &esi[1]
    while (eax.b != 0)
    void* eax_1 = sub_4f5990(*arg2)
    *(eax_1 + 4) = ebx
    *(eax_1 + 8) = esi - &esi[1]
    *eax_1 = 6
    arg1[2] = &data_5b2591
    *arg1 = 3
    arg1[1] = eax_1
    return arg1
}
