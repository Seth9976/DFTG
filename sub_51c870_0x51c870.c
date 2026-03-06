// 函数名称: sub_51c870
// 虚拟地址: 0x51c870
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_51c870(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 u> 7)
    if (arg2 u> 7)
        int32_t eax
        sub_489550(eax, &data_5b2591, "textureIndex >= 0 && textureIndex < 8", 
            "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 0x318, "GLDupCheck_glBindTextureCube")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* result = data_1151adc
    
    if (*(result + (arg2 << 2) + 0x415c) == arg1)
        return result
    
    *(result + (arg2 << 2) + 0x415c) = arg1
    
    if (*(result + 0x4098) != arg2)
        *(result + 0x4098) = arg2
        (*__glewActiveTexture)(arg2 + 0x84c0)
    
    return glBindTexture(0x8513, arg1)
}
