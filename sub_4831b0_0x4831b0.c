// 函数名称: sub_4831b0
// 虚拟地址: 0x4831b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4831b0(int32_t arg1, char arg2, char** arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e2c9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg3
    int32_t var_8_1 = 0
    int32_t var_18 = 0
    char* arg_4
    char* esi = arg_4
    int32_t eax_3 = sub_483110(esi)
    *arg3 = &data_5b2591
    int32_t var_8_2 = 0
    int32_t var_18_1 = 1
    char const* const edx
    
    if (esi - 1 u<= 9)
        switch (esi)
            case 1
                edx = "{ship_white}"
            label_483260:
                
                if (arg2 != 0)
                    int32_t var_30_2 = **(data_632804 + arg4 * 0xc + 0x8c4)
                    char const* const var_34_1 = edx
                    int32_t var_38_1 = eax_3
                    int32_t var_8_5 = 3
                    sub_48a560(arg3, sub_48a9d0(&arg_4, "an extra %s shipper %s from %s"))
                    int32_t var_8_6 = 4
                else
                    char const* const var_30 = edx
                    int32_t var_34 = eax_3
                    int32_t var_8_3 = 1
                    sub_48a560(arg3, sub_48a9d0(&arg_4, "a %s shipper %s"))
                    int32_t var_8_4 = 2
                
                if (data_aca1f4 != 0)
                    char* eax_9 = arg_4
                    
                    if (eax_9 != 0 && *eax_9 != 0)
                        char* eax_10 = sub_48a080(&arg_4)
                        int32_t temp0_1 = *(eax_10 + 4)
                        *(eax_10 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg3
            case 2
                edx = "{ship_red}"
                goto label_483260
            case 3
                edx = "{ship_blue}"
                goto label_483260
            case 4
                edx = "{ship_brown}"
                goto label_483260
            case 5
                edx = "{ship_green}"
                goto label_483260
            case 6
                edx = "{ship_yellow}"
                goto label_483260
            case 7
                edx = "{ship_purple}"
                goto label_483260
            case 9
                edx = "{ship_black}"
                goto label_483260
            case 0xa
                edx = "{ship_orange}"
                goto label_483260
    sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x1cb, 
        "ShipperToFancyText")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
