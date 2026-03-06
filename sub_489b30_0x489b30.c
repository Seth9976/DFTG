// 函数名称: sub_489b30
// 虚拟地址: 0x489b30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_489b30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    
    if (data_1515650 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_1515650)
        
        if (data_1515650 == 0xffffffff)
            int32_t frequency
            QueryPerformanceFrequency(&frequency)
            data_1515658 = frequency
            int32_t var_8
            data_151565c = var_8
            __Init_thread_footer(&data_1515650)
    
    int32_t eax_7
    int32_t edx
    edx:eax_7 = mulu.dp.d(arg1, 0x3e8)
    return __aulldiv(eax_7, arg2 * 0x3e8 + edx, data_1515658, data_151565c)
}
