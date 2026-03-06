// 函数名称: ___scrt_initialize_crt
// 虚拟地址: 0x5773d7
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___scrt_initialize_crt(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        data_6cf320 = 1
    
    int64_t xcr0
    ___isa_available_init(xcr0)
    
    if (___vcrt_initialize() != 0)
        if (___acrt_initialize() != 0)
            return 1
        
        ___vcrt_uninitialize(0)
    
    return 0
}
