// 函数名称: sub_4e87f0
// 虚拟地址: 0x4e87f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4e87f0(int32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    
    if (arg4 s>= 0x80)
        int32_t* result = *(*(arg3 + 0x30) + (((arg4 s>> 4 | arg4) & *(arg3 + 0x34)) << 2))
        
        if (result == 0)
            return 0
        
        while (arg4 != *result)
            result = result[2]
            
            if (result == 0)
                return result
        
        if (result == 0xfffffffc)
            return 0
        
        eax_1 = result[1]
    else
        eax_1 = *(arg3 + (arg4 << 2) + 0x3c)
        
        if (eax_1 == 0xffffffff)
            return 0
    
    if (eax_1 s>= 0 && eax_1 s< *(arg2 + 0x18))
        return *(arg2 + 0x20) + eax_1 * 0x24
    
    sub_489550(eax_1, &data_5b2591, "glyphIndex >= 0 && glyphIndex < pLayer->glyphCount", 
        "d:\ax\trunk\ax2017\engine\font.cpp", 0xc7, "FontUnicodeToGlyph")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
