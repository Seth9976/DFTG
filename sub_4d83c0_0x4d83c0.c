// 函数名称: sub_4d83c0
// 虚拟地址: 0x4d83c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4d83c0(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a02c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = _strrchr(arg2, 0x2e)
    
    if (eax_3 == 0)
        sub_489550(eax_3, &data_5b2591, "ext", "d:\ax\trunk\ax2017\engine\spine.cpp", 0x1c, 
            "_spAtlasPage_createTexture")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* var_18
    char** eax_5 = sub_48a370(&var_18, arg2, eax_3 - arg2)
    char* esi_1 = var_18
    char* const result_3 = &data_5b2591
    char* edx = &data_5b2591
    
    if (esi_1 != 0)
        edx = esi_1
    
    char* result_1
    sub_4d18a0(eax_5, edx, &result_1, 3)
    char* result_2 = result_1
    
    if (result_2 != 0)
        result_3 = result_2
    
    int32_t* eax_6 = sub_4d0b50(result_3, 3)
    *(arg1 + 0x1c) = eax_6
    int32_t* eax_7 = *eax_6
    
    if (eax_7 == 0)
        sub_4e6fe0(eax_6, 0)
        eax_7 = *eax_6
        
        if (eax_7 == 0)
            sub_4d1060(eax_6)
            eax_7 = *eax_6
    
    int32_t* ecx_5 = **eax_7
    int32_t eax_9 = *ecx_5
    float xmm2_1 = ecx_5[3] f* ecx_5[2]
    double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_9)) f+ *((eax_9 u>> 0x1f << 3) + &data_60cbc0)
    int32_t eax_11 = ecx_5[1]
    float xmm1 = _mm_cvtpd_ps(xmm0_2)
    float xmm0_6 =
        _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_11)) f+ *((eax_11 u>> 0x1f << 3) + &data_60cbc0))
    *(arg1 + 0x20) = int.d(xmm1 * xmm2_1)
    char* result = int.d(xmm0_6 * xmm2_1)
    *(arg1 + 0x24) = result
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                result_1 = &data_5b2591
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_48a080(&var_18)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
