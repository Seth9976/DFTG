// 函数名称: sub_4a9c40
// 虚拟地址: 0x4a9c40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4a9c40(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_498ef0(arg1)
    int32_t edx = 0
    int32_t edi = *eax_3
    int32_t* esi_1
    
    if (edi s<= 0)
    label_4a9c85:
        esi_1 = nullptr
    else
        esi_1 = eax_3[2]
        
        while (*esi_1 != 0x6e)
            edx += 1
            esi_1 = &esi_1[4]
            
            if (edx s>= edi)
                goto label_4a9c85
    
    var_14 = nullptr
    void* eax_4
    char* edx_2
    
    if (esi_1 != 0)
        eax_4 = sub_4f0fd0(&data_6218dc, 0x6e)
        
        if (*(eax_4 + 0x10) != 8)
            sub_489550(eax_4, &data_5b2591, 
                "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING", 
                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x902, "AttribAsString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        edx_2 = esi_1[2]
    else
        eax_4 = sub_4a9b60(arg1, &var_14)
        
        if (eax_4 != 1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        edx_2 = var_14
    
    if (edx_2 == 0)
        sub_489550(eax_4, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_14, edx_2)
    int32_t var_8_1 = 0
    void* result = sub_4a9a50(arg1, &var_14)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* ecx_5 = var_14
        
        if (ecx_5 != 0 && *ecx_5 != 0)
            char* eax_6 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
