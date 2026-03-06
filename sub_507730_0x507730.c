// 函数名称: sub_507730
// 虚拟地址: 0x507730
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_507730(int32_t* arg1)
{
    // 第一条实际指令: int32_t* i = *arg1
    int32_t* i = *arg1
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[0xbf]
        sub_4fd4b0(i_1)
        sub_4984f0(i_1, 0x304)
    
    arg1[2] = 0
    *arg1 = 0
    arg1[1] = 0
}
