// 函数名称: sub_42a330
// 虚拟地址: 0x42a330
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_42a330(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d370
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&result_1, "btnBack")
    char* const result_3 = &data_5b2591
    char* result = result_1
    char* const result_2 = &data_5b2591
    char* edx = *(arg4 + 4)
    
    if (result != 0)
        result_2 = result
    
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_2
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_2[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_2 = &result_2[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_2, result_2, c_1) | 1
        break
    
    if (ecx_2 == 0 || *(arg4 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        data_62b220 = 4
    else
        sub_48a2c0(&result_1, "btnAvatar")
        result = result_1
        char* ecx_6 = *(arg4 + 4)
        
        if (result != 0)
            result_3 = result
        
        int32_t esi_1
        
        while (true)
            char edx_3 = *result_3
            char temp3_1 = *ecx_6
            bool c_2 = edx_3 u< temp3_1
            
            if (edx_3 == temp3_1)
                if (edx_3 == 0)
                    esi_1 = 0
                    break
                
                edx_3 = result_3[1]
                char temp4_1 = ecx_6[1]
                c_2 = edx_3 u< temp4_1
                
                if (edx_3 == temp4_1)
                    result_3 = &result_3[2]
                    ecx_6 = &ecx_6[2]
                    
                    if (edx_3 != 0)
                        continue
                    
                    esi_1 = 0
                    break
            
            esi_1 = sbb.d(result_3, result_3, c_2) | 1
            break
        
        int32_t var_8_3 = 1
        
        if (data_aca1f4 != 0 && result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp5_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp5_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
        
        if (esi_1 == 0)
            result = sub_437f10(*(data_6d00d8 + 0xbe4))
            *(result + 8) = *(arg4 + 8) + 0x64
            data_62b220 = 4
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
