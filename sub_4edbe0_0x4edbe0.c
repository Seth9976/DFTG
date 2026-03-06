// 函数名称: sub_4edbe0
// 虚拟地址: 0x4edbe0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4edbe0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1124
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg3
    int32_t* var_c4 = esi
    int32_t* ecx = *esi
    int32_t* result = arg4
    int32_t* result_2 = result
    
    if (ecx != 0)
        if (ecx[1] != 0x20)
            char const* const var_19c_17 = "FabDefGet"
            int32_t var_1a0_9 = 0xea
            char const* const var_1a4_4 = "d:\ax\trunk\ax2017\engine\fabdef.cpp"
            sub_489550(result, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = sub_4981f0(ecx)
        int32_t i = 0
        int32_t* result_1 = result
        int32_t i_1 = 0
        
        if (result[2] s> 0)
            int32_t edx = 0
            int32_t var_dc_1 = 0
            
            do
                void* edi_1 = *result + edx
                uint32_t (* ecx_2)[0x4] = sub_4eb780(esi, i)
                uint32_t edx_2 = (*ecx_2)[0x17]
                uint32_t (* eax_3)[0x4]
                
                if ((*ecx_2)[0x19] s<= edx_2)
                    eax_3.b = *(edi_1 + 0x38)
                else
                    eax_3.b = (*ecx_2)[0x1a].b
                
                if (eax_3.b == 0)
                    if (arg2 == 0)
                    label_4edce0:
                        *(ecx_2 + 8) = *(var_c4 + 8)
                        *(ecx_2 + 0x18) = *(var_c4 + 0x18)
                        *(ecx_2 + 0x28) = *(var_c4 + 0x28)
                        *(ecx_2 + 0x38) = *(var_c4 + 0x38)
                        *(ecx_2 + 0x48) = *(var_c4 + 0x48)
                        (*ecx_2)[0x16] = var_c4[0x16]
                        uint32_t eax_10
                        
                        if (ecx_2[0x4c][0] s> edx_2)
                            eax_10 = (*ecx_2)[0x131]
                        
                        if (ecx_2[0x4c][0] s<= edx_2 || eax_10 == 0)
                            int32_t eax_11 = *edi_1
                            
                            if (eax_11 u> 8)
                                char const* const var_19c_16 = "FabDraw"
                                int32_t var_1a0_8 = 0x5e9
                                char const* const var_1a4_3 = "d:\ax\trunk\ax2017\engine\fabdef.cpp"
                                sub_489550(eax_11, &data_5b2591, "Halt")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            float var_1a4
                            int128_t var_118
                            int128_t var_78
                            int128_t var_58
                            
                            switch (eax_11)
                                case 1
                                    int32_t* eax_12 = *(edi_1 + 0x40)
                                    
                                    if (eax_12 != 0)
                                        void var_18c
                                        int128_t* eax_14 = sub_4eb240(&var_18c, ecx_2, edi_1, &var_18c)
                                        int128_t var_a0 = *eax_14
                                        int128_t var_90_1 = eax_14[1]
                                        int64_t var_80_1 = eax_14[2].q
                                        int128_t* eax_16 =
                                            sub_4ebd00(&var_78, &var_a0, &(*ecx_2)[2], &var_78)
                                        var_58 = *eax_16
                                        int128_t var_48_1 = eax_16[1]
                                        int32_t eax_17 = sub_497d80((*(edi_1 + 0x50)).d, var_1a4)
                                        sub_4c0aa0(&var_58)
                                        
                                        if (data_1516700 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                            int32_t* var_19c_3 = &data_1516700
                                            __Init_thread_header(&data_1516700)
                                            
                                            if (data_1516700 == 0xffffffff)
                                                int32_t var_8_1 = 0
                                                int32_t* var_19c_4 = &data_1516700
                                                data_1516704 =
                                                    sub_4d0b50("sys/sprite_3d_no_zread.material", 5)
                                                int32_t var_8_2 = 0xffffffff
                                                __Init_thread_footer(&data_1516700)
                                        
                                        *(data_114ec70 + 0x25c) = data_1516704
                                        void var_134
                                        int64_t* eax_23 = sub_4eb1a0(&var_134, ecx_2, edi_1, &var_134)
                                        int32_t eax_24 = eax_23[1].d
                                        int32_t var_ec = (*eax_23).d
                                        int32_t var_e8_1 = eax_24
                                        int32_t var_c8_1 = 0
                                        var_1a4 = 0f
                                        int32_t var_f0_1 = 0
                                        int128_t* const var_1ac_1 = &data_5d2760
                                        void var_144
                                        var_118 = *sub_4829a0(&var_144, &var_ec, &data_5d27f8, &var_144)
                                        int32_t var_f4 = eax_17
                                        sub_4c0210(&var_f4, &var_118:0xc, eax_12, &data_5d2760, 
                                            &var_f4, nullptr)
                                        void* eax_28 = data_114ec70
                                        __builtin_memcpy(eax_28 + 0xa4, 
                                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                        "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                                        "3f\x00", 
                                            0x41)
                                        *(eax_28 + 0x25c) = 0
                                        sub_496580()
                                case 2
                                    sub_4ec400(edi_1, ecx_2)
                                case 3
                                    sub_4ebd70(edi_1, ecx_2)
                                case 4
                                    if (data_114e7d9 == 0)
                                        char const* const var_19c_20 = "Draw3DLayer"
                                        int32_t var_1a0_12 = 0x327
                                        char const* const var_1a4_7 =
                                            "d:\ax\trunk\ax2017\engine\draw3d.cpp"
                                        sub_489550(eax_11, &data_5b2591, 
                                            "gDraw3DData.submittingRenderItems")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    int32_t esi_5 = data_aca74c
                                    data_aca74c = 0x3e7
                                    uint32_t (* var_19c_15)[0x4] = ecx_2
                                    int32_t* eax_46 = sub_497130(*(edi_1 + 0x40))
                                    
                                    if (data_114e7d9 == 0)
                                        char const* const var_19c_19 = "Draw3DLayer"
                                        int32_t var_1a0_11 = 0x327
                                        char const* const var_1a4_6 =
                                            "d:\ax\trunk\ax2017\engine\draw3d.cpp"
                                        sub_489550(eax_46, &data_5b2591, 
                                            "gDraw3DData.submittingRenderItems")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    data_aca74c = esi_5
                                case 5
                                    sub_4ed070(eax_11, ecx_2, edi_1, arg2, result_2)
                                case 6
                                    sub_4ed240(eax_11, ecx_2, edi_1, result_2)
                                case 7
                                    if (*(data_aca1ec + 0x39) != 0)
                                        void var_188
                                        int128_t* eax_31 = sub_4eb150(&var_188, ecx_2, edi_1, &var_188)
                                        int32_t var_18_1 = eax_31[2].d
                                        int128_t var_38 = *eax_31
                                        int128_t xmm0_16 = eax_31[1]
                                        void var_154
                                        int128_t* eax_34 =
                                            sub_4eebc0(&var_154, ecx_2, &var_38:0xc, &var_154)
                                        int32_t xmm0_17 = *(eax_31 + 0x18)
                                        var_118 = *eax_34
                                        uint32_t* var_1a4_1 = &(*ecx_2)[0xf]
                                        uint128_t xmm0_19 = *eax_31
                                        int64_t var_108_1 = xmm0_19
                                        int32_t var_100_1 = _mm_bsrli_si128(xmm0_19, 8)
                                        int128_t var_c0 = xmm0_17.o
                                        int128_t var_b0_1 = var_118
                                        sub_4ddac0(&(*ecx_2)[0xf], &var_c0, &var_38:4)
                                        var_78 = var_38
                                        int128_t var_68_1 = xmm0_16
                                        sub_4c0aa0(&var_78)
                                        void* eax_37 = data_114ec70
                                        int32_t var_fc = 0x3f000000
                                        int32_t var_f8_1 = 0x3f000000
                                        *(eax_37 + 0x25c) = 0
                                        void var_164
                                        int128_t xmm0_25 =
                                            *sub_4829a0(&var_164, &var_fc, &data_5d27f8, &var_164)
                                        void* ThreadLocalStoragePointer =
                                            fsbase->ThreadLocalStoragePointer
                                        var_118 = xmm0_25
                                        void* esi_4 = *ThreadLocalStoragePointer
                                        int32_t eax_40 = data_1516720
                                        
                                        if (eax_40 s> *(esi_4 + 4))
                                            int32_t* var_19c_7 = &data_1516720
                                            eax_40 = __Init_thread_header(&data_1516720)
                                            
                                            if (data_1516720 == 0xffffffff)
                                                int32_t var_8_3 = 1
                                                int32_t* var_19c_8 = &data_1516720
                                                data_1516724 =
                                                    sub_4d0b50("sys/editor/camera.texture", 3)
                                                int32_t var_8_4 = 0xffffffff
                                                eax_40 = __Init_thread_footer(&data_1516720)
                                        
                                        int32_t var_19c_9 = 0
                                        int32_t* var_1a0_5 = &data_63c284
                                        int128_t* const var_1a4_2 = &data_5d2760
                                        sub_4c0210(eax_40, &var_118:0xc, data_1516724)
                                        void* eax_42 = data_114ec70
                                        __builtin_memcpy(eax_42 + 0xa4, 
                                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                        "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                                        "3f\x00", 
                                            0x41)
                                        *(eax_42 + 0x25c) = 0
                                        sub_496580()
                                        int32_t eax_43 = data_1516728
                                        
                                        if (eax_43 s> *(esi_4 + 4))
                                            int32_t* var_19c_10 = &data_1516728
                                            eax_43 = __Init_thread_header(&data_1516728)
                                            
                                            if (data_1516728 == 0xffffffff)
                                                int32_t var_8_5 = 2
                                                int32_t* var_19c_11 = &data_1516728
                                                data_151672c =
                                                    sub_4d0b50("sys/editor/arrow_widget.structure", 2)
                                                int32_t var_8_6 = 0xffffffff
                                                eax_43 = __Init_thread_footer(&data_1516728)
                                        
                                        var_118 = data_60cb40
                                        sub_492210(&var_118:0xc)
                                        int128_t xmm0_27 = var_38
                                        int32_t ecx_15 = data_151672c
                                        int32_t var_19c_12 = 0
                                        var_58 = xmm0_27
                                        int32_t var_1a0_6 = 0
                                        var_1a4 = 0f
                                        int128_t var_48_2 = xmm0_16
                                        var_58.d = fconvert.s(fconvert.d(xmm0_27) * 0.5)
                                        sub_495460(eax_43, &var_58, ecx_15)
                                        sub_492210(&data_5d2464)
                                case 8
                                    void* eax_45 = sub_4fd250((*ecx_2)[0x12e])
                                    
                                    if (eax_45 != 0)
                                        sub_506ab0(eax_45, &data_63c264)
                        else
                            eax_10(edi_1, ecx_2, eax_2)
                        
                        esi = var_c4
                    else if (arg2 != 1)
                        if (arg2 != 2)
                            char const* const var_19c_18 = "SatisfiesDrawStyle"
                            int32_t var_1a0_10 = 0x4e4
                            char const* const var_1a4_5 = "d:\ax\trunk\ax2017\engine\fabdef.cpp"
                            sub_489550(arg2 - 2, &data_5b2591, "Halt")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        if (*(edi_1 + 0x3a) == (arg2 - 2).b)
                            goto label_4edce0
                    else if (*(edi_1 + 0x3a) == 0 && *(edi_1 + 0x3b) == 0
                            && (*edi_1 != 2 || *(edi_1 + 0x3c) != 0))
                        goto label_4edce0
                
                result = result_1
                i = i_1 + 1
                edx = var_dc_1 + 0xe0
                i_1 = i
                var_dc_1 = edx
            while (i s< result[2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
