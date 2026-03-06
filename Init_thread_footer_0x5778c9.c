// 函数名称: __Init_thread_footer
// 虚拟地址: 0x5778c9
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__Init_thread_footer(int32_t* arg1)
{
    // 第一条实际指令: EnterCriticalSection(&data_6cf33c)
    EnterCriticalSection(&data_6cf33c)
    int32_t ecx_1 = data_61f064 + 1
    data_61f064 = ecx_1
    *arg1 = ecx_1
    TEB* fsbase
    *(*(fsbase->ThreadLocalStoragePointer + (data_6cf690 << 2)) + 4) = data_61f064
    LeaveCriticalSection(&data_6cf33c)
    return __Init_thread_notify() __tailcall
}
