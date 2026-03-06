// 函数名称: sub_42da90
// 虚拟地址: 0x42da90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_42da90(int32_t arg1 @ edi, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d5d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_1c = ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    sub_48a2c0(&result_1, "BtnBack")
    char* const result_2 = &data_5b2591
    char* result_3 = result_1
    char* const result_4 = &data_5b2591
    char* edx_1 = *(arg2 + 4)
    
    if (result_3 != 0)
        result_4 = result_3
    
    int32_t edi
    
    while (true)
        ebx.b = *result_4
        char temp0_1 = *edx_1
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                edi = 0
                break
            
            ebx.b = result_4[1]
            char temp1_1 = edx_1[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_4 = &result_4[2]
                edx_1 = &edx_1[2]
                
                if (ebx.b != 0)
                    continue
                
                edi = 0
                break
        
        edi = sbb.d(arg1, arg1, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_48a080(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    char* result
    int32_t eax_4
    
    if (edi != 0)
        sub_48a2c0(&result_1, "BtnOK")
        char* ecx_4 = *(arg2 + 4)
        result = result_1
        
        if (result != 0)
            result_2 = result
        
        int32_t esi_1
        
        while (true)
            char edx_4 = *result_2
            char temp3_1 = *ecx_4
            bool c_2 = edx_4 u< temp3_1
            
            if (edx_4 == temp3_1)
                if (edx_4 == 0)
                    esi_1 = 0
                    break
                
                edx_4 = result_2[1]
                char temp4_1 = ecx_4[1]
                c_2 = edx_4 u< temp4_1
                
                if (edx_4 == temp4_1)
                    result_2 = &result_2[2]
                    ecx_4 = &ecx_4[2]
                    
                    if (edx_4 != 0)
                        continue
                    
                    esi_1 = 0
                    break
            
            esi_1 = sbb.d(result_2, result_2, c_2) | 1
            break
        
        int32_t var_8_3 = 1
        
        if (data_aca1f4 != 0 && result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp5_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp5_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
        
        int32_t var_8_4 = 0xffffffff
        
        if (esi_1 == 0)
            eax_4 = data_62b2a8
            goto label_42dbdb
    else
        eax_4 = data_62b2ac
    label_42dbdb:
        
        if (eax_4 != 0)
            eax_4(eax_2, arg1)
        
        result = sub_4361a0(4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
