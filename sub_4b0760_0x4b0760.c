// 函数名称: sub_4b0760
// 虚拟地址: 0x4b0760
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4b0760(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f67b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_52c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_4a9c40(arg1)
    char* var_518
    void* edi
    
    if (eax_3 == 0)
        if (sub_4a9b60(arg1, &var_518) != 1)
            edi = sub_498ef0(arg1)
        else
            sub_48a320(&var_518, var_518)
            int32_t var_8_1 = 0
            void* eax_5 = sub_4a9a50(arg1, &var_518)
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0)
                char* ecx_3 = var_518
                
                if (ecx_3 != 0 && *ecx_3 != 0)
                    char* eax_6 = sub_48a080(&var_518)
                    int32_t temp1_1 = *(eax_6 + 4)
                    *(eax_6 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
                        var_518 = &data_5b2591
            
            int32_t var_8_3 = 0xffffffff
            edi = eax_5 + 8
    else
        edi = eax_3 + 8
    
    *(arg1 + 0xe20) = 0
    void var_514
    sub_4ac920(&var_518, &var_514, arg1, &var_518)
    int32_t eax_9
    int32_t edx_5
    edx_5:eax_9 = muls.dp.d(0x66666667, arg2 - var_518)
    int32_t ebx_4 = (arg2 - var_518) s/ 5
    
    if ((arg2 - var_518) s/ 5 s< 0)
        sub_489550(eax_9, &data_5b2591, "animIdx >= 0", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2ed8, 
            "UI2DeleteTransition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_10 = sub_4f0e70(eax_9, edi, &data_6218dc, data_126cc94, 0x70)
    
    if (eax_10 == 0)
        sub_489550(eax_10, &data_5b2591, "transition", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2edb, 
            "UI2DeleteTransition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_10 + 0x10) s> ebx_4)
        int32_t* eax_11 = sub_4cf8e0(data_126cc94, 8)
        sub_518ab0(eax_11, eax_11, eax_10, ebx_4, 0)
        int32_t result = sub_4a7e20(1)
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    sub_489550(eax_10, &data_5b2591, "transition->numItems > animIdx", 
        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2edc, "UI2DeleteTransition")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
