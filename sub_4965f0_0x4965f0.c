// 函数名称: sub_4965f0
// 虚拟地址: 0x4965f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_4965f0(int128_t* arg1)
{
    // 第一条实际指令: int32_t eax = data_114e7ec
    int32_t eax = data_114e7ec
    
    if (eax u<= 3)
        int32_t ecx_1 = eax * 7
        *arg1 = *((ecx_1 << 2) + &data_aca24c)
        arg1[1].q = *((ecx_1 << 2) + &data_aca25c)
        *(arg1 + 0x18) = (&data_aca264)[ecx_1]
        return arg1
    
    sub_489550(eax, &data_5b2591, 
        "gDraw3DData.renderingDrawEye >= 0 && gDraw3DData.renderingDrawEye < NUM_DRAW_EYES", 
        "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0xb30, "Draw3DGetRenderingEyePose")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
