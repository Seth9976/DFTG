// 函数名称: sub_508450
// 虚拟地址: 0x508450
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_508450(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fe98
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result_1
    void* result_2 = result_1
    
    if (result_2 s>= 0)
        char* eax_3 = *arg1
        
        if (eax_3 == 0 || *eax_3 == 0)
            result = nullptr
        else
            result = *(sub_48a080(arg1) + 8)
        
        if (result_2 s< result)
            char* ecx = *arg1
            char* const ebx_1 = &data_5b2591
            
            if (ecx != 0)
                ebx_1 = ecx
            
            ecx.b = *(ebx_1 + result_2)
            
            if (ecx.b u>= 0x80)
                result.b = ecx.b
                result.b &= 0xe0
                
                if (result.b != 0xc0)
                    result.b = ecx.b
                    result.b &= 0xf0
                    
                    if (result.b != 0xe0)
                        ecx.b &= 0xf8
                        
                        if (ecx.b != 0xf0)
                            sub_489550(result, &data_5b2591, "!Xutf8_is_invalid_lead_char(str)", 
                                "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x213, "Xutf8_peek_next")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
            
            result_1 = ebx_1 + result_2
            uint32_t eax_5 = sub_4eae80(&result_1)
            int32_t ebx_3
            
            if (eax_5 s< 0x80)
                ebx_3 = 1
            else if (eax_5 s>= 0x800)
                int32_t ebx_4
                ebx_4.b = eax_5 s>= 0x10000
                ebx_3 = ebx_4 + 3
            else
                ebx_3 = 2
            
            result_1 = &data_5b2591
            int32_t var_8_1 = 0
            char* const eax_6 = &data_5b2591
            char* ecx_2 = *arg1
            
            if (ecx_2 != 0)
                eax_6 = ecx_2
            
            sub_48a6e0(&result_1, eax_6, result_2)
            char* eax_7 = *arg1
            int32_t ecx_5
            
            if (eax_7 == 0 || *eax_7 == 0)
                ecx_5 = 0
            else
                ecx_5 = *(sub_48a080(arg1) + 8)
                eax_7 = *arg1
            
            char* edx_1 = &data_5b2591
            
            if (eax_7 != 0)
                edx_1 = eax_7
            
            sub_48a6e0(&result_1, &edx_1[ebx_3] + result_2, ecx_5 - ebx_3 - result_2)
            result = sub_48a560(arg1, &result_1)
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_1)
                    int32_t temp1_1 = result[1]
                    result[1] -= 1
                    
                    if (temp1_1 == 1)
                        result = sub_4984f0(result, &result[3][2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
