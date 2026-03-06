// 函数名称: sub_436340
// 虚拟地址: 0x436340
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_436340(int32_t* arg1)
{
    // 第一条实际指令: int32_t* i = *arg1
    int32_t* i = *arg1
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[1]
        sub_4984f0(i_1, 0xc)
    
    arg1[2] = 0
    *arg1 = 0
    arg1[1] = 0
}
