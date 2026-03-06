// 函数名称: sub_4834f0
// 虚拟地址: 0x4834f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4834f0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e371
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = arg3
    int32_t var_18 = 0
    
    if (arg2 u> 5)
        sub_489550(&ExceptionList, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x27d, "MakeProductionPowerDesc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* var_14
    char* eax_6
    char* edx
    
    switch (arg2)
        case 0
            sub_48a2c0(arg3, "gains 2 credits {credit} from Merchant Guild")
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3
        case 1
            edx = "gains 1 credit {credit} from Technology Unions"
        label_483553:
            sub_48a2c0(arg3, edx)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3
        case 2
            edx = "uses Galactic Reserves to produce more than one good per world"
            goto label_483553
        case 3
            int32_t var_28_1 = arg4
            sub_48a9d0(&var_14, "gains %d credits {credit} from Consumer Markets")
            int32_t var_8_1 = 1
            eax_6 = var_14
            *arg3 = eax_6
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_48a080(arg3)
                *(eax_7 + 4) += 1
                eax_6 = var_14
            
            int32_t var_18_1 = 1
            int32_t var_8_2 = 2
        case 4
            int32_t var_28_2 = arg4
            sub_48a9d0(&var_14, "gains %d credits {credit} from Genetics Lab")
            int32_t var_8_3 = 3
            eax_6 = var_14
            *arg3 = eax_6
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_10 = sub_48a080(arg3)
                *(eax_10 + 4) += 1
                eax_6 = var_14
            
            int32_t var_18_2 = 1
            int32_t var_8_4 = 4
        case 5
            int32_t var_28_3 = arg4
            sub_48a9d0(&var_14, "gains %d credits {credit} from Mining League")
            int32_t var_8_5 = 5
            eax_6 = var_14
            *arg3 = eax_6
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_11 = sub_48a080(arg3)
                *(eax_11 + 4) += 1
                eax_6 = var_14
            
            int32_t var_18_3 = 1
            int32_t var_8_6 = 6
    
    if (data_aca1f4 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_8 = sub_48a080(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
