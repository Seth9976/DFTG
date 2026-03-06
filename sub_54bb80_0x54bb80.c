// 函数名称: sub_54bb80
// 虚拟地址: 0x54bb80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_54bb80(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a3430
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = *arg1
    int32_t* result_2
    int64_t var_30
    
    if (result != 1)
        if (result == 0x1b)
            char* eax_32 = arg1[6]
            char* edx_10 = &data_5b2591
            
            if (eax_32 != 0)
                edx_10 = eax_32
            
            int32_t* result_1
            sub_4e5700(&result_1, edx_10)
            int32_t var_14_1 = 0
            int32_t* result_8 = &data_5b2591
            int32_t* result_3 = result_1
            
            if (result_3 != 0)
                result_8 = result_3
            
            int32_t* eax_33 = sub_518420(result_8)
            result = eax_33[1]
            
            if (result == 3 || result == 2 || result == 0x1e || result == 0x19)
                int32_t* result_4 = data_11d2fa0
                result_2 = result_4
                data_11d2fa0 = result_4 + 1
                void* eax_35 = data_aca1ec
                float xmm2_1 = data_11d2fa4
                int32_t var_88_1 = 0
                int32_t var_84_1 = 0
                int32_t xmm1_2 = _mm_cvtepi32_ps(zx.o(*(eax_35 + 0x18)))
                uint128_t xmm0_5 = zx.o(*(eax_35 + 0x14))
                int32_t var_7c_1 = xmm1_2
                var_30 = data_11d2fc4:4.q
                float eax_36 = data_11d2fc4:0xc
                float xmm1_5 = 1f f/ data_11d2fa8 * xmm2_1
                int32_t var_80_1 = _mm_cvtepi32_ps(xmm0_5)
                float var_58_1 = xmm1_5
                int128_t var_50_1 = var_88_1.o
                float var_54_1 = xmm2_1
                int128_t var_40_1 = data_11d2fb4:4.o
                float var_60 = xmm1_5 ^ (data_60cca0.o).d
                int32_t var_5c_1 = xmm2_1 ^ (data_60cca0.o).d
                void var_74
                sub_489e40(&var_74)
                void var_90
                int64_t* eax_38 = sub_4dad30(&var_90, &var_74, &var_60, &var_90)
                float xmm3_1[0x4] = *eax_38
                var_30 = eax_38[2]
                float xmm5_1 = var_30:4.d
                var_40_1 = xmm3_1
                float xmm3_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
                float xmm4_4 = xmm5_1 * 0f + xmm3_2 * 0f + eax_36
                bool cond:1_1 = 9.99999975e-06f > sub_426e40(xmm4_4)
                float xmm7_1 = var_40_1:0xc.d
                float xmm1_10
                
                if (not(cond:1_1))
                    xmm1_10 = var_40_1:8.d * 0f + var_40_1:4.d * 0f + xmm7_1 + -0f
                
                float xmm1_12
                float var_70
                
                if (cond:1_1 || 0 f< xmm1_10 * xmm4_4)
                    xmm1_12 = var_70
                else
                    xmm1_12 = (xmm1_10 / xmm4_4) ^ (data_60cca0.o).d
                float var_84_2 = xmm5_1 * xmm1_12 f+ var_40_1:8.d
                void* eax_39
                int32_t ecx_32
                eax_39, ecx_32 = sub_4eaff0(data_1151b90)
                int32_t edi_2 = *(eax_39 + 8)
                int32_t var_ac_5 = ecx_32
                int32_t* eax_40 = sub_4cf8e0(data_12bac14, 0)
                sub_518870(eax_40, eax_40, eax_39, edi_2)
                int32_t* edi_4 = edi_2 * 0xe0 + *eax_39
                int32_t* result_6 = result_2
                int32_t* result_7 = result_6
                var_14_1.b = 2
                char* eax_42 = *sub_48a9d0(&result_2, "Item-%d")
                char* edx_13 = &data_5b2591
                
                if (eax_42 != 0)
                    edx_13 = eax_42
                
                sub_4ceb40(&edi_4[2], edx_13)
                var_14_1.b = 3
                
                if (data_aca1f4 != 0)
                    int32_t* result_5 = result_2
                    
                    if (result_5 != 0 && *result_5 != 0)
                        char* eax_43 = sub_48a080(&result_2)
                        int32_t temp3_1 = *(eax_43 + 4)
                        *(eax_43 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_4984f0(eax_43, *(eax_43 + 0xc) + 0x10)
                            result_2 = &data_5b2591
                
                var_14_1.b = 0
                edi_4[0x36] = result_6
                int32_t eax_44 = eax_33[1]
                
                if (eax_44 == 3)
                    int32_t* eax_45 = sub_48f5c0(eax_33)
                    edi_4[0x10] = eax_33
                    *(edi_4 + 0x10) = data_5d2c3c
                    __builtin_memcpy(&edi_4[8], 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                        0x14)
                    *(edi_4 + 0x10) = (xmm3_2 * xmm1_12 f+ var_40_1:4.d).q
                    edi_4[6] = eax_36 * xmm1_12 + xmm7_1
                    
                    if (*(*eax_45 + 0x1c) != 1)
                        *edi_4 = 1
                    else
                        *edi_4 = 4
                        *(edi_4 + 0x39) = 1
                else if (eax_44 == 2)
                    *edi_4 = 3
                    edi_4[0x18] = eax_33
                else if (eax_44 == 0x1e)
                    *edi_4 = 2
                    edi_4[0x22] = eax_33
                else if (eax_44 == 0x19)
                    *edi_4 = 8
                    edi_4[0x34] = eax_33
                
                int32_t** ecx_36
                ecx_36.b = 1
                data_1151b94 = edi_2
                data_1152b94 = 1
                sub_54d840(ecx_36)
                sub_514e80(data_1151b90)
                sub_5475f0()
                int32_t var_14_3 = 4
            else
                int32_t var_14_2 = 1
            
            if (data_aca1f4 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_1)
                    int32_t temp5_1 = result[1]
                    result[1] -= 1
                    
                    if (temp5_1 == 1)
                        sub_4984f0(result, result[3] + 0x10)
        else if (result == 5)
            sub_54c600()
        
        result.b = 0
    else
        result = arg1[1]
        
        if (result == 0x2e)
            int32_t eax_3 = sub_4eaff0(data_1151b90)
            int32_t esi_1 = data_1152b94
            int32_t esi_2 = esi_1 - 1
            
            if (esi_1 - 1 s>= 0)
                int32_t temp1_1
                
                do
                    int32_t var_ac_1 = (&data_1151b94)[esi_2]
                    int32_t* eax_4 = sub_4cf8e0(data_12bac14, 0)
                    sub_518ab0(eax_4, eax_4, eax_3, var_ac_1, 0)
                    temp1_1 = esi_2
                    esi_2 -= 1
                while (temp1_1 - 1 s>= 0)
            
            int32_t* ecx_3 = data_1151b90
            data_1152b94 = 0
            sub_514e80(ecx_3)
            sub_5475f0()
            char* ecx_4
            ecx_4.b = 1
            sub_54d840(ecx_4)
            result.b = 0
        else if (result != 0x1b)
            if (result == 0xd)
                data_11e6020 = 0
                result.b = 1
            else if (result != 9)
            label_54bce6:
                result = arg1[1]
                
                if (result != 8)
                    goto label_54bcff
                
                if ((0x8000 & GetKeyState(0x11)) != 0)
                    sub_51af60()
                    result.b = 0
                else
                    result = arg1[1]
                label_54bcff:
                    
                    if (result != 9)
                        goto label_54bd15
                    
                    if ((0x8000 & GetKeyState(0x11)) != 0)
                        sub_51afc0()
                        result.b = 0
                    else
                        result = arg1[1]
                    label_54bd15:
                        
                        if (result != 0x4f)
                            goto label_54bd2b
                        
                        if ((0x8000 & GetKeyState(0x11).w) != 0)
                            if (data_1152b94 == 1)
                                int32_t* ecx_9 = data_1151b94 * 0xe0 + *sub_4eaff0(data_1151b90)
                                int32_t eax_13 = *ecx_9
                                
                                if (eax_13 == 2)
                                    sub_51b030(ecx_9[0x22], 0)
                                else if (eax_13 == 5)
                                    if (ecx_9[0x2c] s<= 0)
                                        sub_489550(eax_13 - 5, &data_5b2591, "el.numSubFabs > 0", 
                                            "d:\ax\trunk\ax2017\engine\editor\fabeditor.cpp", 0x64b, 
                                            "FabEditorInputHandle")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    char** eax_16 = ecx_9[0x2a]
                                    char* ecx_11 = *eax_16
                                    
                                    if (ecx_11 == 0)
                                        sub_489550(eax_16, &data_5b2591, "el.subFabs[0].subFab", 
                                            "d:\ax\trunk\ax2017\engine\editor\fabeditor.cpp", 0x64c, 
                                            "FabEditorInputHandle")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    sub_51b030(ecx_11, 0)
                                else if (eax_13 == 8)
                                    sub_51b030(ecx_9[0x34], 0)
                            
                            result.b = 0
                        else
                            result = arg1[1]
                        label_54bd2b:
                            
                            if (result != 0x4b)
                                goto label_54bd45
                            
                            char const* const edx_4
                            
                            if ((0x8000 & GetKeyState(0x11)) != 0)
                                edx_4 = "camera"
                            label_54be29:
                                int32_t eax_17
                                int32_t edx_5
                                eax_17, edx_5 = sub_4ee820(data_1151b90, edx_4)
                                void var_98
                                int128_t* eax_19 =
                                    sub_4ee8e0(&var_98, edx_5, data_1151b90, &var_98, eax_17)
                                int128_t var_50 = *eax_19
                                void* eax_20 = data_aca1ec
                                int128_t var_40 = eax_19[1]
                                char ecx_15 = *(eax_20 + 0x39)
                                *(eax_20 + 0x39) = 0
                                sub_54c810(&var_30)
                                *(data_aca1ec + 0x39) = ecx_15
                                result.b = 0
                            else
                                result = arg1[1]
                            label_54bd45:
                                
                                if (result != 0x4c)
                                label_54be7a:
                                    
                                    if (result != 0x59)
                                        goto label_54be94
                                    
                                    if ((0x8000 & GetKeyState(0x11)) != 0)
                                        if (data_11d2f98 s< data_11d2f9c)
                                            sub_50c600(0x8000)
                                            int32_t eax_24 = data_11d2f98 + 1
                                            data_11d2f98 = eax_24
                                            sub_579300(&data_1151b94, &(&data_1151b90)[eax_24 * 0x402], 
                                                0x1004)
                                            int32_t* eax_25 = data_1151b90
                                            sub_4cef80(eax_25, **eax_25, 
                                                *(&data_1152b94)[eax_24 * 0x402], data_12bac14)
                                            sub_514e80(data_1151b90)
                                            sub_5475f0()
                                        
                                        result.b = 0
                                    else
                                        result = arg1[1]
                                    label_54be94:
                                        
                                        if (result != 0x5a)
                                            goto label_54beae
                                        
                                        if ((0x8000 & GetKeyState(0x11).w) == 0)
                                            result = arg1[1]
                                        label_54beae:
                                            
                                            if (result != 0x4a)
                                                goto label_54bec8
                                            
                                            if ((0x8000 & GetKeyState(0x11)) != 0)
                                                sub_549bd0()
                                                char* ecx_25
                                                ecx_25.b = 1
                                                sub_54d840(ecx_25)
                                                result.b = 0
                                            else
                                                result = arg1[1]
                                            label_54bec8:
                                                
                                                if (result != 0x54)
                                                    goto label_54bee2
                                                
                                                if ((0x8000 & GetKeyState(0x11).w) == 0)
                                                    result = arg1[1]
                                                label_54bee2:
                                                    
                                                    if (result != 0x57)
                                                        if (result == 0x45)
                                                            if (data_11e6020 == 0)
                                                                goto label_54c0e8
                                                            
                                                            char ecx_26 = result.b - 0x44
                                                            
                                                            if (sub_4d02a0(ecx_26).b != 0)
                                                                goto label_54c0e8
                                                            
                                                            data_11e6020 = 3
                                                            result.b = ecx_26
                                                        else if (result == 0x52)
                                                            if (data_11e6020 == 0)
                                                                goto label_54c0e8
                                                            
                                                            char ecx_27 = result.b - 0x51
                                                            
                                                            if (sub_4d02a0(ecx_27).b != 0)
                                                                goto label_54c0e8
                                                            
                                                            data_11e6020 = 4
                                                            result.b = ecx_27
                                                        else if (result != 0x51)
                                                            if (result != 0x53)
                                                                goto label_54c0e8
                                                            
                                                            if ((0x8000 & GetKeyState(0x11)) == 0)
                                                                goto label_54c0e8
                                                            
                                                            if ((0x8000 & GetKeyState(0x10)) == 0)
                                                                goto label_54c0e8
                                                            
                                                            sub_517940(0x8000)
                                                            result.b = 0
                                                        else
                                                            if (data_11e6020 == 0)
                                                                goto label_54c0e8
                                                            
                                                            data_11e6020 = 1
                                                            result.b = 1
                                                    else if (data_11e6020 == 0)
                                                    label_54c0e8:
                                                        result = arg1[1]
                                                        
                                                        if (result != 0x53)
                                                            goto label_54c101
                                                        
                                                        if ((0x8000 & GetKeyState(0x11)) != 0)
                                                            sub_5175f0(0x8000)
                                                        else
                                                            result = arg1[1]
                                                        label_54c101:
                                                            
                                                            if (result != 0x41)
                                                            label_54c121:
                                                                
                                                                if (arg1[1] == 0x44
                                                                        && (0x8000 & GetKeyState(0x11).w) != 0
                                                                        && data_11e6020 == 0)
                                                                    data_1152b94 = 0
                                                                    sub_5475f0()
                                                            else if ((0x8000 & GetKeyState(0x11).w) == 0
                                                                    || data_11e6020 != 0)
                                                                goto label_54c121
                                                        
                                                        result.b = 0
                                                    else
                                                        char ecx_18 = result.b - 0x56
                                                        
                                                        if (sub_4d02a0(ecx_18).b != 0)
                                                            goto label_54c0e8
                                                        
                                                        data_11e6020 = 2
                                                        result.b = ecx_18
                                                else if (data_1152b94 s<= 0)
                                                    result.b = 1
                                                else if (data_11e6020 != 0)
                                                    data_11e6020 = 0
                                                    result.b = 1
                                                else
                                                    data_11e6020 = 2
                                                    sub_547cc0()
                                                    result.b = 1
                                        else if (data_11d2f98 s<= 1)
                                            result.b = 1
                                        else
                                            sub_50c600(0x8000)
                                            int32_t eax_27 = data_11d2f98 - 1
                                            data_11d2f98 = eax_27
                                            sub_579300(&data_1151b94, &(&data_1151b90)[eax_27 * 0x402], 
                                                0x1004)
                                            int32_t* eax_28 = data_1151b90
                                            sub_4cef80(eax_28, **eax_28, 
                                                *(&data_1152b94)[eax_27 * 0x402], data_12bac14)
                                            sub_514e80(data_1151b90)
                                            sub_5475f0()
                                            result.b = 1
                                else
                                    if ((0x8000 & GetKeyState(0x11)) != 0)
                                        edx_4 = "env_probe"
                                        goto label_54be29
                                    
                                    result = arg1[1]
                                    
                                    if (result != 0x4c)
                                        goto label_54be7a
                                    
                                    data_6cad10 = 1
                                    result.b = 0
            else
                if ((0x8000 & GetKeyState(0x11)) == 0)
                    goto label_54bce6
                
                if ((0x8000 & GetKeyState(0x10)) == 0)
                    goto label_54bce6
                
                sub_51af60()
                result.b = 0
        else if (data_11e6020 == 0)
            result.b = 0
        else
            result = sub_4eaff0(data_1151b90)
            int32_t i = 0
            result_2 = result
            
            if (data_1152b94 s> 0)
                void* esi_3 = &data_11d3ff0
                
                do
                    int32_t edx_2 = (&data_1151b94)[i] * 0xe0
                    esi_3 += 0x24
                    int32_t ecx_6 = *result
                    i += 1
                    *(edx_2 + ecx_6 + 0x10) = *(esi_3 - 0x24)
                    *(edx_2 + ecx_6 + 0x20) = *(esi_3 - 0x14)
                    *(edx_2 + ecx_6 + 0x30) = *(esi_3 - 4)
                    result = result_2
                while (i s< data_1152b94)
            
            data_11e6020 = 0
            result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
