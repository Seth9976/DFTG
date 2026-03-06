// 函数名称: sub_4947b0
// 虚拟地址: 0x4947b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4947b0(int32_t arg1, int128_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59edf0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_1fc = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* edi = arg2
    int128_t* var_74 = edi
    int32_t* var_78 = arg3
    void* edx = data_114e818
    int32_t* result_5 = arg4
    int32_t* result_3 = result_5
    
    if (edx != 0)
        result.b = (*(edx + 0x1c) u>> 3).b & 1
        int32_t* var_208
        int128_t var_168
        void var_128
        int128_t var_f8
        int32_t* result_2
        int32_t* i_1
        int128_t var_48
        
        if (result.b != 0)
            int32_t* var_200_1 = &i_1
            var_208 = arg3
            sub_4889e0(&result_2, var_208, 2)
            int32_t var_14_1 = 0
            void* eax_5 = *i_1
            
            if (eax_5 != 0 && result_5 != 0)
                int32_t eax_6 = *(eax_5 + 0x20)
                void* i_2 = nullptr
                i_1 = nullptr
                
                if (eax_6 s> 0)
                    int32_t var_a8_1 = 0x3e99999a
                    int32_t var_a4_1 = 0x3c23d70a
                    int32_t var_a0_1 = 0x3c23d70a
                    int32_t var_98_1 = 0xbc23d70a
                    int32_t var_94_1 = 0xbc23d70a
                    int32_t var_90_1 = 0xbc23d70a
                    int32_t var_c8_1 = 0x3c23d70a
                    int32_t var_c4_1 = 0x3e99999a
                    int32_t var_c0_1 = 0x3c23d70a
                    int32_t var_b8_1 = 0xbc23d70a
                    int32_t var_b4_1 = 0xbc23d70a
                    int32_t var_b0_1 = 0xbc23d70a
                    int32_t var_e8_1 = 0x3c23d70a
                    int32_t var_e4_1 = 0x3c23d70a
                    int32_t var_e0_1 = 0x3e99999a
                    int32_t var_d8_1 = 0xbc23d70a
                    int32_t var_d4_1 = 0xbc23d70a
                    int32_t var_d0_1 = 0xbc23d70a
                    
                    do
                        void var_108
                        int128_t* eax_8
                        int32_t edx_2
                        eax_8, edx_2 = sub_4dc4e0(&var_108, i_2, result_5, &var_108)
                        int128_t* ecx_2 = &var_48
                        var_48 = *eax_8
                        int128_t var_38_1 = eax_8[1]
                        int128_t* eax_10 = sub_482820(&var_128, edx_2, ecx_2, &var_128)
                        var_168 = *eax_10
                        int128_t var_158_1 = eax_10[1]
                        int128_t var_148_1 = eax_10[2]
                        var_38_1.d = var_90_1
                        int128_t var_138_1 = eax_10[3]
                        var_38_1:0xc.d = var_a0_1
                        var_f8 = data_60caa0
                        int128_t* var_200_4 = &var_f8
                        var_48:8.q = var_98_1.q
                        var_38_1:4.q = var_a8_1.q
                        int128_t var_180_1 = var_48
                        int64_t var_170_1 = var_38_1:8.q
                        int128_t* ecx_3 = sub_490ee0(&var_f8, &var_168, ecx_2)
                        var_f8 = data_60cab0
                        var_38_1.d = var_b0_1
                        var_48:8.q = var_b8_1.q
                        var_38_1:4.q = var_c8_1.q
                        var_38_1:0xc.d = var_c0_1
                        int128_t* var_200_5 = &var_f8
                        int128_t var_198_1 = var_48
                        int64_t var_188_1 = var_38_1:8.q
                        int128_t* ecx_4 = sub_490ee0(&var_f8, &var_168, ecx_3)
                        var_f8 = data_60cae0
                        var_38_1.d = var_d0_1
                        var_48:8.q = var_d8_1.q
                        var_38_1:4.q = var_e8_1.q
                        var_38_1:0xc.d = var_e0_1
                        int128_t* var_200_6 = &var_f8
                        int128_t var_1b0_1 = var_48
                        int64_t var_1a0_1 = var_38_1:8.q
                        sub_490ee0(&var_f8, &var_168, ecx_4)
                        i_2 = i_1 + 1
                        i_1 = i_2
                    while (i_2 s< eax_6)
                    
                    edi = var_74
            
            arg3 = var_78
            int32_t var_14_2 = 0xffffffff
            result = result_2
            edx = data_114e818
            
            if (result != 0)
                result[7] -= 1
                result_2 = nullptr
        
        if (edx != 0)
            result.b = (*(edx + 0x1c) u>> 2).b & 1
            int128_t var_68
            
            if (result.b == 0)
            label_494c2e:
                
                if (edx != 0)
                    result.b = (*(edx + 0x1c) u>> 2).b & 1
                    
                    if (result.b != 0 && result_5 != 0 && result_5[0xb] != 0)
                        int128_t** var_200_10 = &var_74
                        sub_4889e0(&result_3, var_78, 2)
                        int32_t var_14_3 = 1
                        void* eax_26 = *var_74
                        
                        if (eax_26 != 0)
                            int32_t* edx_13 = result_5[0xb] + 0x10
                            int32_t* var_84_1 = edx_13
                            int128_t* ecx_14 = edx_13[1]
                            var_74 = ecx_14
                            
                            if (*(eax_26 + 0x10) != ecx_14)
                                sub_489550(eax_26, &data_5b2591, 
                                    "pStructureData->boneCount == numBones", 
                                    "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x792, 
                                    "Structure3DDebugDraw")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* esi_1 = *(eax_26 + 0x18)
                            void* result_4 = nullptr
                            result_2 = nullptr
                            
                            if (ecx_14 s> 0)
                                int32_t ecx_15 = 0
                                int128_t* esi_2 = esi_1 + 0xc0
                                int32_t var_78_1 = 0
                                
                                while (true)
                                    if (ecx_15 s< 0 || result_4 s>= edx_13[1])
                                        sub_489550(result_4, &data_5b2591, 
                                            "index >= 0 && index < mSize", 
                                            "d:\ax\trunk\ax2017\engine\xarray.h", 0xc3, 
                                            "XArray<struct Mat4>::operator []")
                                        
                                        if (IsDebuggerPresent() != 1)
                                            sub_489700()
                                            noreturn
                                        
                                        breakpoint
                                    
                                    *edx_13
                                    int128_t* eax_27 = sub_497aa0(&var_128)
                                    var_168 = *eax_27
                                    int128_t var_158_2 = eax_27[1]
                                    int128_t var_148_2 = eax_27[2]
                                    int128_t* var_200_12 = &var_f8
                                    int128_t var_138_2 = eax_27[3]
                                    var_f8 = data_60caa0
                                    sub_490ee0(&var_f8, &var_168, esi_2)
                                    var_f8 = data_60cab0
                                    void var_1f0
                                    int128_t* eax_29 = sub_497aa0(&var_1f0)
                                    var_68 = *eax_29
                                    int128_t var_58_3 = eax_29[1]
                                    var_48 = eax_29[2]
                                    int128_t* var_200_14 = &var_f8
                                    int128_t var_38_4 = eax_29[3]
                                    sub_490ee0(&var_f8, &var_68, esi_2)
                                    result_4 = result_2 + 1
                                    edx_13 = var_84_1
                                    ecx_15 = var_78_1 + 0x40
                                    esi_2 += 0xd8
                                    result_2 = result_4
                                    var_78_1 = ecx_15
                                    
                                    if (result_4 s>= var_74)
                                        break
                                    
                                    continue
                        
                        result = result_3
                        
                        if (result != 0)
                            result[7] -= 1
            else
                if (arg3[1] != 2)
                    sub_489550(result, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                        "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x312, "StructureDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = *sub_4981f0(arg3)
                struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                
                if (result != 0)
                    int32_t* i = nullptr
                    i_1 = nullptr
                    
                    if (result[0xc] s> 0)
                        int32_t esi = 0
                        
                        do
                            int128_t xmm0_22 = *edi
                            int128_t* eax_22 = result[0xe]
                            var_74 = eax_22
                            var_68 = xmm0_22
                            int32_t edx_6 = *(esi + eax_22 + 0x44)
                            int128_t var_58_1 = edi[1]
                            var_48 = edi[2]
                            int128_t var_38_2 = edi[3]
                            
                            if (edx_6 s>= 0 && result_3 != 0)
                                void* ecx_7 = result_3[0xb]
                                
                                if (ecx_7 != 0)
                                    if (edx_6 s>= *(ecx_7 + 0x14))
                                        sub_489550(eax_22, &data_5b2591, "index >= 0 && index < mSize", 
                                            "d:\ax\trunk\ax2017\engine\xarray.h", 0xc3, 
                                            "XArray<struct Mat4>::operator []")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    *(ecx_7 + 0x10)
                                    int128_t* eax_23 = sub_497aa0(&var_168)
                                    var_68 = *eax_23
                                    int128_t var_58_2 = eax_23[1]
                                    var_48 = eax_23[2]
                                    eax_22 = var_74
                                    int128_t var_38_3 = eax_23[3]
                                
                                i = i_1
                            
                            int32_t edx_9 = *(esi + eax_22 + 8)
                            
                            if (edx_9 == 1)
                                int128_t* var_200_8 = &var_f8
                                var_f8 = data_60cae0
                                sub_491710(eax_22, &var_68, eax_22 + 0xc + esi)
                                i = i_1
                            else if (edx_9 == 2)
                                int128_t* var_200_9 = &var_f8
                                var_f8 = data_60cae0
                                sub_493f00(eax_22, &var_68, eax_22 + 0x34 + esi, var_208)
                                i = i_1
                            
                            result = result_1
                            i += 1
                            esi += 0x48
                            i_1 = i
                        while (i s< result[0xc])
                        
                        result_5 = result_3
                    
                    edx = data_114e818
                    goto label_494c2e
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
