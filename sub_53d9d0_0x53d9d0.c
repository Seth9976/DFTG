// 函数名称: sub_53d9d0
// 虚拟地址: 0x53d9d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float* __thiscallsub_53d9d0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* edx = data_114ec70
    void* edx = data_114ec70
    
    if (*(edx + 0xe4) != 0)
        sub_489550(arg1, &data_5b2591, "!gpRenderAppData->uiProjectedInto3D", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x938, 
            "Dx11GraphicsInterface::GetUIMatrix")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    __builtin_memcpy(arg2, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    *arg2 = 2f f/ *(arg1 + 0x18)
    float xmm0_1 = -2f f/ *(arg1 + 0x1c)
    arg2[3] = 0xbf800000
    arg2[7] = 0x3f800000
    arg2[5] = xmm0_1
    float var_48[0x10]
    float* result = sub_497e60(&var_48, edx + 0xa4, arg2, &var_48)
    int128_t xmm1 = *(result + 0x10)
    int128_t xmm2 = *(result + 0x20)
    int128_t xmm3 = *(result + 0x30)
    *arg2 = *result
    *(arg2 + 0x10) = xmm1
    *(arg2 + 0x20) = xmm2
    *(arg2 + 0x30) = xmm3
    return result
}
