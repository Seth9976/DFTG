// 函数名称: ?siglookup@@YAPAU__crt_signal_action_t@@HQAU1@@Z
// 虚拟地址: 0x59254d
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*?siglookup@@YAPAU__crt_signal_action_t@@HQAU1@@Z(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* i = arg2
    void* i = arg2
    
    for (void* ecx = 0x90 + i; i != ecx; i += 0xc)
        if (*(i + 4) == arg1)
            return i
    
    return nullptr
}
