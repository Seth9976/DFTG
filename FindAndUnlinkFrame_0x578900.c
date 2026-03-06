// 函数名称: __FindAndUnlinkFrame
// 虚拟地址: 0x578900
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*__FindAndUnlinkFrame(void* arg1)
{
    // 第一条实际指令: int32_t esi = *(sub_57a0a4() + 0x24)
    int32_t esi = *(sub_57a0a4() + 0x24)
    void* eax_1 = sub_57a0a4()
    
    if (arg1 == esi)
        *(eax_1 + 0x24) = *(arg1 + 4)
        return eax_1
    
    int32_t* edx_1 = *(eax_1 + 0x24) + 4
    
    while (true)
        void* eax_2 = *edx_1
        
        if (eax_2 == 0)
            sub_58afe0()
            noreturn
        
        if (arg1 == eax_2)
            break
        
        edx_1 = eax_2 + 4
    
    int32_t eax_3 = *(arg1 + 4)
    *edx_1 = eax_3
    return eax_3
}
