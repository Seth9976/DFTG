// 函数名称: sub_430ff0
// 虚拟地址: 0x430ff0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_430ff0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cfd8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* esi = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x23c)
    var_14 = esi
    
    if (esi != 0 && *esi != 0)
        char* eax_4 = sub_48a080(&var_14)
        *(eax_4 + 4) += 1
    
    int32_t var_8_1 = 0
    char* const eax_5 = &data_5b2591
    char* const ecx_3 = &data_5b2591
    
    if (esi != 0)
        eax_5 = esi
    
    int32_t eax_7
    
    while (true)
        char edx_1 = *eax_5
        char temp0_1 = *ecx_3
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                eax_7 = 0
                break
            
            edx_1 = eax_5[1]
            char temp1_1 = ecx_3[1]
            c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                eax_5 = &eax_5[2]
                ecx_3 = &ecx_3[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_7 = 0
                break
        
        eax_7 = sbb.d(eax_5, eax_5, c_1) | 1
        break
    
    if (eax_7 == 0)
        sub_48a560(&data_62c408, sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x238)
        data_62c40c = 0
    else
        sub_48a560(&data_62c408, &var_14)
        data_62c40c = 1
    
    char* result = arg1 * 5
    (&data_62b1a8)[result * 2] = 0x1b
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        result = sub_48a080(&var_14)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
