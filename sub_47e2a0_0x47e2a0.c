// 函数名称: sub_47e2a0
// 虚拟地址: 0x47e2a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_47e2a0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ edi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d520
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_20 = arg4
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&var_14, "btnLeft")
    char* const esi = &data_5b2591
    char* eax_3 = var_14
    char* const ecx_1 = &data_5b2591
    char* edx_1 = *(arg5 + 4)
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    int32_t edi
    
    while (true)
        ebx.b = *ecx_1
        char temp0_1 = *edx_1
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                edi = 0
                break
            
            ebx.b = ecx_1[1]
            char temp1_1 = edx_1[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                ecx_1 = &ecx_1[2]
                edx_1 = &edx_1[2]
                
                if (ebx.b != 0)
                    continue
                
                edi = 0
                break
        
        edi = sbb.d(arg4, arg4, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_48a080(&var_14)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    
    if (edi == 0)
        data_62b230 -= 1
    
    sub_48a2c0(&var_14, "btnRight")
    char* const ecx_5 = &data_5b2591
    char* edx_4 = *(arg5 + 4)
    char* eax_6 = var_14
    
    if (eax_6 != 0)
        ecx_5 = eax_6
    
    int32_t edi_2
    
    while (true)
        ebx.b = *ecx_5
        char temp3_1 = *edx_4
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_2 = 0
                break
            
            ebx.b = ecx_5[1]
            char temp4_1 = edx_4[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_5 = &ecx_5[2]
                edx_4 = &edx_4[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_2 = 0
                break
        
        edi_2 = sbb.d(edi, edi, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_48a080(&var_14)
        int32_t temp5_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    
    if (edi_2 == 0)
        data_62b230 += 1
    
    sub_48a2c0(&var_14, "btnBack")
    char* eax_8 = var_14
    
    if (eax_8 != 0)
        esi = eax_8
    
    char* ecx_9 = *(arg5 + 4)
    int32_t ecx_11
    
    while (true)
        char edx_7 = *esi
        char temp6_1 = *ecx_9
        bool c_3 = edx_7 u< temp6_1
        
        if (edx_7 == temp6_1)
            if (edx_7 == 0)
                ecx_11 = 0
                break
            
            edx_7 = esi[1]
            char temp7_1 = ecx_9[1]
            c_3 = edx_7 u< temp7_1
            
            if (edx_7 == temp7_1)
                esi = &esi[2]
                ecx_9 = &ecx_9[2]
                
                if (edx_7 != 0)
                    continue
                
                ecx_11 = 0
                break
        
        ecx_11 = sbb.d(ecx_9, ecx_9, c_3) | 1
        break
    
    void* ebx_1
    
    if (ecx_11 == 0 || *(arg5 + 0x18) == 2)
        ebx_1.b = 1
    else
        ebx_1.b = 0
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_48a080(&var_14)
        int32_t temp8_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    int32_t result = data_62b220
    
    if (ebx_1.b != 0)
        result = 0x15
    
    data_62b220 = result
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
