// 函数名称: sub_465a40
// 虚拟地址: 0x465a40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_465a40(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0x74)
    if (arg1 == 0x74)
        return &data_6385fc
    
    if (arg1 == 0x75)
        return &data_638618
    
    if (arg1 == 0x76)
        return &data_638634
    
    if (arg1 - 0x64 u> 0xf)
        return &data_638458
    
    TEB* fsbase
    
    if (data_15140e8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_15140e8)
        
        if (data_15140e8 == 0xffffffff)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(&data_15140f0, &data_638474)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x151410c, &data_63843c)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x1514128, &data_638458)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x1514144, &data_638490)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x1514160, &data_6384ac)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x151417c, &data_6384c8)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x1514198, &data_6384e4)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x15141b4, &data_638500)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x15141d0, &data_63851c)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x15141ec, &data_638538)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x1514208, &data_638554)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x1514224, &data_638570)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x1514240, &data_63858c)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x151425c, &data_6385a8)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x1514278, &data_6385c4)
            PSGSI1::EnumPubsByAddr::EnumPubsByAddr(0x1514294, &data_6385e0)
            __Init_thread_footer(&data_15140e8)
    
    return (arg1 - 0x64) * 0x1c + &data_15140f0
}
