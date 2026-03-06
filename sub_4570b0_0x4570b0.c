// 函数名称: sub_4570b0
// 虚拟地址: 0x4570b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4570b0(int32_t arg1)
{
    // 第一条实际指令: int32_t* i_1 = nullptr
    int32_t* i_1 = nullptr
    sub_481430(&data_62d6c4, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 0 && *(i + 0x6d) == 0 && i[0x11] == arg1)
            return i
        
        sub_481430(&data_62d6c4, &i_1)
    
    return nullptr
}
