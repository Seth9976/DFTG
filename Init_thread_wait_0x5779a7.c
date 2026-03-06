// 函数名称: __Init_thread_wait
// 虚拟地址: 0x5779a7
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__Init_thread_wait(uint32_t arg1)
{
    // 第一条实际指令: if (data_6cf358 == 0)
    if (data_6cf358 == 0)
        uint32_t __security_cookie_1 = __security_cookie
        return ror.d(__security_cookie_1 ^ data_6cf35c, __security_cookie_1.b & 0x1f)(0x6cf354, 
            &data_6cf33c, arg1)
    
    LeaveCriticalSection(&data_6cf33c)
    WaitForSingleObjectEx(data_6cf358, arg1, 0)
    return EnterCriticalSection(&data_6cf33c)
}
