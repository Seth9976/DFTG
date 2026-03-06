// 函数名称: sub_4d3a70
// 虚拟地址: 0x4d3a70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_4d3a70(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0258
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_24 = arg2
    int32_t* var_5c
    
    if (data_621f8c == 0)
        var_5c = "AssetUtilImportSource"
        sub_489550(&ExceptionList, &data_5b2591, "gCompilingMode", 
            "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x179, var_5c)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_40
    var_5c = &var_40
    QueryPerformanceCounter(var_5c)
    int32_t var_48 = var_40
    int32_t var_3c
    int32_t var_44 = var_3c
    
    if (arg4 u> 0x24)
        var_5c = "AssetTypeGetInfo"
        sub_489550(var_3c, &data_5b2591, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
            "d:\ax\trunk\ax2017\engine\assettyperegistry.cpp", 0xbc, var_5c)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_7 = data_114ec7c + (arg4 << 5)
    char* eax_8 = *(eax_7 + 0x1c)
    int32_t* eax_9 = sub_4d0b50(arg2, arg4)
    int32_t eax_10 = sub_4d0720(eax_9)
    var_5c = eax_9
    
    if (arg2 == 0)
        sub_489550(eax_10, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_5c, arg2)
    char* var_1c
    sub_4e6560(&var_1c, arg4)
    int32_t var_8_1 = 0
    char* const var_18 = &data_5b2591
    var_8_1.b = 1
    char* eax_11 = var_1c
    char* eax_16
    int32_t* ecx_13
    int32_t** edi_1
    
    if (eax_11 != 0 && *eax_11 != 0)
        var_5c = eax_11
        
        if (GetFileAttributesA(var_5c) == 0xffffffff)
            edi_1 = sub_4d30b0(arg4)
        label_4d3bd6:
            var_5c = arg3
            ecx_13 = sub_48a5e0(&var_18, var_5c)
            goto label_4d3bdf
        
        char* eax_13 = var_1c
        char* const edx_3 = &data_5b2591
        
        if (eax_13 != 0)
            edx_3 = eax_13
        
        edi_1 = sub_4d82a0(eax_8, edx_3)
        
        if (edi_1 != 0)
            goto label_4d3bd6
        
        char* eax_15 = var_1c
        char* const edx_4 = &data_5b2591
        
        if (eax_15 != 0)
            edx_4 = eax_15
        
        var_5c = edx_4
        char* var_60_1 = arg2
        sub_4892e0("reimport %s failed to read: '%s'")
        int32_t var_8_2 = 3
    else
        char* const esi_1
        
        if (arg4 != 0x23)
            if (arg4 == 0x18)
                var_5c = arg3
                sub_48a5e0(&var_18, var_5c)
                int32_t** eax_21
                eax_21, ecx_13 = sub_4d30b0(arg4)
                edi_1 = eax_21
                goto label_4d3bdf
            
            int32_t** eax_22
            int32_t xmm0_2[0x4]
            eax_22, xmm0_2 = sub_4d82a0(eax_8, arg3)
            edi_1 = eax_22
            
            if (edi_1 != 0)
                if (arg4 == 0x19 || arg4 == 5)
                    goto label_4d3bd6
                
                int32_t* eax_24 = sub_4d64f0(edi_1[1], "importSourcePath")
                char* var_20
                char* esi_2
                
                if (eax_24 == 0)
                    sub_48a2c0(&var_20, &data_5b2591)
                    esi_2 = var_20
                else
                    esi_2 = eax_24[1]
                    var_20 = esi_2
                    
                    if (esi_2 != 0 && *esi_2 != 0)
                        char* eax_25 = sub_48a080(&var_20)
                        *(eax_25 + 4) += 1
                
                var_8_1.b = 6
                var_5c = &var_20
                ecx_13 = sub_48a560(&var_18, var_5c)
                var_8_1.b = 7
                
                if (data_aca1f4 != 0 && esi_2 != 0 && *esi_2 != 0)
                    ecx_13 = &var_20
                    char* eax_26 = sub_48a080(ecx_13)
                    int32_t temp4_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        ecx_13 = sub_4984f0(eax_26, *(eax_26 + 0xc) + 0x10)
                
                var_8_1.b = 1
                esi_1 = var_18
                
                if (esi_1 == 0 || *esi_1 == 0)
                    goto label_4d3be5
                
                var_5c = ecx_13
                var_5c = esi_1
                
                if (*esi_1 != 0)
                    char* eax_27 = sub_48a080(&var_5c)
                    *(eax_27 + 4) += 1
                
                sub_4d3250(&var_20)
                var_8_1.b = 8
                char* eax_28 = var_20
                char* edx_12 = &data_5b2591
                
                if (eax_28 != 0)
                    edx_12 = eax_28
                
                char* var_28
                var_5c = sub_4e5530(&var_28, edx_12)
                var_8_1.b = 9
                ecx_13 = sub_48a560(&var_18, var_5c)
                var_8_1.b = 0xa
                
                if (data_aca1f4 != 0)
                    char* eax_30 = var_28
                    
                    if (eax_30 != 0 && *eax_30 != 0)
                        ecx_13 = &var_28
                        char* eax_31 = sub_48a080(ecx_13)
                        int32_t temp8_1 = *(eax_31 + 4)
                        *(eax_31 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            ecx_13 = sub_4984f0(eax_31, *(eax_31 + 0xc) + 0x10)
                            var_28 = &data_5b2591
                
                var_8_1.b = 0xb
                
                if (data_aca1f4 != 0)
                    char* eax_32 = var_20
                    
                    if (eax_32 != 0 && *eax_32 != 0)
                        ecx_13 = &var_20
                        char* eax_33 = sub_48a080(ecx_13)
                        int32_t temp9_1 = *(eax_33 + 4)
                        *(eax_33 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            ecx_13 = sub_4984f0(eax_33, *(eax_33 + 0xc) + 0x10)
                            var_20 = &data_5b2591
                
                var_8_1.b = 1
                goto label_4d3bdf
            
            var_5c = "sys\failureasset"
            
            if (_strstr(xmm0_2, arg3, var_5c) == 0)
                var_5c = arg3
                char* var_60_4 = arg2
                sub_4892e0("reimport %s failed to read: '%s'")
            
            int32_t var_8_4 = 5
        else
            var_5c = arg3
            sub_48a5e0(&var_18, var_5c)
            int32_t** eax_20
            eax_20, ecx_13 = sub_4d30b0(arg4)
            edi_1 = eax_20
        label_4d3bdf:
            esi_1 = var_18
        label_4d3be5:
            
            if (*(eax_7 + 0xc) == 0)
            label_4d3f1f:
                var_5c = ecx_13
                sub_48a320(&var_5c, var_24)
                sub_4d1630(arg4, edi_1)
                int32_t eax_39 = *(eax_7 + 4)
                
                if (eax_39 != 0)
                    var_5c = *edi_1
                    eax_39(var_24, var_5c, eax_2)
                
                eax_16 = sub_4c7a40(eax_9)
                
                if (eax_16.b != 0)
                    var_5c = sub_498220(&var_48)
                    int32_t* var_60_8 = arg3
                    sub_4892e0("Imported source asset %s %d ms")
                    var_8_1.b = 0x14
                    char* eax_41
                    
                    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                        eax_41 = sub_48a080(&var_18)
                        int32_t temp2_1 = *(eax_41 + 4)
                        *(eax_41 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_4984f0(eax_41, *(eax_41 + 0xc) + 0x10)
                    
                    int32_t var_8_8 = 0x15
                    
                    if (data_aca1f4 != 0)
                        eax_41 = var_1c
                        
                        if (eax_41 != 0 && *eax_41 != 0)
                            eax_41 = sub_48a080(&var_1c)
                            int32_t temp5_1 = *(eax_41 + 4)
                            *(eax_41 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_4984f0(eax_41, *(eax_41 + 0xc) + 0x10)
                    
                    eax_41.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_41
                
                var_8_1.b = 0x12
                
                if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != eax_16.b)
                    eax_16 = sub_48a080(&var_18)
                    int32_t temp3_1 = *(eax_16 + 4)
                    *(eax_16 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                
                int32_t var_8_7 = 0x13
            else if (esi_1 == 0 || *esi_1 == 0)
                sub_4ceb00(edi_1)
                var_5c = var_24
                sub_4892e0("reimport failed because no source path: '%s'")
                var_8_1.b = 0xc
                
                if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                    eax_16 = sub_48a080(&var_18)
                    int32_t temp1_1 = *(eax_16 + 4)
                    *(eax_16 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                
                int32_t var_8_6 = 0xd
            else
                var_5c = esi_1
                uint32_t eax_19
                int32_t* ecx_14
                eax_19, ecx_14 = GetFileAttributesA(var_5c)
                
                if (eax_19 != 0xffffffff)
                    var_5c = ecx_14
                    var_5c = esi_1
                    
                    if (*esi_1 != 0)
                        char* eax_34 = sub_48a080(&var_5c)
                        *(eax_34 + 4) += 1
                    
                    char eax_37
                    eax_37, ecx_13 = (*(eax_7 + 0xc))(var_24, edi_1)
                    
                    if (eax_37 != 0)
                        goto label_4d3f1f
                    
                    sub_4ceb00(edi_1)
                    var_5c = var_24
                    sub_4892e0("reimport failed: '%s'")
                    var_8_1.b = 0x10
                    
                    if (data_aca1f4 != 0 && *esi_1 != 0)
                        eax_16 = sub_48a080(&var_18)
                        int32_t temp7_1 = *(eax_16 + 4)
                        *(eax_16 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                    
                    int32_t var_8_5 = 0x11
                else
                    int32_t xmm0_1[0x4] = sub_4ceb00(edi_1)
                    var_5c = "sys\failureasset"
                    
                    if (_strstr(xmm0_1, arg3, var_5c) == 0)
                        var_5c = esi_1
                        sub_4892e0("reimport failed because file doesn't exist: '%s'")
                    
                    var_8_1.b = 0xe
                    
                    if (data_aca1f4 != 0 && *esi_1 != 0)
                        eax_16 = sub_48a080(&var_18)
                        int32_t temp6_1 = *(eax_16 + 4)
                        *(eax_16 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                    
                    int32_t var_8_3 = 0xf
    
    if (data_aca1f4 != 0)
        eax_16 = var_1c
        
        if (eax_16 != 0 && *eax_16 != 0)
            eax_16 = sub_48a080(&var_1c)
            int32_t temp0_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
    
    eax_16.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16
}
