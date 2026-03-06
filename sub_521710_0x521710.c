// 函数名称: sub_521710
// 虚拟地址: 0x521710
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_521710(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    
    if (arg2 u> 7)
        int32_t eax
        sub_489550(eax, &data_5b2591, "index >= 0 && index < MAX_QUERIES", 
            "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 0x11f2, "OpenGLInterface::MarkFrameBegin")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx = *(arg1 + ((arg2 + 0x1099) << 2))
    
    if (ecx != 0)
        int64_t var_10 = 0
        (*__glewGetQueryObjectui64v)(ecx, 0x8866, &var_10)
        *(arg1 + (arg2 << 2) + 0x4284) = var_10.d - *(arg1 + (arg2 << 3) + 0x42a8)
    else
        (*__glewGenQueries)(1, arg1 + ((arg2 + 0x1099) << 2))
    
    return (*__glewGetInteger64v)(0x8e28, arg1 + ((arg2 + 0x855) << 3))
}
