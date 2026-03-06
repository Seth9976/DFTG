// 函数名称: sub_54c810
// 虚拟地址: 0x54c810
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_54c810(int64_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a3484
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_114 = esi
    int32_t edi
    int32_t var_118 = edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t xmm0 = sub_41e120(0.785398185f)
    int32_t eax_3 = data_aca1ec
    int32_t var_110 = xmm0
    int32_t var_108 = data_aca244.d
    bool cond:0 = *(eax_3 + 0x1c) s<= 0
    int32_t var_10c = 0x3f800000
    int32_t var_104 = data_aca244:4
    char var_e0 = 0
    int32_t var_dc = 0x3f800000
    int32_t* result_4 = nullptr
    char* result_5 = nullptr
    int32_t* result_8
    int32_t* result_35
    
    if (cond:0)
        result_8 = sub_4d2c50(eax_3, 0x800, 0x800, 0x50, 4)
        result_35 = result_8
    else
        int32_t* result_38 = sub_4d2c50(eax_3, 0x800, 0x800, 0x50, 6)
        result_35 = result_38
        result_5 = nullptr
        result_8 = sub_4d2c50(result_38, 0x800, 0x800, 1, 5)
        result_4 = result_8
    
    int32_t* result_3
    int32_t var_3c[0x6]
    
    for (int32_t i = 0; i s< 6; i += 1)
        if (i u> 5)
            result_5 = "RenderEnvironmentMap"
            sub_489550(result_8, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\engine\editor\fabeditor.cpp", 0x806, result_5)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_4
        int64_t xmm0_4
        float xmm2_1
        float xmm3_1
        float xmm4_1
        
        switch (i)
            case 0
                int64_t xmm0_3 = 0
                xmm4_1 = xmm0_3:4.d
                xmm2_1 = xmm0_3.d
                xmm3_1 = 1f
                eax_4 = 0x80000000
                xmm0_4 = _mm_unpacklo_ps(0x80000000, 0xbf800000)
            case 1
                xmm3_1 = -0f
                xmm2_1 = -1f
                xmm4_1 = -0f
                xmm0_4 = 0
                eax_4 = 0x3f800000
            case 2
                int64_t xmm0_5 = 0x3f80000000000000
                xmm0_4 = 0
                xmm4_1 = xmm0_5:4.d
                xmm2_1 = xmm0_5.d
                eax_4 = 0x3f800000
                xmm3_1 = 0f
            case 3
                xmm2_1 = 1f
                xmm4_1 = (zx.o(0)).d
                xmm0_4 = 0
                xmm3_1 = (zx.o(0)).d
                eax_4 = 0x3f800000
            case 4
                xmm3_1 = -0f
                xmm4_1 = -1f
                xmm2_1 = -0f
                xmm0_4 = 0
                eax_4 = 0x3f800000
            case 5
                xmm4_1 = -0f
                xmm3_1 = -1f
                xmm2_1 = -0f
                xmm0_4 = 0x3f80000000000000
                eax_4 = 0
        
        int64_t var_48 = xmm0_4
        int32_t var_40_1 = eax_4
        float xmm2_2[0x4] = xmm2_1 f+ *arg1
        int64_t xmm1_2 = *(arg1 + 4) + xmm4_1
        float var_b0_1 = arg1[1].d f+ xmm3_1
        result_5 = &var_48
        int64_t var_b8 = _mm_unpacklo_ps(xmm2_2, xmm1_2)
        void var_100
        sub_51b1b0(&var_48, &var_b8, &var_100, arg1, result_5)
        int32_t eax_7 = sub_4962c0()
        
        if (data_114e7d9 == 0)
            result_5 = "Draw3DAmbientLight"
            sub_489550(eax_7, &data_5b2591, "gDraw3DData.submittingRenderItems", 
                "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x331, result_5)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        data_aca6c8 = data_5d2464
        __builtin_strncpy(&data_aca6d8, "333?", 4)
        int32_t var_bc_1 = 0xbf800000
        int64_t xmm0_9 = _mm_unpacklo_ps(0x80000000, 0x80000000)
        result_5 = nullptr
        int64_t var_c4 = xmm0_9
        sub_492310(0xbf800000, &data_5d2464, &var_c4, result_5)
        sub_492b90(&var_110)
        int32_t* eax_8 = sub_4ed160(data_11d2fdc, 1)
        
        if (data_114e7d9 == 0)
            result_5 = "Draw3DRenderItemSubmissionEnd"
            sub_489550(eax_8, &data_5b2591, "gDraw3DData.submittingRenderItems", 
                "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0xac8, result_5)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (data_114e7d8 != 0)
            result_5 = "Draw3DRenderItemSubmissionEnd"
            sub_489550(eax_8, &data_5b2591, "!gDraw3DData.quadGroupDrawing", 
                "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0xac9, result_5)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result_5 = nullptr
        data_114e7d9 = 0
        int32_t* result_9 = sub_4d2c50(eax_8, 0x800, 0x800, 1, 3)
        void* ecx_5 = data_114ec70
        int32_t eax_9 = data_aca1ec
        result_3 = result_9
        var_3c[i] = result_9
        bool cond:1_1 = *(eax_9 + 0x1c) s<= 0
        result_5 = nullptr
        int32_t eax_11
        int32_t* result_19
        
        if (cond:1_1)
            *(ecx_5 + 0x24c) += 1
            eax_11 = *(ecx_5 + 0x24c) * 5
            *(ecx_5 + (eax_11 << 2) + 0x10c) = 2
            *(ecx_5 + (eax_11 << 2) + 0x114) = result_9
            *(ecx_5 + (eax_11 << 2) + 0x118) = result_35
            *(ecx_5 + (eax_11 << 2) + 0x11c) = 0
            result_19 = result_3
        else
            *(ecx_5 + 0x24c) += 1
            int32_t* result_21 = result_4
            eax_11 = *(ecx_5 + 0x24c) * 5
            *(ecx_5 + (eax_11 << 2) + 0x10c) = 2
            *(ecx_5 + (eax_11 << 2) + 0x114) = result_21
            *(ecx_5 + (eax_11 << 2) + 0x118) = result_35
            *(ecx_5 + (eax_11 << 2) + 0x11c) = 0
            result_19 = result_21
        
        sub_4ded00(eax_11, result_35, result_19, result_5.b)
        int32_t eax_13 = *data_114ec78
        result_5 = data_aca230
        (*(eax_13 + 0x8c))(result_5)
        sub_492900()
        sub_495c90()
        sub_495f10(2)
        sub_4964a0()
        
        if (*(data_aca1ec + 0x1c) s> 0)
            int32_t* ecx_7 = data_114ec78
            result_5 = result_3
            (*(*ecx_7 + 0x90))(result_4, result_5)
        
        result_8 = sub_4df310()
    
    if (*(data_aca1ec + 0x1c) s> 0)
        sub_4d0720(result_4)
    
    int32_t eax_17 = sub_4d0720(result_35)
    result_5 = 1
    int32_t eax_18 = sub_5235a0(eax_17, 0x1800, 0x2000, result_5)
    int32_t eax_20 = sub_5233d0(1) << 0xd
    int32_t result_23
    
    if (eax_20 s>= 4)
        eax_20 = sub_5233d0(1)
        result_23 = eax_20 << 0xd
    else
        result_23 = 4
    
    result_3 = result_23
    
    if (eax_18 s<= 0)
        result_5 = "XMalloc"
        sub_489550(eax_20, &data_5b2591, "size > 0", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 0x3d, 
            result_5)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (eax_18 s>= 0x77359400)
        result_5 = "XMalloc"
        sub_489550(eax_20, &data_5b2591, "size < 2000000000", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 
            0x3e, result_5)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    result_5 = 0x10
    char* result_25 = sub_586f5f(eax_18, result_5)
    
    if (result_25 == 0)
        result_5 = "XMalloc"
        sub_489550(result_25, &data_5b2591, "pBuffer", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 0x57, 
            result_5)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_13
    int32_t edi_3
    
    if (eax_18 s> 0)
        edi_3, ecx_13 = __memfill_u32(result_25, 0xff000000, ((eax_18 - 1) u>> 2) + 1)
    int32_t var_a8 = 0x800
    int32_t var_a4 = 0x800
    int32_t result_24 = result_23
    int32_t var_9c = 1
    int32_t eax_22 = sub_5233d0(1) << 0xb
    int32_t result_22
    
    if (eax_22 s>= 4)
        eax_22 = sub_5233d0(1)
        result_22 = eax_22 << 0xb
    else
        result_22 = 4
    
    result_4 = result_22
    
    for (int32_t i_1 = 0; i_1 s< 6; )
        if (i_1 u> 5)
            result_5 = "RenderEnvironmentMap"
            sub_489550(eax_22, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\editor\fabeditor.cpp", 
                0x85a, result_5)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_23
        int32_t ecx_14
        
        switch (i_1)
            case 0
                ecx_14 = 0
                eax_23 = 1
            case 1
                eax_23 = 0
                ecx_14 = 0x800
            case 2
                ecx_14 = 0x800
                eax_23 = 1
            case 3
                eax_23 = 2
                ecx_14 = 0x800
            case 4
                eax_23 = 3
                ecx_14 = 0x800
            case 5
                ecx_14 = 0x1000
                eax_23 = 1
        
        int32_t* esi_2 = var_3c[i_1]
        void* var_ac
        result_5 = &var_ac
        int32_t* ecx_17 = data_114ec78
        var_ac = eax_23 * result_22 + ecx_14 * result_23 + result_25
        (*(*ecx_17 + 0x80))(esi_2, result_5)
        eax_22 = sub_4d0720(esi_2)
        result_23 = result_3
        i_1 += 1
        result_22 = result_4
    
    result_5 = &data_1150ca0
    char* result_2
    sub_48a9d0(&result_2, "%s/cubemap_probe.png")
    int32_t var_14_1 = 0
    char* const result_34 = &data_5b2591
    char* result_10 = result_2
    char* result_27 = &data_5b2591
    
    if (result_10 != 0)
        result_27 = result_10
    
    result_5 = result_27
    sub_4892e0("Saving environment probe %s")
    char* result_11 = result_2
    float var_7c = 1.1479437e-41f
    char* result_31 = &data_5b2591
    int32_t var_78 = 0x1800
    
    if (result_11 != 0)
        result_31 = result_11
    
    int32_t var_70 = 4
    int32_t* result_7 = result_3
    char* result_6 = result_25
    
    if (sub_56d600(&result_6, result_31) == 0)
        char* result_12 = result_2
        char* result_28 = &data_5b2591
        
        if (result_12 != 0)
            result_28 = result_12
        
        result_5 = result_28
        sub_4892e0("PNGExportTexture failed to png write %s")
    
    result_5 = result_25
    _aligned_free_base(result_5)
    char* result_13 = result_2
    char* result_32 = &data_5b2591
    
    if (result_13 != 0)
        result_32 = result_13
    
    sub_4e1cb0(&result_3, result_32)
    var_14_1.b = 1
    int32_t* result_29 = &data_5b2591
    int32_t* result_14 = result_3
    
    if (result_14 != 0)
        result_29 = result_14
    
    int32_t* result_26 = sub_4d0b50(result_29, 3)
    sub_4d0720(result_26)
    result_5 = result_26
    int32_t* result_20 = result_3
    result_5 = result_20
    
    if (result_20 != 0 && *result_20 != 0)
        char* eax_29 = sub_48a080(&result_5)
        *(eax_29 + 4) += 1
    
    char** eax_30 = sub_4d1630(3, 0)
    result_5 = nullptr
    int32_t* eax_31 = sub_4d2c50(eax_30, 0x800, 0x1000, 1, 3)
    void* edx_6 = data_114ec70
    *(edx_6 + 0x24c) += 1
    int32_t ecx_23 = *(edx_6 + 0x24c)
    result_5 = nullptr
    int32_t ecx_24 = ecx_23 * 5
    *(edx_6 + (ecx_24 << 2) + 0x10c) = 2
    *(edx_6 + (ecx_24 << 2) + 0x114) = eax_31
    *(edx_6 + (ecx_24 << 2) + 0x118) = 0
    *(edx_6 + (ecx_24 << 2) + 0x11c) = 0
    sub_4ded00(eax_31, 0, eax_31, result_5.b)
    int32_t eax_32 = *data_114ec78
    result_5 = data_aca230
    (*(eax_32 + 0x8c))(result_5, eax_2)
    var_7c.o = data_60cb50
    void* ecx_27 = *fsbase->ThreadLocalStoragePointer
    int32_t eax_34 = data_1516888
    int128_t var_d8 = data_60cc30
    
    if (eax_34 s> *(ecx_27 + 4))
        __Init_thread_header(&data_1516888)
        
        if (data_1516888 == 0xffffffff)
            var_14_1.b = 2
            data_151688c = sub_4d0b50("sys/editor/equirectangular.material", 5)
            var_14_1.b = 1
            __Init_thread_footer(&data_1516888)
    
    sub_4c0210(&var_7c, &var_d8, result_26, &var_7c, &data_63c284, data_151688c)
    int32_t eax_38 = sub_5235a0(sub_4df310(), 0x800, 0x1000, 1)
    int32_t edi_5
    
    if (sub_5233d0(1) << 0xc s>= 4)
        edi_5 = sub_5233d0(1) << 0xc
    else
        edi_5 = 4
    
    int32_t var_94 = 0x1000
    int32_t var_90 = 0x800
    int32_t var_8c = edi_5
    int32_t var_88 = 1
    
    if (eax_38 s<= 0)
        sub_489550(eax_38, &data_5b2591, "size > 0", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 0x3d, 
            "XMalloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (eax_38 s>= 0x77359400)
        sub_489550(eax_38, &data_5b2591, "size < 2000000000", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 
            0x3e, "XMalloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* result_15 = sub_586f5f(eax_38, 0x10)
    
    if (result_15 == 0)
        sub_489550(result_15, &data_5b2591, "pBuffer", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 0x57, 
            "XMalloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* ecx_29 = data_114ec78
    char* result_1 = result_15
    (*(*ecx_29 + 0x80))(eax_31, &result_1)
    sub_4d0720(eax_31)
    char* var_12c_1 = &data_1150ca0
    sub_48a9d0(&result_4, "%s/equirectangular_probe.png")
    var_14_1.b = 3
    char* const result_30 = &data_5b2591
    int32_t* result_16 = result_4
    
    if (result_16 != 0)
        result_30 = result_16
    
    char* const result_36 = result_30
    sub_4892e0("Saving equirectangular probe %s")
    char* result_17 = result_4
    var_7c = 5.73971851e-42f
    int32_t var_78_1 = 0x800
    char* result_33 = &data_5b2591
    int32_t var_70_1 = 4
    
    if (result_17 != 0)
        result_33 = result_17
    
    int32_t var_74 = edi_5
    result_6 = result_1
    
    if (sub_56d600(&result_6, result_33) == 0)
        char* result_18 = result_4
        
        if (result_18 != 0)
            result_34 = result_18
        
        char* const result_37 = result_34
        sub_4892e0("PNGExportTexture failed to png write %s")
    
    char* result = result_1
    
    if (result != 0)
        result = _aligned_free_base(result)
    
    var_14_1.b = 4
    
    if (data_aca1f4 != 0)
        result = result_4
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_4)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                result_4 = &data_5b2591
    
    var_14_1.b = 5
    
    if (data_aca1f4 != 0)
        result = result_3
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_3)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                result_3 = &data_5b2591
    
    int32_t var_14_2 = 6
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
