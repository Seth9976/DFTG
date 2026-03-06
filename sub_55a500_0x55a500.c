// 函数名称: sub_55a500
// 虚拟地址: 0x55a500
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*sub_55a500())[0x4]
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a3538
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_120
    int128_t* eax_3 = sub_424c90(&var_120)
    int128_t var_c0 = *eax_3
    int128_t var_b0 = eax_3[1]
    int128_t var_a0 = eax_3[2]
    int128_t var_90 = eax_3[3]
    int128_t var_80 = eax_3[4]
    int32_t* var_28
    int32_t* var_130_1 = &var_28
    int128_t var_70 = eax_3[5]
    int32_t* var_2c
    sub_4889e0(&var_2c, data_126b8bc, 0x1d)
    int32_t var_14_1 = 0
    int32_t* eax_4 = sub_50bf20(var_28)
    int32_t var_14_2 = 0xffffffff
    int32_t* ecx_2 = var_2c
    
    if (ecx_2 != 0)
        ecx_2[7] -= 1
    
    void* eax_5 = data_aca1ec
    float var_3c = 0f
    int32_t var_38 = 0
    uint128_t xmm1 = zx.o(*(eax_5 + 0x18))
    void* eax_6 = data_114e814
    float xmm2_1 = _mm_cvtepi32_ps(zx.o(*(eax_5 + 0x14)))
    bool cond:0 = *(eax_6 + 0x38) == 0
    float xmm2_4 = _mm_min_ss(xmm2_1 - 0f, _mm_cvtepi32_ps(xmm1) - 0f) * 0.800000012f
    float var_34 = xmm2_4
    float var_30 = xmm2_4
    void var_5c
    void var_4c
    
    if (cond:0)
        int32_t* var_134_2 = &data_63c284
        sub_4bffb0(eax_6, &var_3c, nullptr, &data_5d2760, &data_63c284, eax_4)
    else if (sub_4bfe40(eax_6 + 0x28, &data_5d2760, &var_3c, eax_6 + 0x28, &var_5c, &var_4c) != 0)
        int32_t* var_134_1 = &data_63c284
        sub_4bffb0(&var_4c, &var_5c, nullptr, &var_4c, &data_63c284, eax_4)
    data_126b8c0
    uint32_t (* result)[0x4] = sub_4cd0d0(0x3f800000, eax_2)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
