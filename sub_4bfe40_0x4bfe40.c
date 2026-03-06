// 函数名称: sub_4bfe40
// 虚拟地址: 0x4bfe40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4bfe40(int32_t arg1, int128_t* arg2, int128_t* arg3, int32_t* arg4, int128_t* arg5, int128_t* arg6)
{
    // 第一条实际指令: char edx = (arg4[4]).b
    char edx = (arg4[4]).b
    *arg6 = *arg2
    *arg5 = *arg3
    int128_t* result
    
    if ((edx & 1) == 0)
    label_4bfeab:
        
        if ((edx & 2) == 0)
        label_4bfef3:
            
            if ((edx & 4) == 0)
            label_4bff41:
                
                if ((edx & 8) == 0)
                label_4bff8f:
                    
                    if (not(*arg6 f> *(arg6 + 8)) && not(*(arg6 + 4) f> *(arg6 + 0xc)))
                        result.b = 1
                        return result
                else
                    float xmm4_4 = *(arg3 + 4)
                    float xmm3_4 = arg4[3]
                    
                    if (not(xmm4_4 > xmm3_4))
                        float xmm0_14 = *(arg3 + 0xc)
                        
                        if (not(xmm0_14 <= xmm3_4))
                            *(arg5 + 0xc) = xmm3_4
                            *(arg6 + 0xc) = (xmm3_4 - xmm4_4) / (xmm0_14 - xmm4_4)
                                * (*(arg2 + 0xc) f- *(arg2 + 4)) f+ *(arg2 + 4)
                        
                        goto label_4bff8f
            else
                float xmm0_10 = *(arg3 + 0xc)
                float xmm3_3 = arg4[1]
                
                if (not(xmm3_3 > xmm0_10))
                    float xmm4_3 = *(arg3 + 4)
                    
                    if (not(xmm3_3 <= xmm4_3))
                        *(arg5 + 4) = xmm3_3
                        *(arg6 + 4) = (xmm3_3 - xmm4_3) / (xmm0_10 - xmm4_3)
                            * (*(arg2 + 0xc) f- *(arg2 + 4)) f+ *(arg2 + 4)
                    
                    goto label_4bff41
        else
            float xmm0_6 = *(arg3 + 8)
            float xmm3_2 = *arg4
            
            if (not(xmm3_2 > xmm0_6))
                float xmm4_2 = *arg3
                
                if (not(xmm3_2 <= xmm4_2))
                    *arg5 = xmm3_2
                    *arg6 = (xmm3_2 - xmm4_2) / (xmm0_6 - xmm4_2) * (*(arg2 + 8) f- *arg2) f+ *arg2
                
                goto label_4bfef3
    else
        float xmm4_1 = *arg3
        float xmm3_1 = arg4[2]
        
        if (not(xmm4_1 > xmm3_1))
            float xmm0_2 = *(arg3 + 8)
            
            if (not(xmm0_2 <= xmm3_1))
                *(arg5 + 8) = xmm3_1
                *(arg6 + 8) = (xmm3_1 - xmm4_1) / (xmm0_2 - xmm4_1) * (*(arg2 + 8) f- *arg2) f+ *arg2
            
            goto label_4bfeab
    
    result.b = 0
    return result
}
