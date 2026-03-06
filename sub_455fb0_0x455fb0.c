// 函数名称: sub_455fb0
// 虚拟地址: 0x455fb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_455fb0(int32_t arg1, int32_t* arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (*arg2 == 1)
        uint32_t var_150[0xa][0x4]
        uint32_t (* eax_4)[0x4] = sub_459e70(&var_150, arg3, 0x23, &var_150, arg4)
        void var_b0
        __builtin_memcpy(&var_b0, eax_4, 0xa0)
        int32_t result = sub_4528c0(eax_4, &var_b0, &arg2[0x1c], 5, 0)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return result
    
    sub_489550(arg4, &data_5b2591, "gfx.type == ROLLGFX_DIE", 
        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0xeb0, "QueueDisplayDie")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
