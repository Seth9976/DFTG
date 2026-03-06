// 函数名称: sub_433c10
// 虚拟地址: 0x433c10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_433c10(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d520
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&result_1, "btnBack")
    char* const result_2 = &data_5b2591
    char* result_3 = result_1
    char* const result_5 = &data_5b2591
    char* edx = *(arg4 + 4)
    
    if (result_3 != 0)
        result_5 = result_3
    
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_5
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_5[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_5 = &result_5[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_5, result_5, c_1) | 1
        break
    
    if (ecx_2 == 0 || *(arg4 + 0x18) == 2)
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
    int32_t eax_4 = data_62b220
    
    if (ebx.b != 0)
        eax_4 = 3
    
    data_62b220 = eax_4
    sub_48a2c0(&result_1, "btn_Right")
    char* result_4 = result_1
    char* const result_6 = &data_5b2591
    char* edx_3 = *(arg4 + 4)
    
    if (result_4 != 0)
        result_6 = result_4
    
    int32_t edi_1
    
    while (true)
        ebx.b = *result_6
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_1 = 0
                break
            
            ebx.b = result_6[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                result_6 = &result_6[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_1 = 0
                break
        
        edi_1 = sbb.d(arg4, arg4, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_5 = sub_48a080(&result_1)
        int32_t temp5_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    
    if (edi_1 == 0)
        data_6cfe68 += 1
    
    sub_48a2c0(&result_1, "btn_Left")
    char* ecx_9 = *(arg4 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_1
    
    while (true)
        char edx_6 = *result_2
        char temp6_1 = *ecx_9
        bool c_3 = edx_6 u< temp6_1
        
        if (edx_6 == temp6_1)
            if (edx_6 == 0)
                esi_1 = 0
                break
            
            edx_6 = result_2[1]
            char temp7_1 = ecx_9[1]
            c_3 = edx_6 u< temp7_1
            
            if (edx_6 == temp7_1)
                result_2 = &result_2[2]
                ecx_9 = &ecx_9[2]
                
                if (edx_6 != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(result_2, result_2, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp8_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp8_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    if (esi_1 == 0)
        data_6cfe68 -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
