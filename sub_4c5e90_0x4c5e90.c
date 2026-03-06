// 函数名称: sub_4c5e90
// 虚拟地址: 0x4c5e90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4c5e90()
{
    // 第一条实际指令: void* eax_4 = data_aca1ec
    void* eax_4 = data_aca1ec
    int32_t* ecx = data_114e838
    
    if (*(eax_4 + 0x29) != 0)
        char edx = *(eax_4 + 0x27)
        int32_t xmm0_3
        
        if (edx != 0 && data_1150c9e != 0)
            float xmm0_1 = ecx[9]
            
            if (data_1150e5c != 0)
                xmm0_3 = __minss_xmmss_memss(xmm0_1 + 0.0399999991f, 0x3f800000)
            else
                xmm0_3 = __maxss_xmmss_memss(xmm0_1 - 0.0399999991f, 0)
        else if (*(data_aca1f0 + 0x18) != 0 || edx != 0)
            xmm0_3 = __minss_xmmss_memss(ecx[9] f+ 0.0399999991f, 0x3f800000)
        else
            xmm0_3 = __maxss_xmmss_memss(ecx[9] f- 0.0399999991f, 0)
        
        ecx[9] = xmm0_3
    
    void* esi = nullptr
    
    while (true)
        void* edx_1
        
        if (esi != 0)
            edx_1 = *ecx
            esi += 0x64
        else
            esi = *ecx
            edx_1 = esi
        
        void* eax_2 = ecx[1] * 0x64 + edx_1
        
        if (esi u>= eax_2)
            break
        
        while ((*(esi + 0x60) & 0xffff0000) == 0)
            esi += 0x64
            
            if (esi u>= eax_2)
                goto label_4c5f39
        
        sub_4c5d50(esi)
        ecx = data_114e838
    
    label_4c5f39:
    jump(*(*data_114e834 + 0x14))
}
