// 函数名称: sub_4580c0
// 虚拟地址: 0x4580c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_4580c0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t i = 8
    int32_t i = 8
    int32_t* edx_1 = arg2 + 0x2d4
    int32_t ecx
    
    do
        ecx = *edx_1
        
        if (ecx != 0)
            int32_t* eax_1 = sub_452c30(ecx)
            *arg1 = eax_1
            arg1[1] = eax_1[4]
            arg1[2] = eax_1[0xa]
            return arg1
        
        i += 1
        edx_1 = &edx_1[1]
    while (i s<= 0xd)
    
    *arg1 = ecx
    return arg1
}
