// 函数名称: sub_4af940
// 虚拟地址: 0x4af940
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4af940(int32_t arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f5e6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    __alloca_probe(0x1060)
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_24 = eax_2
    int32_t var_2c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result_17 = arg2
    void* result_16 = result_17
    int32_t ecx = *result_17
    
    if (ecx == 0)
        sub_489550(result_17, &data_5b2591, "id != DATAID_NULL", 
            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t edx = zx.d(ecx.w)
    
    if (edx u< data_63e5ac)
        int32_t esi = data_63e5a8
        result_17 = edx * 0x1418
        
        if (*(result_17 + esi + 0x1410) == ecx)
            char* const edi = &data_5b2591
            char* eax_4 = *(edx * 0x1418 + esi + 0xfd8)
            char* const esi_1 = &data_5b2591
            
            if (eax_4 != 0)
                esi_1 = eax_4
            
            char* result_3
            sub_48a2c0(&result_3, "stateValue")
            char* result = result_3
            char* const result_4 = &data_5b2591
            char* const edx_1 = esi_1
            
            if (result != 0)
                result_4 = result
            
            char* result_2
            
            while (true)
                result.b = *result_4
                char temp0_1 = *edx_1
                bool c_1 = result.b u< temp0_1
                bool z_1 = result.b == temp0_1
                char var_1055_1 = result.b
                result = result_3
                
                if (z_1)
                    if (var_1055_1 == 0)
                        result_2 = nullptr
                        break
                    
                    result.b = result_4[1]
                    char temp1_1 = edx_1[1]
                    c_1 = result.b u< temp1_1
                    bool z_2 = result.b == temp1_1
                    char var_1055_2 = result.b
                    result = result_3
                    
                    if (z_2)
                        result_4 = &result_4[2]
                        edx_1 = &edx_1[2]
                        
                        if (var_1055_2 != 0)
                            continue
                        
                        result_2 = nullptr
                        break
                
                result_2 = sbb.d(result_4, result_4, c_1) | 1
                break
            
            int32_t var_14_1 = 0
            
            if (data_aca1f4 != 0 && result != 0 && *result != 0)
                result = sub_48a080(&result_3)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                    result_3 = &data_5b2591
            
            int32_t var_14_2 = 0xffffffff
            
            if (result_2 != 0)
                sub_48a2c0(&result_3, "propValue")
                result = result_3
                char* const result_5 = &data_5b2591
                
                if (result != 0)
                    result_5 = result
                
                int32_t esi_3
                
                while (true)
                    char edx_4 = *result_5
                    char temp3_1 = *esi_1
                    bool c_2 = edx_4 u< temp3_1
                    
                    if (edx_4 == temp3_1)
                        if (edx_4 == 0)
                            esi_3 = 0
                            break
                        
                        edx_4 = result_5[1]
                        char temp4_1 = esi_1[1]
                        c_2 = edx_4 u< temp4_1
                        
                        if (edx_4 == temp4_1)
                            result_5 = &result_5[2]
                            esi_1 = &esi_1[2]
                            
                            if (edx_4 != 0)
                                continue
                            
                            esi_3 = 0
                            break
                    
                    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
                    break
                
                int32_t var_14_3 = 1
                
                if (data_aca1f4 != 0 && result != 0 && *result != 0)
                    result = sub_48a080(&result_3)
                    int32_t temp5_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp5_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
                        result_3 = &data_5b2591
                
                int32_t var_14_4 = 0xffffffff
                
                if (esi_3 == 0)
                    void* result_21 = result_16
                    
                    if (data_643654 s<= 0)
                        sub_489550(result, &data_5b2591, "gUI2Editor.s.activeSetCount > 0", 
                            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2dd1, "UI2EditorCommit")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    char* eax_5 = sub_4a7d60(data_642654)
                    int32_t edx_7 = data_643660
                    void var_1080
                    int128_t* var_30_1 = &var_1080
                    char* var_104c = eax_5
                    int128_t* eax_6 = sub_4add30(eax_5, edx_7, *(eax_5 + 0x1410), var_30_1)
                    char* ecx_11 = var_104c
                    int32_t var_1070_1 = eax_6[1].d
                    char* result_13 = _mm_bsrli_si128(*eax_6, 4)
                    *(ecx_11 + 0xe24) = 0
                    result_3 = result_13
                    result = sub_4a9e30(ecx_11, result_13)
                    char* result_11 = result_3
                    int32_t* result_1 = result
                    
                    if (&result_11[0xffffff9c] u<= 0x96)
                        uint32_t ecx_13 = zx.d(*(result_11 + 0x4b030c))
                        uint32_t var_1064
                        float var_1048
                        int128_t var_1038
                        void** eax_18
                        char** ecx_22
                        int32_t ecx_24
                        char* result_12
                        char* result_15
                        
                        switch (ecx_13)
                            case 0
                                var_104c = &data_5b2591
                                int32_t var_14_5 = 2
                                char* ecx_19 = &data_5b2591
                                char* eax_8 = *(result_21 + 8)
                                
                                if (eax_8 != 0)
                                    ecx_19 = eax_8
                                
                                char** eax_9 = sub_48a5e0(&var_104c, ecx_19)
                                char* esi_5 = var_104c
                                
                                if (esi_5 != 0)
                                    edi = esi_5
                                
                                char* const var_30_4 = edi
                                sub_4f0a90(eax_9, result_1, &data_6218dc, result_3)
                                result = sub_4a7e20(1)
                                int32_t var_14_6 = 3
                                
                                if (data_aca1f4 != 0 && esi_5 != 0 && *esi_5 != 0)
                                    ecx_22 = &var_104c
                                label_4afc8f:
                                    result = sub_48a080(ecx_22)
                                    int32_t temp8_1 = *(result + 4)
                                    *(result + 4) -= 1
                                    
                                    if (temp8_1 == 1)
                                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
                            case 1
                                char* eax_24 = *(result_21 + 8)
                                int32_t var_1040_1 = 0
                                
                                if (eax_24 != 0)
                                    edi = eax_24
                                
                                float* var_30_13 = &var_1048
                                var_1048 = edi
                                sub_4f0a90(&var_1048, result_1, &data_6218dc, result_11)
                                result = sub_4a7e20(1)
                            case 2
                                void* eax_30 = *(result_21 + 8)
                                void* ecx_40 = &data_5b2591
                                
                                if (eax_30 != 0)
                                    ecx_40 = eax_30
                                
                                char* const eax_31 = &data_5b2591
                                
                                while (true)
                                    result_11.b = *ecx_40
                                    char temp6_1 = *eax_31
                                    bool c_3 = result_11.b u< temp6_1
                                    
                                    if (result_11.b == temp6_1)
                                        if (result_11.b == 0)
                                            result = nullptr
                                            break
                                        
                                        result_11.b = *(ecx_40 + 1)
                                        char temp7_1 = eax_31[1]
                                        c_3 = result_11.b u< temp7_1
                                        
                                        if (result_11.b == temp7_1)
                                            ecx_40 += 2
                                            eax_31 = &eax_31[2]
                                            
                                            if (result_11.b != 0)
                                                continue
                                            
                                            result = nullptr
                                            break
                                    
                                    result = sbb.d(eax_31, eax_31, c_3) | 1
                                    break
                                
                                if (result != 0)
                                    result = sub_4a9c40(var_104c)
                                    
                                    if (result != 0)
                                        int32_t var_14_7 = 4
                                        int32_t var_30_17 = sub_48a320(&result_2, *result)
                                        int32_t var_1028[0x3f9]
                                        uint32_t eax_33 = sub_4af4a0(var_104c, &var_1028)
                                        void* result_18 = nullptr
                                        var_1064 = eax_33
                                        result_16 = nullptr
                                        
                                        if (eax_33 s> 0)
                                            do
                                                void* eax_34 = var_1028[result_18]
                                                var_1038:0xc.d = eax_34
                                                
                                                if (sub_4a9a50(eax_34, result_21 + 8) == 0)
                                                    void* eax_36 = sub_4a9a50(var_1038:0xc.d, &result_2)
                                                    
                                                    if (eax_36 != 0)
                                                        char* ecx_48 = *(result_21 + 8)
                                                        char* edx_24 = &data_5b2591
                                                        
                                                        if (ecx_48 != 0)
                                                            edx_24 = ecx_48
                                                        
                                                        sub_4ceb40(eax_36, edx_24)
                                                
                                                result_18 = result_16 + 1
                                                result_16 = result_18
                                            while (result_18 s< var_1064)
                                        
                                        sub_4af530(var_104c, result_21 + 8)
                                        result = sub_4a7e20(1)
                                        int32_t var_14_8 = 5
                                        
                                        if (data_aca1f4 != 0)
                                            result = result_2
                                            
                                            if (result != 0 && *result != 0)
                                                ecx_22 = &result_2
                                                goto label_4afc8f
                            case 3
                                char* ecx_14 = *(result_21 + 8)
                                
                                if (ecx_14 != 0)
                                    edi = ecx_14
                                
                                char* const var_30_2 = edi
                                result = sub_4af7e0(result, result, var_104c, result_11, data_643660)
                            case 4
                                char* eax_19 = *(result_21 + 8)
                                var_1038 = zx.o(0)
                                
                                if (eax_19 != 0)
                                    edi = eax_19
                                
                                void* var_30_10 = &var_1038:0xc
                                void* var_34_9 = &var_1038:8
                                void* var_38_6 = &var_1038:4
                                int128_t* var_3c_2 = &var_1038
                                result = sub_48d8d0(&var_1038, result_11, ecx_13, edi, " %f %f %f %f")
                                
                                if (result == 4)
                                    result_12 = result_3
                                    
                                    if (result_12 != 0x7d)
                                        eax_18 = &var_1038
                                        goto label_4afe1c
                                    
                                    sub_498790(&var_104c[0xc], *(data_114e818 + 0x2c), &var_1048)
                                    var_1038 = *sub_4be720(&var_1080, &var_1048, &var_1038, &var_1080)
                                    result = sub_41f090(&var_1038, &data_5d2770)
                                    
                                    if (result.b == 0)
                                        float xmm1_2 = var_1048
                                        float var_1040
                                        float xmm3_2 = var_1040 - xmm1_2
                                        float var_1044
                                        float var_103c
                                        float xmm4_2 = var_103c - var_1044
                                        var_1038.d = (var_1038.d - xmm1_2) / xmm3_2
                                        var_1038:4.d = (var_1038:4.d - var_1044) / xmm4_2
                                        var_1038:8.d = (var_1038:8.d - xmm1_2) / xmm3_2
                                        var_1038:0xc.d = (var_1038:0xc.d - var_1044) / xmm4_2
                                        eax_18 = &var_1038
                                        goto label_4afe1c
                            case 5
                                char* eax_12 = *(result_21 + 8)
                                
                                if (eax_12 != 0)
                                    edi = eax_12
                                
                                char** var_30_6 = &result_2
                                result, ecx_24 =
                                    sub_48d8d0(&result_2, result_11, ecx_13, edi, &data_5f3188)
                                
                                if (result == 1)
                                    char* result_14 = sub_41f780(result_2, (zx.o(0)).d, 0x3f800000)
                                    result_2 = result_14
                                    result_15 = result_14
                                    goto label_4afcea
                            case 6
                                char* eax_14 = *(result_21 + 8)
                                result_2 = nullptr
                                
                                if (eax_14 != 0)
                                    edi = eax_14
                                
                                char** var_30_7 = &result_2
                                result = sub_48d8d0(&result_2, result_11, ecx_13, edi, &data_5f31c4)
                                
                                if (result == 1)
                                    char* result_7 = result_2
                                    sub_4f0a90(result, result_1, &data_6218dc, result_3)
                                    result = sub_4a7e20(1)
                            case 7
                                char* eax_10 = *(result_21 + 8)
                                
                                if (eax_10 != 0)
                                    edi = eax_10
                                
                                void** var_30_5 = &result_16
                                result, ecx_24 =
                                    sub_48d8d0(&result_16, result_11, ecx_13, edi, &data_5f3188)
                                
                                if (result == 1)
                                    result_15 = result_16
                                label_4afcea:
                                    char* result_6 = result_3
                                    sub_4f0b10(result, result_1, result_15, ecx_24)
                                    result = sub_4a7e20(1)
                            case 8
                                char* eax_28 = *(result_21 + 8)
                                
                                if (eax_28 != 0)
                                    edi = eax_28
                                
                                result = sub_4dfc80(edi)
                                
                                if (result != 0)
                                    int32_t* eax_29 = sub_4d0b50(edi, result)
                                    int32_t* var_30_15 = eax_29
                                    sub_4f0a90(eax_29, result_1, &data_6218dc, result_3)
                                    result = sub_4a7e20(1)
                            case 9
                                char* eax_16 = *(result_21 + 8)
                                
                                if (eax_16 != 0)
                                    edi = eax_16
                                
                                var_1038:8.d = 0
                                void* var_30_8 = &var_1038:0xc
                                var_1038:0xc.d = 0
                                void* var_34_7 = &var_1038:8
                                result = sub_48d8d0(&var_1038:8, result_11, ecx_13, edi, " %f %f")
                                
                                if (result == 2)
                                    goto label_4afe10
                                
                                if (result == 1)
                                    int32_t xmm0_3 = var_1038:8.d
                                    var_1038:8.d = xmm0_3
                                    var_1038:0xc.d = xmm0_3
                                label_4afe10:
                                    eax_18 = &var_1038:8
                                label_4afe16:
                                    result_12 = result_3
                                label_4afe1c:
                                    void** var_30_9 = eax_18
                                    sub_4f0a90(eax_18, result_1, &data_6218dc, result_12)
                                    result = sub_4a7e20(1)
                            case 0xa
                                char* eax_25 = *(result_21 + 8)
                                
                                if (eax_25 != 0)
                                    edi = eax_25
                                
                                char eax_26
                                int32_t ecx_33
                                int32_t edx_18
                                eax_26, ecx_33, edx_18 = sub_4ae8c0(edi, &var_104c)
                                
                                if (eax_26 != 0)
                                    eax_18 = &var_104c
                                    goto label_4afe16
                                
                                void* var_30_14 = &var_1038:0xc
                                void** var_34_10 = &result_16
                                uint32_t* var_38_7 = &var_1064
                                char** var_3c_3 = &result_2
                                result = sub_48d8d0(&result_2, edx_18, ecx_33, edi, " %d %d %d %d")
                                
                                if (result == 4)
                                    char* result_9 = result_2
                                    
                                    if (result_9 s< 0)
                                        result_9 = nullptr
                                    else if (result_9 s> 0xff)
                                        result_9 = 0xff
                                    
                                    var_104c.b = result_9.b
                                    uint32_t ecx_34 = var_1064
                                    
                                    if (ecx_34 s< 0)
                                        ecx_34 = 0
                                    else if (ecx_34 s> 0xff)
                                        ecx_34 = 0xff
                                    
                                    var_104c:1.b = ecx_34.b
                                    void* result_19 = result_16
                                    
                                    if (result_19 s< 0)
                                        result_19 = nullptr
                                    else if (result_19 s> 0xff)
                                        result_19 = 0xff
                                    
                                    var_104c:2.b = result_19.b
                                    int32_t ecx_35 = var_1038:0xc.d
                                    
                                    if (ecx_35 s>= 0)
                                        if (ecx_35 s> 0xff)
                                            ecx_35 = 0xff
                                        
                                        eax_18 = &var_104c
                                        var_104c:3.b = ecx_35.b
                                    else
                                        eax_18 = &var_104c
                                        var_104c:3.b = 0
                                    
                                    goto label_4afe16
                                
                                if (result == 3)
                                    char* result_10 = result_2
                                    
                                    if (result_10 s< 0)
                                        result_10 = nullptr
                                    else if (result_10 s> 0xff)
                                        result_10 = 0xff
                                    
                                    var_104c.b = result_10.b
                                    uint32_t ecx_36 = var_1064
                                    
                                    if (ecx_36 s< 0)
                                        ecx_36 = 0
                                    else if (ecx_36 s> 0xff)
                                        ecx_36 = 0xff
                                    
                                    var_104c:1.b = ecx_36.b
                                    void* result_20 = result_16
                                    
                                    if (result_20 s>= 0)
                                        var_104c:3.b = 0xff
                                        
                                        if (result_20 s> 0xff)
                                            result_20 = 0xff
                                        
                                        eax_18 = &var_104c
                                        var_104c:2.b = result_20.b
                                    else
                                        var_104c:3.b = 0xff
                                        var_104c:2.b = 0
                                        eax_18 = &var_104c
                                    
                                    goto label_4afe16
                                
                                if (result == 1)
                                    char* result_8 = result_2
                                    
                                    if (result_8 s< 0)
                                        result_8 = nullptr
                                    else if (result_8 s> 0xff)
                                        result_8 = 0xff
                                    
                                    var_104c.b = result_8.b
                                    var_104c:1.b = result_8.b
                                    var_104c:2.b = result_8.b
                                    var_104c:3.b = 0xff
                                    eax_18 = &var_104c
                                    goto label_4afe16
            
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(arg1 ^ &__saved_ebp)
            return result
    
    sub_489550(result_17, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
