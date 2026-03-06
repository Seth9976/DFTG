// 函数名称: sub_4d4bb0
// 虚拟地址: 0x4d4bb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4d4bb0(char** arg1)
{
    // 第一条实际指令: char** var_c = arg1
    char** var_c = arg1
    int32_t* i = arg1[1]
    
    while (i != 0)
        char** edi_1 = *i
        i = i[1]
        
        if (edi_1[2] != 0)
            sub_4d4bb0()
            edi_1[2] = 0
        
        sub_4d4a20(edi_1)
    
    int32_t* i_1 = arg1[1]
    
    while (i_1 != 0)
        int32_t* i_2 = i_1
        i_1 = i_1[1]
        sub_4984f0(i_2, 0xc)
    
    arg1[3] = 0
    arg1[1] = 0
    arg1[2] = 0
    return sub_4d48c0(arg1)
}
