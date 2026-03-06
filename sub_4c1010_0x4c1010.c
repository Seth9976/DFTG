// 函数名称: sub_4c1010
// 虚拟地址: 0x4c1010
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_4c1010(int128_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f988
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_8c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = *fsbase->ThreadLocalStoragePointer
    float var_78
    int64_t var_58
    
    if (data_1516424 s> *(esi + 4))
        __Init_thread_header(&data_1516424)
        
        if (data_1516424 == 0xffffffff)
            int32_t var_50_1 = 0x80000000
            var_58 = _mm_unpacklo_ps(0x80000000, 0xbf800000)
            data_1516428 = *sub_41de50(&var_78, &var_58, &data_5d2318, &var_78, 0x5d22a0, &data_5d2294)
            __Init_thread_footer(&data_1516424)
    
    if (data_1516438 s> *(esi + 4))
        __Init_thread_header(&data_1516438)
        
        if (data_1516438 == 0xffffffff)
            data_151643c =
                *sub_41de50(&var_78, &data_5d2318, &data_5d2300, &var_78, 0x5d22a0, &data_5d2294)
            __Init_thread_footer(&data_1516438)
    
    if (data_151644c s> *(esi + 4))
        __Init_thread_header(&data_151644c)
        
        if (data_151644c == 0xffffffff)
            int128_t* ecx_1 = &data_151643c
            
            if (*(data_aca1ec + 0x30) == 0)
                ecx_1 = &data_1516428
            
            data_1516450 = *ecx_1
            __Init_thread_footer(&data_151644c)
    
    if (data_1516460 s> *(esi + 4))
        __Init_thread_header(&data_1516460)
        
        if (data_1516460 == 0xffffffff)
            data_1516464 = 0xffffffff
            __Init_thread_footer(&data_1516460)
    
    if (data_1516468 s> *(esi + 4))
        __Init_thread_header(&data_1516468)
        
        if (data_1516468 == 0xffffffff)
            int32_t ecx_2
            ecx_2.b = *(data_aca1ec + 0x30) == 0
            data_151646c = (ecx_2 << 1) + 0xffffffff
            __Init_thread_footer(&data_1516468)
    
    void* eax_16 = data_aca1ec
    
    if (*(eax_16 + 0x27) == 0)
        goto label_4c1239
    
    int128_t var_44
    float eax_17
    int64_t xmm0_5
    float xmm2_1
    float xmm3_1
    
    if ((*(sub_48df20() + 0x1c) & 0x200) != 0 || data_1150c9e != 0)
        uint128_t xmm2_13 = zx.o(data_1150de8)
        int128_t xmm0_65 = data_aca2a0
        eax_17 = data_aca2b8
        xmm3_1 = _mm_cvtepi32_ps(zx.o(data_1150de4)) * 0.25f
        xmm2_1 = _mm_cvtepi32_ps(xmm2_13) * 0.25f
        var_44 = xmm0_65
        xmm0_5 = data_aca2b0
    else
        eax_16 = data_aca1ec
    label_4c1239:
        uint128_t xmm2 = zx.o(*(eax_16 + 0x18))
        eax_17 = data_aca29c
        var_44 = data_aca284
        xmm0_5 = data_aca294
        xmm3_1 = _mm_cvtepi32_ps(zx.o(*(eax_16 + 0x14)))
        xmm2_1 = _mm_cvtepi32_ps(xmm2)
    
    float xmm4_1 = data_aca1f8 / (xmm2_1 * 0.5f)
    float xmm5 = var_44.d
    float xmm3_2 = var_44:0xc.d
    float xmm2_2 = var_44:4.d
    float xmm0_11 = float.s(data_1516464) * xmm3_1 * 0.5f * xmm4_1
    float xmm6_3 = float.s(data_151646c) * xmm2_1 * 0.5f * xmm4_1
    float xmm0_13 = xmm3_2 * xmm3_2
    float xmm4_3 = xmm2_2 * xmm5
    float xmm0_15 = xmm2_2 * xmm2_2
    float xmm1_3 = xmm5 * xmm5
    float xmm0_16 = var_44:8.d
    float xmm2_4 = xmm0_16 * xmm3_2
    float xmm7_1 = xmm0_16 * xmm0_16
    float xmm0_18 = xmm4_3 - xmm2_4
    float xmm2_6 = var_44:8.d * xmm5
    float xmm5_2 = var_44:4.d * xmm3_2
    float xmm3_4 = xmm6_3 + xmm6_3
    float xmm2_8 = var_44.d f* var_44:0xc.d
    float xmm0_24 = xmm0_11 + xmm0_11
    float xmm0_26 = xmm0_13 - xmm1_3
    float xmm1_5 = var_44:8.d f* var_44:4.d
    float xmm4_5 = (xmm2_4 + xmm4_3) * xmm0_24 + xmm0_26 + xmm0_15 - xmm7_1
    float var_5c_2 = xmm4_5
    float xmm2_9 = xmm2_8 + xmm1_5
    var_58.d = (xmm1_3 + xmm0_13 - xmm0_15 - xmm7_1) * xmm0_11 + xmm0_18 + xmm0_18
        + (xmm5_2 + xmm2_6) * xmm3_4 f+ xmm0_5.d
    var_58:4.d = xmm4_5 + (xmm1_5 - xmm2_8) * xmm3_4 f+ xmm0_5:4.d
    
    if (data_1516470 s> *(esi + 4))
        __Init_thread_header(&data_1516470)
        
        if (data_1516470 == 0xffffffff)
            int32_t var_14_1 = 0
            data_1516474 = sub_4d0b50("sys/sprite_3d_no_zread.material", 5)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_1516470)
    
    if (data_1516478 s> *(esi + 4))
        __Init_thread_header(&data_1516478)
        
        if (data_1516478 == 0xffffffff)
            int32_t var_14_3 = 1
            data_151647c = sub_4d0b50("sys/SpineTint.material", 5)
            __Init_thread_footer(&data_1516478)
    
    float xmm7_2 = var_44.d
    float xmm6_12 = var_44:0xc.d
    *(data_114ec70 + 0x25c) = data_151647c
    float xmm5_3 = data_1516450:0xc
    float xmm3_8 = data_1516450.d
    float xmm4_6 = data_1516450:8
    float xmm2_11 = data_1516450:4
    float var_2c_1 =
        (xmm2_6 - xmm5_2) * xmm0_24 + xmm2_9 + xmm2_9 + (xmm0_26 - xmm0_15 + xmm7_1) * xmm6_3 + eax_17
    var_78 = xmm5_3 * xmm7_2 + xmm3_8 * xmm6_12 + xmm4_6 f* var_44:4.d - xmm2_11 f* var_44:8.d
    float var_74 = xmm5_3 f* var_44:4.d + xmm2_11 * xmm6_12 + xmm3_8 f* var_44:8.d - xmm4_6 * xmm7_2
    float var_70 = xmm5_3 f* var_44:8.d + xmm4_6 * xmm6_12 + xmm2_11 * xmm7_2 - xmm3_8 f* var_44:4.d
    float var_6c = xmm5_3 * xmm6_12 - xmm3_8 * xmm7_2 - xmm2_11 f* var_44:4.d - xmm4_6 f* var_44:8.d
    int128_t xmm0_61 = var_78.o
    int64_t var_34_1 = var_58
    *arg1 = xmm4_1.o
    arg1[1] = xmm0_61
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return arg1
}
