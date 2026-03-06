// 函数名称: sub_538ac0
// 虚拟地址: 0x538ac0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

SOCKET __stdcallsub_538ac0(int16_t arg1)
{
    // 第一条实际指令: SOCKADDR name
    SOCKADDR name
    SOCKET s = __security_cookie ^ &name
    SOCKET s_1 = s
    int32_t var_28
    char const* const ecx
    
    if (arg1 != 0)
        s = sub_538640(1)
        
        if (s != 0)
            name.sa_family = 2
            uint32_t eax_1 = htonl(0)
            name.sa_data[2] = eax_1.b
            name.sa_data[3] = eax_1:1.b
            name.sa_data[4] = eax_1:2.b
            name.sa_data[5] = eax_1:3.b
            uint16_t eax_2 = htons(arg1)
            name.sa_data[0] = eax_2.b
            name.sa_data[1] = eax_2:1.b
            
            if (bind(s, &name, 0x10) != 0)
                sub_4892e0("tcp bind failed\n")
                @__security_check_cookie@4(s_1 ^ &name)
                return 0
            
            if (listen(s, 0x10) == 0)
                @__security_check_cookie@4(s_1 ^ &name)
                return s
            
            sub_4892e0("tcp listen failed\n")
            @__security_check_cookie@4(s_1 ^ &name)
            return 0
        
        char const* const var_24_2 = "WinsockNetworkInterface::TCPListenStart"
        var_28 = 0xfb
        ecx = "socket != 0"
    else
        char const* const var_24 = "WinsockNetworkInterface::TCPListenStart"
        var_28 = 0xf8
        ecx = "port != 0"
    
    sub_489550(s, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\windows\windowsnetwork.cpp", var_28, 
        "WinsockNetworkInterface::TCPListenStart")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
