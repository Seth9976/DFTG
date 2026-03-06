// 函数名称: sub_526ed0
// 虚拟地址: 0x526ed0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_526ed0(int32_t, int32_t arg2, void* arg3, int32_t arg4 @ xmm1, int32_t arg5 @ xmm2, int32_t arg6 @ xmm3, int32_t arg7)
{
    // 第一条实际指令: int32_t xmm0 = arg7
    int32_t xmm0 = arg7
    *(arg3 + 0x8c) = xmm0
    int32_t xmm4
    int32_t xmm5
    int32_t xmm6
    
    if (arg2 == 0)
        xmm4 = xmm0
        xmm5 = arg6
        xmm0 = arg5
        xmm6 = arg4
    else
        xmm4 = arg5
        xmm5 = arg4
        xmm6 = arg6
    
    *(arg3 + 0x88) = xmm6
    *(arg3 + 0x90) = arg4
    *(arg3 + 0x94) = xmm0
    *(arg3 + 0x98) = xmm5
    *(arg3 + 0x9c) = arg5
    *(arg3 + 0x80) = arg6
    *(arg3 + 0x84) = xmm4
}
