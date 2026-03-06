// 函数名称: sub_5385a0
// 虚拟地址: 0x5385a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_5385a0()
{
    // 第一条实际指令: WSADATA wSAData
    WSADATA wSAData
    int32_t eax_1 = __security_cookie ^ &wSAData
    int32_t result = WSAStartup(0x202, &wSAData)
    
    if (result == 0)
        @__security_check_cookie@4(eax_1 ^ &wSAData)
        return result
    
    sub_489550(result, "WSAStartup failed", "HaltMsg", 
        "d:\ax\trunk\ax2017\engine\windows\windowsnetwork.cpp", 0x2a, 
        "WinsockNetworkInterface::NetworkInterfaceInitForApp")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
