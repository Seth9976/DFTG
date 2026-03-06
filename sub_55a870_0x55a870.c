// 函数名称: sub_55a870
// 虚拟地址: 0x55a870
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

long doublesub_55a870(float arg1)
{
    // 第一条实际指令: float xmm0_1 = sub_426e40(arg1)
    float xmm0_1 = sub_426e40(arg1)
    
    if (not(1f <= xmm0_1))
        return fconvert.t((xmm0_1 * xmm0_1 * (xmm0_1 * 21f - 36f) + 16f) / 18f)
    
    if (2f <= xmm0_1)
        return float.t(0)
    
    return fconvert.t((((36f - xmm0_1 * 7f) * xmm0_1 - 60f) * xmm0_1 + 32f) / 18f)
}
