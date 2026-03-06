// 函数名称: sub_538740
// 虚拟地址: 0x538740
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

SOCKET __stdcallsub_538740(int16_t arg1, char arg2)
{
    // 第一条实际指令: void var_24
    void var_24
    int32_t eax_1 = __security_cookie ^ &var_24
    SOCKET s = WSASocketA(2, 2, 0x11, nullptr, 0, 1)
    
    if (s != 0xffffffff)
        uint32_t var_20 = 1
        int32_t eax_2 = ioctlsocket(s, 0x8004667e, &var_20)
        
        if (eax_2 == 0xffffffff)
            sub_489550(eax_2, &data_5b2591, "result != SOCKET_ERROR", 
                "d:\ax\trunk\ax2017\engine\windows\windowsnetwork.cpp", 0x55, "SocketCreate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (arg2 != 0)
            var_20 = 1
            int32_t eax_3 = setsockopt(s, 0xffff, 0x20, &var_20, 4)
            
            if (eax_3 == 0xffffffff)
                sub_489550(eax_3, &data_5b2591, "result != SOCKET_ERROR", 
                    "d:\ax\trunk\ax2017\engine\windows\windowsnetwork.cpp", 0x6e, 
                    "WinsockNetworkInterface::UDPOpen")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
        
        if (arg1 == 0)
            @__security_check_cookie@4(eax_1 ^ &var_24)
            return s
        
        SOCKADDR name
        name.sa_family = 2
        uint32_t eax_4 = htonl(0)
        name.sa_data[2] = eax_4.b
        name.sa_data[3] = eax_4:1.b
        name.sa_data[4] = eax_4:2.b
        name.sa_data[5] = eax_4:3.b
        uint16_t eax_5 = htons(arg1)
        name.sa_data[0] = eax_5.b
        name.sa_data[1] = eax_5:1.b
        
        if (bind(s, &name, 0x10) != 0xffffffff)
            @__security_check_cookie@4(eax_1 ^ &var_24)
            return s
        
        closesocket(s)
    
    @__security_check_cookie@4(eax_1 ^ &var_24)
    return 0xffffffff
}
