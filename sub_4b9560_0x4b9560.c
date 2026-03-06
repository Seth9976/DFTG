// 函数名称: sub_4b9560
// 虚拟地址: 0x4b9560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4b9560(int32_t* arg1)
{
    // 第一条实际指令: sub_4b9480()
    sub_4b9480()
    int32_t edx = DragAcceptFiles(data_1150b8c, 1)
    data_642620 = arg1
    data_643654 = 0
    data_64365c = 0
    data_64365e = 0
    data_642650 = 0x3e8
    data_642644 = 0x3f000000
    void var_20
    int128_t* eax_1 = sub_49abe0(&var_20, edx, arg1, &var_20)
    float xmm2[0x4] = *eax_1
    
    if (not(_mm_shuffle_ps(xmm2, xmm2, 0xaa) f< xmm2))
        float xmm1_1 = xmm2[1]
        
        if (not(xmm2[3] < xmm1_1))
            data_643660 = 0xffffffff
            data_643664 = 0xffffffff
            data_642648 = xmm2 f- 100f
            data_64264c = xmm1_1 - 100f
            return sub_4a7e20(0)
    
    sub_489550(eax_1, &data_5b2591, "RectIsNormalized(r)", "d:\ax\trunk\ax2017\engine\rect.cpp", 0x127, 
        "RectTopLeft")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
