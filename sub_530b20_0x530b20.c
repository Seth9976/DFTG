// 函数名称: sub_530b20
// 虚拟地址: 0x530b20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_530b20(void* arg1, void* arg2, int128_t arg3 @ xmm2)
{
    // 第一条实际指令: float var_c = arg3
    float var_c = arg3
    void* esi = *(arg2 + 8)
    
    if (esi == 0)
        return 0xffffffff
    
    int32_t result_1 = sub_530b20()
    *(esi + 0x34) = *(esi + 0x38)
    *(esi + 0x44) = *(esi + 0x48)
    float xmm0_1 = *(arg2 + 0x58)
    int32_t result = result_1
    
    if (not(xmm0_1 <= 0f))
        float xmm2_1 = *(arg2 + 0x5c)
        
        if (not(xmm0_1 < xmm2_1))
            float xmm0_2 = *(esi + 0x64)
            xmm0_2 f- 0
            result_1:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
                | (xmm0_2 < 0f ? 1 : 0)
            bool p_1 = unimplemented  {test ah, 0x44}
            bool p_3
            
            if (p_1)
                xmm2_1 f- 0
                result_1:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
                    | (xmm2_1 < 0f ? 1 : 0)
                p_3 = unimplemented  {test ah, 0x44}
            
            if (not(p_1) || not(p_3))
                *(arg2 + 8) = *(esi + 8)
                void* eax_2 = *(esi + 8)
                
                if (eax_2 != 0)
                    *(eax_2 + 0xc) = arg2
                
                *(arg2 + 0x60) = *(esi + 0x60)
                sub_530550(*(arg1 + 0x24), esi)
            
            return result
    
    *(esi + 0x40) = *(esi + 0x50) * var_c f+ *(esi + 0x40)
    *(arg2 + 0x58) = *(arg2 + 0x58) + var_c
    return 0
}
