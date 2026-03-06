// 函数名称: sub_4e6020
// 虚拟地址: 0x4e6020
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4e6020(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0d82
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const esi = nullptr
    int32_t var_24 = 0
    int32_t var_8_1 = 1
    
    if (data_621f8c == 0)
        sub_489550(arg2, &data_5b2591, "gCompilingMode", "d:\ax\trunk\ax2017\engine\defload.cpp", 
            0x138, "AssetSourceGetFullPath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char const (** var_30)[0x5]
    char* const var_2c
    sub_4e5ed0(arg2, &var_30, arg2, &var_2c)
    char* const var_20
    char* var_1c
    char* arg_4
    
    if (var_2c == 0)
        sub_48a2c0(&var_1c, ".xml")
        var_8_1.b = 2
        var_8_1.b = 3
        char* const edx_1 = &data_5b2591
        char* eax_5 = *sub_48a860(&arg_4, &var_20, &var_1c)
        
        if (eax_5 != 0)
            edx_1 = eax_5
        
        sub_4e5530(arg1, edx_1)
        int32_t var_24_1 = 1
        var_8_1.b = 4
        
        if (data_aca1f4 != 0)
            char* eax_6 = var_20
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_48a080(&var_20)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                    var_20 = &data_5b2591
        
        var_8_1.b = 5
        
        if (data_aca1f4 != 0)
            char* eax_8 = var_1c
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_48a080(&var_1c)
                int32_t temp1_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
        
        int32_t var_8_2 = 6
        
        if (data_aca1f4 != 0)
            char* eax_10 = arg_4
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_48a080(&arg_4)
                int32_t temp2_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    char* eax_13 = arg_4
    char* const edi = &data_5b2591
    char* edx_8 = &data_5b2591
    
    if (eax_13 != 0)
        edx_8 = eax_13
    
    char* var_18
    sub_4d1a40(&var_18, edx_8)
    int32_t ebx_1 = 0
    var_8_1.b = 7
    char** edi_2
    char* var_28
    
    if (var_2c s<= 0)
    label_4e62e8:
        char const (** eax_24)[0x5] = var_30
        char const (* edx_17)[0x5] = *eax_24
        
        if (edx_17 == 0)
            sub_489550(eax_24, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_48a2c0(&var_28, edx_17)
        var_8_1.b = 0x13
        var_8_1.b = 0x14
        char* eax_30 = *sub_48a860(&var_18, &var_2c, &var_28)
        
        if (eax_30 != 0)
            edi = eax_30
        
        edi_2 = arg1
        sub_4e5530(edi_2, edi)
        int32_t var_24_5 = esi | 1
        var_8_1.b = 0x15
        
        if (data_aca1f4 != 0)
            char* eax_31 = var_2c
            
            if (eax_31 != 0 && *eax_31 != 0)
                char* eax_32 = sub_48a080(&var_2c)
                int32_t temp3_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                    var_2c = &data_5b2591
        
        var_8_1.b = 0x16
        
        if (data_aca1f4 != 0)
            char* eax_33 = var_28
            
            if (eax_33 != 0 && *eax_33 != 0)
                char* eax_34 = sub_48a080(&var_28)
                int32_t temp4_1 = *(eax_34 + 4)
                *(eax_34 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_4984f0(eax_34, *(eax_34 + 0xc) + 0x10)
        
        var_8_1.b = 0x17
        
        if (data_aca1f4 != 0)
            char* eax_35 = var_18
            
            if (eax_35 != 0 && *eax_35 != 0)
                char* eax_36 = sub_48a080(&var_18)
                int32_t temp6_1 = *(eax_36 + 4)
                *(eax_36 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_4984f0(eax_36, *(eax_36 + 0xc) + 0x10)
                    var_18 = &data_5b2591
        
        int32_t var_8_4 = 0x18
    else
        while (true)
            char const (** eax_14)[0x5] = var_30
            char* edx_9 = eax_14[ebx_1]
            
            if (edx_9 == 0)
                sub_489550(eax_14, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                    "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            sub_48a2c0(&var_28, edx_9)
            var_8_1.b = 9
            char* eax_15 = var_18
            var_1c = eax_15
            
            if (eax_15 != 0 && *eax_15 != 0)
                char* eax_16 = sub_48a080(&var_1c)
                *(eax_16 + 4) += 1
            
            char* esi_1 = esi | 2
            char* const eax_17 = &data_5b2591
            var_20 = esi_1
            char* edi_1 = var_28
            char* var_24_2 = esi_1
            
            if (edi_1 != 0)
                eax_17 = edi_1
            
            sub_48a670(&var_1c, eax_17)
            char* esi_2 = var_1c
            char* edx_10 = &data_5b2591
            
            if (esi_2 != 0)
                edx_10 = esi_2
            
            char* const lpFileName_2
            sub_4e5530(&lpFileName_2, edx_10)
            void* eax_19 = var_20 & 0xfffffffd
            var_20 = eax_19
            void* var_24_3 = eax_19
            var_8_1.b = 0xc
            
            if (data_aca1f4 != 0 && esi_2 != 0 && *esi_2 != 0)
                char* eax_20 = sub_48a080(&var_1c)
                int32_t temp5_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_4984f0(eax_20, *(eax_20 + 0xc) + 0x10)
                    var_1c = &data_5b2591
            
            var_8_1.b = 0xe
            
            if (data_aca1f4 != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_21 = sub_48a080(&var_28)
                int32_t temp7_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_4984f0(eax_21, *(eax_21 + 0xc) + 0x10)
                    var_28 = &data_5b2591
            
            var_8_1.b = 0xd
            edi = &data_5b2591
            char* const lpFileName_1 = lpFileName_2
            char* const lpFileName = &data_5b2591
            
            if (lpFileName_1 != 0)
                lpFileName = lpFileName_1
            
            if (GetFileAttributesA(lpFileName) != 0xffffffff)
                edi_2 = arg1
                char* const lpFileName_4 = lpFileName_2
                *edi_2 = lpFileName_4
                
                if (lpFileName_4 != 0 && *lpFileName_4 != 0)
                    char* eax_25 = sub_48a080(edi_2)
                    *(eax_25 + 4) += 1
                    lpFileName_4 = lpFileName_2
                
                int32_t var_24_4 = var_20 | 1
                var_8_1.b = 0xf
                
                if (data_aca1f4 != 0 && lpFileName_4 != 0 && *lpFileName_4 != 0)
                    char* eax_26 = sub_48a080(&lpFileName_2)
                    int32_t temp10_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_4984f0(eax_26, *(eax_26 + 0xc) + 0x10)
                        lpFileName_2 = &data_5b2591
                
                var_8_1.b = 0x10
                
                if (data_aca1f4 != 0)
                    char* eax_27 = var_18
                    
                    if (eax_27 != 0 && *eax_27 != 0)
                        char* eax_28 = sub_48a080(&var_18)
                        int32_t temp11_1 = *(eax_28 + 4)
                        *(eax_28 + 4) -= 1
                        
                        if (temp11_1 == 1)
                            sub_4984f0(eax_28, *(eax_28 + 0xc) + 0x10)
                            var_18 = &data_5b2591
                
                int32_t var_8_3 = 0x11
                break
            
            var_8_1.b = 0x12
            
            if (data_aca1f4 != 0)
                char* lpFileName_3 = lpFileName_2
                
                if (lpFileName_3 != 0 && *lpFileName_3 != 0)
                    char* eax_23 = sub_48a080(&lpFileName_2)
                    int32_t temp9_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
                        lpFileName_2 = &data_5b2591
            
            var_8_1.b = 7
            ebx_1 += 1
            esi = var_20
            
            if (ebx_1 s>= var_2c)
                goto label_4e62e8
    
    if (data_aca1f4 != 0)
        char* eax_37 = arg_4
        
        if (eax_37 != 0 && *eax_37 != 0)
            char* eax_38 = sub_48a080(&arg_4)
            int32_t temp8_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_4984f0(eax_38, *(eax_38 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return edi_2
}
