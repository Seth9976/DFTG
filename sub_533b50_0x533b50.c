// 函数名称: sub_533b50
// 虚拟地址: 0x533b50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_533b50(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2851
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_24 = nullptr
    int32_t* eax_4 = *(data_114ec7c + 0x7c)
    char* edx = *eax_4
    
    if (edx == 0)
        sub_489550(eax_4, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* var_18
    sub_48a2c0(&var_18, edx)
    int32_t var_8_1 = 0
    char* var_20
    sub_48a2c0(&var_20, &data_5b3a68)
    var_8_1.b = 2
    char* eax_5 = *arg1
    char* var_14 = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_48a080(&var_14)
        *(eax_6 + 4) += 1
    
    char* esi = var_20
    char* const edi = &data_5b2591
    var_24 = 1
    char* const eax_7 = &data_5b2591
    
    if (esi != 0)
        eax_7 = esi
    
    sub_48a670(&var_14, eax_7)
    char* var_1c
    sub_48a860(&var_14, &var_1c, &var_18)
    var_8_1.b = 5
    
    if (data_aca1f4 != 0)
        char* eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    var_8_1.b = 7
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        char* eax_10 = sub_48a080(&var_20)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
    
    var_8_1.b = 9
    
    if (data_aca1f4 != 0)
        char* eax_11 = var_18
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_48a080(&var_18)
            int32_t temp2_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
    
    var_8_1.b = 8
    char* const ecx_11 = &data_5b2591
    char* eax_13 = var_1c
    
    if (eax_13 != 0)
        ecx_11 = eax_13
    
    int32_t* result = sub_4d0b50(ecx_11, 3)
    
    if (result[2] == 0)
        int32_t* var_38_2 = &var_20
        sub_4889e0(&var_24, result, 3)
        int32_t* eax_15 = var_24
        
        if (eax_15 != 0)
            eax_15[7] -= 1
    
    if (result[2] != 4)
        void* eax_18 = *result
        
        if (eax_18 == 0 || (*(eax_18 + 8) & 1) != 0)
            sub_4d11a0(result)
    else
        char* eax_16 = *arg1
        char* const ecx_13 = &data_5b2591
        
        if (eax_16 != 0)
            ecx_13 = eax_16
        
        result = sub_4d3180(ecx_13)
    
    if (result[2] == 4)
        char* eax_19 = *arg1
        
        if (eax_19 != 0)
            edi = eax_19
        
        result = sub_4d3180(edi)
    
    int32_t var_8_2 = 0xa
    
    if (data_aca1f4 != 0)
        char* eax_21 = var_1c
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_48a080(&var_1c)
            int32_t temp3_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
