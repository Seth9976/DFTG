// 函数名称: sub_41fea0
// 虚拟地址: 0x41fea0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_41fea0()
{
    // 第一条实际指令: void* eax = data_aca1ec
    void* eax = data_aca1ec
    int32_t result = data_61f9b8
    int32_t i = 0
    float xmm4_3 =
        (_mm_cvtepi32_ps(zx.o(*(eax + 0x14))) - 0f) / (_mm_cvtepi32_ps(zx.o(*(eax + 0x18))) - 0f)
    
    do
        int32_t eax_1 = result * 3
        int32_t xmm0_4 =
            sub_426e40(xmm4_3 - float.s(*(i + &data_61f9bc)) / float.s(*(i + &data_61f9c0)))
        
        if (not(sub_426e40(xmm4_3
                - float.s(*((eax_1 << 2) + &data_61f9bc)) / float.s(*((eax_1 << 2) + &data_61f9c0)))
                f<= xmm0_4))
            result = *(i + &data_61f9b8)
        
        i += 0xc
    while (i u< 0x30)
    
    return result
}
