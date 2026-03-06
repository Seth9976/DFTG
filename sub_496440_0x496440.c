// 函数名称: sub_496440
// 虚拟地址: 0x496440
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_496440()
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    char const* const ecx
    
    if (data_114e7d9 != 0)
        if (data_114e7d8 == 0)
            data_114e7d9 = 0
            return 
        
        char const* const var_4_1 = "Draw3DRenderItemSubmissionEnd"
        var_8 = 0xac9
        ecx = "!gDraw3DData.quadGroupDrawing"
    else
        char const* const var_4 = "Draw3DRenderItemSubmissionEnd"
        var_8 = 0xac8
        ecx = "gDraw3DData.submittingRenderItems"
    
    int32_t eax
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\draw3d.cpp", var_8, 
        "Draw3DRenderItemSubmissionEnd")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
