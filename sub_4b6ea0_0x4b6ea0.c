// 函数名称: sub_4b6ea0
// 虚拟地址: 0x4b6ea0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4b6ea0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d2b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_643654 != 0 && data_642618 != 0)
        void* eax_3 = sub_4a7d60(data_642654)
        int32_t var_3c_1 = data_126cc78
        int32_t* eax_4 = sub_498ef0(eax_3)
        result = sub_4f0e70(eax_4, eax_4, &data_6218dc, var_3c_1, 0x68)
        
        if (result != 0)
            result = result[2]
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
            
            if (result != 0)
                int32_t var_3c_2 = data_126cc78
                int32_t* eax_5 = sub_498ef0(eax_3)
                int32_t* eax_6 = sub_4f0e70(eax_5, eax_5, &data_6218dc, var_3c_2, 0x68)
                char* var_18_1
                char* eax_8
                void* esi_2
                
                if (eax_6 != 0 && eax_6[2] != 0)
                    char const (** var_3c_3)[0xa] = &data_6218dc
                    int32_t* eax_7 = sub_498ef0(eax_3)
                    eax_8 = sub_4f0df0(eax_7, eax_7, &data_6218dc, 0x6e)
                    esi_2 = nullptr
                    var_18_1 = eax_8
                
                if (eax_6 == 0 || eax_6[2] == 0 || eax_6[2] s<= 0)
                label_4b6f9e:
                    esi_2 = 0xffffffff
                else
                    int32_t* edi_1 = nullptr
                    
                    while (__stricmp(*(edi_1 + *eax_6), eax_8) != 0)
                        eax_8 = var_18_1
                        esi_2 += 1
                        edi_1 = &edi_1[8]
                        
                        if (esi_2 s>= eax_6[2])
                            goto label_4b6f9e
                
                void* var_38_2 = esi_2
                sub_4892e0("current state idx %d")
                void* esi_3 = esi_2 + arg1
                
                if (esi_3 == 0xfffffffe)
                    esi_3 = result_1 - 1
                else if (esi_3 == result_1)
                    esi_3 = 0xffffffff
                
                int32_t* eax_10 = sub_498ef0(eax_3)
                
                if (esi_3 != 0xffffffff)
                    int32_t var_3c_5 = data_126cc78
                    int32_t* eax_12 = sub_498ef0(eax_3)
                    int32_t* eax_13 = sub_4f0e70(eax_12, eax_12, &data_6218dc, var_3c_5, 0x68)
                    char* edx_6
                    
                    if (eax_13 == 0 || eax_13[2] s<= esi_3 || esi_3 s< 0)
                        edx_6 = &data_5b2591
                    else
                        int32_t eax_14 = *eax_13
                        edx_6 = *((esi_3 << 5) + eax_14)
                        
                        if (edx_6 == 0)
                            sub_489550(eax_14, &data_5b2591, "str", 
                                "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                    
                    sub_48a2c0(&result_1, edx_6)
                    int32_t var_8_1 = 0
                    char* const result_4 = &data_5b2591
                    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
                    char* const result_3 = &data_5b2591
                    
                    if (result_2 != 0)
                        result_3 = result_2
                    
                    char* const result_6 = result_3
                    int32_t eax_15 = sub_4892e0("set state %s")
                    
                    if (result_2 != 0)
                        result_4 = result_2
                    
                    char* const result_5 = result_4
                    sub_4f0a90(eax_15, eax_10, &data_6218dc, 0x6e)
                    int32_t var_8_2 = 1
                    
                    if (data_aca1f4 != 0 && result_2 != 0 && *result_2 != 0)
                        char* eax_16 = sub_48a080(&result_1)
                        int32_t temp0_1 = *(eax_16 + 4)
                        *(eax_16 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                    
                    int32_t var_8_3 = 0xffffffff
                else
                    sub_4f0b40(sub_48a5e0(eax_3 + 0x1134, &data_5b2591), eax_10, &data_6218dc, 0x6e)
                
                struct _EXCEPTION_REGISTRATION_RECORD*** ecx_7
                ecx_7.b = 0
                result = sub_4a7e20(ecx_7.b)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
