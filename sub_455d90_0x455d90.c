// 函数名称: sub_455d90
// 虚拟地址: 0x455d90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_455d90(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = sub_454d20(arg4)
    int32_t result = sub_455cb0(arg3, arg2)
    
    if (result s< 0 && eax_2 != 0)
        sub_489550(result, &data_5b2591, "slot >= 0 || loc == ROLL_LOC_BAG_TILE", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0xe62, "QueueReturnTile")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_148 = 0
    uint32_t var_140[0x9][0x4]
    _memset(&var_140, 0, 0x8c)
    int32_t var_154 = arg2[0xf]
    int32_t eax_4 = arg2[0xe]
    int32_t var_150 = eax_2
    int32_t result_1 = result
    int32_t var_144 = eax_4
    void var_ac
    __builtin_memcpy(&var_ac, &var_154, 0xa0)
    sub_4528c0(eax_4, &var_ac, &arg2[0x1c], 5, 0)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
