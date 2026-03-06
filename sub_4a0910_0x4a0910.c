// 函数名称: sub_4a0910
// 虚拟地址: 0x4a0910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __fastcallsub_4a0910(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f368
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    float result = *(arg1 + 0x10a8) f- *(arg1 + 0x10a0)
    float xmm0_1 = *(data_114e818 + 0x2c)
    float xmm1_1 = xmm0_1 f- *(arg1 + 0x364)
    float var_14 = xmm0_1 f- *(arg1 + 0x368)
    float xmm0_3 = sub_4be3e0(arg1 + 0x2dc, xmm1_1)
    int32_t eax_4
    int32_t ecx_2
    int32_t edx
    float xmm0_4
    eax_4, ecx_2, edx, xmm0_4 = sub_4be3e0(arg1 + 0x318, var_14)
    float xmm4 = *(arg1 + 0x354)
    int32_t xmm0_5 = (zx.o(0)).d
    float xmm1_4 = var_14 f- *(arg1 + 0x358)
    xmm4 f- 0
    eax_4:1.b =
        (xmm4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4, 0f) ? 1 : 0) << 2 | (xmm4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        if (not(0 f> xmm1_4))
            if (xmm1_4 < xmm4)
                int32_t var_40_1 = ecx_2
                xmm0_5 = sub_41f710(eax_4, edx, *(arg1 + 0x35c), xmm0_5, xmm4, xmm1_4, zx.o(0), 1f)
            else
                xmm0_5 = 0x3f800000
    else if (not(0 f> xmm1_4))
        xmm0_5 = 0x3f800000
    
    float xmm0_7 = *(arg1 + 0x1020) * ((xmm0_4 - xmm0_3) f* xmm0_5 + xmm0_3)
    sub_48a2c0(&var_14, U"M")
    int32_t var_8_1 = 0
    float var_2c = 0f
    int32_t var_28 = 0
    int32_t var_20_1 = 0x49742400
    float var_24 = result / xmm0_7
    float xmm0_11 =
        sub_4ea450(&var_2c, &data_5d3570, &var_14, &var_2c, data_63e5f0, 0, -nanf, nullptr) * xmm0_7
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        float eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    float var_20_2 = xmm0_11
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
