// 函数名称: __Init_thread_notify
// 虚拟地址: 0x577965
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL__Init_thread_notify()
{
    // 第一条实际指令: HANDLE hEvent = data_6cf358
    HANDLE hEvent = data_6cf358
    
    if (hEvent != 0)
        SetEvent(hEvent)
        return ResetEvent(data_6cf358)
    
    uint32_t __security_cookie_1 = __security_cookie
    return ror.d(__security_cookie_1 ^ data_6cf360, __security_cookie_1.b & 0x1f)(0x6cf354)
}
