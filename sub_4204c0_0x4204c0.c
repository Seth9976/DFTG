// 函数名称: sub_4204c0
// 虚拟地址: 0x4204c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4204c0(int32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg4 u> 7)
        sub_489550(arg4, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x1fd, "UIHitAction")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_34c
    void var_33c
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    
    switch (arg4)
        case 0, 7
            eax_3 = sub_4c5380(arg4, arg3, &var_33c, &data_5d2840, 9)
            var_34c = 2
        case 1
            eax_3 = sub_4c5380(arg4, arg3, &var_33c, &data_5d2824, 7)
            var_34c = 4
        case 2
            eax_3 = sub_4c5380(arg4, arg3, &var_33c, &data_5d2808, 7)
            var_34c = 0x10
        case 3
            eax_3 = sub_4c5380(arg4, arg3, &var_33c, &data_5d2894, 4)
            var_34c = 0x40
        case 4
            eax_3 = sub_4c5380(arg4, arg3, &var_33c, &data_5d2884, 4)
            var_34c = 0x80
        case 5
            eax_3 = sub_4c5380(arg4, arg3, &var_33c, &data_5d2874, 4)
            var_34c = 0x20
        case 6
            eax_3 = sub_4c5380(arg4, arg3, &var_33c, &data_5d2864, 4)
            var_34c = 0x100
    
    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4ba390(eax_3, *(arg2 + 4), &var_33c, var_34c)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
