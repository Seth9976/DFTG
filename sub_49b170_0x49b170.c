// 函数名称: sub_49b170
// 虚拟地址: 0x49b170
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_49b170(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t* arg5, int32_t* arg6, int32_t arg7, int32_t arg8, void* arg9, uint32_t* arg10, int32_t* arg11, char arg12)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f2b6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_1c4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi_2 = (arg2 << 4) + *(arg3 + 8)
    int32_t ecx = *esi_2
    uint32_t result = ecx - 0x64
    uint32_t result_1 = arg10
    int32_t* var_f4 = arg11
    
    if (result u<= 0x96)
        result = zx.d(lookup_table_49d2cc[result])
        int32_t var_e0
        int32_t var_dc
        void var_d8
        int32_t* var_d4
        int64_t var_68
        
        switch (result)
            case 0
                int32_t var_1c8_6 = 0x64
                result = sub_48a5e0(arg4 + 0xfd8, sub_498f80(result, arg11, esi_2, 0x64))
                *(arg4 + 0xfeb) = 1
            case 1
                void* eax_25 = sub_4f0fd0(&data_6218dc, 0x65)
                
                if (*(eax_25 + 0x10) != 1)
                    char const* const var_1c8_38 = "AttribAsInt"
                    int32_t var_1cc_22 = 0x8f6
                    char const* const var_1d0_15 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_25, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                *arg10 = result
            case 2
                result = arg5
                
                if (*(result + 4) != 0)
                    result = esi_2[2]
                    void* edi_1 = arg4
                    uint32_t result_2 = result
                    int32_t* edx_4 = *(result + 0xc)
                    
                    if (edx_4 == 0 || *(edi_1 + 5) != 0)
                        edx_4 = nullptr
                        var_f4 = nullptr
                        int32_t var_108_1 = 0
                        
                        if (*(result + 8) s> 0)
                            int32_t ecx_4 = *result
                            int32_t* esi_3 = nullptr
                            int32_t var_100_1 = ecx_4
                            bool cond:9_1
                            
                            do
                                *(esi_3 + var_100_1 + 0x1c) = sub_4e1990(*(esi_3 + ecx_4), 0)
                                result = result_2
                                int32_t ecx_9 = *(esi_3 + *result + 0x1c) & 0x8000001f
                                
                                if (ecx_9 s< 0)
                                    ecx_9 = ((ecx_9 - 1) | 0xffffffe0) + 1
                                
                                int32_t edx_5 = 1 << ecx_9.b
                                
                                if (edx_5 == 0)
                                    char const* const var_1c8_35 = "CrcToBloom"
                                    int32_t var_1cc_19 = 0xcd5
                                    char const* const var_1d0_12 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                                    sub_489550(result, &data_5b2591, "result != 0")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                int32_t edi_3 = var_108_1 + 1
                                var_108_1 = edi_3
                                *(esi_3 + *result + 0x18) = edx_5
                                ecx_4 = *result
                                var_100_1 = ecx_4
                                edx_4 = var_f4 | *(esi_3 + ecx_4 + 0x18)
                                esi_3 = &esi_3[8]
                                cond:9_1 = edi_3 s< *(result + 8)
                                edi_1 = arg4
                                var_f4 = edx_4
                            while (cond:9_1)
                        
                        *(result + 0xc) = edx_4
                    
                    int32_t* esi_4 = arg5
                    
                    if ((esi_4[2] & edx_4) != 0)
                        int32_t i_1 = 0
                        
                        if (*(result + 8) s> 0)
                            var_f4 = nullptr
                            int32_t i
                            
                            do
                                void* eax_10 = *result
                                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_1c8_1)(struct 
                                    _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_48a3d0
                                char** (__fastcall* var_1cc_1)(char** arg1) = sub_48a310
                                int32_t var_1d0_1 = 0x10
                                void* var_1d4 = 4
                                int32_t var_14_1 = 0
                                int32_t var_1c8_2 =
                                    `eh vector constructor iterator'(&var_68, 4, 0x10, sub_48a310)
                                int32_t eax_12 = sub_49af10(*(var_f4 + eax_10), &var_68)
                                int32_t var_10c = eax_12
                                
                                if (eax_12 != 0)
                                    if (eax_12 != 1)
                                        int32_t esi_5 = 0
                                        
                                        if (eax_12 s<= 0)
                                        label_49b4c5:
                                            int32_t esi_6 = *arg6
                                            
                                            if (esi_6 s>= 0x200)
                                                char const* const var_1c8_37 = "UI2MergeAttribute"
                                                int32_t var_1cc_21 = 0xd58
                                                char const* const var_1d0_14 =
                                                    "d:\ax\trunk\ax2017\engine\ui2.cpp"
                                                sub_489550(eax_12, &data_5b2591, 
                                                    "numMapsToMerge < MAX_STATES")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_489700()
                                                noreturn
                                            
                                            *(arg7 + (esi_6 << 2)) = var_f4 + eax_10 + 8
                                            *arg6 += 1
                                            *(arg8 + (*arg6 << 2) - 4) = 0x3f800000
                                        else
                                            while (true)
                                                char* eax_20 = *(&var_68 + (esi_5 << 2))
                                                char* const ecx_22 = &data_5b2591
                                                
                                                if (eax_20 != 0)
                                                    ecx_22 = eax_20
                                                
                                                eax_12 =
                                                    sub_499010(eax_20, *(edi_1 + 0x109c), ecx_22, arg5)
                                                
                                                if (eax_12 == 0)
                                                    break
                                                
                                                esi_5 += 1
                                                
                                                if (esi_5 s>= var_10c)
                                                    goto label_49b4c5
                                        
                                        esi_4 = arg5
                                    else
                                        int32_t* eax_13 = var_f4
                                        void* eax_14 = sub_499010(eax_13, *(edi_1 + 0x109c), 
                                            *(eax_13 + eax_10), esi_4)
                                        
                                        if (eax_14 != 0)
                                            if (*arg6 s>= 0x200)
                                                char const* const var_1c8_36 = "UI2MergeAttribute"
                                                int32_t var_1cc_20 = 0xd43
                                                char const* const var_1d0_13 =
                                                    "d:\ax\trunk\ax2017\engine\ui2.cpp"
                                                sub_489550(eax_14, &data_5b2591, 
                                                    "numMapsToMerge < MAX_STATES")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_489700()
                                                noreturn
                                            
                                            int32_t xmm0_1 = (zx.o(0)).d
                                            *(arg7 + (*arg6 << 2)) = eax_10 + &var_f4[2]
                                            int32_t ecx_21 = *arg6 + 1
                                            edi_1 = arg4
                                            *arg6 = ecx_21
                                            int32_t xmm1_1 = *(eax_14 + 0x14)
                                            
                                            if (not(0 f> xmm1_1))
                                                xmm0_1 = _mm_min_ss(0x3f800000, xmm1_1)
                                            
                                            *(arg8 + (ecx_21 << 2) - 4) = xmm0_1
                                
                                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_1c8_5)(struct 
                                    _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_48a3d0
                                int32_t var_1cc_2 = 0x10
                                int32_t var_1d0_2 = 4
                                int32_t var_14_2 = 0xffffffff
                                `eh vector vbase constructor iterator'(&var_68, 4, 0x10, sub_48a3d0)
                                result = result_2
                                i = i_1 + 1
                                var_f4 = &var_f4[8]
                                i_1 = i
                            while (i s< *(result + 8))
            case 3
                result = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_32 = "AttribAsBool"
                    int32_t var_1cc_16 = 0x8e8
                    char const* const var_1d0_9 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                *(arg4 + 0xfe9) = result.b
            case 4
                result = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_33 = "AttribAsBool"
                    int32_t var_1cc_17 = 0x8e8
                    char const* const var_1d0_10 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                *(arg4 + 0xfe8) = result.b
            case 5
                result = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_34 = "AttribAsBool"
                    int32_t var_1cc_18 = 0x8e8
                    char const* const var_1d0_11 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                *(arg4 + 0xfea) = result.b
            case 6
                sub_49a390(result, esi_2[2], &var_e0, *(arg4 + 0x109c), arg5)
                int32_t var_14_7 = 8
                int32_t esi_8 = 0
                __builtin_memset(&var_68, 0, 0x34)
                int32_t var_30_1 = 0
                int32_t var_34_1 = 0xffffffff
                int32_t var_38_1
                
                if (var_dc != 1)
                    var_38_1 = 1
                    var_68.d = sub_498700(var_e0, &var_d4)
                    void var_c0
                    var_68:4.d = sub_498700(var_e0, &var_c0)
                else
                    int32_t var_70
                    
                    if (var_70 s> 3)
                        char const* const var_1c8_73 = "PropGraphSet"
                        int32_t var_1cc_59 = 0x6cd
                        char const* const var_1d0_52 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                        sub_489550(var_70, &data_5b2591, "expr.numKeys <= MAX_GRAPH_KEYS")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    var_38_1 = var_70
                    int32_t var_104_1 = 0
                    
                    if (var_70 s> 0)
                        int64_t var_60
                        void* esi_9 = &var_60:4
                        void* edi_5 = &var_d8
                        int32_t eax_90
                        
                        do
                            int32_t ecx_56 = var_e0
                            *(esi_9 - 4) = *(edi_5 + 0x2c)
                            *esi_9 = *edi_5
                            int32_t xmm0_13 = sub_498700(ecx_56, edi_5 + 4)
                            int32_t ecx_57 = var_e0
                            *(esi_9 - 0xc) = xmm0_13
                            int32_t xmm0_14 = sub_498700(ecx_57, edi_5 + 0x18)
                            edi_5 += 0x34
                            eax_90 = var_104_1 + 1
                            *(esi_9 - 8) = xmm0_14
                            esi_9 += 0x10
                            var_104_1 = eax_90
                        while (eax_90 s< var_70)
                        esi_8 = var_30_1
                
                int32_t* ecx_60 = var_f4
                *(ecx_60 + 0x1b0) = var_68.o
                int64_t var_58
                *(ecx_60 + 0x1c0) = var_58.o
                int64_t var_48
                *(ecx_60 + 0x1d0) = var_48.o
                *(ecx_60 + 0x1e0) = var_38_1.q
                ecx_60[0x7a] = esi_8
                int32_t var_14_8 = 9
                goto label_49b7b6
            case 7
                result = esi_2[2]
                arg10[0x52]
                arg10[0x52] = result
            case 8
                int128_t* eax_57 = esi_2[2]
                float xmm4_2[0x4] = *eax_57
                float xmm5_2 = _mm_shuffle_ps(xmm4_2, xmm4_2, 0xaa)
                float xmm6_1
                float xmm7_1
                
                if (not(xmm5_2 f< xmm4_2))
                    xmm6_1 = xmm4_2[3]
                    xmm7_1 = xmm4_2[1]
                
                if (xmm5_2 f< xmm4_2 || xmm6_1 < xmm7_1)
                    char const* const var_1c8_54 = "UI2MergeAttribute"
                    int32_t var_1cc_40 = 0xe05
                    char const* const var_1d0_33 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_57, &data_5b2591, "RectIsNormalized(rect)")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t* eax_58 = sub_4bcae0(xmm4_2[0], &var_68)
                int128_t xmm1_5 = *(eax_58 + 0x10)
                int128_t xmm2_2 = *(eax_58 + 0x20)
                int64_t xmm3_2 = *(eax_58 + 0x30)
                int32_t eax_59 = eax_58[0xe]
                *(arg11 + 0x3c) = *eax_58
                *(arg11 + 0x4c) = xmm1_5
                *(arg11 + 0x5c) = xmm2_2
                *(arg11 + 0x6c) = xmm3_2
                arg11[0x1d] = eax_59
                int32_t* eax_60 = sub_4bcae0(xmm7_1, &var_68)
                int128_t xmm1_7 = *(eax_60 + 0x10)
                int128_t xmm2_3 = *(eax_60 + 0x20)
                int64_t xmm3_3 = *(eax_60 + 0x30)
                int32_t eax_61 = eax_60[0xe]
                *(arg11 + 0x78) = *eax_60
                *(arg11 + 0x88) = xmm1_7
                *(arg11 + 0x98) = xmm2_3
                *(arg11 + 0xa8) = xmm3_3
                arg11[0x2c] = eax_61
                int32_t* eax_62 = sub_4bcae0(xmm5_2 f- xmm4_2, &var_68)
                int128_t xmm1_9 = *(eax_62 + 0x10)
                int128_t xmm2_4 = *(eax_62 + 0x20)
                int64_t xmm3_4 = *(eax_62 + 0x30)
                int32_t eax_63 = eax_62[0xe]
                *(arg11 + 0xb4) = *eax_62
                *(arg11 + 0xc4) = xmm1_9
                *(arg11 + 0xd4) = xmm2_4
                *(arg11 + 0xe4) = xmm3_4
                arg11[0x3b] = eax_63
                int32_t* eax_64 = sub_4bcae0(xmm6_1 - xmm7_1, &var_68)
                int128_t xmm1_11 = *(eax_64 + 0x10)
                int128_t xmm2_5 = *(eax_64 + 0x20)
                int64_t xmm3_5 = *(eax_64 + 0x30)
                result = eax_64[0xe]
                *(arg11 + 0xf0) = *eax_64
                *(arg11 + 0x100) = xmm1_11
                *(arg11 + 0x110) = xmm2_5
                *(arg11 + 0x120) = xmm3_5
                arg11[0x4a] = result
            case 9
                int128_t* eax_47 = esi_2[2]
                int32_t var_138_1 = 0x3f800000
                int128_t xmm0_5 = *eax_47
                int128_t xmm1_2 = eax_47[1]
                result = 0x3f800000
                __builtin_memset(arg9, 0, 0x20)
                *(arg9 + 0x20) = xmm0_5
                *(arg9 + 0x30) = xmm1_2
                *(arg9 + 0x40) = 0x3f800000
            case 0xa
                void* eax_53 = sub_4f0fd0(&data_6218dc, 0x77)
                
                if (*(eax_53 + 0x10) != 1)
                    char const* const var_1c8_52 = "AttribAsInt"
                    int32_t var_1cc_38 = 0x8f6
                    char const* const var_1d0_31 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_53, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t ecx_45 = esi_2[2]
                arg10[2] = ecx_45
                int32_t eax_54
                int32_t edx_18
                eax_54, edx_18 = sub_4eaaa0(ecx_45)
                int32_t var_1c8_13 = edx_18
                int32_t var_1cc_6 = eax_54
                void var_188
                void* var_1d0_6 = &var_188
                int128_t* eax_55 = sub_4bcaa0()
                int32_t* ecx_46 = var_f4
                int128_t xmm1_3 = eax_55[1]
                int128_t xmm2_1 = eax_55[2]
                int128_t xmm3_1 = eax_55[3]
                int128_t xmm4_1 = eax_55[4]
                result = eax_55[5].d
                *(ecx_46 + 0x264) = *eax_55
                *(ecx_46 + 0x274) = xmm1_3
                *(ecx_46 + 0x284) = xmm2_1
                *(ecx_46 + 0x294) = xmm3_1
                *(ecx_46 + 0x2a4) = xmm4_1
                ecx_46[0xad] = result
            case 0xb
                void* eax_56 = sub_4f0fd0(&data_6218dc, 0x78)
                
                if (*(eax_56 + 0x10) != 1)
                    char const* const var_1c8_53 = "AttribAsInt"
                    int32_t var_1cc_39 = 0x8f6
                    char const* const var_1d0_32 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_56, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[1] = result
            case 0xc
                void* eax_65 = sub_4f0fd0(&data_6218dc, 0x7b)
                
                if (*(eax_65 + 0x10) != 4)
                    char const* const var_1c8_55 = "AttribAsFloat"
                    int32_t var_1cc_41 = 0x908
                    char const* const var_1d0_34 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_65, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t* eax_66 = sub_4bcae0(esi_2[2], &var_68)
                int32_t* ecx_47 = var_f4
                int128_t xmm1_13 = *(eax_66 + 0x10)
                int128_t xmm2_6 = *(eax_66 + 0x20)
                int64_t xmm3_6 = *(eax_66 + 0x30)
                result = eax_66[0xe]
                *ecx_47 = *eax_66
                *(ecx_47 + 0x10) = xmm1_13
                *(ecx_47 + 0x20) = xmm2_6
                *(ecx_47 + 0x30) = xmm3_6
                ecx_47[0xe] = result
            case 0xd
                void* eax_48 = sub_4f0fd0(&data_6218dc, 0x7c)
                
                if (*(eax_48 + 0x10) != 1)
                    char const* const var_1c8_51 = "AttribAsInt"
                    int32_t var_1cc_37 = 0x8f6
                    char const* const var_1d0_30 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_48, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[5] = result
            case 0xe
                result = result_1
                void var_1b8
                void var_f0
                __builtin_memcpy(&var_f0, sub_4bcd00(&var_1b8, *esi_2[2]), 0x84)
                __builtin_memcpy(&var_f4[0x4b], &var_f0, 0x84)
                *(result + 0x14) = 1
            case 0xf
                result = *esi_2[2]
                *(arg10 + 0x39) = result
                arg10[0xe].b = 1
            case 0x10
                result = *esi_2[2]
                *(arg10 + 0x3d) = result
                arg10[0xe].b = 1
            case 0x11
                result = *esi_2[2]
                *(arg10 + 0x45) = result
                arg10[0xe].b = 1
            case 0x12
                result = *esi_2[2]
                *(arg10 + 0x41) = result
                arg10[0xe].b = 1
            case 0x13
                void* eax_96 = sub_4f0fd0(&data_6218dc, 0x82)
                
                if (*(eax_96 + 0x10) != 1)
                    char const* const var_1c8_74 = "AttribAsInt"
                    int32_t var_1cc_60 = 0x8f6
                    char const* const var_1d0_53 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_96, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t* eax_98 = sub_4bcd40(&var_68, 0x82, esi_2[2], &var_68)
                int32_t* ecx_67 = var_f4
                int128_t xmm1_16 = *(eax_98 + 0x10)
                int128_t xmm2_9 = *(eax_98 + 0x20)
                int64_t xmm3_9 = *(eax_98 + 0x30)
                result = eax_98[0xe]
                *(ecx_67 + 0x228) = *eax_98
                *(ecx_67 + 0x238) = xmm1_16
                *(ecx_67 + 0x248) = xmm2_9
                *(ecx_67 + 0x258) = xmm3_9
                ecx_67[0x98] = result
            case 0x14
                void* eax_99 = sub_4f0fd0(&data_6218dc, 0x83)
                
                if (*(eax_99 + 0x10) != 1)
                    char const* const var_1c8_75 = "AttribAsInt"
                    int32_t var_1cc_61 = 0x8f6
                    char const* const var_1d0_54 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_99, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[4] = result
            case 0x15
                void* eax_110 = sub_4f0fd0(&data_6218dc, 0x84)
                
                if (*(eax_110 + 0x10) != 4)
                    char const* const var_1c8_85 = "AttribAsFloat"
                    int32_t var_1cc_71 = 0x908
                    char const* const var_1d0_64 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_110, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[8] = result
            case 0x16
                result = sub_4f0fd0(&data_6218dc, 0x85)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_44 = "AttribAsBool"
                    int32_t var_1cc_30 = 0x8e8
                    char const* const var_1d0_23 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                *(arg4 + 6) = result.b
            case 0x17
                result = sub_4f0fd0(&data_6218dc, 0x86)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_45 = "AttribAsBool"
                    int32_t var_1cc_31 = 0x8e8
                    char const* const var_1d0_24 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                *(arg4 + 7) = result.b
            case 0x18
                result = sub_4f0fd0(&data_6218dc, 0x87)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_46 = "AttribAsBool"
                    int32_t var_1cc_32 = 0x8e8
                    char const* const var_1d0_25 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                *(arg4 + 8) = result.b
            case 0x19
                void* eax_76 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_76 + 0x10) != 0xf)
                    char const* const var_1c8_66 = "AttribAsAssetPtr"
                    int32_t var_1cc_52 = 0x8fc
                    char const* const var_1d0_45 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_76, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[6] = result
            case 0x1a
                void* eax_75 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_75 + 0x10) != 0xf)
                    char const* const var_1c8_65 = "AttribAsAssetPtr"
                    int32_t var_1cc_51 = 0x8fc
                    char const* const var_1d0_44 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_75, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x18] = result
            case 0x1b
                int32_t var_14_5 = 5
                int64_t* var_1d0_7 = &var_68
                int128_t* eax_84 = sub_4bcb50(&var_68, 
                    sub_49a390(result, esi_2[2], &var_e0, *(arg4 + 0x109c), arg5), &var_e0)
                int32_t* ecx_53 = var_f4
                int128_t xmm1_14 = eax_84[1]
                int128_t xmm2_7 = eax_84[2]
                int64_t xmm3_7 = eax_84[3].q
                int32_t eax_85 = *(eax_84 + 0x38)
                *(ecx_53 + 0x330) = *eax_84
                *(ecx_53 + 0x340) = xmm1_14
                *(ecx_53 + 0x350) = xmm2_7
                *(ecx_53 + 0x360) = xmm3_7
                ecx_53[0xda] = eax_85
                int32_t var_14_6 = 6
            label_49b7b6:
                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_1c8_12)(void* arg1) =
                    sub_498c00
                int32_t var_1cc_5 = 2
                int32_t var_1d0_5 = 0x34
                result = `eh vector vbase constructor iterator'(&var_d8, 0x34, 2, sub_498c00)
            case 0x1c
                int32_t var_14_9 = 0xb
                int64_t* var_1d0_8 = &var_68
                int128_t* eax_92 = sub_4bcb50(&var_68, 
                    sub_49a390(result, esi_2[2], &var_e0, *(arg4 + 0x109c), arg5), &var_e0)
                int32_t* ecx_64 = var_f4
                int128_t xmm1_15 = eax_92[1]
                int128_t xmm2_8 = eax_92[2]
                int64_t xmm3_8 = eax_92[3].q
                int32_t eax_93 = *(eax_92 + 0x38)
                *(ecx_64 + 0x36c) = *eax_92
                *(ecx_64 + 0x37c) = xmm1_15
                *(ecx_64 + 0x38c) = xmm2_8
                *(ecx_64 + 0x39c) = xmm3_8
                ecx_64[0xe9] = eax_93
                int32_t var_14_10 = 0xc
                goto label_49b7b6
            case 0x1d
                void* eax_72 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_72 + 0x10) != 0xf)
                    char const* const var_1c8_61 = "AttribAsAssetPtr"
                    int32_t var_1cc_47 = 0x8fc
                    char const* const var_1d0_40 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_72, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x26] = result
            case 0x1e
                result = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_62 = "AttribAsBool"
                    int32_t var_1cc_48 = 0x8e8
                    char const* const var_1d0_41 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                arg10[0x28].b = result.b
            case 0x1f
                void* eax_81 = sub_4f0fd0(&data_6218dc, 0x8e)
                
                if (*(eax_81 + 0x10) != 1)
                    char const* const var_1c8_71 = "AttribAsInt"
                    int32_t var_1cc_57 = 0x8f6
                    char const* const var_1d0_50 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_81, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[9] = result
            case 0x20
                void* eax_82 = sub_4f0fd0(&data_6218dc, 0x8f)
                
                if (*(eax_82 + 0x10) != 4)
                    char const* const var_1c8_72 = "AttribAsFloat"
                    int32_t var_1cc_58 = 0x908
                    char const* const var_1d0_51 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_82, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                *(arg9 + 0x44) = result
            case 0x21
                void* eax_77 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_77 + 0x10) != 1)
                    char const* const var_1c8_67 = "AttribAsInt"
                    int32_t var_1cc_53 = 0x8f6
                    char const* const var_1d0_46 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_77, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0xb] = result
            case 0x22
                void* eax_78 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_78 + 0x10) != 1)
                    char const* const var_1c8_68 = "AttribAsInt"
                    int32_t var_1cc_54 = 0x8f6
                    char const* const var_1d0_47 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_78, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0xa] = result
            case 0x23
                void* eax_79 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_79 + 0x10) != 4)
                    char const* const var_1c8_69 = "AttribAsFloat"
                    int32_t var_1cc_55 = 0x908
                    char const* const var_1d0_48 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_79, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0xc] = result
            case 0x24
                void* eax_80 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_80 + 0x10) != 1)
                    char const* const var_1c8_70 = "AttribAsInt"
                    int32_t var_1cc_56 = 0x8f6
                    char const* const var_1d0_49 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_80, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0xd] = result
            case 0x25
                void* eax_73 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_73 + 0x10) != 0xf)
                    char const* const var_1c8_63 = "AttribAsAssetPtr"
                    int32_t var_1cc_49 = 0x8fc
                    char const* const var_1d0_42 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_73, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x14] = result
            case 0x26
                void* eax_74 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_74 + 0x10) != 0xf)
                    char const* const var_1c8_64 = "AttribAsAssetPtr"
                    int32_t var_1cc_50 = 0x8fc
                    char const* const var_1d0_43 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_74, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x16] = result
            case 0x27
                void* eax_31 = sub_4f0fd0(&data_6218dc, 0xc8)
                
                if (*(eax_31 + 0x10) != 0xf)
                    char const* const var_1c8_42 = "AttribAsAssetPtr"
                    int32_t var_1cc_26 = 0x8fc
                    char const* const var_1d0_19 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_31, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x32] = result
            case 0x28
                sub_49a390(result, esi_2[2], &var_e0, *(arg4 + 0x109c), arg5)
                int32_t var_14_13 = 0x10
                int32_t eax_105
                
                if (var_e0 != 1)
                    eax_105 = 0
                else
                    eax_105 = sub_4bc760(&var_e0)
                
                arg10[0x2a] = eax_105
                
                if (eax_105 s< 0x1f3)
                    sub_4b99a0(arg4)
                    int32_t var_14_14 = 0x11
                    goto label_49b7b6
                
                char const* const var_1c8_81 = "UI2MergeAttribute"
                int32_t var_1cc_67 = 0xeb3
                char const* const var_1d0_60 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                sub_489550(eax_105, &data_5b2591, "propsStatic.dimensions.y < 499")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            case 0x29
                sub_49a390(arg4, esi_2[2], &var_e0, *(arg4 + 0x109c), arg5)
                int32_t var_14_15 = 0x12
                int32_t eax_107
                
                if (var_e0 != 1)
                    eax_107 = 0
                else
                    eax_107 = sub_4bc760(&var_e0)
                
                arg10[0x29] = eax_107
                
                if (eax_107 s< 0x96)
                    sub_4b99a0(arg4)
                    int32_t var_14_16 = 0x13
                    goto label_49b7b6
                
                char const* const var_1c8_82 = "UI2MergeAttribute"
                int32_t var_1cc_68 = 0xebd
                char const* const var_1d0_61 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                sub_489550(eax_107, &data_5b2591, "propsStatic.dimensions.x < 150")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            case 0x2a
                sub_49a390(result, esi_2[2], &var_e0, *(arg4 + 0x109c), arg5)
                int32_t var_14_11 = 0xe
                int32_t eax_104
                
                if (var_e0 != 1)
                    eax_104 = 0
                else
                    eax_104 = sub_4bc760(&var_e0)
                
                arg10[0x38] = eax_104
                
                if (eax_104 s< 0x18f)
                    int32_t var_14_12 = 0xf
                    goto label_49b7b6
                
                char const* const var_1c8_80 = "UI2MergeAttribute"
                int32_t var_1cc_66 = 0xeab
                char const* const var_1d0_59 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                sub_489550(eax_104, &data_5b2591, "propsStatic.numTableItems < 399")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            case 0x2b
                sub_49a390(arg4, esi_2[2], &var_e0, *(arg4 + 0x109c), arg5)
                int32_t var_14_17 = 0x14
                int32_t eax_109
                
                if (var_e0 != 1)
                    eax_109 = 0
                else
                    eax_109 = sub_4bc760(&var_e0)
                
                arg10[0x2b] = eax_109
                
                if (eax_109 s< 0x63)
                    int32_t var_14_18 = 0x15
                    goto label_49b7b6
                
                char const* const var_1c8_84 = "UI2MergeAttribute"
                int32_t var_1cc_70 = 0xecd
                char const* const var_1d0_63 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                sub_489550(eax_109, &data_5b2591, "propsStatic.overrideLastRow < 99")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            case 0x2c
                result = sub_4f0fd0(&data_6218dc, 0xcd)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_83 = "AttribAsBool"
                    int32_t var_1cc_69 = 0x8e8
                    char const* const var_1d0_62 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                arg10[0x2c].b = result.b
            case 0x2d
                int32_t* ecx_28 = esi_2[2]
                arg10[0x2d] = *ecx_28
                result = ecx_28[1]
                arg10[0x2e] = result
            case 0x2e
                int32_t* ecx_29 = esi_2[2]
                arg10[0x2f] = *ecx_29
                result = ecx_29[1]
                arg10[0x30] = result
            case 0x2f
                void* eax_28 = sub_4f0fd0(&data_6218dc, 0xd0)
                
                if (*(eax_28 + 0x10) != 1)
                    char const* const var_1c8_39 = "AttribAsInt"
                    int32_t var_1cc_23 = 0x8f6
                    char const* const var_1d0_16 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_28, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x31] = result
            case 0x30
                void* eax_29 = sub_4f0fd0(&data_6218dc, 0xd1)
                
                if (*(eax_29 + 0x10) != 1)
                    char const* const var_1c8_40 = "AttribAsInt"
                    int32_t var_1cc_24 = 0x8f6
                    char const* const var_1d0_17 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_29, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x34] = result
            case 0x31
                void* eax_30 = sub_4f0fd0(&data_6218dc, 0xd2)
                
                if (*(eax_30 + 0x10) != 0xf)
                    char const* const var_1c8_41 = "AttribAsAssetPtr"
                    int32_t var_1cc_25 = 0x8fc
                    char const* const var_1d0_18 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_30, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x36] = result
            case 0x32
                if (arg12 == 0)
                    sub_49a390(result, esi_2[2], &var_e0, *(arg4 + 0x109c), arg5)
                    int32_t var_14_3 = 1
                    
                    if (var_e0 - 1 u> 9)
                        sub_48a2c0(&var_f4, &data_5b2591)
                    else
                        switch (var_e0 + &jump_table_49d364[3]:3)
                            case &lookup_table_49d374
                                int32_t var_1c8_10 = sub_4bc760(&var_e0)
                                void* const var_1cc_4 = &data_5efc90
                                int32_t** var_1d0_4 = &var_f4
                                sub_48a9d0()
                            case &lookup_table_49d374[1]
                                char* var_1cc_3
                                var_1cc_3.q = fconvert.d(sub_4bc7d0(&var_e0))
                                void* const var_1d0_3 = &data_5f2124
                                sub_48a9d0(&var_f4, &data_5f2124)
                            case &lookup_table_49d374[2], &lookup_table_49d374[9]
                                if (var_dc != 0)
                                    char* const edx_15 = &data_5b2591
                                    char const* const ecx_32 = "Halt"
                                    char const* const var_1c8_9 = "EvalValEval"
                                    
                                    if (var_dc == 1)
                                        int32_t var_1cc_28 = 0x93b
                                        char const* const var_1d0_21 =
                                            "d:\ax\trunk\ax2017\engine\ui2.cpp"
                                        sub_489550(var_dc - 1, edx_15, ecx_32)
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    int32_t var_1cc_27 = 0x93f
                                    char const* const var_1d0_20 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                                    sub_489550(var_dc - 1, edx_15, ecx_32)
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                int32_t* eax_38 = var_d4
                                var_f4 = eax_38
                                
                                if (eax_38 != 0 && *eax_38 != 0)
                                    char* eax_39 = sub_48a080(&var_f4)
                                    *(eax_39 + 4) += 1
                            case &lookup_table_49d374[3], &lookup_table_49d374[4], 
                                    &lookup_table_49d374[5], &lookup_table_49d374[6], 
                                    &lookup_table_49d374[7], &lookup_table_49d374[8]
                                sub_48a2c0(&var_f4, &data_5b2591)
                    
                    var_14_3.b = 2
                    sub_48a560(&arg10[0x55], &var_f4)
                    var_14_3.b = 3
                    
                    if (data_aca1f4 != 0)
                        int32_t* eax_41 = var_f4
                        
                        if (eax_41 != 0 && *eax_41 != 0)
                            char* eax_42 = sub_48a080(&var_f4)
                            int32_t temp2_1 = *(eax_42 + 4)
                            *(eax_42 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_4984f0(eax_42, *(eax_42 + 0xc) + 0x10)
                    
                    int32_t var_14_4 = 4
                    goto label_49b7b6
            case 0x33
                void* eax_44 = sub_4f0fd0(&data_6218dc, 0xd4)
                
                if (*(eax_44 + 0x10) != 0xf)
                    char const* const var_1c8_43 = "AttribAsAssetPtr"
                    int32_t var_1cc_29 = 0x8fc
                    char const* const var_1d0_22 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_44, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x3a] = result
            case 0x34
                int32_t* eax_101 = sub_4bcc90(&var_68, *esi_2[2])
                int128_t xmm1_17 = *(eax_101 + 0x10)
                int128_t xmm2_10 = *(eax_101 + 0x20)
                int64_t xmm3_10 = *(eax_101 + 0x30)
                result = eax_101[0xe]
                *(arg11 + 0x2b8) = *eax_101
                *(arg11 + 0x2c8) = xmm1_17
                *(arg11 + 0x2d8) = xmm2_10
                *(arg11 + 0x2e8) = xmm3_10
                arg11[0xbc] = result
            case 0x35
                int32_t* eax_103 = sub_4bcc90(&var_68, *esi_2[2])
                int128_t xmm1_18 = *(eax_103 + 0x10)
                int128_t xmm2_11 = *(eax_103 + 0x20)
                int64_t xmm3_11 = *(eax_103 + 0x30)
                result = eax_103[0xe]
                *(arg11 + 0x2f4) = *eax_103
                *(arg11 + 0x304) = xmm1_18
                *(arg11 + 0x314) = xmm2_11
                *(arg11 + 0x324) = xmm3_11
                arg11[0xcb] = result
            case 0x36
                result = sub_4f0fd0(&data_6218dc, 0xd7)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_79 = "AttribAsBool"
                    int32_t var_1cc_65 = 0x8e8
                    char const* const var_1d0_58 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                arg10[0x3e].b = result.b
            case 0x37
                void* eax_111 = sub_4f0fd0(&data_6218dc, 0xd9)
                
                if (*(eax_111 + 0x10) != 4)
                    char const* const var_1c8_86 = "AttribAsFloat"
                    int32_t var_1cc_72 = 0x908
                    char const* const var_1d0_65 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_111, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                void var_170
                int32_t* eax_112 = sub_4bcae0(esi_2[2], &var_170)
                int32_t* ecx_80 = var_f4
                int128_t xmm1_20 = *(eax_112 + 0x10)
                int128_t xmm2_12 = *(eax_112 + 0x20)
                int64_t xmm3_12 = *(eax_112 + 0x30)
                result = eax_112[0xe]
                *(ecx_80 + 0x1ec) = *eax_112
                *(ecx_80 + 0x1fc) = xmm1_20
                *(ecx_80 + 0x20c) = xmm2_12
                *(ecx_80 + 0x21c) = xmm3_12
                ecx_80[0x89] = result
            case 0x38
                void* eax_113 = sub_4f0fd0(&data_6218dc, 0xda)
                
                if (*(eax_113 + 0x10) != 1)
                    char const* const var_1c8_87 = "AttribAsInt"
                    int32_t var_1cc_73 = 0x8f6
                    char const* const var_1d0_66 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_113, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x40] = result
            case 0x39
                int32_t* ecx_81 = esi_2[2]
                arg10[0x41] = *ecx_81
                result = ecx_81[1]
                arg10[0x42] = result
            case 0x3a
                result = sub_4f0fd0(&data_6218dc, 0xdc)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_76 = "AttribAsBool"
                    int32_t var_1cc_62 = 0x8e8
                    char const* const var_1d0_55 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                arg10[0x43].b = result.b
            case 0x3b
                result = sub_4f0fd0(&data_6218dc, 0xdd)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_77 = "AttribAsBool"
                    int32_t var_1cc_63 = 0x8e8
                    char const* const var_1d0_56 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                *(arg10 + 0x10d) = result.b
            case 0x3c
                result = sub_4f0fd0(&data_6218dc, 0xde)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_78 = "AttribAsBool"
                    int32_t var_1cc_64 = 0x8e8
                    char const* const var_1d0_57 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                *(arg10 + 0xf9) = result.b
            case 0x3d
                void* eax_115 = sub_4f0fd0(&data_6218dc, 0xe2)
                
                if (*(eax_115 + 0x10) != 1)
                    char const* const var_1c8_88 = "AttribAsInt"
                    int32_t var_1cc_74 = 0x8f6
                    char const* const var_1d0_67 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_115, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x47] = result
            case 0x3e
                result = esi_2[2]
                *(arg10 + 0x120) = *result
            case 0x3f
                int32_t* ecx_40 = esi_2[2]
                arg10[0x3c] = *ecx_40
                result = ecx_40[1]
                arg10[0x3d] = result
            case 0x40
                int32_t var_1c8_23 = 0xed
                result = sub_498f80(result, arg11, esi_2, 0xed)
                arg10[0x4c] = result
            case 0x41
                void* eax_46 = sub_4f0fd0(&data_6218dc, 0xef)
                
                if (*(eax_46 + 0x10) != 1)
                    char const* const var_1c8_50 = "AttribAsInt"
                    int32_t var_1cc_36 = 0x8f6
                    char const* const var_1d0_29 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_46, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x4e] = result
            case 0x42
                result = sub_4f0fd0(&data_6218dc, 0xf0)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_47 = "AttribAsBool"
                    int32_t var_1cc_33 = 0x8e8
                    char const* const var_1d0_26 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                arg10[0x4d].b = result.b
            case 0x43
                result = sub_4f0fd0(&data_6218dc, 0xf1)
                
                if (*(result + 0x10) != 0xa)
                    char const* const var_1c8_48 = "AttribAsBool"
                    int32_t var_1cc_34 = 0x8e8
                    char const* const var_1d0_27 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(result, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result.b = esi_2[2] != 0
                arg10[0x4f].b = result.b
            case 0x44
                void* eax_45 = sub_4f0fd0(&data_6218dc, 0xf2)
                
                if (*(eax_45 + 0x10) != 0xf)
                    char const* const var_1c8_49 = "AttribAsAssetPtr"
                    int32_t var_1cc_35 = 0x8fc
                    char const* const var_1d0_28 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_45, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x50] = result
            case 0x45
                void* eax_70 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_70 + 0x10) != 0xf)
                    char const* const var_1c8_59 = "AttribAsAssetPtr"
                    int32_t var_1cc_45 = 0x8fc
                    char const* const var_1d0_38 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_70, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x1e] = result
            case 0x46
                result = sub_498f80(result, arg11, esi_2, ecx)
                arg10[0x20] = result
            case 0x47
                void* eax_67 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_67 + 0x10) != 0xf)
                    char const* const var_1c8_56 = "AttribAsAssetPtr"
                    int32_t var_1cc_42 = 0x8fc
                    char const* const var_1d0_35 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_67, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x1a] = result
            case 0x48
                void* eax_68 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_68 + 0x10) != 1)
                    char const* const var_1c8_57 = "AttribAsInt"
                    int32_t var_1cc_43 = 0x8f6
                    char const* const var_1d0_36 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_68, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x1c] = result
            case 0x49
                void* eax_69 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_69 + 0x10) != 4)
                    char const* const var_1c8_58 = "AttribAsFloat"
                    int32_t var_1cc_44 = 0x908
                    char const* const var_1d0_37 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_69, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x1d] = result
            case 0x4a
                result = esi_2[2]
                arg10[0x53]
                arg10[0x53] = result
            case 0x4b
                void* eax_71 = sub_4f0fd0(&data_6218dc, ecx)
                
                if (*(eax_71 + 0x10) != 0xf)
                    char const* const var_1c8_60 = "AttribAsAssetPtr"
                    int32_t var_1cc_46 = 0x8fc
                    char const* const var_1d0_39 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    sub_489550(eax_71, &data_5b2591, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = esi_2[2]
                arg10[0x24] = result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
