// 函数名称: sub_420c70
// 虚拟地址: 0x420c70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_420c70(void* arg1)
{
    // 第一条实际指令: void* i_1 = nullptr
    void* i_1 = nullptr
    sub_41efb0(&data_62b090, &i_1)
    
    for (void* i = i_1; i != 0xffffffff; i = i_1)
        void var_8
        
        if (sub_41e330(i, &var_8) != 0)
            return 0x40
        
        sub_41efb0(&data_62b090, &i_1)
    
    if (data_62b224 != 0 && (*(arg1 + 4) != 2 || *(arg1 + 0x1c) != 1))
        return 0xc0
    
    if (*(arg1 + 4) != 3)
        return sub_46e300(arg1)
    
    return 0x14
}
