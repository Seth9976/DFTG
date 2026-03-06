// 函数名称: sub_4553d0
// 虚拟地址: 0x4553d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4553d0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = arg3
    int32_t* var_b0 = eax_2
    int32_t var_16c
    char const* const var_168
    char* ecx
    
    if (arg4 != 1)
        int32_t* var_168_1 = arg3
        sub_454f80(eax_2, arg2, arg3, arg4, arg6)
        eax_2 = sub_454d20(arg4)
        
        if (arg6 s>= 0)
            int32_t var_148 = 0
            uint32_t var_140[0x9][0x4]
            _memset(&var_140, 0, 0x8c)
            int32_t* var_150 = eax_2
            int32_t var_14c = arg6
            int32_t var_154 = *var_b0
            int32_t eax_5 = arg2[0xe]
            int32_t var_144 = eax_5
            void var_ac
            __builtin_memcpy(&var_ac, &var_154, 0xa0)
            int32_t result = sub_4528c0(eax_5, &var_ac, &arg2[0x1c], arg5, 0)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        var_168 = "QueueMoveTileSlot"
        var_16c = 0xcae
        ecx = "slot >= 0"
    else
        var_168 = "QueueMoveTileSlot"
        var_16c = 0xca7
        ecx = "Halt"
    
    sub_489550(eax_2, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_16c, 
        var_168)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
