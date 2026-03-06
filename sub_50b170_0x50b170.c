// 函数名称: sub_50b170
// 虚拟地址: 0x50b170
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_50b170(int32_t arg1, int32_t* arg2, char* arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1c99
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_20 = arg3
    int32_t var_24 = 0
    int32_t eax_3 = *arg2
    char* const var_18 = &data_5b2591
    int32_t* edi_1 = eax_3 * 0x58 + arg3
    int32_t var_8_1 = 0
    int32_t ecx = *edi_1
    
    if (ecx u> 3)
        sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 0x3a9, 
            "EmitItemFunction")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* const ebx = &data_5b2591
    int32_t* var_44
    char* const var_1c
    char* var_14
    
    switch (ecx)
        case 0
            var_8_1.b = 9
            sub_48a560(&var_18, sub_50ac20(eax_3, eax_3, &var_1c, edi_1, arg4))
            var_8_1.b = 0xa
        label_50b3d3:
            
            if (data_aca1f4 != 0)
                char* eax_22 = var_1c
                
                if (eax_22 != 0 && *eax_22 != 0)
                    char* eax_23 = sub_48a080(&var_1c)
                    int32_t temp2_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
                        var_1c = &data_5b2591
        case 1
            int32_t var_40_2 = eax_3
            var_8_1.b = 5
            var_44 = "samplerFn_layer%d"
            var_20 = sub_48a9d0(&var_14, "samplerFn_layer%d")
            int32_t var_24_1 = 1
            int32_t edx_5 = arg4[0xad]
            int32_t var_4c_2 = edx_5
            arg4[0xad] = edx_5 + 1
            char* ecx_9 = &data_5b2591
            arg4[eax_3 * 3 + 0x5a] = edx_5
            arg4[edx_5 + 0xa9] = edi_1[6]
            char* eax_15 = var_14
            
            if (eax_15 != 0)
                ecx_9 = eax_15
            
            char* var_50_2 = ecx_9
            sub_48a9d0(&var_1c, "float4 %s(float2 arg_uv)\n{\n\treturn gMaterialColor%d;\n}\n")
            var_8_1.b = 6
            int32_t eax_16 = arg4[0x41]
            void* esi_2 = &arg4[eax_16 * 2]
            arg4[0x41] = eax_16 + 1
            sub_48a560(esi_2 + 4, &var_14)
            sub_48a560(esi_2 + 8, &var_1c)
            var_8_1.b = 7
            
            if (data_aca1f4 != 0)
                char* const eax_18 = var_1c
                
                if (eax_18 != 0 && *eax_18 != 0)
                    char* eax_19 = sub_48a080(&var_1c)
                    int32_t temp1_1 = *(eax_19 + 4)
                    *(eax_19 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
                        var_1c = &data_5b2591
            
            var_8_1.b = 5
            sub_48a560(&var_18, var_20)
            var_8_1.b = 8
            goto label_50b25a
        case 2
            int32_t var_40 = eax_3
            var_44 = "group%d"
            sub_48a9d0(&var_14, "group%d")
            char* edx = &data_5b2591
            int32_t* var_4c_1 = arg4
            var_8_1.b = 1
            char* eax_4 = var_14
            
            if (eax_4 != 0)
                edx = eax_4
            
            var_8_1.b = 2
            sub_48a560(&var_18, sub_50b6c0(eax_4, edx, &var_1c, arg2, var_20, edi_1[2]))
            var_8_1.b = 3
            
            if (data_aca1f4 != 0)
                char* const eax_6 = var_1c
                
                if (eax_6 != 0 && *eax_6 != 0)
                    char* eax_7 = sub_48a080(&var_1c)
                    int32_t temp0_1 = *(eax_7 + 4)
                    *(eax_7 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                        var_1c = &data_5b2591
            
            *arg2 += edi_1[2]
            var_8_1.b = 4
        label_50b25a:
            
            if (data_aca1f4 != 0)
                char* eax_9 = var_14
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_48a080(&var_14)
                    int32_t temp3_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_14 = &data_5b2591
        case 3
            int32_t* var_40_8 = arg4
            var_8_1.b = 0xb
            sub_48a560(&var_18, sub_50a860(eax_3, eax_3, &var_1c, edi_1))
            var_8_1.b = 0xc
            goto label_50b3d3
    
    var_8_1.b = 0
    char* const esi_3
    
    if (arg5 == 0)
        var_44.q = _mm_cvtps_pd(edi_1[0xc])
        sub_48a9d0(&var_1c, &data_5fd99c)
        int32_t var_24_2 = 2
        var_8_1.b = 0xf
        int32_t eax_27 = edi_1[0xb]
        
        if (eax_27 u> 6)
            sub_489550(eax_27, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 
                0x380, "EmitBlendFn")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        char const* const edx_15
        
        switch (eax_27)
            case 0
                edx_15 = "BlendAlpha"
            case 1
                edx_15 = "BlendMultiply"
            case 2
                edx_15 = "BlendAdd"
            case 3
                edx_15 = "BlendOverlay"
            case 4
                edx_15 = "BlendMask"
            case 5
                edx_15 = "BlendColor"
            case 6
                edx_15 = "BlendColorHSL"
        
        sub_48a2c0(&var_14, edx_15)
        var_8_1.b = 0x10
        char* const ecx_28 = &data_5b2591
        char* const eax_28 = var_1c
        esi_3 = var_18
        char* edi_2 = var_14
        
        if (eax_28 != 0)
            ecx_28 = eax_28
        
        char* const eax_29 = &data_5b2591
        char* const var_40_11 = ecx_28
        
        if (esi_3 != 0)
            eax_29 = esi_3
        
        char* const var_44_1 = eax_29
        
        if (edi_2 != 0)
            ebx = edi_2
        
        char* const var_48_4 = ebx
        var_8_1.b = 0x11
        sub_50aeb0(arg4, sub_48a9d0(&var_20, "\tretval = %s(retval, %s(uv), %s);\n"))
        var_8_1.b = 0x12
        
        if (data_aca1f4 != 0)
            char* eax_31 = var_20
            
            if (eax_31 != 0 && *eax_31 != 0)
                char* eax_32 = sub_48a080(&var_20)
                int32_t temp6_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                    var_20 = &data_5b2591
        
        var_8_1.b = 0x13
        
        if (data_aca1f4 != 0 && edi_2 != 0 && *edi_2 != 0)
            char* eax_33 = sub_48a080(&var_14)
            int32_t temp7_1 = *(eax_33 + 4)
            *(eax_33 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_4984f0(eax_33, *(eax_33 + 0xc) + 0x10)
        
        var_8_1.b = 0x14
        
        if (data_aca1f4 != 0)
            char* const eax_34 = var_1c
            
            if (eax_34 != 0 && *eax_34 != 0)
                char* eax_35 = sub_48a080(&var_1c)
                int32_t temp8_1 = *(eax_35 + 4)
                *(eax_35 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_4984f0(eax_35, *(eax_35 + 0xc) + 0x10)
                    var_1c = &data_5b2591
    else
        esi_3 = var_18
        
        if (esi_3 != 0)
            ebx = esi_3
        
        char* const var_40_10 = ebx
        var_8_1.b = 0xd
        sub_50aeb0(arg4, sub_48a9d0(&var_20, "\tvec4 retval = %s(uv);\n"))
        var_8_1.b = 0xe
        
        if (data_aca1f4 != 0)
            char* eax_25 = var_20
            
            if (eax_25 != 0 && *eax_25 != 0)
                char* eax_26 = sub_48a080(&var_20)
                int32_t temp4_1 = *(eax_26 + 4)
                *(eax_26 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_4984f0(eax_26, *(eax_26 + 0xc) + 0x10)
    
    char* result = arg2
    *result += 1
    int32_t var_8_2 = 0x15
    
    if (data_aca1f4 != 0 && esi_3 != 0 && *esi_3 != 0)
        result = sub_48a080(&var_18)
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
