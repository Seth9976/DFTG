// 函数名称: sub_45b5f0
// 虚拟地址: 0x45b5f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_45b5f0(int32_t arg1)
{
    // 第一条实际指令: int32_t* i_1 = nullptr
    int32_t* i_1 = nullptr
    sub_481430(&data_62d6c4, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 2)
            int32_t* eax_1 = sub_452c30(i[0x15])
            int32_t* eax_2
            
            if (eax_1 != arg1)
                eax_2 = sub_452c30(i[0x14])
            
            if (eax_1 == arg1 || eax_2 == arg1)
                return i
        
        sub_481430(&data_62d6c4, &i_1)
    
    return 0
}
