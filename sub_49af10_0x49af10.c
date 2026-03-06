// 函数名称: sub_49af10
// 虚拟地址: 0x49af10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_49af10(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f218
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = arg1
    int32_t result = 0
    void* i = _strchr(esi, 0x2e)
    void* i_1 = i
    
    if (i != 0)
        int32_t* ecx = arg2
        
        do
            result += 1
            
            if (esi == 0)
                sub_489550(i, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x9a, 
                    "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char* const var_14 = &data_5b2591
            sub_48a6e0(&var_14, esi, i - esi)
            int32_t var_8_1 = 0
            char* const ecx_3 = &data_5b2591
            char* edx = *ecx
            char* const eax_4 = &data_5b2591
            char* const esi_1 = var_14
            
            if (edx != 0)
                ecx_3 = edx
            
            if (esi_1 != 0)
                eax_4 = esi_1
            
            if (ecx_3 != eax_4)
                if (data_aca1f4 != 0 && edx != 0 && *edx != 0)
                    char* eax_5 = sub_48a080(ecx)
                    int32_t temp1_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
                
                *ecx = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_6 = sub_48a080(ecx)
                    *(eax_6 + 4) += 1
            
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_7 = sub_48a080(&var_14)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                    var_14 = &data_5b2591
            
            esi = i_1 + 1
            int32_t var_8_3 = 0xffffffff
            
            if (result == 0x10)
                goto label_49b05f
            
            i = _strchr(esi, 0x2e)
            ecx = &ecx[1]
            i_1 = i
        while (i != 0)
    
    char** ecx_9 = &arg2[result]
    result += 1
    sub_48a5e0(ecx_9, esi)
    label_49b05f:
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
