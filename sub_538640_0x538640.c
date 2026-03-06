// 函数名称: sub_538640
// 虚拟地址: 0x538640
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

SOCKET __fastcallsub_538640(uint32_t arg1)
{
    // 第一条实际指令: SOCKET s
    SOCKET s
    
    if (arg1 == 1)
        s = WSASocketA(2, arg1, 6, nullptr, 0, arg1)
        
        if (s == 0xffffffff)
            return 0xffffffff
        
        int32_t optval = 1
        int32_t eax_2 = setsockopt(s, 6, 1, &optval, 4)
        
        if (eax_2 != 0xffffffff)
            goto label_5386ac
        
        sub_489550(eax_2, &data_5b2591, "result != SOCKET_ERROR", 
            "d:\ax\trunk\ax2017\engine\windows\windowsnetwork.cpp", 0x43, "SocketCreate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_18_3
    int32_t eax
    char* ecx
    
    if (arg1 != 0)
        char const* const var_14_4 = "SocketCreate"
        var_18_3 = 0x50
        ecx = "Halt"
    else
        s = WSASocketA(2, 2, 0x11, arg1, arg1, 1)
        
        if (s == 0xffffffff)
            return 0xffffffff
        
    label_5386ac:
        uint32_t argp = 1
        eax = ioctlsocket(s, 0x8004667e, &argp)
        
        if (eax != 0xffffffff)
            return s
        
        char const* const var_14_3 = "SocketCreate"
        var_18_3 = 0x55
        ecx = "result != SOCKET_ERROR"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\windows\windowsnetwork.cpp", 
        var_18_3, "SocketCreate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
