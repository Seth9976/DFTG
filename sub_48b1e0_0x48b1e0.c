// 函数名称: sub_48b1e0
// 虚拟地址: 0x48b1e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*sub_48b1e0())[0x4]
{
    // 第一条实际指令: void* eax_4 = data_aca0dc
    void* eax_4 = data_aca0dc
    
    if (eax_4 == 0)
        sub_489550(eax_4, &data_5b2591, "gNetwork", "d:\ax\trunk\ax2017\engine\network.cpp", 0x11f, 
            "NetMessageAlloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_4 + 0x58) == 0)
        uint32_t (* eax_1)[0x4] = sub_4c2e40(0x7ea8)
        _memset(eax_1, 0, 0x7ea8)
        return eax_1
    
    int32_t* edi = *(eax_4 + 0x54)
    void* ecx = edi[2]
    *(eax_4 + 0x54) = ecx
    
    if (ecx == 0)
        *(eax_4 + 0x50) = 0
    else
        *(ecx + 4) = 0
    
    int32_t esi = *edi
    *(eax_4 + 0x58) -= 1
    sub_4984f0(edi, 0xc)
    return esi
}
