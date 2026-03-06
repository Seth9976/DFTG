// 函数名称: sub_48be40
// 虚拟地址: 0x48be40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_48be40(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_20
    char const* const ecx_1
    
    if (arg3 s>= 0x3e8)
        if (arg2 s<= 0x7e80)
            int32_t var_c = arg3
            int32_t var_10 = arg2
            int32_t var_14 = 0xfeedface
            int32_t** ecx
            void* result = sub_48bc20(&var_14, 0xc, ecx, &var_14)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        char const* const var_1c_2 = "NetBufferStartMessage"
        var_20 = 0x2a3
        ecx_1 = "length <= MAX_NET_MESSAGE_SIZE"
    else
        char const* const var_1c = "NetBufferStartMessage"
        var_20 = 0x2a2
        ecx_1 = "messageId >= NETMSG_MIN_VALUE"
    
    sub_489550(arg3, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\network.cpp", var_20, 
        "NetBufferStartMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
