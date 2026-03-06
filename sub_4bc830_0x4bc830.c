// 函数名称: sub_4bc830
// 虚拟地址: 0x4bc830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __thiscallsub_4bc830(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax = *arg2
    void* eax = *arg2
    void* i
    void* i_1
    
    if (eax != 0)
        i_1 = *arg1
        i = eax + 0x1418
    else
        i = *arg1
        i_1 = i
    
    for (; i u< arg1[1] * 0x1418 + i_1; i += 0x1418)
        if ((*(i + 0x1410) & 0xffff0000) != 0)
            *arg2 = i
            i.b = 1
            return i
    
    *arg2 = 0xffffffff
    i.b = 0
    return i
}
