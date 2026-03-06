// 函数名称: sub_480890
// 虚拟地址: 0x480890
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_480890(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e280
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    sub_48a2c0(&result_1, "btn_exit")
    char* result_3 = result_1
    char* const result_2 = &data_5b2591
    char* edi = *(arg1 + 4)
    char* const result_8 = &data_5b2591
    
    if (result_3 != 0)
        result_8 = result_3
    
    int32_t edi_2
    
    while (true)
        char ecx_1 = *result_8
        char temp0_1 = *edi
        bool c_1 = ecx_1 u< temp0_1
        
        if (ecx_1 == temp0_1)
            if (ecx_1 == 0)
                edi_2 = 0
                break
            
            ecx_1 = result_8[1]
            char temp1_1 = edi[1]
            c_1 = ecx_1 u< temp1_1
            
            if (ecx_1 == temp1_1)
                result_8 = &result_8[2]
                edi = &edi[2]
                
                if (ecx_1 != 0)
                    continue
                
                edi_2 = 0
                break
        
        edi_2 = sbb.d(edi, edi, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_48a080(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    
    if (edi_2 == 0)
        data_6329f8 = 4
        sub_4361a0(edi_2 + 1)
    
    sub_48a2c0(&result_1, "BtnLog")
    char* result_4 = result_1
    char* const result_6 = &data_5b2591
    char* edx_2 = *(arg1 + 4)
    
    if (result_4 != 0)
        result_6 = result_4
    
    void* ebx
    int32_t edi_3
    
    while (true)
        ebx.b = *edx_2
        char temp3_1 = *result_6
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_3 = 0
                break
            
            ebx.b = edx_2[1]
            char temp4_1 = result_6[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                edx_2 = &edx_2[2]
                result_6 = &result_6[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_3 = 0
                break
        
        edi_3 = sbb.d(edi_2, edi_2, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_4 = sub_48a080(&result_1)
        int32_t temp5_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    int32_t eax_5 = data_62b220
    
    if (edi_3 == 0)
        eax_5 = 0x22
    
    data_62b220 = eax_5
    sub_48a2c0(&result_1, "BtnDice")
    char* const result_7 = &data_5b2591
    char* edx_5 = *(arg1 + 4)
    char* result_5 = result_1
    
    if (result_5 != 0)
        result_7 = result_5
    
    int32_t edi_5
    
    while (true)
        ebx.b = *edx_5
        char temp6_1 = *result_7
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                edi_5 = 0
                break
            
            ebx.b = edx_5[1]
            char temp7_1 = result_7[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                edx_5 = &edx_5[2]
                result_7 = &result_7[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_5 = 0
                break
        
        edi_5 = sbb.d(edi_3, edi_3, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_7 = sub_48a080(&result_1)
        int32_t temp8_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    int32_t var_8_6 = 0xffffffff
    
    if (edi_5 == 0)
        data_62b248 = 0x28
        data_632a0c = edi_5
    
    sub_48a2c0(&result_1, "BtnTradeRate")
    char* ecx_12 = *(arg1 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_1
    
    while (true)
        char edx_8 = *ecx_12
        char temp9_1 = *result_2
        bool c_4 = edx_8 u< temp9_1
        
        if (edx_8 == temp9_1)
            if (edx_8 == 0)
                esi_1 = 0
                break
            
            edx_8 = ecx_12[1]
            char temp10_1 = result_2[1]
            c_4 = edx_8 u< temp10_1
            
            if (edx_8 == temp10_1)
                ecx_12 = &ecx_12[2]
                result_2 = &result_2[2]
                
                if (edx_8 != 0)
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
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_1 == 0)
        data_62b248 = 0x27
        result = sub_4894d0("Try request review")
        data_63c5fc = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
