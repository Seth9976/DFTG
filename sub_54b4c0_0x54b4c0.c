// 函数名称: sub_54b4c0
// 虚拟地址: 0x54b4c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_54b4c0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?SearchCacheLocal@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_NK@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_492b90(&data_11d2fa4)
    
    if (data_114e7d9 == 0)
        sub_489550(eax_3, &data_5b2591, "gDraw3DData.submittingRenderItems", 
            "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x331, "Draw3DAmbientLight")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    data_aca6c8 = data_5d2464
    int64_t xmm0_1 = _mm_unpacklo_ps(0x80000000, 0x80000000)
    __builtin_strncpy(&data_aca6d8, "333?", 4)
    int64_t var_a4 = xmm0_1
    int32_t var_9c = 0xbf800000
    int32_t eax_4 = sub_492310(0xbf800000, &data_5d2464, &var_a4, 0)
    
    if (data_114e7d9 == 0)
        sub_489550(eax_4, &data_5b2591, "gDraw3DData.submittingRenderItems", 
            "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x327, "Draw3DLayer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_1 = data_11d2fdc
    data_aca74c = 0x3e8
    sub_4ed160(ecx_1, 0)
    int32_t ecx_2 = data_11d2fe4
    
    if (ecx_2 != 0)
        sub_4ed160(ecx_2, 0)
    
    int32_t i = 0
    int32_t var_98
    int128_t var_94
    int128_t var_84
    void var_6c
    
    if (data_11d3fec s> 0)
        var_98 = 0xff7f7f7f
        var_98 = var_98
        
        do
            int128_t* eax_7 = sub_4ee3c0(&var_6c, *((i << 2) + &data_11d2fec), data_11d2fdc, &var_6c)
            var_94 = *eax_7
            var_84 = eax_7[1]
            int64_t var_74_1 = eax_7[2].q
            sub_4976b0(&var_94, &var_98)
            i += 1
        while (i s< data_11d3fec)
    
    int32_t edx_3 = data_11d2fe0
    
    if (edx_3 != 0xffffffff)
        int128_t* eax_9 = sub_4ee3c0(&var_6c, edx_3, data_11d2fdc, &var_6c)
        var_98 = 0xff7f7f7f
        var_94 = *eax_9
        var_84 = eax_9[1]
        int64_t var_74_2 = eax_9[2].q
        var_98 = var_98
        sub_4976b0(&var_94, &var_98)
    
    int32_t edx_5 = data_11d2fe8
    
    if (edx_5 != 0xffffffff)
        int128_t* eax_12 = sub_4ee3c0(&var_6c, edx_5, data_11d2fe4, &var_6c)
        var_98 = 0xff7f7f7f
        var_94 = *eax_12
        var_84 = eax_12[1]
        int64_t var_74_3 = eax_12[2].q
        var_98 = var_98
        sub_4976b0(&var_94, &var_98)
    
    int32_t i_1 = 0
    
    if (data_11e6020 == 0)
        if (data_1152b94 s> 0)
            do
                int128_t* eax_17 = sub_4ee3c0(&var_6c, (&data_1151b94)[i_1], data_11d2fdc, &var_6c)
                var_94 = *eax_17
                var_84 = eax_17[1]
                int64_t var_74_5 = eax_17[2].q
                sub_4976b0(&var_94, &data_5d2474)
                i_1 += 1
            while (i_1 s< data_1152b94)
    else if (data_1152b94 s> 0)
        do
            int128_t* eax_15 = sub_4ee3c0(&var_6c, (&data_1151b94)[i_1], data_11d2fdc, &var_6c)
            var_94 = *eax_15
            var_84 = eax_15[1]
            int64_t var_74_4 = eax_15[2].q
            sub_4976b0(&var_94, &data_5d233c)
            i_1 += 1
        while (i_1 s< data_1152b94)
    
    int128_t var_60
    
    if (data_11e6024 == 1)
        sub_4c1630()
        float xmm3_1 = data_11e6010
        float xmm1_1 = data_11e6018
        int32_t xmm2_1 = data_11e6014
        int32_t xmm0_17 = data_11e601c
        float xmm4_1
        
        if (xmm1_1 <= xmm3_1)
            xmm4_1 = xmm1_1
            xmm1_1 = xmm3_1
        else
            xmm4_1 = xmm3_1
        
        int32_t xmm3_2
        
        if (xmm0_17 f<= xmm2_1)
            xmm3_2 = xmm0_17
            xmm0_17 = xmm2_1
        else
            xmm3_2 = xmm2_1
        
        var_60:0xc.d = xmm4_1
        int64_t var_50
        var_50.d = xmm3_2
        var_50:4.d = xmm1_1
        int32_t var_48_1 = xmm0_17
        sub_4c0650(&var_60:0xc, &data_5d233c, 1f)
        void* eax_18 = data_114ec70
        __builtin_memcpy(eax_18 + 0xa4, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        *(eax_18 + 0x25c) = 0
        sub_496580()
    
    void* esi = *fsbase->ThreadLocalStoragePointer
    
    if (data_1516870 s> *(esi + 4))
        __Init_thread_header(&data_1516870)
        
        if (data_1516870 == 0xffffffff)
            int32_t var_8_1 = 0
            data_1516874 = sub_4d0b50("sys/particle_3d.material", 5)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_1516870)
    
    if (data_1516878 s> *(esi + 4))
        __Init_thread_header(&data_1516878)
        
        if (data_1516878 == 0xffffffff)
            int32_t var_8_3 = 1
            data_151687c = sub_4d0b50("sys/holodeck.texture", 3)
            int32_t var_8_4 = 0xffffffff
            __Init_thread_footer(&data_1516878)
    
    float var_44[0x4]
    __builtin_memcpy(&var_44, 
        "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x00\x00\x"
    "00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x
            00", 
        0x30)
    float var_64 = 4f
    int32_t var_48_2 = 0
    __builtin_memcpy(&var_94:8, 
        "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x80\x3f\x00\x00\x00\x00", 
        0x20)
    var_60 = data_5d2b78
    int64_t var_50_1 = 0
    sub_495590(0f, &var_44, &var_64, 4)
    float xmm1_2[0x4] = var_44
    int32_t var_b4_6 = data_1516874
    float xmm0_21 = _mm_shuffle_ps(xmm1_2, xmm1_2, 0x55)
    int32_t* var_bc = data_151687c
    int128_t var_24
    float xmm2_4 = (var_24:0xc.d + _mm_shuffle_ps(xmm1_2, xmm1_2, 0xaa)) * 0.5f
    int64_t xmm4_5 = _mm_unpacklo_ps((var_24:4.d f+ xmm1_2) * 0.5f, (var_24:8.d + xmm0_21) * 0.5f)
    sub_493420(xmm2_4, &var_94:8, &var_44, &data_63c284, 0, xmm4_5, xmm2_4, var_bc, &var_64)
    sub_4c1630()
    char* const edi = &data_5b2591
    char* eax_26 = *(data_1151b90 + 0x20)
    
    if (eax_26 != 0)
        edi = eax_26
    
    if (data_1516880 s> *(esi + 4))
        __Init_thread_header(&data_1516880)
        
        if (data_1516880 == 0xffffffff)
            int32_t var_8_5 = 2
            data_1516884 = sub_4d0b50("sys/debugfont.font", 0x12)
            int32_t var_8_6 = 0xffffffff
            __Init_thread_footer(&data_1516880)
    
    void* eax_29 = data_aca1ec
    int32_t* edx_11 = data_1516884
    var_60:0xc.d = 0
    var_50_1.d = 0
    int32_t var_b8_1 = 0x3fc00000
    var_50_1:4.d = _mm_cvtepi32_ps(zx.o(*(eax_29 + 0x14)))
    int32_t var_48_4 = _mm_cvtepi32_ps(zx.o(*(eax_29 + 0x18)))
    sub_4e92a0(&var_60:0xc, edx_11, edi, &var_60:0xc)
    void* result = data_114ec70
    __builtin_memcpy(result + 0xa4, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
        0x41)
    *(result + 0x25c) = 0
    sub_496580()
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
