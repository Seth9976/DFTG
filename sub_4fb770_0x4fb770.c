// 函数名称: sub_4fb770
// 虚拟地址: 0x4fb770
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4fb770(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: void var_f8
    void var_f8
    int32_t var_14 = __security_cookie ^ &var_f8
    float xmm0 = arg4[2]
    xmm0 - 0f
    int32_t eax_1
    eax_1:1.b =
        (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        void* eax_2 = *arg4
        void* eax_3 = sub_4facd0(eax_2, arg2, arg3, eax_2, arg5)
        @__security_check_cookie@4(var_14 ^ &var_f8)
        return eax_3
    
    void* eax_4 = *arg4
    int128_t var_e0
    sub_4facd0(eax_4, arg2, arg3, eax_4, &var_e0)
    int128_t var_80
    char eax_6 = sub_4facd0(&var_80, arg2, arg3, arg4[1], &var_80)
    int32_t var_98
    int32_t var_38
    int64_t xmm0_6
    
    if (var_98 == 0 || var_38 == 0)
    label_4fb8a8:
        *arg5 = var_e0
        int128_t var_d0
        *(arg5 + 0x10) = var_d0
        int128_t var_c0
        *(arg5 + 0x20) = var_c0
        int128_t var_b0
        *(arg5 + 0x30) = var_b0
        int128_t var_a0
        *(arg5 + 0x40) = var_a0
        int64_t var_90
        xmm0_6 = var_90
    else
        eax_6 = sub_4fb2b0(&var_e0, &var_80)
        float xmm3_1 = arg4[2]
        
        if (eax_6 == 0)
            int32_t eax_8 = sub_4fb470(&var_80, &var_e0, arg5, xmm3_1, &var_80)
            @__security_check_cookie@4(var_14 ^ &var_f8)
            return eax_8
        
        if (0.5f > xmm3_1)
            goto label_4fb8a8
        
        *arg5 = var_80
        int128_t var_70
        *(arg5 + 0x10) = var_70
        int128_t var_60
        *(arg5 + 0x20) = var_60
        int128_t var_50
        *(arg5 + 0x30) = var_50
        int128_t var_40
        *(arg5 + 0x40) = var_40
        int64_t var_30
        xmm0_6 = var_30
    
    *(arg5 + 0x50) = xmm0_6
    @__security_check_cookie@4(var_14 ^ &var_f8)
    return eax_6
}
