// 函数名称: sub_531920
// 虚拟地址: 0x531920
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_531920(int32_t arg1, int32_t arg2, void* arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    void* eax = sub_531b00(arg3, arg2)
    void* eax_1 = arg4
    *(*(arg3 + 8) + (arg2 << 2)) = eax_1
    
    if (eax != 0)
        if (arg5 != 0)
            void* esi_2 = *(arg3 + 0x24)
            sub_5304d0(esi_2)
            *(*(esi_2 + 4) + (*(esi_2 + 8) << 2)) = 1
            *(esi_2 + 8) += 1
            sub_5304d0(esi_2)
            *(*(esi_2 + 4) + (*(esi_2 + 8) << 2)) = eax
            *(esi_2 + 8) += 1
            eax_1 = arg4
        
        *(eax_1 + 8) = eax
        *(eax + 0xc) = eax_1
        *(eax_1 + 0x58) = 0
        
        if (*(eax + 8) != 0)
            float xmm1_1 = *(eax + 0x5c)
            
            if (not(xmm1_1 f<= 0))
                *(eax_1 + 0x60) = _mm_min_ss(0x3f800000, *(eax + 0x58) / xmm1_1) f* *(eax_1 + 0x60)
        
        *(eax + 0x78) = 0
    
    int32_t* esi_3 = *(arg3 + 0x24)
    sub_5304d0(esi_3)
    *(esi_3[1] + (esi_3[2] << 2)) = 0
    esi_3[2] += 1
    sub_5304d0(esi_3)
    *(esi_3[1] + (esi_3[2] << 2)) = arg4
    void* result = *esi_3
    esi_3[2] += 1
    *(result + 0x34) = 1
    return result
}
