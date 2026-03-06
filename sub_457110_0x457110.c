// 函数名称: sub_457110
// 虚拟地址: 0x457110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_457110(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* i_1 = nullptr
    int32_t* i_1 = nullptr
    sub_481430(&data_62d6c4, &i_1)
    int32_t* i
    
    for (i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 0 && *(i + 0x6d) != 0 && i[0x11] == arg1 && i[0xf] == arg2)
            return i
        
        sub_481430(&data_62d6c4, &i_1)
    
    i_1 = nullptr
    sub_481430(&data_62d6c4, &i_1)
    i = i_1
    
    if (i == 0xffffffff)
        return nullptr
    
    while (true)
        if (*i == 0 && i[0x11] == arg1 && i[0xf] == arg2)
            return i
        
        sub_481430(&data_62d6c4, &i_1)
        i = i_1
        
        if (i == 0xffffffff)
            return nullptr
}
