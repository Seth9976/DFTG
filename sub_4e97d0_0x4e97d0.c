// 函数名称: sub_4e97d0
// 虚拟地址: 0x4e97d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD*** __fastcallsub_4e97d0(struct _EXCEPTION_REGISTRATION_RECORD*** arg1, struct _EXCEPTION_REGISTRATION_RECORD** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0f99
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** var_1c = arg2
    char* const esi = &data_5b2591
    int32_t var_24 = 0
    char* const var_14 = &data_5b2591
    int32_t var_8_1 = 1
    void* ecx_1 = arg2[1] + *arg2
    char* edi_1 = arg2[2] + *arg2
    void* var_28 = ecx_1
    
    if (not(9.99999975e-06f f<= arg2[0xa]))
        if (edi_1 == 0)
            sub_489550(&ExceptionList, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 
                0x94, "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_48a2c0(arg1, edi_1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    if (edi_1 u>= ecx_1)
    label_4e98d2:
        *arg1 = esi
        
        if (esi != 0 && *esi != 0)
            char* eax_7 = sub_48a080(arg1)
            *(eax_7 + 4) += 1
        
        int32_t var_24_1 = 1
        int32_t var_8_2 = 6
    else
        while (true)
            ecx_1.b = *edi_1
            void* var_18 = edi_1
            char* ebx_1 = edi_1
            struct _EXCEPTION_REGISTRATION_RECORD** eax_3
            
            if (ecx_1.b u>= 0x80)
                eax_3.b = ecx_1.b
                eax_3.b &= 0xe0
                
                if (eax_3.b != 0xc0)
                    eax_3.b = ecx_1.b
                    eax_3.b &= 0xf0
                    
                    if (eax_3.b != 0xe0)
                        ecx_1.b &= 0xf8
                        
                        if (ecx_1.b != 0xf0)
                            sub_489550(eax_3, &data_5b2591, "!Xutf8_is_invalid_lead_char(str)", 
                                "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x219, "Xutf8_next")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
            
            sub_4eae80(&var_18)
            edi_1 = var_18
            void* eax_6 = edi_1 - ebx_1
            var_18 = eax_6
            sub_48a6e0(&var_14, ebx_1, eax_6)
            char* const edx_1 = &data_5b2591
            esi = var_14
            
            if (esi != 0)
                edx_1 = esi
            
            float xmm0_1
            ecx_1, xmm0_1 = sub_4e9430(var_1c[0xb], edx_1)
            eax_3 = var_1c
            
            if (not(xmm0_1 f* eax_3[0xa] f<= eax_3[6]) && edi_1 != ebx_1)
                int32_t eax_11
                
                if (esi == 0 || *esi == 0)
                    eax_11 = 0
                else
                    eax_11 = *(sub_48a080(&var_14) + 8)
                
                char* const ecx_15 = &data_5b2591
                
                if (esi != 0)
                    ecx_15 = esi
                
                sub_48a370(&var_1c, ecx_15, eax_11 - var_18)
                var_8_1.b = 3
                struct _EXCEPTION_REGISTRATION_RECORD** edi_2 = var_1c
                *arg1 = edi_2
                
                if (edi_2 != 0 && *edi_2 != 0)
                    char* eax_13 = sub_48a080(arg1)
                    *(eax_13 + 4) += 1
                
                int32_t var_24_2 = 1
                var_8_1.b = 4
                
                if (data_aca1f4 != 0 && edi_2 != 0 && *edi_2 != 0)
                    char* eax_14 = sub_48a080(&var_1c)
                    int32_t temp1_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                
                int32_t var_8_3 = 5
                break
            
            if (edi_1 u>= var_28)
                goto label_4e98d2
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        char* eax_8 = sub_48a080(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
