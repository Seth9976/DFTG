// 函数名称: sub_469070
// 虚拟地址: 0x469070
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_469070(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    
    if (arg1 - 1 u> 0x1c)
        return 
    
    uint32_t eax = zx.d(*(arg1 + &jump_table_4691d4[0xe]:3))
    
    switch (eax)
        case 0
            sub_477060(eax, arg2, 0x41, 1, 0xffffffff)
        case 1
            sub_477060(eax, arg2, 0x41, 3, 0xffffffff)
        case 2
            sub_477060(eax, arg2, 0x41, 6, 0xffffffff)
        case 3
            sub_477060(eax, arg2, 0x41, 2, 0xffffffff)
        case 4
            sub_477060(eax, arg2, 0x41, 5, 1)
        case 5
            sub_477060(eax, arg2, 0x42, 0x65, 0)
        case 6
            sub_477060(eax, arg2, 0x41, 5, 2)
        case 7
            sub_477060(eax, arg2, 0x41, 5, 3)
        case 8
            sub_477060(eax, arg2, 0x41, 5, 4)
        case 9
            sub_477060(eax, arg2, 0x41, 5, 5)
        case 0xa
            sub_477060(eax, arg2, 0x42, 0x71, 0)
        case 0xb
            sub_477060(eax, arg2, 0x42, 0x72, 0)
        case 0xc
            if (arg2 != 0)
                sub_477060(eax, arg2, 0x42, 0x74, 0)
                return 
            
            sub_477060(eax, arg2, 0x42, 0x73, 0)
        case 0xd
            sub_477060(eax, arg2, 0x42, 0x75, 0)
}
