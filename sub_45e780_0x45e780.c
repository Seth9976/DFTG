// 函数名称: sub_45e780
// 虚拟地址: 0x45e780
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45e780(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t* i_1 = nullptr
    sub_481430(&data_62d6c4, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 1 && i[6] == *arg1 && i[4] == 8)
            *(arg2 + (result << 2)) = i
            result += 1
        
        sub_481430(&data_62d6c4, &i_1)
    
    return result
}
