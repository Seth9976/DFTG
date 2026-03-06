// 函数名称: sub_48b480
// 虚拟地址: 0x48b480
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_48b480(int128_t* arg1)
{
    // 第一条实际指令: int128_t* var_4 = arg1
    int128_t* var_4 = arg1
    void* result = *(arg1 + 0x24)
    
    if (result != 5)
        if (result != 4 && result != 2 && result != 3)
            sub_489550(result, &data_5b2591, 
                "loc.connectStatus == NETWORK_CONNECT_OPEN || loc.connectStatus == NETWORK_CONNECT_WAITING "
            "|| loc.connectStatus == NETWORK_CONNECT_WAITING_SSL", 
                "d:\ax\trunk\ax2017\engine\network.cpp", 0x157, "NetConnectionClosed")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = *(arg1 + 0x28)
        *(arg1 + 0x24) = 5
        
        if (result == 2)
            return sub_48b3f0(arg1, 0x3ec)
        
        if (result == 1)
            return sub_48b3f0(arg1, 0x5de)
        
        if (result == 3)
            return sub_48b3f0(arg1, 0xfa2)
    
    return result
}
