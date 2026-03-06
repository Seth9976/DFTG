// 函数名称: sub_4995d0
// 虚拟地址: 0x4995d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4995d0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f051
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_14 = arg1
    int32_t* var_1c = arg1
    int32_t* var_20 = arg1
    int32_t var_18 = 0
    int32_t eax_3 = *(arg2 + 8)
    
    switch (eax_3)
        case 0
            sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xa87, 
                "UI2StateToEvalResult")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        case 1
            sub_499200(arg1, *(arg2 + 0x18))
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        case 2
            sub_4992e0(arg1, *(arg2 + 0x18))
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        case 3
            sub_48a320(&var_14, sub_4985c0(arg2 + 0xc))
            int32_t var_8_1 = 0
            sub_4990c0(arg1, &var_14)
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0)
                char* eax_6 = var_14
                
                if (eax_6 != 0 && *eax_6 != 0)
                    char* eax_7 = sub_48a080(&var_14)
                    int32_t temp0_1 = *(eax_7 + 4)
                    *(eax_7 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return arg1
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        case 8
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_30_2)(void* arg1) = sub_498c00
            int32_t var_8_3 = 2
            `eh vector constructor iterator'(&arg1[2], 0x34, 2, sub_498be0)
            arg1[1] = 0
            *arg1 = 8
            int32_t var_18_1 = 2
            arg1[4] = *(arg2 + 0x18)
            sub_48a560(&arg1[8], &arg1[3])
            arg1[9] = arg1[4]
            arg1[9] = arg1[4]
            *(arg1 + 0x24) = *(arg1 + 0x10)
            *(arg1 + 0x24) = *(arg1 + 0x10)
            arg1[0xb] = arg1[6]
            arg1[9] = arg1[4]
            arg1[0xa] = arg1[5]
            arg1[9] = arg1[4]
            arg1[9] = arg1[4]
            char* eax_19 = var_14
            *(eax_19 + 0x70) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_19
    
    sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xa91, 
        "UI2StateToEvalResult")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
