// 函数名称: sub_518cb0
// 虚拟地址: 0x518cb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_518cb0()
{
    // 第一条实际指令: void* ecx = data_1151ad8
    void* ecx = data_1151ad8
    
    if (ecx == 0)
        return 
    
    int32_t eax = *(ecx + 4)
    
    if (eax == 0x22 || eax == 0x1d || eax == 0x19 || eax == 0x1b || eax == 0x1e || eax == 0x20)
        *(ecx + 0x1c) -= 1
    
    data_1151ad8 = 0
}
