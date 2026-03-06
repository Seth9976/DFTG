// 函数名称: sub_489e40
// 虚拟地址: 0x489e40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_489e40(int32_t* arg1)
{
    // 第一条实际指令: if (data_114ec84 s> 0)
    if (data_114ec84 s> 0)
        *arg1 = data_115088c
        arg1[1] = data_1150890
        int32_t eax_2
        eax_2.b = 1
        return eax_2
    
    CURSORINFO pci
    pci.cbSize = 0x14
    pci.flags = 0
    pci.hCursor = 0
    pci.ptScreenPos.x = 0
    pci.ptScreenPos.y = 0
    GetCursorInfo(&pci)
    BOOL eax_4
    POINT point
    
    if ((pci.flags.b & 2) != 0 || *(data_aca1f0 + 0x18) == 0)
        *arg1 = 0
        arg1[1] = 0
    else if (GetCursorPos(&point) != 0)
        ScreenToClient(data_1150b8c, &point)
        int32_t edx_1
        eax_4, edx_1 = sub_4e1810(point.x, point.y)
        *arg1 = eax_4
        float xmm1_1 = *arg1
        arg1[1] = edx_1
        
        if (not(0f > xmm1_1))
            eax_4 = data_aca1ec
            
            if (not(xmm1_1 f>= _mm_cvtepi32_ps(zx.o(*(eax_4 + 0x14)))))
                int32_t xmm1_2 = arg1[1]
                
                if (not(0 f> xmm1_2) && not(xmm1_2 f>= _mm_cvtepi32_ps(zx.o(*(eax_4 + 0x18)))))
                    eax_4.b = 1
                    return eax_4
    eax_4.b = 0
    return eax_4
}
