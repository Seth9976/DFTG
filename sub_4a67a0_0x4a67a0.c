// 函数名称: sub_4a67a0
// 虚拟地址: 0x4a67a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float* __fastcallsub_4a67a0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f418
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    float eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    fsbase->NtTib.ExceptionList = &ExceptionList
    float* result = *(arg1 + 0xe98)
    int32_t* result_1 = result
    
    if (result != 0)
        int128_t xmm0_1 = *(data_114e818 + 0x2c)
        int32_t* var_4c
        int32_t* var_100_1 = &var_4c
        void* var_58 = xmm0_1
        sub_4bc2f0(arg1 + 0x6fc, xmm0_1)
        uint32_t var_48 = sub_497d80(*(arg1 + 0x1084), eax_2)
        int32_t eax_5 = sub_4a4a70(&var_4c, &var_48)
        int32_t* var_100_2 = &var_4c
        int32_t var_80_1 = eax_5
        char* eax_6 = sub_4bc2f0(arg1 + 0x66c, var_58)
        var_48 = sub_497d80(*(arg1 + 0x1074))
        char* eax_9 = sub_4be900(eax_6, &var_48)
        char* var_84 = eax_9
        var_48 = eax_9 u>> 0x18
        char ecx_4 = *(arg1 + 0xeb8)
        void* var_50
        var_50.b = ecx_4
        
        if (ecx_4 == 0)
            var_4c = &var_84
        else
            int32_t var_40_1 = eax_5
            char* var_44
            var_4c = &var_44
            int32_t var_38_1 = eax_5
            int32_t var_30_1 = eax_5
            int32_t var_28_1 = eax_5
            var_44 = sub_4be900(arg1 + 0xeb9, &var_84)
            char* var_3c_1 = sub_4be900(arg1 + 0xebd, &var_84)
            char* var_34_1 = sub_4be900(arg1 + 0xec5, &var_84)
            char* var_2c_1 = sub_4be900(arg1 + 0xec1, &var_84)
        
        float xmm4_1[0x4] = *(arg1 + 0x10a0)
        int128_t var_e0
        int128_t* var_100_3 = &var_e0
        int128_t var_a8
        void* edx_7 = &var_a8:8
        float xmm2_4 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xff)
        float xmm5_2 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xaa)
        float xmm3_2 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0x55)
        float var_9c_1 = xmm2_4 - xmm3_2
        float xmm5_4 = (xmm5_2 f+ xmm4_1) * 0.5f
        float xmm3_4 = (xmm3_2 + xmm2_4) * 0.5f
        float var_a0_1 = xmm5_2 f- xmm4_1
        int128_t var_94
        result = sub_4829a0(&var_e0, edx_7, &var_94:8)
        bool cond:0_1 = var_48.b == 0
        var_94 = *result
        
        if (not(cond:0_1))
            float xmm0_7 = *(arg1 + 0x1034)
            int128_t xmm4_2 = data_5d3570
            float xmm3_5[0x4] = data_5d3580
            void* esi_1 = *(arg1 + 0xf18)
            xmm0_7 f- 0
            int128_t var_f0_1
            __builtin_memcpy(&var_f0_1, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 
                0x20)
            result:1.b = (xmm0_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, 0f) ? 1 : 0) << 2
                | (xmm0_7 < 0f ? 1 : 0)
            int128_t var_cc
            __builtin_memcpy(&var_cc, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x24)
            bool p_2 = unimplemented  {test ah, 0x44}
            float* var_ac_1
            
            if (not(p_2))
                var_48 = var_cc.d
            else
                uint32_t xmm1_3 = *(arg1 + 0x1038)
                var_cc:0xc.d = xmm0_7
                var_cc:4.d = xmm0_7 ^ (data_60cca0.o).d
                int128_t var_bc
                var_bc:8.d = 0
                var_bc.d = xmm1_3
                var_bc:0xc.d = 0
                var_bc:4.d = 0
                var_cc:8.d = 0
                var_cc.d = xmm1_3
                var_e0 = var_bc
                var_ac_1 = 0x3f800000
                int128_t xmm0_10 = var_cc
                var_48 = xmm1_3
                var_f0_1 = xmm0_10
            
            int32_t eax_17 = *(arg1 + 0xeac) * *(arg1 + 0xea8)
            var_a8 = data_5d2760
            int128_t var_10c_2
            
            if (eax_17 s> 1)
                int32_t var_100_4 = *(arg1 + 0xeac)
                var_10c_2:8.d = *(arg1 + 0xea8)
                var_10c_2:4.d = &var_a8
                int128_t* eax_19
                eax_19, edx_7 = sub_4a6510(&var_a8, edx_7, *(arg1 + 0xeb4), var_58, *(arg1 + 0xeb0))
                xmm3_5 = data_5d3580
                xmm4_2 = data_5d3570
                var_a8 = *eax_19
            
            if (esi_1 != 0 && *(esi_1 + 4) == 0x1d)
                uint32_t* var_100_5 = &var_48
                var_10c_2:8.d = 0x1d
                var_10c_2:4.d = esi_1
                sub_4889e0(&var_58)
                int32_t var_14_1 = 0
                int32_t eax_20
                eax_20, edx_7 = sub_50bf20(var_48)
                int32_t var_14_2 = 0xffffffff
                void* ecx_13 = var_58
                
                if (ecx_13 != 0)
                    *(ecx_13 + 0x1c) -= 1
                
                int32_t var_100_6 = *(arg1 + 0xea4)
                var_10c_2:8.d = eax_20
                goto label_4a6d70
            
            int32_t eax_21 = *(arg1 + 0xe84)
            int128_t var_7c
            float xmm0_32
            uint32_t xmm1_6
            float xmm3_8
            float xmm4_4
            float xmm5_5
            
            if (eax_21 == 1)
                xmm1_6 = *(arg1 + 0x1020) f* *(arg1 + 0xea0)
                var_7c = var_f0_1
                int128_t xmm3_6 = var_e0
                var_7c.d = var_48 f* xmm1_6
                var_7c:4.d = var_7c:4.d f* xmm1_6
                xmm5_5 = var_94.d
                var_7c:8.d = var_7c:8.d f* xmm1_6
                var_7c:0xc.d = var_7c:0xc.d f* xmm1_6
                int128_t var_6c_1
                var_6c_1.d = xmm3_6 f* xmm1_6
                var_6c_1:4.d = xmm3_6:4.d f* xmm1_6
                var_6c_1:8.d = var_6c_1:8.d f* xmm1_6
                var_6c_1:0xc.d = var_6c_1:0xc.d f* xmm1_6
                float var_5c_2 = var_ac_1 f* xmm1_6
                
                if (not(xmm5_4 < xmm5_5))
                    xmm3_8 = var_94:4.d
                
                if (xmm5_4 < xmm5_5 || xmm3_4 < xmm3_8)
                    char const* const var_100_11 = "RectTopLeft"
                    var_10c_2:8.d = 0x127
                    var_10c_2:4.d = "d:\ax\trunk\ax2017\engine\rect.cpp"
                    sub_489550(var_ac_1, &data_5b2591, "RectIsNormalized(r)")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                xmm4_4 = xmm5_4 - xmm5_5
                xmm0_32 = xmm3_4 - xmm3_8
                xmm4_4 f- 0
                result:1.b = (xmm4_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 0f) ? 1 : 0) << 2
                    | (xmm4_4 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    xmm0_32 f- 0
                    result:1.b = (xmm0_32 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_32, 0f) ? 1 : 0) << 2 | (xmm0_32 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        xmm1_6 f- 0
                        result:1.b = (xmm1_6 f== 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm1_6, 0f) ? 1 : 0) << 2 | (xmm1_6 f< 0f ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (p_8)
                            void* var_100_7 = esi_1
                            var_10c_2:8.d = &var_a8
                            var_10c_2:4.d = 1
                            var_10c_2.d = *(arg1 + 0xea4)
                            result = sub_4c22b0(&var_a8, &var_7c, result_1, xmm5_5 f/ xmm1_6, 
                                xmm3_8 f/ xmm1_6, xmm4_4 f/ xmm1_6, xmm0_32 f/ xmm1_6, var_4c, var_50, 
                                var_10c_2)
            else if (eax_21 != 2)
                int32_t var_100_10 = *(arg1 + 0xea4)
                var_10c_2:8.d = esi_1
            label_4a6d70:
                var_10c_2:4.d = var_50
                var_10c_2.d = var_4c
                result = sub_4c1f70(&var_cc, edx_7, result_1, &var_cc, &var_94, &var_a8, var_10c_2)
            else
                uint32_t xmm1_8 = *(arg1 + 0x1020) f* *(arg1 + 0xea0)
                int32_t var_5c_3 = 0x3f800000
                var_7c = xmm4_2
                int128_t* var_100_8 = &var_7c
                var_7c:0xc.d = var_7c:0xc.d f* xmm1_8
                float xmm0_36 = var_7c:4.d f* xmm1_8
                float xmm3_9 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0xaa)
                var_7c:4.d = xmm0_36
                xmm3_5[0] = xmm3_5[0] f* xmm1_8
                float xmm0_40 = xmm3_5[3] f* xmm1_8
                var_48 = xmm1_8
                var_7c.d = xmm4_2 f* xmm1_8
                xmm3_5[2] = xmm3_9 f* xmm1_8
                xmm3_5[3] = xmm0_40
                result = sub_41da40(&var_7c, &var_cc, &var_7c)
                xmm5_5 = var_94.d
                
                if (not(xmm5_4 < xmm5_5))
                    xmm3_8 = var_94:4.d
                
                if (xmm5_4 < xmm5_5 || xmm3_4 < xmm3_8)
                    char const* const var_100_12 = "RectTopLeft"
                    var_10c_2:8.d = 0x127
                    var_10c_2:4.d = "d:\ax\trunk\ax2017\engine\rect.cpp"
                    sub_489550(result, &data_5b2591, "RectIsNormalized(r)")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                xmm4_4 = xmm5_4 - xmm5_5
                xmm0_32 = xmm3_4 - xmm3_8
                xmm4_4 f- 0
                result:1.b = (xmm4_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 0f) ? 1 : 0) << 2
                    | (xmm4_4 < 0f ? 1 : 0)
                bool p_10 = unimplemented  {test ah, 0x44}
                
                if (p_10)
                    xmm0_32 f- 0
                    result:1.b = (xmm0_32 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_32, 0f) ? 1 : 0) << 2 | (xmm0_32 < 0f ? 1 : 0)
                    bool p_12 = unimplemented  {test ah, 0x44}
                    
                    if (p_12)
                        xmm1_6 = var_48
                        xmm1_6 f- 0
                        result:1.b = (xmm1_6 f== 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm1_6, 0f) ? 1 : 0) << 2 | (xmm1_6 f< 0f ? 1 : 0)
                        bool p_14 = unimplemented  {test ah, 0x44}
                        
                        if (p_14)
                            void* var_100_9 = esi_1
                            var_10c_2:8.d = &var_a8
                            var_10c_2:4.d = 0
                            var_10c_2.d = *(arg1 + 0xea4)
                            result = sub_4c22b0(&var_a8, &var_7c, result_1, xmm5_5 f/ xmm1_6, 
                                xmm3_8 f/ xmm1_6, xmm4_4 f/ xmm1_6, xmm0_32 f/ xmm1_6, var_4c, var_50, 
                                var_10c_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
