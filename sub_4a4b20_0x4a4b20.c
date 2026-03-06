// 函数名称: sub_4a4b20
// 虚拟地址: 0x4a4b20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4a4b20(int32_t arg1, int32_t arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3, int32_t* arg4, float* arg5, float arg6, int32_t* arg7, int32_t* arg8, int32_t* arg9, int32_t arg10, char arg11)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f3a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_13c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD* result_1 = arg3
    float xmm1[0x4] = data_5d3570
    float xmm2[0x4] = data_5d3580
    float xmm4_2 = (arg5[2] + *arg5) * 0.5f
    float xmm3_2 = (arg5[3] + arg5[1]) * 0.5f
    void* eax_6 = data_114e818
    int128_t var_48
    __builtin_memcpy(&var_48, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x24)
    float var_9c = arg6
    float xmm1_1 = _mm_shuffle_ps(xmm1, xmm1, 0xaa)
    float xmm0 = *(eax_6 + 0x2c)
    float xmm2_1 = _mm_shuffle_ps(xmm2, xmm2, 0x55)
    var_48:8.d = xmm4_2 + xmm1_1
    int128_t var_38
    var_38:4.d = xmm3_2 + xmm2_1
    int128_t var_88
    sub_41da40(&var_48, &data_5d3570, &var_88, &var_48)
    void* var_68
    void* var_28 = var_68
    var_48 = var_88
    int128_t var_78
    int128_t var_38_1 = var_78
    sub_41da40(var_68, &var_48, &var_88, arg4)
    bool cond:0 = data_63e5f0 == 0
    float xmm2_3 = xmm4_2 ^ (data_60cca0.o).d
    float xmm1_3 = xmm3_2 ^ (data_60cca0.o).d
    float xmm4_4 = xmm2_3 + *arg5
    void* eax_9 = var_68
    float xmm3_4 = xmm1_3 + arg5[1]
    var_48 = var_88
    void* var_28_1 = eax_9
    float xmm0_10 = arg5[2] + xmm2_3
    char* result_2 = result_1
    float xmm2_5 = arg5[3] + xmm1_3
    float var_b0 = xmm4_4
    float var_ac = xmm3_4
    float var_a8 = xmm0_10
    float var_a4 = xmm2_5
    
    if (not(cond:0))
        eax_9 = _strchr(result_2, 0x7b)
    
    void var_12c
    char** result
    
    if (cond:0 || eax_9 == 0 || *(arg6 i+ 0xf79) != 0)
        if (*(arg6 i+ 0xf78) != 0)
        label_4a50b2:
            
            if (result_2 == 0)
                sub_489550(eax_9, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                    "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t var_140_6 = sub_48a2c0(&result_1, result_2)
            int32_t var_14_3 = 2
            int32_t var_140_7 = arg10
            result = sub_4ea970(&var_b0, &var_48, &result_1, &var_b0, *(arg6 i+ 0xf68), *arg7, *arg8, 
                *arg9, *(arg6 i+ 0xe88))
            int32_t var_14_4 = 3
        label_4a510d:
            
            if (data_aca1f4 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_1)
                    int32_t temp1_1 = result[1]
                    result[1] = &result[1][0xffffffff]
                    
                    if (temp1_1 == 1)
                        result = sub_4984f0(result, &result[3][0x10])
        else
            eax_9 = _strchr(result_2, 0xd)
            
            if (eax_9 != 0)
                goto label_4a50b2
            
            int32_t* edi_1 = *(arg6 i+ 0xf68)
            int32_t esi_3 = *(var_9c i+ 0xe88)
            float eax_23
            float edx_5
            eax_23, edx_5 = sub_4eaaa0(esi_3)
            var_9c = edx_5
            var_88:0xc.d = 0
            var_88.d = arg10
            var_78:8.d = 0
            var_88:4.d = 0
            var_78.d = arg10
            var_78:0xc.d = 0
            var_88:8.d = (xmm0_10 - xmm4_4) * eax_23 + xmm4_4
            var_78:4.d = (xmm2_5 - xmm3_4) * var_9c + xmm3_4
            int32_t var_68_3 = 0x3f800000
            sub_41da40(&var_88, &var_48, &var_12c, &var_88)
            void* var_144_4 = &var_12c
            result = sub_4e8fc0(arg7, &var_12c, result_1, edi_1, *arg7, *arg8, *arg9, esi_3)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    float xmm2_7 = sub_4bc5c0(arg6 i+ 0x2dc, xmm0) * *(arg6 i+ 0x1020)
    int128_t var_c0 = var_b0.o
    float var_54_2
    
    if (xmm2_7 <= 9.99999975e-06f)
        var_54_2 = 1f / xmm2_7
    else
        float eax_10
        float edx_1
        eax_10, edx_1 = sub_4be890(&var_b0)
        float xmm1_6 = 1f / xmm2_7
        var_54_2 = xmm1_6
        float eax_11
        float edx_2
        eax_11, edx_2 = sub_426dd0(&var_b0)
        var_c0:4.d = edx_2 * var_54_2
        var_c0:8.d = eax_10 * xmm1_6
        var_c0.d = eax_11 * var_54_2
        var_c0:0xc.d = edx_1 * xmm1_6
    
    void var_108
    _memset(&var_108, 0, 0x48)
    int32_t var_f4_1 = *arg7
    int32_t var_f0_1 = *arg8
    int32_t var_ec_1 = *arg9
    int32_t var_c7_1 = 0xffffffff
    
    if (arg11 != 0)
        int32_t var_c7_2 = 0
    
    float xmm0_23 = var_88:8.d * var_54_2
    var_9c = *(arg6 i+ 0xf68)
    int32_t* var_104_1 = &var_9c
    var_48:8.d = xmm0_23
    int32_t var_f8_1 = *(arg6 i+ 0xe88)
    int32_t var_a4_1 = *(arg6 i+ 0x1080)
    var_b0 = 1f
    int32_t var_ac_1 = 0x3f800000
    int32_t var_a8_1 = 0x3f800000
    int32_t var_e8_1 = 0x3f800000
    int64_t var_38_2
    var_38_2:4.d = var_54_2 f* var_78.q:4.d
    float var_14c
    var_14c.o = var_b0.o
    float eax_20 = sub_497d80(var_14c)
    sub_48a320(&result_1, result_1)
    int32_t var_14_1 = 0
    xmm2_7 - 0f
    result:1.b =
        (xmm2_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_7, 0f) ? 1 : 0) << 2 | (xmm2_7 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        int128_t xmm0_26 = data_5d3570
        int128_t xmm1_11 = data_5d3580
        __builtin_memcpy(&var_88, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x24)
        var_88.d = xmm0_26 f* xmm2_7
        var_88:4.d = var_88:4.d * xmm2_7
        int128_t var_78_1
        var_78_1.d = xmm1_11 f* xmm2_7
        var_88:8.d = var_88:8.d * xmm2_7
        var_88:0xc.d = var_88:0xc.d * xmm2_7
        var_78_1:4.d = var_78_1:4.d * xmm2_7
        var_78_1:8.d = var_78_1:8.d * xmm2_7
        var_78_1:0xc.d = var_78_1:0xc.d * xmm2_7
        float var_68_1
        float var_68_2 = var_68_1 * xmm2_7
        sub_41da40(&var_88, &var_48, &var_12c, &var_88)
        result = sub_4eabf0(&var_c0, &var_12c, &result_1, &var_c0, data_63e5f0, eax_20, &var_108)
    
    int32_t var_14_2 = 1
    goto label_4a510d
}
