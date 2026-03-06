// 函数名称: sub_4e8fc0
// 虚拟地址: 0x4e8fc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4e8fc0(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t* var_a0 = nullptr
    float var_a4 = 0f
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    double var_98
    
    if (arg8 == 2 || arg8 == 5 || arg8 == 8)
        int32_t mxcsr_1
        int16_t x87control_1
        float xmm0_1
        mxcsr_1, x87control_1, xmm0_1 = sub_4e9430(arg4, arg3)
        var_98 = fconvert.d(xmm0_1 * 0.5f)
        var_98 = fconvert.d(sub_59aa00(mxcsr_1, x87control_1, fconvert.d(fconvert.t(var_98))))
        var_a4 = 0f - _mm_cvtpd_ps(zx.o(var_98))
    
    if (arg8 == 3 || arg8 == 6 || arg8 == 9)
        var_a4 = var_a4 - sub_4e9430(arg4, arg3)
    
    double var_c8
    int32_t* var_9c
    float xmm1_4
    
    if (arg8 == 4 || arg8 == 5 || arg8 == 6)
        var_c8:4.d = &var_a0
        var_c8.d = 0x12
        int32_t mxcsr_2
        int16_t x87control_2
        mxcsr_2, x87control_2 = sub_4889e0(&var_9c, arg4, 0x12)
        int32_t ecx_3 = *var_a0
        int32_t* eax_1 = var_9c
        
        if (eax_1 != 0)
            eax_1[7] -= 1
        
        var_98 = _mm_cvtps_pd(float.s(ecx_3) * 0.5f)
        var_98 = fconvert.d(sub_59aa00(mxcsr_2, x87control_2, fconvert.d(fconvert.t(var_98))))
        xmm1_4 = 0f - _mm_cvtpd_ps(zx.o(var_98))
        var_a0 = xmm1_4
    else
        xmm1_4 = (zx.o(0)).d
    
    if (arg8 == 7 || arg8 == 8 || arg8 == 9)
        var_c8:4.d = &var_9c
        var_c8.d = 0x12
        sub_4889e0(&var_98, arg4, 0x12)
        int32_t ecx_5 = *var_9c
        void* eax_3 = var_98.d
        
        if (eax_3 != 0)
            *(eax_3 + 0x1c) -= 1
        
        xmm1_4 = var_a0 f- _mm_cvtepi32_ps(zx.o(ecx_5))
    
    void var_64
    int32_t* ecx_6 = &var_64
    int32_t var_88
    var_c8:4.d = &var_88
    var_88 = 0x3f800000
    int32_t var_7c = 0
    int32_t var_70 = 0
    int32_t var_84 = 0
    int32_t var_78 = 0x3f800000
    int32_t var_6c = 0
    float var_80 = var_a4
    float var_74 = xmm1_4
    int32_t var_68 = 0x3f800000
    return sub_4e8880(sub_41da40(&var_88, arg2, ecx_6), arg4, ecx_6, arg5, arg6, arg7, arg3)
}
