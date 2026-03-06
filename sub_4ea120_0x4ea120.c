// 函数名称: sub_4ea120
// 虚拟地址: 0x4ea120
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_4ea120(int32_t arg1, struct _EXCEPTION_REGISTRATION_RECORD** arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1010
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* ebx
    void* var_2c = ebx
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** var_1c = arg2
    char* eax_3 = arg3[2]
    int32_t ecx = arg3[1]
    bool cond:0 = eax_3 == ecx
    
    if (eax_3 s<= ecx)
        while (true)
            if (not(cond:0))
                char* var_18 = nullptr
                eax_3 = sub_4e9f50(arg3, &var_18)
                char* esi_1 = eax_3
                
                if (esi_1 == 0)
                    void* eax_5 = sub_4e9680(arg3)
                    var_18 = &data_5b2591
                    int32_t var_8_1 = 0
                    sub_48a6e0(&var_18, *arg3 + arg3[2], eax_5 - arg3[2])
                    char* esi_2 = var_18
                    char* edx_2 = &data_5b2591
                    
                    if (esi_2 != 0)
                        edx_2 = esi_2
                    
                    float xmm0_2
                    eax_3, xmm0_2 = sub_4e9430(arg3[0xb], edx_2)
                    float xmm0_3 = xmm0_2 f* arg3[0xa]
                    float xmm3_2 = arg3[3]
                    
                    if (arg3[6] f< xmm3_2 + xmm0_3)
                        xmm3_2 f- 0
                        eax_3:1.b = (xmm3_2 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3_2, 0f) ? 1 : 0) << 2 | (xmm3_2 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            int32_t var_8_6 = 6
                        else
                            sub_4e97d0(&var_1c, arg3)
                            var_8_1.b = 2
                            sub_4ea040(arg3, &var_1c)
                            eax_3 = var_1c
                            int32_t ecx_27
                            
                            if (eax_3 == 0 || *eax_3 == 0)
                                ecx_27 = 0
                            else
                                ecx_27 = *(sub_48a080(&var_1c) + 8)
                                eax_3 = var_1c
                            
                            float xmm0_7 = xmm0_3 f+ arg3[3]
                            arg3[2] += ecx_27
                            arg3[3] = xmm0_7
                            var_8_1.b = 3
                            
                            if (data_aca1f4 != 0 && eax_3 != 0 && *eax_3 != 0)
                                eax_3 = sub_48a080(&var_1c)
                                int32_t temp2_1 = *(eax_3 + 4)
                                *(eax_3 + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    eax_3 = sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
                                    var_1c = &data_5b2591
                            
                            int32_t var_8_5 = 4
                    else
                        sub_4ea040(arg3, &var_18)
                        float xmm0_5 = xmm0_3 f+ arg3[3]
                        eax_3 = *arg3
                        arg3[2] = eax_5
                        arg3[3] = xmm0_5
                        
                        if (*(eax_5 + eax_3) != 0xd)
                            int32_t var_8_2 = 7
                            
                            if (data_aca1f4 != 0 && esi_2 != 0 && *esi_2 != 0)
                                char* eax_6 = sub_48a080(&var_18)
                                int32_t temp0_1 = *(eax_6 + 4)
                                *(eax_6 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                            
                            int32_t var_8_3 = 0xffffffff
                            eax_3 = arg3[2]
                            goto label_4ea2e2
                        
                        int32_t var_8_4 = 1
                    
                    if (data_aca1f4 != 0 && esi_2 != 0 && *esi_2 != 0)
                        eax_3 = sub_48a080(&var_18)
                        int32_t temp1_1 = *(eax_3 + 4)
                        *(eax_3 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            int32_t eax_9 = sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_9
                else
                    if (esi_1[0x34] != 0)
                        arg3[2] = &var_18[arg3[2]]
                        *arg4 = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return arg4
                    
                    int32_t* ecx_2 = *(esi_1 + 8)
                    float xmm2_3
                    
                    if (ecx_2 == 0)
                        xmm2_3 = (zx.o(0)).d
                    else
                        eax_3 = *(esi_1 + 0x3c)
                        
                        if (eax_3 == 0)
                            eax_3 = sub_48f600(*ecx_2)
                            xmm2_3 = *(esi_1 + 0x20) f* eax_3
                        else
                            xmm2_3 = _mm_cvtepi32_ps(zx.o(eax_3)) f* *(esi_1 + 0x20)
                    
                    float xmm3_1 = arg3[3]
                    ebx.b = 0
                    
                    if (arg3[6] f< xmm3_1 + xmm2_3)
                        xmm3_1 f- 0
                        eax_3:1.b = (xmm3_1 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2 | (xmm3_1 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            goto label_4ea1ea
                    else
                        ebx.b = 1
                    label_4ea1ea:
                        sub_4e9a30(eax_3, esi_1, arg3, xmm2_3, var_1c)
                        eax_3 = &var_18[arg3[2]]
                        arg3[2] = eax_3
                        
                        if (ebx.b != 0)
                        label_4ea2e2:
                            int32_t ecx_17 = arg3[1]
                            cond:0 = eax_3 == ecx_17
                            
                            if (eax_3 s> ecx_17)
                                break
                            
                            continue
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_3
    
    sub_489550(eax_3, &data_5b2591, "wrapperData.mCurrentTextPtr <= wrapperData.mTextLength", 
        "d:\ax\trunk\ax2017\engine\font.cpp", 0x379, "WrapperLine")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
