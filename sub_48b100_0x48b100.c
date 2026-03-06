// 函数名称: sub_48b100
// 虚拟地址: 0x48b100
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_48b100()
{
    // 第一条实际指令: void* eax = data_aca0dc
    void* eax = data_aca0dc
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx_1
    
    if (eax != 0)
        if (*(eax + 0x4c) != 0)
            int32_t* edi_1 = *(eax + 0x48)
            void* ecx_2 = edi_1[2]
            *(eax + 0x48) = ecx_2
            
            if (ecx_2 == 0)
                *(eax + 0x44) = 0
            else
                *(ecx_2 + 4) = 0
            
            void* esi_1 = *edi_1
            *(eax + 0x4c) -= 1
            sub_4984f0(edi_1, 0xc)
            __builtin_memset(esi_1 + 0xfde8, 0, 0x14)
            return esi_1
        
        eax = sub_586f5f(0xfe10, 0x10)
        
        if (eax != 0)
            __builtin_memset(eax + 0xfde8, 0, 0x14)
            return eax
        
        var_10 = "XMalloc"
        var_14 = 0x57
        var_18 = "d:\ax\trunk\ax2017\engine\xmemory.cpp"
        ecx_1 = "pBuffer"
    else
        var_10 = "NetBufferAlloc"
        var_14 = 0xfa
        var_18 = "d:\ax\trunk\ax2017\engine\network.cpp"
        ecx_1 = "gNetwork"
    
    sub_489550(eax, &data_5b2591, ecx_1, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
