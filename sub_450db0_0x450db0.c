// 函数名称: sub_450db0
// 虚拟地址: 0x450db0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_450db0(void* arg1)
{
    // 第一条实际指令: double xmm0 = *(arg1 + 0x20)
    double xmm0 = *(arg1 + 0x20)
    xmm0 f- 0
    int32_t* result
    result:1.b =
        (xmm0 == 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm0, 0.0) ? 1 : 0) << 2 | (xmm0 < 0.0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        int32_t i = 0
        
        if (*(arg1 + 0x2c) + 1 s> 0)
            do
                int32_t j = 0
                
                if (*(arg1 + 0x30) s> 0)
                    do
                        int32_t ecx = *(*(arg1 + 0x54) + (i << 2))
                        *(ecx + (j << 3)) = *(*(*(arg1 + 0x58) + (i << 2)) + (j << 3)) f/
                            *(arg1 + 0x20) f+ *(ecx + (j << 3))
                        *(*(*(arg1 + 0x58) + (i << 2)) + (j << 3)) = (zx.o(0)).q
                        j += 1
                    while (j s< *(arg1 + 0x30))
                
                i += 1
            while (i s< *(arg1 + 0x2c) + 1)
        
        result = *(arg1 + 0x48)
        int32_t i_1 = 0
        
        if (*result s> 0)
            do
                int32_t j_1 = 0
                
                if (*(arg1 + 0x3c) s> 0)
                    do
                        int32_t ecx_1 = *(*(arg1 + 0x4c) + (i_1 << 2))
                        *(ecx_1 + (j_1 << 3)) = *(*(*(arg1 + 0x50) + (i_1 << 2)) + (j_1 << 3)) f/
                            *(arg1 + 0x20) f+ *(ecx_1 + (j_1 << 3))
                        *(*(*(arg1 + 0x50) + (i_1 << 2)) + (j_1 << 3)) = (zx.o(0)).q
                        j_1 += 1
                    while (j_1 s< *(arg1 + 0x3c))
                
                result = *(arg1 + 0x48)
                i_1 += 1
            while (i_1 s< *result)
        
        *(arg1 + 0x20) = (zx.o(0)).q
    
    return result
}
