// 函数名称: sub_45e560
// 虚拟地址: 0x45e560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_45e560(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *(arg2 + 0xc) = arg4
    char const* const var_168_1
    int32_t var_164_1
    char const* const var_160_1
    char* ecx
    
    if (arg4 s<= 6)
        void* ecx_1 = data_6cfe4c
        
        if (ecx_1 != 0)
            int32_t result = *arg3
            
            if (result == *(ecx_1 + 0xa68))
                int32_t var_140_1 = 0
                uint32_t var_138[0x8][0x4]
                _memset(&var_138, 0, 0x8c)
                int32_t var_14c = *(arg2 + 0x18)
                int32_t eax_4 = *(arg2 + 0x1e0)
                int32_t var_144_1 = eax_4
                int32_t var_148_1 = 9
                int32_t var_13c_1 = 0xffffffff
                void var_ac
                __builtin_memcpy(&var_ac, &var_14c, 0xa0)
                result = sub_452980(eax_4, &var_ac, arg2 + 0x70, 3, arg5)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        var_160_1 = "GetClient"
        var_164_1 = 0x75
        var_168_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else
        var_160_1 = "QueueRollDie"
        var_164_1 = 0x33d7
        var_168_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfx.die.face <= 6"
    
    sub_489550(arg4, &data_5b2591, ecx, var_168_1, var_164_1, var_160_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
