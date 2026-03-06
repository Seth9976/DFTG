// 函数名称: sub_54de10
// 虚拟地址: 0x54de10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_54de10(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: float var_30
    float var_30
    int32_t eax_1 = __security_cookie ^ &var_30
    float xmm3 = *arg3
    float xmm4 = arg3[2]
    
    if (not(xmm4 < xmm3))
        float xmm5_1 = arg3[1]
        float xmm6_1 = arg3[3]
        
        if (not(xmm6_1 < xmm5_1))
            float xmm2 = data_126786c
            float xmm5_3 = (xmm5_1 f- data_1267874) * xmm2
            float xmm4_2 = (xmm4 f- data_1267870) * xmm2
            float xmm6_3 = (xmm6_1 f- data_1267874) * xmm2
            var_30 = (xmm3 f- data_1267870) * xmm2
            float var_2c = xmm5_3
            float var_28 = xmm4_2
            float var_24 = xmm6_3
            *arg4 = var_30.o
            @__security_check_cookie@4(eax_1 ^ &var_30)
            return arg4
    
    sub_489550(eax_1, &data_5b2591, "RectIsNormalized(r)", "d:\ax\trunk\ax2017\engine\rect.cpp", 0x127, 
        "RectTopLeft")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
