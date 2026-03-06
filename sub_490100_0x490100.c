// 函数名称: sub_490100
// 虚拟地址: 0x490100
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*sub_490100())[0x4]
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    int32_t eax
    char const* const ecx
    
    if (data_114e7d9 != 0)
        eax = data_c4a778
        
        if (eax s< 0x1000)
            data_c4a778 = eax + 1
            _memset(eax * 0x180 + 0xaca778, 0, 0x180)
            *(eax * 0x180 + 0xaca7f8) = data_aca6b8
            *(eax * 0x180 + 0xaca808) = data_aca6a8
            *(eax * 0x180 + 0xaca818) = data_aca6c8
            *(eax * 0x180 + 0xaca8f4) = data_114e800
            *(eax * 0x180 + 0xaca8e4) = data_aca694
            *(eax * 0x180 + 0xaca898) = data_aca6d8
            *(eax * 0x180 + 0xaca89c) = data_aca750
            *(eax * 0x180 + 0xaca8ac) = data_aca760
            *(eax * 0x180 + 0xaca7e4) = data_aca678
            *(eax * 0x180 + 0xaca7f4) = data_aca688
            *(eax * 0x180 + 0xaca868) = data_aca71c
            *(eax * 0x180 + 0xaca878) = data_aca72c
            *(eax * 0x180 + 0xaca888) = data_aca73c
            *(eax * 0x180 + 0xaca828) = data_aca6dc
            *(eax * 0x180 + 0xaca838) = data_aca6ec
            *(eax * 0x180 + 0xaca848) = data_aca6fc
            *(eax * 0x180 + 0xaca858) = data_aca70c
            *(eax * 0x180 + 0xaca8dc) = data_aca770
            *(eax * 0x180 + 0xaca8e0) = data_aca774
            return eax * 0x180 + 0xaca778
        
        char const* const var_8_1 = "RenderItemAlloc"
        var_c = 0x1fe
        ecx = "gDraw3DData.renderItemCount < MAX_RENDER_ITEMS"
    else
        char const* const var_8 = "RenderItemAlloc"
        var_c = 0x1fc
        ecx = "gDraw3DData.submittingRenderItems"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\draw3d.cpp", var_c, "RenderItemAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
