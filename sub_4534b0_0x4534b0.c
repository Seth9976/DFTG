// 函数名称: sub_4534b0
// 虚拟地址: 0x4534b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4534b0()
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t* i_1 = nullptr
    sub_481430(&data_62d6c4, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 2 && i[0x12] == 0)
            result += 1
        
        sub_481430(&data_62d6c4, &i_1)
    
    return result
}
