// 函数名称: sub_53dd80
// 虚拟地址: 0x53dd80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_53dd80(char* arg1, char** arg2, char** arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e210
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* arg_c
    char* edx = arg_c
    char* var_28 = arg1
    
    if (edx == 0)
        sub_489550(&ExceptionList, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_28, edx)
    sub_4d3550(&var_14)
    char* eax_4 = var_14
    char* const ebx = &data_5b2591
    char* edx_1 = &data_5b2591
    
    if (eax_4 != 0)
        edx_1 = eax_4
    
    sub_4d4300(&arg_c, edx_1)
    char* eax_5 = arg_c
    int32_t result
    
    if (eax_5 == 0 || *eax_5 == 0)
        result = 1
    else
        char* edi_1 = *(sub_48a080(&arg_c) + 8)
        char* eax_7 = sub_4c2e40(edi_1)
        char* ecx_5 = arg_c
        var_28 = edi_1
        
        if (ecx_5 != 0)
            ebx = ecx_5
        
        sub_579300(eax_7, ebx, var_28)
        *arg3 = edi_1
        *arg2 = eax_7
        result = 0
        eax_5 = arg_c
    
    int32_t var_8_1 = 2
    
    if (data_aca1f4 != 0 && eax_5 != 0 && *eax_5 != 0)
        char* eax_10 = sub_48a080(&arg_c)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
            arg_c = &data_5b2591
    
    int32_t var_8_2 = 3
    
    if (data_aca1f4 != 0)
        char* eax_11 = var_14
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_48a080(&var_14)
            int32_t temp2_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
