// 函数名称: sub_496500
// 虚拟地址: 0x496500
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_496500(int64_t* arg1)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    char const* const ecx
    
    if (data_114e7d9 != 0)
        if (data_114e7d8 == 0)
            data_114e7d8 = 1
            data_114e7dc.q = *arg1
            int32_t result = arg1[1].d
            data_114e7e4 = result
            return result
        
        char const* const var_4_1 = "Draw3DQuadGroupStart"
        var_8 = 0xaf9
        ecx = "!gDraw3DData.quadGroupDrawing"
    else
        char const* const var_4 = "Draw3DQuadGroupStart"
        var_8 = 0xaf8
        ecx = "gDraw3DData.submittingRenderItems"
    
    int32_t eax
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\draw3d.cpp", var_8, 
        "Draw3DQuadGroupStart")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
