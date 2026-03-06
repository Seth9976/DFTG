// 函数名称: sub_47fe20
// 虚拟地址: 0x47fe20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_47fe20(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e210
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&result_1, "btnBack")
    void* edi = arg4
    char* const result_2 = &data_5b2591
    char* result_3 = result_1
    char* const result_6 = &data_5b2591
    char* edx = *(edi + 4)
    
    if (result_3 != 0)
        result_6 = result_3
    
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_6
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_6[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_6 = &result_6[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_6, result_6, c_1) | 1
        break
    
    if (ecx_2 == 0 || *(edi + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_48a080(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        sub_4361a0(3)
    
    sub_48a2c0(&result_1, "btnNext")
    char* result_4 = result_1
    char* const result_7 = &data_5b2591
    char* edx_3 = *(edi + 4)
    
    if (result_4 != 0)
        result_7 = result_4
    
    int32_t ecx_7
    
    while (true)
        ebx.b = *result_7
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                ecx_7 = 0
                break
            
            ebx.b = result_7[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                result_7 = &result_7[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_7 = 0
                break
        
        ecx_7 = sbb.d(result_7, result_7, c_2) | 1
        break
    
    if (ecx_7 == 0 || *(edi + 0x18) == 4)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_4 = sub_48a080(&result_1)
        int32_t temp5_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_5 = data_a755e8
        int32_t edx_6 = data_a755f0
        int32_t edi_1 = eax_5 - 1
        
        if (edx_6 != 0)
            edi_1 = eax_5
        
        int32_t ecx_10 = data_a755ec
        
        if (ecx_10 s< edi_1)
            int32_t edi_2 = eax_5 - 1
            
            if (edx_6 != 0)
                edi_2 = eax_5
            
            if (ecx_10 s>= edi_2)
                ecx_10 = eax_5 - 1
                
                if (edx_6 != 0)
                    ecx_10 = eax_5
            
            data_a755ec = ecx_10 + 1
        
        edi = arg4
    
    sub_48a2c0(&result_1, "btnPrev")
    char* result_5 = result_1
    char* result_8 = &data_5b2591
    char* edx_7 = *(edi + 4)
    
    if (result_5 != 0)
        result_8 = result_5
    
    int32_t ecx_13
    
    while (true)
        ebx.b = *result_8
        char temp6_1 = *edx_7
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                ecx_13 = 0
                break
            
            ebx.b = result_8[1]
            char temp7_1 = edx_7[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_8 = &result_8[2]
                edx_7 = &edx_7[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_13 = 0
                break
        
        ecx_13 = sbb.d(result_8, result_8, c_3) | 1
        break
    
    if (ecx_13 == 0 || *(edi + 0x18) == 3)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_7 = sub_48a080(&result_1)
        int32_t temp8_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    int32_t var_8_6 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_8 = data_a755ec
        
        if (eax_8 s> 0)
            int32_t ecx_16 = data_a755e8
            int32_t edx_10 = data_a755f0
            int32_t edi_3 = ecx_16 - 1
            
            if (edx_10 != 0)
                edi_3 = ecx_16
            
            if (eax_8 s>= edi_3)
                eax_8 = ecx_16 - 1
                
                if (edx_10 != 0)
                    eax_8 = ecx_16
            
            edi = arg4
            data_a755ec = eax_8 - 1
    
    sub_48a2c0(&result_1, "btnDetails")
    char* result = result_1
    char* ecx_18 = *(edi + 4)
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_1
    
    while (true)
        char edx_11 = *result_2
        char temp9_1 = *ecx_18
        bool c_4 = edx_11 u< temp9_1
        
        if (edx_11 == temp9_1)
            if (edx_11 == 0)
                esi_1 = 0
                break
            
            edx_11 = result_2[1]
            char temp10_1 = ecx_18[1]
            c_4 = edx_11 u< temp10_1
            
            if (edx_11 == temp10_1)
                result_2 = &result_2[2]
                ecx_18 = &ecx_18[2]
                
                if (edx_11 != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(result_2, result_2, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp11_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp11_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    if (esi_1 == 0)
        data_632a4c = data_632a4c == 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
