// 函数名称: sub_541fd0
// 虚拟地址: 0x541fd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_541fd0(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a30c6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_d4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* lpPerformanceCount_9 = arg4
    int32_t var_14_1 = 0
    char* const result_7 = &data_5b2591
    int32_t esi = *arg3
    char* result_3
    char* result_4 = result_3
    void* lpPerformanceCount = arg2
    
    if (result_4 != 0)
        result_7 = result_4
    
    int32_t var_dc = esi
    char* const result_10 = result_7
    void* result_1
    sub_48a9d0(&result_1, "%s-%s-%d.png")
    var_14_1.b = 1
    char* const result_8 = &data_5b2591
    char* result_5 = result_3
    lpPerformanceCount = arg2
    
    if (result_5 != 0)
        result_8 = result_5
    
    int32_t var_dc_1 = esi
    char* const result_11 = result_8
    char* result_2
    sub_48a9d0(&result_2, "%s-%s-%d.texture")
    int32_t i_1 = 0
    int128_t var_80
    __builtin_memset(&var_80, 0, 0x1c)
    var_14_1.b = 3
    int64_t xmm0 = 0
    int32_t var_54 = 0
    int32_t var_50 = 1
    int32_t var_40 = 0x1000
    int32_t eax_4 = sub_5234e0(0x1000, 1)
    lpPerformanceCount = 1
    void* lpPerformanceCount_1 = sub_5235a0(eax_4, 0x1000, 0x1000, lpPerformanceCount)
    void* lpPerformanceCount_10 = lpPerformanceCount_1
    void* lpPerformanceCount_2 = sub_4c2e40(lpPerformanceCount_1)
    lpPerformanceCount = lpPerformanceCount_1
    _memset(lpPerformanceCount_2, 0, lpPerformanceCount)
    char* result_6 = result_2
    char* const result_9 = &data_5b2591
    
    if (result_6 != 0)
        result_9 = result_6
    
    int32_t* eax_5 = sub_4d0b50(result_9, 3)
    uint32_t var_a8
    lpPerformanceCount = &var_a8
    QueryPerformanceCounter(lpPerformanceCount)
    uint32_t eax_6 = var_a8
    int32_t var_34 = arg3[5]
    int32_t var_30 = arg3[6]
    int32_t* eax_9 = sub_498440(0x10)
    eax_9[3] += 1
    int32_t* ecx_3 = *eax_9
    
    if (ecx_3 == 0)
        sub_4982d0(eax_9)
        ecx_3 = *eax_9
    
    int32_t* lpPerformanceCount_13 = lpPerformanceCount_9
    *eax_9 = *ecx_3
    *ecx_3 = 0
    ecx_3[1] = 0
    ecx_3[2] = 0
    ecx_3[3] = 0
    int32_t eax_11 = lpPerformanceCount_13[1]
    int96_t var_70
    var_70.d = ecx_3
    var_80:0xc.d = ecx_3
    int32_t* ecx_5 = *lpPerformanceCount_13
    lpPerformanceCount = sub_53eed0
    var_70:4.d = 1
    int32_t var_84_1 = 0
    sub_5444d0(eax_11, &ecx_5[eax_11], ecx_5, eax_11, lpPerformanceCount)
    int32_t eax_12 = lpPerformanceCount_13[1]
    int32_t esi_3 = 0
    
    if (eax_12 s> 0)
        int32_t* lpPerformanceCount_5
        int32_t edi_4
        
        while (true)
            if (esi_3 s< 0 || esi_3 s>= eax_12)
                lpPerformanceCount = "XArray<struct XAsset *>::GetAt"
                sub_489550(eax_12, &data_5b2591, "index >= 0 && index < mSize", 
                    "d:\ax\trunk\ax2017\engine\xarray.h", 0xae, lpPerformanceCount)
                
                if (IsDebuggerPresent() != 1)
                    sub_489700()
                    noreturn
                
                breakpoint
            
            int32_t* edi_2 = *(*lpPerformanceCount_13 + (esi_3 << 2))
            int32_t eax_14 = edi_2[1]
            int32_t eax_15
            
            if (eax_14 != 3)
                if (eax_14 == 0x12)
                    eax_15 = sub_540140(edi_2, &var_80)
                    goto label_5421e8
                
                void* lpPerformanceCount_11 = edi_2[8]
                void* lpPerformanceCount_4 = &data_5b2591
                
                if (lpPerformanceCount_11 != 0)
                    lpPerformanceCount_4 = lpPerformanceCount_11
                
                lpPerformanceCount = lpPerformanceCount_4
                sub_4892e0("AtlasMaker: I don't handle this asset type yet %s")
                edi_4 = var_84_1
            else
                eax_15 = sub_53f830(edi_2, &var_80)
            label_5421e8:
                
                if (eax_15 != 2)
                    if (eax_15 == 1)
                        int32_t edx_3 = arg5[1]
                        
                        if (edx_3 s>= arg5[2])
                            lpPerformanceCount = "XArray<struct XAsset *>::Append"
                            sub_489550(eax_15, &data_5b2591, "mSize < mSizeReserved", 
                                "d:\ax\trunk\ax2017\engine\xarray.h", 0x96, lpPerformanceCount)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        *(*arg5 + (edx_3 << 2)) = edi_2
                        arg5[1] += 1
                    
                    edi_4 = var_84_1
                else
                    edi_4 = var_84_1 + 1
                    var_84_1 = edi_4
            lpPerformanceCount_5 = lpPerformanceCount_9
            esi_3 += 1
            eax_12 = lpPerformanceCount_5[1]
            
            if (esi_3 s>= eax_12)
                break
            
            lpPerformanceCount_13 = lpPerformanceCount_5
            continue
        
        if (edi_4 s> 0)
            uint32_t esi_4
            uint32_t edi_5
            
            if (data_1150c9c == 0)
                esi_4 = 8
                edi_5 = 8
                
                if (xmm0.d s> 8)
                    edi_5 = xmm0.d
                
                if (xmm0:4.d s> 8)
                    esi_4 = xmm0:4.d
            else
                lpPerformanceCount_5 = xmm0:4.d
                edi_5 = sub_426d50(xmm0.d)
                esi_4 = sub_426d50(lpPerformanceCount_5)
            
            void* lpPerformanceCount_3 = result_1
            lpPerformanceCount = lpPerformanceCount_5
            lpPerformanceCount = lpPerformanceCount_3
            
            if (lpPerformanceCount_3 != 0 && *lpPerformanceCount_3 != 0)
                char* eax_19 = sub_48a080(&lpPerformanceCount)
                *(eax_19 + 4) += 1
            
            var_14_1.b = 4
            char* eax_21 = *sub_4d1ba0(&lpPerformanceCount_9)
            char* edx_4 = &data_5b2591
            
            if (eax_21 != 0)
                edx_4 = eax_21
            
            char* lpPerformanceCount_14
            sub_4e5530(&lpPerformanceCount_14, edx_4)
            var_14_1.b = 7
            
            if (data_aca1f4 != 0)
                int32_t* lpPerformanceCount_15 = lpPerformanceCount_9
                
                if (lpPerformanceCount_15 != 0 && *lpPerformanceCount_15 != 0)
                    char* eax_22 = sub_48a080(&lpPerformanceCount_9)
                    int32_t temp0_1 = *(eax_22 + 4)
                    *(eax_22 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                        lpPerformanceCount_9 = &data_5b2591
            
            var_14_1.b = 6
            char* const lpPerformanceCount_19 = &data_5b2591
            char* lpPerformanceCount_16 = lpPerformanceCount_14
            
            if (lpPerformanceCount_16 != 0)
                lpPerformanceCount_19 = lpPerformanceCount_16
            
            sub_4cf720(lpPerformanceCount_19)
            char* lpPerformanceCount_17 = lpPerformanceCount_14
            var_a8 = esi_4
            char* lpPerformanceCount_20 = &data_5b2591
            
            if (lpPerformanceCount_17 != 0)
                lpPerformanceCount_20 = lpPerformanceCount_17
            
            uint32_t var_ac = edi_5
            int32_t var_a0 = var_50
            int32_t var_a4 = eax_4
            void* lpPerformanceCount_8 = lpPerformanceCount_2
            
            if (sub_56d600(&lpPerformanceCount_8, lpPerformanceCount_20) == 0)
                char* lpPerformanceCount_12 = lpPerformanceCount_14
                char* lpPerformanceCount_6 = &data_5b2591
                
                if (lpPerformanceCount_12 != 0)
                    lpPerformanceCount_6 = lpPerformanceCount_12
                
                lpPerformanceCount = lpPerformanceCount_6
                sub_4892e0("AtlasMaker: failed to png write %s")
            
            if (lpPerformanceCount_2 != 0)
                lpPerformanceCount = lpPerformanceCount_2
                _aligned_free_base(lpPerformanceCount)
            
            int32_t i = i_1
            
            if (i != 0)
                int32_t* esi_6 = var_70:8.d
                
                do
                    int32_t* eax_26 = esi_6[5]
                    int32_t* ecx_16 = esi_6
                    esi_6 = eax_26
                    var_70:8.d = esi_6
                    
                    if (eax_26 == 0)
                        var_70:0xc.d = 0
                    else
                        esi_6[6] = 0
                    
                    i -= 1
                    int32_t i_2 = i
                    lpPerformanceCount_8.o = *ecx_16
                    sub_4984f0(ecx_16, 0x1c)
                    void* lpPerformanceCount_7 = _mm_bsrli_si128(lpPerformanceCount_8.o, 8)
                    
                    if (lpPerformanceCount_7 != 0)
                        lpPerformanceCount = lpPerformanceCount_7
                        _aligned_free_base(lpPerformanceCount)
                while (i != 0)
            
            int32_t eax_28 = sub_4d0720(eax_5)
            lpPerformanceCount = nullptr
            char** eax_29 = sub_4d0ff0(eax_28, 1, eax_5, lpPerformanceCount.b)
            
            if (eax_5[1] != 3)
                lpPerformanceCount = "TextureGetDef"
                sub_489550(eax_29, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                    "d:\ax\trunk\ax2017\engine\texture.h", 0x86, lpPerformanceCount)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            *(*sub_4981f0(eax_5) + 0x30) = eax_6
            sub_4c7a40(eax_5)
            var_14_1.b = 8
            
            if (data_aca1f4 != 0)
                char* lpPerformanceCount_18 = lpPerformanceCount_14
                
                if (lpPerformanceCount_18 != 0 && *lpPerformanceCount_18 != 0)
                    char* eax_32 = sub_48a080(&lpPerformanceCount_14)
                    int32_t temp1_1 = *(eax_32 + 4)
                    *(eax_32 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                        lpPerformanceCount_14 = &data_5b2591
            
            char* result = sub_540740(&var_80)
            var_14_1.b = 9
            
            if (data_aca1f4 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_2)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
                        result_2 = &data_5b2591
            
            var_14_1.b = 0xa
            
            if (data_aca1f4 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_1)
                    int32_t temp3_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp3_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
                        result_1 = &data_5b2591
            
            int32_t var_14_2 = 0xb
            
            if (data_aca1f4 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_3)
                    int32_t temp4_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp4_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
    
    lpPerformanceCount = "AtlasMakerPlacePage"
    sub_489550(eax_12, &data_5b2591, "imagesOnPage > 0", 
        "d:\ax\trunk\ax2017\engine\editor\atlasmaker.cpp", 0x5b5, lpPerformanceCount)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
