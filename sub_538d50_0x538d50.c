// 函数名称: sub_538d50
// 虚拟地址: 0x538d50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcallsub_538d50(SOCKET arg1, PSTR arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = recv(arg1, arg2, arg3, 0)
    int32_t result = recv(arg1, arg2, arg3, 0)
    
    if (result != 0)
        if (result != 0xffffffff)
            return result
        
        if (WSAGetLastError() == WSAEWOULDBLOCK)
            return 0
    
    return 0xffffffff
}
