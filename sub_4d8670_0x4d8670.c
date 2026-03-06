// 函数名称: sub_4d8670
// 虚拟地址: 0x4d8670
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d8670(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a04b9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_28 = 0
    char* var_3c = arg1
    
    if (arg1 == 0)
        sub_489550(&var_3c, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_3c, arg1)
    char* var_20
    sub_4e6720(&var_20)
    int32_t var_8_1 = 0
    char* var_1c
    int32_t eax_4 = sub_48a2c0(&var_1c, ".texture")
    var_8_1.b = 1
    
    if (arg2 == 0)
        var_3c = "XString::XString"
        sub_489550(eax_4, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, var_3c)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* var_24
    sub_48a2c0(&var_24, arg2)
    var_8_1.b = 3
    char* eax_5 = var_20
    char* var_14 = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_48a080(&var_14)
        *(eax_6 + 4) += 1
    
    char* esi_1 = var_24
    char* const edi = &data_5b2591
    int32_t var_28_1 = 1
    char* const eax_7 = &data_5b2591
    
    if (esi_1 != 0)
        eax_7 = esi_1
    
    var_3c = eax_7
    sub_48a670(&var_14, var_3c)
    var_3c = &var_1c
    char* const var_18
    sub_48a860(&var_14, &var_18, var_3c)
    var_8_1.b = 6
    
    if (data_aca1f4 != 0)
        char* eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    var_8_1.b = 8
    
    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_10 = sub_48a080(&var_24)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
    
    var_8_1.b = 0xa
    
    if (data_aca1f4 != 0)
        char* eax_11 = var_1c
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_48a080(&var_1c)
            int32_t temp2_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
    
    var_8_1.b = 9
    char* const eax_13 = var_18
    
    if (eax_13 != 0)
        edi = eax_13
    
    int32_t* result = sub_4d0b50(edi, 3)
    var_8_1.b = 0xb
    
    if (data_aca1f4 != 0)
        char* ecx_14 = var_18
        
        if (ecx_14 != 0 && *ecx_14 != 0)
            char* eax_14 = sub_48a080(&var_18)
            int32_t temp3_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                var_18 = &data_5b2591
    
    int32_t var_8_2 = 0xc
    
    if (data_aca1f4 != 0)
        char* eax_15 = var_20
        
        if (eax_15 != 0 && *eax_15 != 0)
            char* eax_16 = sub_48a080(&var_20)
            int32_t temp4_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
