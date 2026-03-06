// 函数名称: sub_522640
// 虚拟地址: 0x522640
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_522640(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0eb0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = sub_4892e0("Compiling opengl memory shader")
    
    if (arg1 == 0)
        sub_489550(eax_3, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* var_18
    sub_48a2c0(&var_18, arg1)
    int32_t var_8_1 = 0
    char* var_14
    sub_48a2c0(&var_14, arg1)
    var_8_1.b = 1
    char* esi_1 = var_18
    int32_t ecx_3
    
    if (esi_1 == 0 || *esi_1 == 0)
        ecx_3 = 0
    else
        ecx_3 = *(sub_48a080(&var_18) + 8)
    
    *(arg2 + 0x30) = ecx_3 + 1
    char* eax_5 = sub_4c2e40(ecx_3 + 1)
    *(arg2 + 0x38) = eax_5
    char* ecx_5 = &data_5b2591
    
    if (esi_1 != 0)
        ecx_5 = esi_1
    
    sub_579300(eax_5, ecx_5, *(arg2 + 0x30))
    char* edi = var_14
    int32_t ecx_7
    
    if (edi == 0 || *edi == 0)
        ecx_7 = 0
    else
        ecx_7 = *(sub_48a080(&var_14) + 8)
    
    *(arg2 + 0x40) = ecx_7 + 1
    char* eax_7 = sub_4c2e40(ecx_7 + 1)
    *(arg2 + 0x48) = eax_7
    char* ecx_9 = &data_5b2591
    
    if (edi != 0)
        ecx_9 = edi
    
    sub_579300(eax_7, ecx_9, *(arg2 + 0x40))
    var_8_1.b = 2
    char* result
    
    if (data_aca1f4 != 0 && edi != 0 && *edi != 0)
        result = sub_48a080(&var_14)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_4984f0(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_2 = 3
    
    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_48a080(&var_18)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
