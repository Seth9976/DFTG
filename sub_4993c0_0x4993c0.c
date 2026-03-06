// 函数名称: sub_4993c0
// 虚拟地址: 0x4993c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4993c0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??$raise_error@Vevaluation_error@math@boost@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_8c = arg1
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_a4)(void* arg1) = sub_498c00
    int32_t* var_94 = arg1
    int32_t var_90 = 0
    void var_80
    `eh vector constructor iterator'(&var_80, 0x34, 2, sub_498be0)
    int32_t var_8_1 = 0
    uint32_t eax_4 = *arg2 - 1
    
    if (eax_4 u<= 0xb)
        eax_4 = zx.d(lookup_table_4995b8[eax_4])
        
        switch (eax_4)
            case 0
                var_8_1.b = 1
                char* eax_5 = arg2[1]
                
                if (eax_5 == 0)
                    sub_489550(eax_5, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 
                        0x9a, "XString::XString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                void* var_a4_1 = arg2[2]
                var_8c = &data_5b2591
                sub_48a6e0(&var_8c, eax_5, var_a4_1)
                int32_t var_90_1 = 4
                int32_t var_8_2 = 2
                sub_4990c0(arg1, &var_8c)
                int32_t var_90_2 = 6
                int32_t var_8_3 = 3
                
                if (data_aca1f4 != 0)
                    int32_t* eax_6 = var_8c
                    
                    if (eax_6 != 0 && *eax_6 != 0)
                        char* eax_7 = sub_48a080(&var_8c)
                        int32_t temp0_1 = *(eax_7 + 4)
                        *(eax_7 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                
                int32_t var_8_4 = 4
                goto label_4994e0
            case 1
                sub_499200(arg1, arg2[1])
                int32_t var_8_5 = 5
            label_4994e0:
                `eh vector vbase constructor iterator'(&var_80, 0x34, 2, sub_498c00)
                fsbase->NtTib.ExceptionList = ExceptionList
                @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
                return arg1
            case 2
                sub_4992e0(arg1, arg2[1])
                int32_t var_8_6 = 6
                goto label_4994e0
            case 3
                sub_498d10(arg1, 0x63e518)
                int32_t var_8_7 = 7
                goto label_4994e0
    
    sub_489550(eax_4, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xa7e, 
        "UI2ExprToEvalResult")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
