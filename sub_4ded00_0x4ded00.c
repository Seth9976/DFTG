// 函数名称: sub_4ded00
// 虚拟地址: 0x4ded00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* const __convention("regparm")sub_4ded00(int32_t arg1, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    
    if (data_114e7d9 != 0)
        sub_489550(arg1, &data_5b2591, "!gDraw3DData.submittingRenderItems", 
            "d:\ax\trunk\ax2017\engine\renderer.cpp", 0x277, "GraphicsSetRT")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_4f5710(0)
    (*(*data_114ec78 + 0x88))(arg3, arg2)
    bool cond:1 = data_1150db4 != 5
    *(data_114ec70 + 0xe5) = 1
    void* const result
    result.b = 1
    
    if (not(cond:1) && arg4 != 0)
        result = 1
        
        if (data_114ec74 == 1)
            result = nullptr
    
    if (data_aca614 == result.b)
        return result
    
    data_aca614 = result.b
    return sub_4924f0(&data_aca234)
}
