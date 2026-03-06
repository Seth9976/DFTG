// 函数名称: sub_4744b0
// 虚拟地址: 0x4744b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4744b0(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* i_1 = arg2
    int32_t* ecx
    sub_474300(ecx, arg2)
    arg2[0x12] = arg3
    uint32_t eax_2 = sub_474290(arg3)
    uint32_t var_14c[0xa][0x4]
    int32_t var_ac
    
    if (arg3 == 0)
        int32_t* eax_4 = sub_452cc0(sub_452c30(arg2[0x15])[7])
        int32_t eax_5 = sub_45b410(eax_4)
        uint32_t ebx_1 = 0
        
        if (eax_5 - 1 s>= 0)
            ebx_1 = eax_5 - 1
        
        uint32_t (* eax_8)[0x4] = sub_459e70(&var_14c, eax_4, eax_2, &var_14c, ebx_1)
        __builtin_memcpy(&var_ac, eax_8, 0xa0)
        int32_t* i_3 = i_1
        int32_t eax_9 = sub_4528c0(eax_8, &var_ac, &i_3[0x1c], 5, 0)
        i_3[0x225] = ebx_1
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_9
    
    int32_t* var_154 = &data_62d6c4
    void* esi_2 = nullptr
    int32_t** var_168_1 = &i_1
    i_1 = nullptr
    sub_481430(&data_62d6c4, var_168_1)
    int32_t* i
    
    for (i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 2 && i[0x12] == arg3)
            esi_2 += 1
        
        sub_481430(var_154, &i_1)
    
    void* esi_3 = data_6cfe4c
    i_1 = esi_2 - 1
    
    if (esi_3 == 0)
        sub_489550(i, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_a0 = 0
    uint32_t var_98[0x9][0x4]
    _memset(&var_98, 0, 0x8c)
    uint32_t var_a8 = eax_2
    int32_t eax_11 = *(esi_3 + 0xa68)
    int32_t* var_a4 = esi_2 - 1
    var_ac = eax_11
    int32_t var_9c = 0xffffffff
    __builtin_memcpy(&var_14c, &var_ac, 0xa0)
    sub_4528c0(eax_11, &var_14c, &arg2[0x1c], 5, 0)
    int32_t* i_2 = i_1
    arg2[0x225] = i_2
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_2
}
