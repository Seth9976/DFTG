// 函数名称: sub_45a020
// 虚拟地址: 0x45a020
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __convention("regparm")sub_45a020(int32_t arg1, void* arg2, void* arg3, char arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx_1 = *(sub_452b90(*(arg3 + 0x3c)) + 0x2c4)
    int32_t ecx_2
    int32_t* ebx
    
    if (ecx_1 == 0)
        int32_t var_b8
        ecx_2 = var_b8
        ebx = nullptr
    else
        ebx = sub_452c30(ecx_1)
        ecx_2 = ebx[0xa]
    
    int32_t var_bc
    int64_t* eax_5 = sub_4538b0(&var_bc)
    int32_t edi = var_bc
    
    while (ebx != edi)
        if (ebx == 0)
            sub_489550(eax_5, &data_5b2591, "gfx", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x5da, "Dice::DiceIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (ebx != arg2)
            eax_5 = ebx[7]
            
            if (eax_5 == *(arg2 + 0x1c))
                uint32_t var_160[0x4]
                uint32_t (* eax_7)[0x4] = sub_459e70(&var_160, arg3, 0xf, &var_160, 0)
                void var_b0
                __builtin_memcpy(&var_b0, eax_7, 0xa0)
                int32_t eax_8 = sub_452ab0(eax_7, &var_b0, &ebx[0x1c], 1, arg4)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_8
        
        if (ecx_2 != 0)
            eax_5 = sub_452c30(ecx_2)
            ebx = eax_5
            ecx_2 = ebx[0xa]
        else
            ebx = nullptr
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_5
}
