// 函数名称: sub_4c3cf0
// 虚拟地址: 0x4c3cf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4c3cf0(int32_t arg1, char* arg2, char** arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59faa9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg3
    int32_t var_8_1 = 0
    int32_t var_18 = 0
    
    if (arg2 == 0)
        sub_489550(&ExceptionList, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(arg3, arg2)
    int32_t var_8_2 = 0
    int32_t var_18_1 = 1
    
    if (arg4 != 0)
        sub_48a670(arg3, arg4)
    
    char* eax_5 = *arg3
    char* const edi = &data_5b2591
    void* edx = &data_5b2591
    
    if (eax_5 != 0)
        edx = eax_5
    
    int32_t var_8_3 = 1
    char* var_14
    sub_48a560(arg3, sub_4c3a30(eax_5, edx, &var_14, &(*U"][}{\r")[1], U"][}{\r"))
    int32_t var_8_4 = 2
    
    if (data_aca1f4 != 0)
        char* eax_7 = var_14
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
    
    var_8_4.b = 0
    char* eax_9 = *arg3
    void* edx_3 = &data_5b2591
    
    if (eax_9 != 0)
        edx_3 = eax_9
    
    int32_t var_8_5 = 3
    sub_48a560(arg3, sub_4c3a30(eax_9, edx_3, &var_14, &(*U"][}{\r")[3], &(*U"][}{\r")[2]))
    int32_t var_8_6 = 4
    
    if (data_aca1f4 != 0)
        char* eax_11 = var_14
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_48a080(&var_14)
            int32_t temp1_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
    
    var_8_6.b = 0
    char* eax_13 = *arg3
    char* edx_6 = &data_5b2591
    
    if (eax_13 != 0)
        edx_6 = eax_13
    
    sub_48aa40(eax_13, edx_6, &var_14, &(*U"][}{\r")[4], &data_5d59f8)
    int32_t var_18_2 = 3
    int32_t var_8_7 = 5
    sub_48a560(arg3, &var_14)
    int32_t var_8_8 = 6
    
    if (data_aca1f4 != 0)
        char* eax_14 = var_14
        
        if (eax_14 != 0 && *eax_14 != 0)
            char* eax_15 = sub_48a080(&var_14)
            int32_t temp2_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
    
    var_8_8.b = 0
    char* eax_16 = *arg3
    
    if (eax_16 != 0)
        edi = eax_16
    
    sub_48aa40(eax_16, edi, &var_14, &data_5d5158, &data_5d59f8)
    int32_t var_18_3 = 7
    int32_t var_8_9 = 7
    sub_48a560(arg3, &var_14)
    int32_t var_8_10 = 8
    
    if (data_aca1f4 != 0)
        char* eax_17 = var_14
        
        if (eax_17 != 0 && *eax_17 != 0)
            char* eax_18 = sub_48a080(&var_14)
            int32_t temp3_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
    
    var_8_10.b = 0
    char* edi_1 = nullptr
    
    while (true)
        char* eax_19 = *arg3
        int32_t eax_21
        
        if (eax_19 == 0 || *eax_19 == 0)
            eax_21 = 0
        else
            eax_21 = *(sub_48a080(arg3) + 8)
        
        if (edi_1 s>= eax_21)
            break
        
        *(edi_1 + *arg3) = _tolower(sx.d(*(*arg3 + edi_1)))
        edi_1 = &edi_1[1]
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
