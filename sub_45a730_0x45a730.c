// 函数名称: sub_45a730
// 虚拟地址: 0x45a730
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_45a730(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, uint32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_8 = eax_1
    int32_t var_16c
    char const* const var_168
    char* ecx
    
    if (*arg4 == 0)
        void* eax_2 = arg4[0x22a]
        arg2[7] = eax_2
        uint32_t eax_3 = sub_45a640(eax_2, arg2, arg3, 4, arg5, arg6)
        
        if (eax_3 != 0)
            eax_1 = sub_453300(eax_3, 4, arg3, 0x40, nullptr)
        
        if (eax_3 == 0 || eax_1.b != 0)
            void var_154
            uint32_t (* eax_5)[0x4] = sub_459e70(&var_154, arg4, 0xf, &var_154, eax_3)
            void var_ac
            __builtin_memcpy(&var_ac, eax_5, 0xa0)
            int32_t result = sub_4528c0(eax_5, &var_ac, &arg2[0x1c], 5, arg6)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return result
        
        var_168 = "QueueMoveDieTile"
        var_16c = 0x2235
        ecx = "slot == 0 || Has2GoodPower(pgui)"
    else
        var_168 = "GetRollT"
        var_16c = 0x8fb
        ecx = "gfx.type == ROLLGFX_TILE"
    
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_16c, 
        var_168)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
