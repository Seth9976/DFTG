// 函数名称: sub_49ac60
// 虚拟地址: 0x49ac60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_49ac60(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: if (arg3[1] != 0x22)
    if (arg3[1] != 0x22)
        sub_489550(arg1, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI2", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x8ae, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* ecx = sub_4981f0(arg3)
    float xmm2 = *(ecx + 0x18)
    xmm2 f- 0
    void* eax
    eax:1.b = (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2 | (xmm2 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    bool p_3
    
    if (not(p_1))
        float xmm0_1 = *(ecx + 0x1c)
        xmm0_1 f- 0
        eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        p_3 = unimplemented  {test ah, 0x44}
    
    int32_t xmm0_3
    
    if (p_1 || p_3)
        xmm0_3 = *(ecx + 0x1c)
        float var_c_1 = xmm2
    else
        int32_t var_c = *(ecx + 0x10)
        xmm0_3 = *(ecx + 0x14)
    
    int32_t var_10 = 0
    int32_t var_8 = xmm0_3
    *arg4 = 0.o
    return arg4
}
