// 函数名称: __Init_thread_abort
// 虚拟地址: 0x5778a5
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__Init_thread_abort(int32_t* arg1)
{
    // 第一条实际指令: EnterCriticalSection(&data_6cf33c)
    EnterCriticalSection(&data_6cf33c)
    *arg1 = 0
    LeaveCriticalSection(&data_6cf33c)
    return __Init_thread_notify() __tailcall
}
