// 函数名称: __Init_thread_header
// 虚拟地址: 0x577913
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__Init_thread_header(int32_t* arg1)
{
    // 第一条实际指令: EnterCriticalSection(&data_6cf33c)
    EnterCriticalSection(&data_6cf33c)
    
    while (true)
        if (*arg1 == 0)
            *arg1 = 0xffffffff
            break
        
        if (*arg1 != 0xffffffff)
            TEB* fsbase
            *(*(fsbase->ThreadLocalStoragePointer + (data_6cf690 << 2)) + 4) = data_61f064
            break
        
        __Init_thread_wait(0x64)
    
    return LeaveCriticalSection(&data_6cf33c)
}
