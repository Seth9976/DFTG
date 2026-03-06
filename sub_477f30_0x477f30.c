// 函数名称: sub_477f30
// 虚拟地址: 0x477f30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_477f30(int32_t* arg1)
{
    // 第一条实际指令: arg1[2] += 1
    arg1[2] += 1
    int32_t eax = sub_425e70()
    
    if (arg1[2] s>= eax)
        return sub_477e70(arg1) __tailcall
    
    int32_t result = *arg1 - 3
    
    switch (result)
        case 0
            arg1[7] = 3
            arg1[4].b = 1
        case 1, 2
            arg1[7] = 7
            arg1[4].b = 1
        case 3
            arg1[7] = 0xe
            arg1[4].b = 1
        case 4
            arg1[7] = 0x13
            arg1[4].b = 1
        case 6
            arg1[7] = 0x1a
            arg1[4].b = 1
    
    return result
}
