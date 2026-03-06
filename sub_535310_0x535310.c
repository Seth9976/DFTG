// 函数名称: sub_535310
// 虚拟地址: 0x535310
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_535310(void* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a29ac
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_9c = esi
    int32_t edi
    int32_t var_a0 = edi
    int32_t var_a4 = eax_2
    int32_t* esp = &var_a4
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = data_15117d4
    
    if (result == 0)
        sub_4962c0()
        char* xmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c)))
        char* var_54 = xmm0_2
        char* const var_50 = xmm0_2
        int32_t var_98 = sub_41e120(0.785398185f)
        int32_t var_94_1 = 0x3f800000
        int32_t var_90_1 = 0x3dcccccd
        int128_t var_88 = data_63c264
        int32_t var_8c_1 = 0x42c80000
        char var_68_1 = 0
        int32_t var_64_1 = 0x3f800000
        int128_t var_78_1 = data_63c274
        int32_t edx_1 = sub_492b90(&var_98)
        data_aca230 = 0xff00ffff
        void* edi_1 = *fsbase->ThreadLocalStoragePointer
        int32_t* var_a8
        
        if (data_15167e8 s> *(edi_1 + 4))
            var_a8 = &data_15167e8
            edx_1 = __Init_thread_header(var_a8)
            
            if (data_15167e8 == 0xffffffff)
                int32_t var_14_1 = 0
                int32_t* eax_5 = sub_4d0b50("sys/white_pixel.texture", 3)
                var_a8 = &data_15167e8
                data_15167ec = eax_5
                int32_t var_14_2 = 0xffffffff
                edx_1 = __Init_thread_footer(var_a8)
        
        if (data_15167f0 s> *(edi_1 + 4))
            var_a8 = &data_15167f0
            edx_1 = __Init_thread_header(var_a8)
            
            if (data_15167f0 == 0xffffffff)
                int32_t var_14_3 = 1
                int32_t* eax_7 = sub_4d0b50("sys/pbr/ibl_brdf_lut.material", 5)
                var_a8 = &data_15167f0
                data_15167f4 = eax_7
                int32_t var_14_4 = 0xffffffff
                edx_1 = __Init_thread_footer(var_a8)
        
        var_a8 = &var_88:8
        int128_t* eax_9 = sub_4c0c50(&var_88:8, edx_1, &var_54, var_a8)
        int128_t var_44 = *eax_9
        int128_t var_34 = eax_9[1]
        int32_t eax_10 = sub_4c0be0(&var_44)
        var_a8 = data_15167f4
        char* xmm0_8 = var_54
        var_34.d = 0
        var_34:4.d = 0
        var_34:8.d = xmm0_8
        var_34:0xc.d = xmm0_8
        sub_4c0210(eax_10, &var_34, data_15167ec, &data_5d2760, &data_63c284, var_a8)
        void* eax_11 = data_114ec70
        __builtin_memcpy(eax_11 + 0xa4, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        *(eax_11 + 0x25c) = 0
        sub_496580()
        sub_496440()
        int32_t* eax_13 = *(data_114ec7c + 0x7c)
        char* edx_3 = *eax_13
        
        if (edx_3 == 0)
            var_a8 = "XString::XString"
            sub_489550(eax_13, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                var_a8)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_48a2c0(&var_50, edx_3)
        int32_t var_14_5 = 2
        char* const var_4c
        sub_48a2c0(&var_4c, &data_5b3a68)
        var_14_5.b = 3
        char* const var_48
        sub_48a2c0(&var_48, "sys/pbr/brdf_lut")
        var_14_5.b = 4
        var_a8 = &var_4c
        char* const var_58
        int32_t* eax_14 = sub_48a860(&var_48, &var_58, var_a8)
        var_14_5.b = 5
        var_a8 = &var_50
        int32_t* var_5c
        sub_48a860(eax_14, &var_5c, var_a8)
        var_14_5.b = 8
        
        if (data_aca1f4 != 0)
            char* eax_15 = var_58
            
            if (eax_15 != 0 && *eax_15 != 0)
                char* eax_16 = sub_48a080(&var_58)
                int32_t temp0_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                    var_58 = &data_5b2591
        
        var_14_5.b = 0xa
        
        if (data_aca1f4 != 0)
            char* eax_17 = var_48
            
            if (eax_17 != 0 && *eax_17 != 0)
                char* eax_18 = sub_48a080(&var_48)
                int32_t temp1_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                    var_48 = &data_5b2591
        
        var_14_5.b = 0xc
        
        if (data_aca1f4 != 0)
            char* eax_19 = var_4c
            
            if (eax_19 != 0 && *eax_19 != 0)
                char* eax_20 = sub_48a080(&var_4c)
                int32_t temp2_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_20, *(eax_20 + 0xc) + 0x10)
                    var_4c = &data_5b2591
        
        var_14_5.b = 0xe
        
        if (data_aca1f4 != 0)
            char* eax_21 = var_50
            
            if (eax_21 != 0 && *eax_21 != 0)
                char* eax_22 = sub_48a080(&var_50)
                int32_t temp3_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                    var_50 = &data_5b2591
        
        var_14_5.b = 0xd
        int32_t* edx_12 = &data_5b2591
        int32_t* eax_23 = var_5c
        int32_t ecx_17 = *(arg1 + 0x1c)
        
        if (eax_23 != 0)
            edx_12 = eax_23
        
        var_a8 = edx_12
        data_15117d4 = sub_4d2c50(eax_23, ecx_17, ecx_17, *(arg1 + 0x20), 3)
        
        if (data_15167f8 s> *(edi_1 + 4))
            var_a8 = &data_15167f8
            int32_t eax_26 = __Init_thread_header(var_a8)
            
            if (data_15167f8 == 0xffffffff)
                var_a8 = nullptr
                var_14_5.b = 0xf
                int32_t ecx_18 = *(arg1 + 0x1c)
                data_15167fc = sub_4d2c50(eax_26, ecx_18, ecx_18, 0x50, 4)
                var_14_5.b = 0xd
                var_a8 = &data_15167f8
                __Init_thread_footer(var_a8)
        
        void* eax_28 = data_aca1ec
        
        if (*(eax_28 + 0x1c) != 0)
            var_a8 = "HDRMakeBRDFLUT"
            sub_489550(eax_28, &data_5b2591, "gAppInterface->mMultisamples == 0", 
                "d:\ax\trunk\ax2017\engine\iblimport.cpp", 0x2a0, var_a8)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_4df2c0(data_15117d4, data_15167fc)
        int32_t* ecx_20 = data_114ec78
        var_a8 = data_aca230
        esp = &var_a8
        (*(*ecx_20 + 0x8c))(var_a8)
        sub_492900()
        sub_495c90()
        sub_495f10(2)
        sub_4964a0()
        glFlush()
        sub_4df310()
        int32_t result_1 = data_15117d4
        int32_t var_14_6 = 0x10
        
        if (data_aca1f4 != 0)
            int32_t* eax_30 = var_5c
            
            if (eax_30 != 0 && *eax_30 != 0)
                char* eax_31 = sub_48a080(&var_5c)
                int32_t temp4_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_4984f0(eax_31, *(eax_31 + 0xc) + 0x10)
        
        result = result_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    esp[1]
    esp[2]
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
