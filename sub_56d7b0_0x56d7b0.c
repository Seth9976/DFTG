// 函数名称: sub_56d7b0
// 虚拟地址: 0x56d7b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56d7b0(int32_t* arg1)
{
    // 第一条实际指令: float xmm2_3 = *arg1
    float xmm2_3 = *arg1
    
    if (not(0f <= xmm2_3))
        *arg1 = 0
    else if (not(xmm2_3 <= 1f))
        *arg1 = 0x3f800000
    
    int32_t xmm2 = arg1[1]
    
    if (not(0 f<= xmm2))
        arg1[1] = 0
    else if (not(xmm2 f<= 1f))
        arg1[1] = 0x3f800000
    
    int32_t xmm2_1 = arg1[2]
    
    if (not(0 f<= xmm2_1))
        arg1[2] = 0
    else if (not(xmm2_1 f<= 1f))
        arg1[2] = 0x3f800000
    
    int32_t xmm2_2 = arg1[3]
    
    if (not(0 f<= xmm2_2))
        arg1[3] = 0
        return 
    
    if (not(xmm2_2 f<= 1f))
        arg1[3] = 0x3f800000
}
