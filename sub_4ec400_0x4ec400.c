// 函数名称: sub_4ec400
// 虚拟地址: 0x4ec400
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4ec400(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a107c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    
    if (*arg2 != 0)
        sub_489550(result, &data_5b2591, "elState.asset == NULL", 
            "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0x349, "FabUIDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*esi != 2)
        sub_489550(result, &data_5b2591, "el.type == FAB_UI", "d:\ax\trunk\ax2017\engine\fabdef.cpp", 
            0x34a, "FabUIDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (esi[0x22] != 0)
        void var_11c
        int128_t* eax_4 = sub_4eb240(&var_11c, arg2, arg1, &var_11c)
        int128_t var_f4_1 = *eax_4
        int128_t xmm0_2 = eax_4[1]
        int64_t xmm0_3 = eax_4[2].q
        void var_118
        int128_t* eax_6 = sub_4eb150(&var_118, arg2, esi, &var_118)
        int32_t var_28_1 = eax_6[2].d
        int128_t var_48 = *eax_6
        int128_t var_38 = eax_6[1]
        float var_58[0x4]
        int128_t* eax_9 = sub_4eebc0(&var_58, arg2, &var_48:0xc, &var_58)
        var_48:4.d = 0x3f800000
        var_48 = *eax_9
        uint128_t xmm0_7 = *eax_6
        var_38:8.q = xmm0_7
        int32_t var_28_2 = _mm_bsrli_si128(xmm0_7, 8)
        float var_68[0x4] = var_48
        var_58 = var_38
        sub_4ddac0(&arg2[0xf], &var_68, &var_48:4, &arg2[0xf])
        float xmm6_1[0x4] = var_48
        float xmm5_1[0x4] = var_38
        float xmm1_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55)
        float xmm2_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xaa)
        var_68 = xmm6_1
        float xmm6_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xff)
        float xmm4_3 = xmm2_2 * xmm1_2 - xmm6_2 f* xmm5_1
        float xmm0_16 = xmm5_1[0] f* xmm5_1
        var_58 = xmm5_1
        float xmm0_20 = xmm5_1[0] * xmm1_2
        float xmm1_5 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0x55) f- data_aca218:4
        float xmm6_4 = xmm6_2 * xmm2_2 + xmm0_20
        float xmm0_23 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0xaa) f- data_aca218:8
        float xmm5_3 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0xff) f- data_aca218:0xc
        data_114e7f4 = 1
        data_114e7fc = 0
        data_114e7f8 = (xmm4_3 + xmm4_3) * xmm1_5
            + (xmm2_2 * xmm2_2 - xmm6_2 * xmm6_2 + xmm0_16 - xmm1_2 * xmm1_2) * xmm0_23
            + (xmm6_4 + xmm6_4) * xmm5_3
        sub_4c0aa0(&var_68)
        
        if (data_15166f8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_15166f8)
            
            if (data_15166f8 == 0xffffffff)
                int32_t var_8_1 = 0
                data_15166fc = sub_4d0b50("sys/sprite_3d.material", 5)
                int32_t var_8_2 = 0xffffffff
                __Init_thread_footer(&data_15166f8)
        
        int128_t var_24
        void* edx_2 = &var_24:8
        *(data_114ec70 + 0x25c) = data_15166fc
        int128_t* eax_16 = sub_4829a0(&var_58, edx_2, &data_5d27f8, &var_58)
        int32_t* ecx_6 = arg2[0x18]
        float xmm0_25[0x4] = *eax_16
        var_58 = xmm0_25
        var_38 = xmm0_25
        
        if (ecx_6 == 0)
            ecx_6 = esi[0x22]
        
        var_24 = *sub_4c9850(&var_24, edx_2, ecx_6, &var_24)
        float var_17c[0x18]
        float* eax_20 = sub_4cdde0(&var_17c, &var_24, &var_38:4, &var_17c)
        int128_t xmm0_27 = *eax_20
        int128_t var_bc_1 = *(eax_20 + 0x10)
        int128_t var_ac_1 = *(eax_20 + 0x20)
        int128_t var_9c_1 = *(eax_20 + 0x30)
        int96_t xmm0_32 = (*(eax_20 + 0x50)).12
        float xmm7_1
        
        if (arg2[0x12a] s<= arg2[0x17])
            xmm7_1 = esi[0x24]
        else
            xmm7_1 = arg2[0x12b]
        
        float xmm0_33 = (*(eax_20 + 0x40)):0xc.d
        float xmm3_7 = xmm0_32.d
        float xmm1_7 = xmm0_32:4.d
        float xmm4_8 = xmm0_32:8.d
        void* eax_22 = data_114e814
        float xmm2_5 = (xmm0_33 + xmm1_7) * 0.5f
        int32_t ecx_8 = *(eax_22 + 0x38)
        float xmm5_6 = (xmm3_7 + xmm4_8) * 0.5f
        var_38:4.d = (xmm0_33 - xmm2_5) * xmm7_1 + xmm2_5
        float xmm2_6 = 1f - xmm7_1
        var_38:8.d = (xmm3_7 - xmm5_6) * xmm7_1 + xmm5_6
        var_38:0xc.d = (xmm1_7 - xmm2_5) * xmm7_1 + xmm2_5
        float var_28_3 = (xmm4_8 - xmm5_6) * xmm7_1 + xmm5_6
        float xmm4_12 = xmm0_27:0xc.d
        int128_t var_8c_1 = var_38
        int128_t var_cc_1
        var_cc_1:0xc.d = xmm4_12 * xmm7_1
        var_cc_1.d = xmm0_27.d + xmm2_6 * (var_24.d + xmm0_2:0xc.d) * 0.5f * xmm4_12
        var_cc_1:4.d = var_cc_1:4.d + xmm2_6 * (var_24:4.d + xmm0_3:4.d) * 0.5f * xmm4_12
        int128_t xmm0_46 = *(eax_22 + 0x28)
        *(eax_22 + 0x38) = 0xffffffff
        var_38 = xmm0_46
        *(eax_22 + 0x28) = var_58
        int32_t* edx_4 = arg2[0x18]
        
        if (edx_4 == 0)
            edx_4 = esi[0x22]
        
        sub_4ec370(&arg2[1], edx_4)
        arg2[1]
        sub_4cd0d0(0x3f800000, eax_2)
        void* eax_23 = data_114e814
        *(eax_23 + 0x28) = var_38
        *(eax_23 + 0x38) = ecx_8
        result = data_114ec70
        __builtin_memcpy(&result[0x29], 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        result[0x97] = 0
        sub_496580()
        data_114e7f4 = 0
        data_114e7f8 = 0
        data_114e7fc = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
