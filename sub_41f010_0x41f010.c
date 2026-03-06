// 函数名称: sub_41f010
// 虚拟地址: 0x41f010
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_41f010(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t xmm0_1 = *arg1
    int32_t xmm0_1 = *arg1
    int32_t xmm3 = arg1[2]
    int32_t result
    
    if (not(xmm3 f< xmm0_1))
        int32_t xmm4_1 = arg1[1]
        int32_t xmm2_1 = arg1[3]
        
        if (not(xmm2_1 f< xmm4_1))
            int32_t xmm1 = *arg2
            
            if (not(xmm1 f< xmm0_1))
                int32_t xmm0 = arg2[1]
                
                if (not(xmm0 f< xmm4_1) && not(xmm3 f< xmm1) && not(xmm2_1 f< xmm0))
                    result.b = 1
                    return result
            
            result.b = 0
            return result
    
    sub_489550(result, &data_5b2591, "RectIsNormalized(r)", "d:\ax\trunk\ax2017\engine\rect.cpp", 0xa4, 
        "RectContains")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
