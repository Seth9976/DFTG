// 函数名称: sub_4fbf70
// 虚拟地址: 0x4fbf70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4fbf70(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1834
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_64 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14 = arg2
    void* ebx = arg1
    void* var_1c = ebx
    arg2[0x13] = *(ebx + 8)
    arg2[0x14] = *(ebx + 0xc)
    arg2[0x15] = *(ebx + 0x10)
    arg2[0x16] = *(ebx + 0x14)
    int32_t eax_6
    eax_6.b = *(ebx + 0x44)
    arg2[0x17].b = eax_6.b
    eax_6.b = *(ebx + 0x45)
    *(arg2 + 0x5d) = eax_6.b
    int32_t eax_7 = *(ebx + 0x20)
    arg2[2] = eax_7
    int32_t esi_1 = eax_7 * 0x18
    uint32_t (* edi)[0x4]
    
    if (esi_1 != 0)
        edi = sub_4c2e40(esi_1)
        _memset(edi, 0, esi_1)
        arg2 = var_14
    else
        edi = nullptr
    
    *arg2 = edi
    int32_t i_7 = 0
    char* const var_18
    
    if (arg2[2] s> 0)
        int32_t* eax_9 = nullptr
        void** ebx_1 = nullptr
        int32_t* var_24_1 = nullptr
        int32_t i
        
        do
            int32_t ecx_1 = *arg2
            var_18 = &data_5b2591
            int32_t ecx_3 = *(var_1c + 0x18)
            int32_t var_8_1 = 0
            char* edi_1 = *(eax_9 + ecx_3)
            void* eax_10
            int32_t ecx_4
            int32_t edx
            eax_10, ecx_4, edx = _strrchr(edi_1, 0x5f)
            float var_28
            int32_t eax_12
            
            if (eax_10 != 0)
                int32_t* var_68_2 = &var_28
                eax_12 = sub_48d8d0(&var_28, edx, ecx_4, eax_10, "_fps%f")
            
            if (eax_10 == 0 || eax_12 != 1)
                var_28 = 0f
                sub_48a5e0(&var_18, edi_1)
            else
                sub_48a6e0(&var_18, edi_1, eax_10 - edi_1)
            
            float xmm0_1 = var_28
            xmm0_1 f- 0
            char** eax_13
            eax_13:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                var_28 = *(var_1c + 0x10)
            
            *(ebx_1 + ecx_1 + 0xc) = *(var_24_1 + ecx_3 + 0xc)
            char* const esi_5 = var_18
            *(ebx_1 + ecx_1 + 8) = *(var_24_1 + ecx_3 + 8)
            char* const eax_17 = &data_5b2591
            
            if (esi_5 != 0)
                eax_17 = esi_5
            
            char* edi_2 = eax_17
            *(ebx_1 + ecx_1 + 0x10) = var_28
            char* const var_50_2 = eax_17
            void* ecx_8 = &edi_2[1]
            
            do
                eax_17.b = *edi_2
                edi_2 = &edi_2[1]
            while (eax_17.b != 0)
            
            char* eax_18 = sub_4c2e40(edi_2 - ecx_8 + 1)
            *(ebx_1 + ecx_1) = eax_18
            sub_579300(eax_18, var_50_2, edi_2 - ecx_8 + 1)
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0 && esi_5 != 0 && *esi_5 != 0)
                char* eax_19 = sub_48a080(&var_18)
                int32_t temp1_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
                    var_18 = &data_5b2591
            
            ebx_1 = &ebx_1[6]
            arg2 = var_14
            i = i_7 + 1
            eax_9 = &var_24_1[4]
            int32_t var_8_3 = 0xffffffff
            i_7 = i
            var_24_1 = eax_9
        while (i s< arg2[2])
        ebx = var_1c
    
    int32_t esi_6 = 0
    arg2[4] = *(ebx + 0x28)
    arg2[5] = *(ebx + 0x2c)
    arg2[6] = *(ebx + 0x30)
    int32_t edx_4 = 0
    *(ebx + 0x28) = 0
    *(ebx + 0x30) = 0
    int32_t i_8 = *(ebx + 0x40)
    
    if (i_8 s> 0)
        void* eax_26 = *(var_1c + 0x38) + 0x20
        int32_t i_1
        
        do
            int32_t ecx_14 = *(eax_26 - 0x10)
            int32_t edi_5
            
            if (ecx_14 != 0)
                edi_5 = *eax_26
            else
                ecx_14 = 1
                edi_5 = 1
            
            esi_6 += edi_5
            edx_4 += ecx_14
            eax_26 += 0x28
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
    
    int32_t* eax_28 = var_14
    int32_t edi_7 = edx_4 * 0x18
    eax_28[0xa] = edx_4
    uint32_t (* ebx_2)[0x4]
    
    if (edi_7 != 0)
        ebx_2 = sub_4c2e40(edi_7)
        _memset(ebx_2, 0, edi_7)
        eax_28 = var_14
    else
        ebx_2 = nullptr
    
    eax_28[8] = ebx_2
    int32_t* ebx_3 = var_14
    ebx_3[0xe] = esi_6
    int32_t esi_7 = esi_6 << 7
    uint32_t (* edi_8)[0x4]
    
    if (esi_7 != 0)
        edi_8 = sub_4c2e40(esi_7)
        _memset(edi_8, 0, esi_7)
    else
        edi_8 = nullptr
    
    ebx_3[0xc] = edi_8
    uint32_t (* eax_30)[0x4] = sub_4c2e40(0x640)
    _memset(eax_30, 0, 0x640)
    void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
    ebx_3[0x10] = eax_30
    ebx_3[0x12] = 0
    
    if (data_1516730 s> *(*ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_1516730)
        
        if (data_1516730 == 0xffffffff)
            int32_t var_8_4 = 2
            data_1516734 = sub_4d0b50("sys/defaultflanim.texture", 3)
            int32_t var_8_5 = 0xffffffff
            __Init_thread_footer(&data_1516730)
    
    void* ecx_18 = var_1c
    int32_t edi_9 = 0
    char* const edx_5 = nullptr
    int32_t var_24_2 = 0
    int32_t esi_9 = 0
    var_18 = nullptr
    int32_t var_50_3 = 0
    int32_t result = *(ecx_18 + 0x40)
    
    if (result s> 0)
        int32_t var_34_2 = 0
        
        do
            if (esi_9 s>= result)
                sub_489550(result, &data_5b2591, "mayaLayerIndex < pMayaDef->mLayerCount", 
                    "d:\ax\trunk\ax2017\engine\flanim.cpp", 0x69a, "FlanimDefFromMayaDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t* esi_11 = *(ecx_18 + 0x38) + var_34_2
            int32_t* var_30 = esi_11
            int32_t eax_33 = esi_11[4]
            
            if (eax_33 != 0)
                int32_t i_6 = 0
                
                if (eax_33 s> 0)
                    void* var_3c_1 = nullptr
                    int32_t eax_37 = edi_9 * 0x18
                    int32_t var_2c_1 = eax_37
                    int32_t i_2
                    
                    do
                        if (edi_9 s>= ebx_3[0xa])
                            sub_489550(eax_37, &data_5b2591, 
                                "flanimLayerIndex < pFlanimDef->mLayerCount", 
                                "d:\ax\trunk\ax2017\engine\flanim.cpp", 0x6ae, "FlanimDefFromMayaDef")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        char* ebx_5 = *esi_11
                        int32_t* edi_13 = ebx_3[8] + eax_37
                        
                        if (ebx_5 == 0)
                            sub_489550(eax_37, &data_5b2591, "pExistingString", 
                                "d:\ax\trunk\ax2017\engine\definition.cpp", 0x25b, "DefDeepCopyString")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        char* esi_15 = ebx_5
                        void* ecx_21 = &esi_15[1]
                        
                        do
                            eax_37.b = *esi_15
                            esi_15 = &esi_15[1]
                        while (eax_37.b != 0)
                        
                        char* eax_38 = sub_4c2e40(esi_15 - ecx_21 + 1)
                        *edi_13 = eax_38
                        sub_579300(eax_38, ebx_5, esi_15 - ecx_21 + 1)
                        esi_11 = var_30
                        void** ecx_23 = var_3c_1
                        char* const edx_6 = var_18
                        ebx_3 = var_14
                        edi_13[2] = *(ecx_23 + esi_11[2]) + edx_6
                        edi_13[3] = *(ecx_23 + esi_11[2] + 4) + edx_6
                        edi_13[4] = *(ecx_23 + esi_11[2] + 8) + edx_6
                        var_3c_1 = &ecx_23[4]
                        edi_13[5] = *(ecx_23 + esi_11[2] + 0xc) + edx_6
                        i_2 = i_6 + 1
                        edi_9 = var_24_2 + 1
                        eax_37 = var_2c_1 + 0x18
                        var_24_2 = edi_9
                        var_2c_1 = eax_37
                        i_6 = i_2
                    while (i_2 s< esi_11[4])
                    edx_5 = var_18
            else
                if (edi_9 s>= ebx_3[0xa])
                    sub_489550(eax_33, &data_5b2591, "flanimLayerIndex < pFlanimDef->mLayerCount", 
                        "d:\ax\trunk\ax2017\engine\flanim.cpp", 0x69f, "FlanimDefFromMayaDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                char* eax_34 = *esi_11
                int32_t edi_10 = edi_9 * 3
                int32_t ebx_4 = ebx_3[8]
                char* var_4c_1 = eax_34
                
                if (eax_34 == 0)
                    sub_489550(eax_34, &data_5b2591, "pExistingString", 
                        "d:\ax\trunk\ax2017\engine\definition.cpp", 0x25b, "DefDeepCopyString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                char* esi_12 = eax_34
                void* ecx_19 = &esi_12[1]
                
                do
                    eax_34.b = *esi_12
                    esi_12 = &esi_12[1]
                while (eax_34.b != 0)
                
                char* eax_35 = sub_4c2e40(esi_12 - ecx_19 + 1)
                *(ebx_4 + (edi_10 << 3)) = eax_35
                sub_579300(eax_35, var_4c_1, esi_12 - ecx_19 + 1)
                edx_5 = var_18
                esi_11 = var_30
                *(ebx_4 + (edi_10 << 3) + 8) = edx_5
                *(ebx_4 + (edi_10 << 3) + 0xc) = edx_5
                *(ebx_4 + (edi_10 << 3) + 0x10) = edx_5
                *(ebx_4 + (edi_10 << 3) + 0x14) = edx_5
                edi_9 = var_24_2 + 1
                var_24_2 = edi_9
            
            int32_t eax_57 = esi_11[8]
            void* ecx_25 = nullptr
            void* var_48_1 = nullptr
            
            if (eax_57 s> 0)
                char* const ebx_6 = var_18
                int32_t edx_8 = 0
                int32_t var_4c_2 = 0
                int32_t var_2c_2 = ebx_6 << 7
                
                do
                    void* i_3 = ecx_25 + ebx_6
                    int32_t* ecx_26 = var_14
                    int32_t* edi_16 = esi_11[6] + edx_8
                    
                    if (i_3 s>= ecx_26[0xe])
                        sub_489550(i_3, &data_5b2591, "flanimVertexIndex < pFlanimDef->mVertexCount", 
                            "d:\ax\trunk\ax2017\engine\flanim.cpp", 0x6c0, "FlanimDefFromMayaDef")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    int32_t* ebx_8 = ecx_26[0xc] + var_2c_2
                    float xmm1_1 = 0f
                    int32_t xmm2_1 = 0
                    float xmm3_1 = 0f
                    float xmm5_1 = 1f
                    int32_t xmm4_1 = 0
                    int32_t xmm6_1 = 0x3f800000
                    float xmm7_1 = 0f
                    int32_t edx_9 = 0xffffffff
                    int32_t var_3c_2 = 0
                    int32_t var_38_1 = 0
                    void* i_5 = nullptr
                    
                    if (edi_16[2] s> 0)
                        int32_t ecx_27 = 0
                        int32_t* esi_18 = nullptr
                        
                        do
                            int32_t edi_17 = *edi_16
                            float xmm0_4 = *(esi_18 + edi_17)
                            xmm0_4 - 12345f
                            i_3:1.b = (xmm0_4 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_4, 12345f) ? 1 : 0) << 2
                                | (xmm0_4 < 12345f ? 1 : 0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_4))
                                *(esi_18 + edi_17) = xmm1_1
                                *(esi_18 + edi_17 + 4) = xmm2_1
                            else
                                xmm2_1 = *(esi_18 + edi_17 + 4)
                                xmm1_1 = xmm0_4
                            
                            float xmm0_5 = *(esi_18 + edi_17 + 8)
                            xmm0_5 - 12345f
                            i_3:1.b = (xmm0_5 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_5, 12345f) ? 1 : 0) << 2
                                | (xmm0_5 < 12345f ? 1 : 0)
                            bool p_6 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_6))
                                *(esi_18 + edi_17 + 8) = xmm3_1
                                *(esi_18 + edi_17 + 0xc) = xmm4_1
                            else
                                xmm4_1 = *(esi_18 + edi_17 + 0xc)
                                xmm3_1 = xmm0_5
                            
                            float xmm0_6 = *(esi_18 + edi_17 + 0x10)
                            xmm0_6 - 12345f
                            i_3:1.b = (xmm0_6 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_6, 12345f) ? 1 : 0) << 2
                                | (xmm0_6 < 12345f ? 1 : 0)
                            bool p_8 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_8))
                                *(esi_18 + edi_17 + 0x10) = xmm5_1
                                *(esi_18 + edi_17 + 0x14) = xmm6_1
                            else
                                xmm6_1 = *(esi_18 + edi_17 + 0x14)
                                xmm5_1 = xmm0_6
                            
                            float xmm0_7 = *(esi_18 + edi_17 + 0x18)
                            xmm0_7 - 12345f
                            i_3:1.b = (xmm0_7 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_7, 12345f) ? 1 : 0) << 2
                                | (xmm0_7 < 12345f ? 1 : 0)
                            bool p_10 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_10))
                                *(esi_18 + edi_17 + 0x18) = xmm7_1
                                *(esi_18 + edi_17 + 0x1c) = var_3c_2
                            else
                                xmm7_1 = xmm0_7
                                var_3c_2 = *(esi_18 + edi_17 + 0x1c)
                            
                            if (*(esi_18 + edi_17 + 0x20) != 0 || *(esi_18 + edi_17 + 0x21) != 0
                                    || *(esi_18 + edi_17 + 0x22) != 0
                                    || *(esi_18 + edi_17 + 0x23) != 0)
                                edx_9 = *(esi_18 + edi_17 + 0x20)
                            else
                                *(esi_18 + edi_17 + 0x20) = edx_9
                            
                            if (*(esi_18 + edi_17 + 0x24) != 0 || *(esi_18 + edi_17 + 0x25) != 0
                                    || *(esi_18 + edi_17 + 0x26) != 0
                                    || *(esi_18 + edi_17 + 0x27) != 0xff)
                                ecx_27 = *(esi_18 + edi_17 + 0x24)
                            else
                                *(esi_18 + edi_17 + 0x24) = ecx_27
                            
                            int32_t eax_54 = *(esi_18 + edi_17 + 0x28)
                            
                            if (eax_54 == data_1516734)
                                *(esi_18 + edi_17 + 0x28) = var_38_1
                            else
                                var_38_1 = eax_54
                            
                            esi_18 = &esi_18[0xe]
                            i_3 = i_5 + 1
                            i_5 = i_3
                        while (i_3 s< edi_16[2])
                        
                        int32_t var_20_1 = ecx_27
                        ecx_26 = var_14
                    
                    for (int32_t i_4 = 0; i_4 s< 8; )
                        if (i_4 == 0 || i_4 == 1 || i_4 == 3 || i_4 == 2)
                            i_3 = sub_4fbb50(i_3, ebx_8, edi_16, i_4)
                        else
                            if (i_4 != 4 && i_4 != 5 && i_4 != 6 && i_4 != 7)
                                sub_489550(i_3, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\engine\flanim.cpp", 0x63d, 
                                    "MayaDefCompressVertexList")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            i_3 = sub_4fbdc0(i_3, edi_16, ecx_26, ebx_8, i_4)
                        
                        ecx_26 = var_14
                        i_4 += 1
                        ebx_8 = &ebx_8[4]
                    
                    esi_11 = var_30
                    ecx_25 = var_48_1 + 1
                    var_2c_2 -= 0xffffff80
                    edx_8 = var_4c_2 + 0x10
                    eax_57 = esi_11[8]
                    ebx_6 = var_18
                    var_48_1 = ecx_25
                    var_4c_2 = edx_8
                while (ecx_25 s< eax_57)
                
                edi_9 = var_24_2
                edx_5 = ebx_6
            
            ecx_18 = var_1c
            edx_5 = &edx_5[eax_57]
            var_34_2 += 0x28
            esi_9 = var_50_3 + 1
            ebx_3 = var_14
            result = *(ecx_18 + 0x40)
            var_18 = edx_5
            var_50_3 = esi_9
        while (esi_9 s< result)
    
    if (ebx_3[0x12] == 0)
        result = ebx_3[0x10]
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        ebx_3[0x10] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
