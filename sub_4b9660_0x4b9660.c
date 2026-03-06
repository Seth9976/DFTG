// 函数名称: sub_4b9660
// 虚拟地址: 0x4b9660
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4b9660(int32_t arg1, float* arg2, void* arg3, float* arg4, int32_t* arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t ecx_1 = *(arg3 + 0xe88) - 1
    int32_t xmm2 = (zx.o(0)).d
    int32_t xmm3 = _mm_max_ss(0, arg4[1] - arg2[1])
    float xmm1 = _mm_max_ss(0, *arg4 - *arg2)
    
    if (ecx_1 u> 8)
        sub_489550(arg4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x3d3f, 
            "UI2GetScrollExtents")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    int32_t xmm4
    
    switch (ecx_1)
        case 0, 3, 6
            xmm4 = xmm1 ^ 0x80000000
            xmm1 = (zx.o(0)).d
        case 1, 4, 7
            float xmm4_1 = xmm1
            xmm1 = xmm1 * 0.5f
            xmm4 = xmm4_1 * -0.5f
        case 2, 5, 8
            xmm4 = (zx.o(0)).d
    
    int32_t xmm0_4
    
    switch (ecx_1)
        case 0, 1, 2
            xmm0_4 = 0x80000000 ^ xmm3
        case 3, 4, 5
            xmm0_4 = xmm3 f* -0.5f
            xmm2 = xmm3 f* 0.5f
        case 6, 7, 8
            xmm0_4 = (zx.o(0)).d
            xmm2 = xmm3
    
    *arg5 = xmm4
    arg5[2] = xmm1
    arg5[1] = xmm0_4
    arg5[3] = xmm2
    int32_t* result
    result.b = 1
    return result
}
