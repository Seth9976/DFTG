// 函数名称: sub_46e9d0
// 虚拟地址: 0x46e9d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46e9d0(int32_t* arg1, char arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59e0ef
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_18c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi
    
    if (arg2 == 0)
        int32_t eax_5 = arg1[0xe] & 0x80000001
        
        if (eax_5 s< 0)
            eax_5 = ((eax_5 - 1) | 0xfffffffe) + 1
        
        edi = ((eax_5 + (arg1[0x11] << 1)) << 2) + &data_62cc30
    else
        edi = &arg1[1]
    
    bool cond:0 = arg1[0x1aa] s> 0
    void* eax_9 = data_aca1ec
    float var_38 = 0f
    float var_34 = 0f
    float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(eax_9 + 0x14)))
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_9 + 0x18)))
    int32_t result
    
    if (cond:0 || arg1[0x5d] != 1 || arg1[0x77] != 0 || (*arg1 == 0 && arg1[0xd] == 2))
        void* eax_10 = sub_46c270(arg1, 0)
        float eax_11
        int32_t edx
        eax_11, edx = sub_4543d0(arg1)
        
        if (eax_11 == 6)
            result = sub_46c4e0(arg1, nullptr)
        else if (eax_11 == 4)
            result = sub_46c4e0(arg1, eax_11 - 1)
        else if (eax_11 != 5)
            int32_t* eax_12 = data_126c25c
            
            if (arg2 != 0)
                eax_12 = data_126c254
            
            void* eax_13 = data_6cfe4c
            uint32_t (* var_bc)[0x4] = nullptr
            
            if (eax_13 == 0)
                sub_489550(eax_13, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t ecx_10 = arg1[0xf]
            
            if (ecx_10 != *(eax_13 + 0xa68) && ecx_10 != 0xffffffff)
                uint32_t (* eax_14)[0x4]
                eax_14, edx = sub_425f20(ecx_10)
                var_bc = eax_14
            
            int128_t var_e8 = *sub_4723a0(&var_e8, edx, arg1, &var_e8)
            sub_49ec40(&var_38, edi, "tile ui", eax_12, &var_38, &var_38, eax_10, var_bc, arg2)
            int32_t var_1a8_1 = 0xffffffff
            sub_4a8570(*edi)
            
            if (*(sub_438600() + 0x24) == 1)
                int32_t var_190_3 = 0xffffffff
                sub_4a8570(*edi)
            
            void* eax_19 = data_6d00d0
            
            if (eax_19 == 0)
                sub_489550(eax_19, &data_5b2591, "gGameSettings.localSettings", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                    "GetLocalSettings")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            eax_19.b = *(eax_19 + 0x2c)
            int32_t var_190_4 = 0xffffffff
            sub_4a8570(*edi)
            void* eax_20 = data_6d00d0
            
            if (eax_20 == 0)
                sub_489550(eax_20, &data_5b2591, "gGameSettings.localSettings", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                    "GetLocalSettings")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            eax_20.b = *(eax_20 + 0x2d)
            int32_t var_190_5 = 0xffffffff
            sub_4a8570(*edi)
            
            if (arg2 != 0 && sub_46a6a0() != 0)
                int32_t var_190_6 = 0xffffffff
                sub_4a8570(*edi)
            
            int32_t eax_22
            int32_t edx_11
            eax_22, edx_11 = sub_46ce40(arg1)
            
            if (eax_22 u> 9)
                sub_489550(eax_22, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x631c, "DeclareTile")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            switch (eax_22)
                case 9
                    int32_t var_190_7 = 0xffffffff
                    edx_11 = sub_4a8570(*edi)
            
            int32_t* eax_23 = arg1[0xc]
            void var_180
            int128_t* eax_25 = sub_454ba0(&var_180, edx_11, arg1, &var_180)
            int128_t var_b8 = *eax_25
            int128_t var_a8_1 = eax_25[1]
            int96_t var_98_1 = (eax_25[2]).12
            int128_t var_88_1 = eax_25[3]
            int128_t var_78_1 = eax_25[4]
            int128_t var_68_1 = eax_25[5]
            int128_t var_100
            
            if (arg2 == 0)
                var_38.o = data_60cc20
                var_100 = data_60cc20
                float* eax_27 = sub_4cdde0(&var_180, &var_38, &var_100, &var_180)
                var_b8 = *eax_27
                int128_t var_a8_2 = *(eax_27 + 0x10)
                var_98_1 = (*(eax_27 + 0x20)).12
                int128_t var_88_2 = *(eax_27 + 0x30)
                int128_t var_78_2 = *(eax_27 + 0x40)
                int128_t var_68_2 = *(eax_27 + 0x50)
            
            sub_4a8700(*edi, &var_b8)
            int32_t var_190_10 = 0xffffffff
            sub_4a8570(*edi)
            int32_t var_190_11 = 0xffffffff
            *(sub_438600() + 0xc)
            sub_4a8570(*edi)
            int32_t eax_30 = arg1[0xd]
            
            if (eax_30 == 4 || eax_30 == 5)
                int32_t eax_31 = var_e8:4.d
                
                if (eax_31 == var_e8:8.d)
                    int32_t var_190_15 = eax_31
                    sub_48a9d0(&var_bc, &data_5efc90)
                    int32_t var_14_5 = 4
                    sub_4a8930(&var_bc, &data_6396b8, *edi, &var_bc, 0xffffffff)
                    int32_t var_14_6 = 5
                else if (sub_4542f0(arg1, 3) != 0)
                label_46ee2e:
                    int32_t var_190_13 = var_e8:4.d - var_e8:8.d
                    sub_48a9d0(&var_bc, &data_5efc90)
                    int32_t var_14_3 = 0
                    sub_4a8930(&var_bc, &data_6397d0, *edi, &var_bc, 0xffffffff)
                    int32_t var_190_14 = 0xffffffff
                    arg1[0xe]
                    sub_4a8570(*edi)
                    int32_t var_14_4 = 1
                else
                    if (sub_4542f0(arg1, 1) != 0)
                        goto label_46ee2e
                    
                    if (sub_4542f0(arg1, 2) != 0)
                        goto label_46ee2e
                    
                    int32_t var_190_12 = var_e8:8.d
                    sub_48a9d0(&var_bc, &data_5efc90)
                    int32_t var_14_1 = 2
                    sub_4a8930(&var_bc, &data_6396b8, *edi, &var_bc, 0xffffffff)
                    int32_t var_198_3 = 0xffffffff
                    sub_4a8570(*edi)
                    int32_t var_14_2 = 3
                
                if (data_aca1f4 != 0)
                    uint32_t (* eax_40)[0x4] = var_bc
                    
                    if (eax_40 != 0 && *eax_40 != 0)
                        char* eax_41 = sub_48a080(&var_bc)
                        int32_t temp0_1 = *(eax_41 + 4)
                        *(eax_41 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_41, *(eax_41 + 0xc) + 0x10)
                            var_bc = &data_5b2591
                
                int32_t var_14_7 = 0xffffffff
            
            if (var_e8.d != 0xffffffff && arg1[0xe] == 0)
                uint32_t ecx_34 = 0
                
                if (sub_46bc50(arg1) != 0)
                    ecx_34 = 1
                
                int32_t eax_43 = arg1[0xd]
                var_bc = ecx_34
                
                if (eax_43 == 4 || eax_43 == 5)
                    var_bc.b = 1
                
                int32_t var_190_16 = 0xffffffff
                sub_4a8570(*edi)
                
                if (arg2 == 0 || var_bc.b != 0)
                    int32_t var_190_19 = 0xffffffff
                    sub_4a8570(*edi)
                    int32_t var_190_20 = var_e8.d
                    sub_48a9d0(&var_bc, &data_5efc90)
                    int32_t var_14_10 = 6
                    sub_4a8930(&var_bc, &data_639808, *edi, &var_bc, 0xffffffff)
                    int32_t var_14_11 = 7
                else
                    int32_t var_190_17 = 0xffffffff
                    sub_4a8570(*edi)
                    int32_t var_190_18 = var_e8.d + 6
                    sub_48a9d0(&var_bc, &data_5efc90)
                    int32_t var_14_8 = 8
                    sub_4a8930(&var_bc, &data_639824, *edi, &var_bc, 0xffffffff)
                    int32_t var_14_9 = 9
                
                if (data_aca1f4 != 0)
                    uint32_t (* eax_48)[0x4] = var_bc
                    
                    if (eax_48 != 0 && *eax_48 != 0)
                        char* eax_49 = sub_48a080(&var_bc)
                        int32_t temp1_1 = *(eax_49 + 4)
                        *(eax_49 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_49, *(eax_49 + 0xc) + 0x10)
                            var_bc = &data_5b2591
                
                int32_t var_14_12 = 0xffffffff
            
            int32_t ecx_42 = *eax_23
            
            if (ecx_42 u> 3)
                sub_489550(eax_23, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x63ae, "DeclareTile")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t var_190_21
            
            switch (ecx_42)
                case 0
                    if (arg1[0xe] != 2)
                        int32_t eax_58 = eax_23[0xc] - 2
                        var_bc = eax_23[9]
                        
                        switch (eax_58)
                            case 3
                                var_190_21 = 0xffffffff
                                sub_4a8570(*edi)
                    else
                        eax_23[3]
                case 1
                    int32_t eax_56 = eax_23[6] - 2
                    var_bc = eax_23[3]
                    
                    switch (eax_56)
                        case 3
                            var_190_21 = 0xffffffff
                            sub_4a8570(*edi)
                case 2
                    int32_t eax_60 = eax_23[6] - 2
                    var_bc = eax_23[3]
                    
                    switch (eax_60)
                        case 3
                            var_190_21 = 0xffffffff
                            sub_4a8570(*edi)
                case 3
                    if (arg1[0xe] != 0)
                        int32_t eax_54 = eax_23[0xc] - 2
                        var_bc = eax_23[9]
                        
                        switch (eax_54)
                            case 3
                                var_190_21 = 0xffffffff
                                sub_4a8570(*edi)
                    else
                        int32_t eax_52 = eax_23[6] - 2
                        var_bc = eax_23[3]
                        
                        switch (eax_52)
                            case 3
                                var_190_21 = 0xffffffff
                                sub_4a8570(*edi)
            
            int32_t var_190_22 = 0xffffffff
            sub_4a8570(*edi)
            int32_t var_190_23
            
            if (eax_11 == 1 || eax_11 == 3)
                if (arg2 != 0)
                    var_190_23 = 0xffffffff
                    sub_4a8570(*edi)
            else if (arg2 != 0)
                arg1[0x1aa] s> 0 && arg1[0xdf] == 1
                var_190_23 = 0xffffffff
                sub_4a8570(*edi)
            sub_4a4740(*edi, 0, data_620d84)
            int128_t xmm1_2 = data_63c264
            var_100:4.q = 0
            var_100:0xc.d = 0
            var_38.o = xmm1_2
            int128_t var_58_1 = xmm1_2
            int128_t var_48 = data_63c274
            float eax_62
            eax_62.b = arg2
            void var_110
            
            if (sub_46b510(arg1).b != 0 && eax_62.b != 0)
                if (data_1514840 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                    __Init_thread_header(&data_1514840)
                    
                    if (data_1514840 == 0xffffffff)
                        int32_t var_14_13 = 0xa
                        void* eax_65 = *sub_4dd840(data_126bd24)
                        int32_t var_14_14 = 0xffffffff
                        data_1514844 = *(eax_65 + 0x4c) f- *(eax_65 + 0x40)
                        __Init_thread_footer(&data_1514840)
                
                int128_t var_58_2 = data_63c264
                var_48 = data_63c274
                int128_t* eax_67
                
                if (sub_4543d0(arg1) == 6)
                    eax_67 = &var_38
                else
                    void var_d0
                    
                    if (*arg1[0xc] != 0)
                        eax_67 = &var_d0
                    else
                        eax_67 = &var_e8
                
                int32_t* var_190_24 = arg1
                arg1[1]
                var_38.o = *sub_4bacb0(eax_67)
                float xmm4_2 = xmm0_1 - var_38
                float xmm1_3[0x4] = *sub_48dce0(&var_110)
                float xmm0_27 = _mm_shuffle_ps(xmm1_3, xmm1_3, 0xaa)
                float xmm3_1 = xmm1_3[0]
                float var_190_26 = xmm4_2
                    + (_mm_shuffle_ps(xmm1_3, xmm1_3, 0x55) + _mm_shuffle_ps(xmm1_3, xmm1_3, 0xff))
                    * 0.5f
                float var_194_8 = xmm4_2 + (xmm3_1 + xmm0_27) * 0.5f
                int64_t* eax_71 = sub_46b5c0(&var_e8)
                int32_t var_c4_3 = eax_71[1].d
                var_58_2.d = (*eax_71).d f/ data_1514844
                float var_190_27 = (xmm0_3 + var_34) * 0.5f
                float var_194_9 = (var_38 + xmm0_1) * 0.5f
                int64_t* eax_73 = sub_46b5c0(&var_e8)
                var_48:4.q = *eax_73
                var_48:0xc.d = eax_73[1].d
                eax_62.b = arg2
                var_38.o = var_58_2
            
            float xmm0_42 = arg1[0x222]
            void* ecx_54 = &arg1[0x222]
            
            if (eax_62.b != 0)
                int32_t eax_74 = arg1[0x22a]
                float var_c4_1
                var_c4_1.b = data_632564 == eax_74
                char eax_75
                
                if (data_632558 == eax_74)
                    ecx_54 = arg1
                    eax_75 = sub_453780(ecx_54)
                    var_bc.b = 1
                
                if (data_632558 != eax_74 || eax_75 == 0)
                    var_bc.b = 0
                
                void* var_190_28 = ecx_54
                sub_46dc00(&arg1[0x222], &var_100:4, arg1, &arg1[0x222], var_bc.b, var_c4_1.b, 
                    &var_48:4)
                ecx_54 = &arg1[0x222]
                var_48:0xc.d = var_48:0xc.d f+ var_98_1:8.d
                *(arg1 + 0x7b8) = var_38.o
                *(arg1 + 0x7c8) = var_48
            
            int32_t xmm4_7 = (zx.o(0)).d
            xmm0_42 f- 0
            eax_62:1.b = (xmm0_42 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_42, 0f) ? 1 : 0) << 2
                | (xmm0_42 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2) && not(*ecx_54 f<= 0))
                if (data_1514848 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                    __Init_thread_header(&data_1514848)
                    
                    if (data_1514848 == 0xffffffff)
                        int32_t var_14_15 = 0xb
                        void* eax_80 = *sub_4dd840(data_126bd24)
                        int32_t var_14_16 = 0xffffffff
                        data_151484c = *(eax_80 + 0x4c) f- *(eax_80 + 0x40)
                        __Init_thread_footer(&data_1514848)
                
                int128_t var_58_3 = data_63c264
                var_48 = data_63c274
                int128_t* eax_82
                
                if (sub_4543d0(arg1) == 6)
                    eax_82 = &var_110
                else if (*arg1[0xc] != 0)
                    eax_82 = &var_e8
                else
                    eax_82 = &var_38
                
                int32_t* var_190_29 = arg1
                arg1[1]
                var_38.o = *sub_4bacb0(eax_82)
                float xmm4_5 = xmm0_1 - var_38
                float xmm1_8[0x4] = *sub_48dce0(&var_110)
                float xmm0_50 = _mm_shuffle_ps(xmm1_8, xmm1_8, 0xaa)
                float xmm3_4 = xmm1_8[0]
                float var_190_31 = xmm4_5
                    + (_mm_shuffle_ps(xmm1_8, xmm1_8, 0x55) + _mm_shuffle_ps(xmm1_8, xmm1_8, 0xff))
                    * 0.5f
                float var_194_12 = xmm4_5 + (xmm3_4 + xmm0_50) * 0.5f
                int64_t* eax_86 = sub_46b5c0(&var_e8)
                int32_t var_c4_5 = eax_86[1].d
                var_58_3.d = (*eax_86).d f/ data_151484c
                float var_190_32 = (xmm0_3 + var_34) * 0.5f
                float var_194_13 = (var_38 + xmm0_1) * 0.5f
                int64_t* eax_88 = sub_46b5c0(&var_e8)
                xmm4_7 = (zx.o(0)).d
                var_48:4.q = *eax_88
                var_48:0xc.d = eax_88[1].d
                *(arg1 + 0x7b8) = var_58_3
                *(arg1 + 0x7c8) = var_48
            
            if (sub_46b510(arg1) == 0)
                if (arg2 != 0)
                    int32_t eax_94 = arg1[0xe]
                    
                    if (eax_94 == 4 || eax_94 != 1)
                        arg1[0x223] = 0
                    else
                        arg1[0x223] = 0x3f800000
            else if (arg2 != 0)
                int32_t eax_91 = arg1[0xe]
                float xmm0_62 = arg1[0x223]
                float xmm1_14 = data_620d84 * 0.5f
                float xmm0_63
                bool cond:6_1
                
                if (eax_91 != 1)
                    xmm0_63 = xmm0_62 - xmm1_14
                    cond:6_1 = 0f < xmm0_63
                else
                    xmm0_63 = xmm0_62 + xmm1_14
                    cond:6_1 = xmm0_63 < 1f
                
                arg1[0x223] = xmm0_63
                
                if (not(cond:6_1))
                    arg1[0x224].b = 0
                
                float xmm3_7[0x2]
                
                if (0 f<= xmm0_63)
                    xmm3_7 = _mm_min_ss(0x3f800000, xmm0_63)
                else
                    xmm3_7 = (zx.o(0)).q
                
                arg1[0x223] = xmm3_7
                
                if (eax_91 != 1)
                    float xmm0_64 = _mm_cvtpd_ps(1.0 - _mm_cvtps_pd(xmm3_7)) - 0f
                    
                    if (not(0 f< xmm0_64))
                        var_bc = 0x40490fdb
                    else if (xmm0_64 >= 1f)
                        var_bc = xmm4_7
                    else
                        var_bc = sub_41f140(0x14, xmm0_64, 3.14159274f, (zx.o(0)).d)
                else
                    float xmm3_8 = xmm3_7 f- 0f
                    
                    if (0 f>= xmm3_8)
                        var_bc = xmm4_7
                    else if (xmm3_8 < 1f)
                        var_bc = sub_41f140(0x14, xmm3_8, (zx.o(0)).d, 3.14159274f)
                    else
                        var_bc = 0x40490fdb
                
                float xmm0_69 = var_bc f* 0.5f
                var_bc = xmm0_69
                float xmm0_70 = sub_41f120(xmm0_69)
                float var_34_1 = xmm0_70
                float xmm1_19 = xmm0_70 * 0f
                uint32_t (* xmm0_71)[0x4] = var_bc
                var_38 = xmm1_19
                float var_30_1 = xmm1_19
                int32_t var_2c_1 = sub_41f100(xmm0_71)
                void var_120
                *(arg1 + 0x7bc) = *sub_482af0(&var_120, &var_38, arg1 + 0x7bc, &var_120)
                arg1[0x1f3] = var_100:4.d f+ arg1[0x1f3]
                arg1[0x1f4] = var_100:8.d f+ arg1[0x1f4]
                arg1[0x1f5] = var_100:0xc.d f+ arg1[0x1f5]
            
            result = *edi
        else
            result = sub_46c4e0(arg1, eax_11 - 3)
    else
        sub_49a5a0(edi)
        result = *edi
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
