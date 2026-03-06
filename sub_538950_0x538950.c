// 函数名称: sub_538950
// 虚拟地址: 0x538950
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

SOCKET __stdcallsub_538950(SOCKADDR* arg1)
{
    // 第一条实际指令: SOCKET s = sub_538640(1)
    SOCKET s = sub_538640(1)
    
    if (s != 0xffffffff)
        int32_t eax = connect(s, arg1, 0x10)
        enum WSA_ERROR eax_1
        
        if (eax == 0xffffffff)
            eax_1 = WSAGetLastError()
        
        if (eax != 0xffffffff || eax_1 == WSAEWOULDBLOCK)
            return s
        
        closesocket(s)
    
    return 0xffffffff
}
