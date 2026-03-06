// 函数名称: sub_45a830
// 虚拟地址: 0x45a830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_45a830(int32_t arg1, int32_t* arg2, uint32_t arg3, int32_t arg4, bool arg5, uint32_t arg6, int32_t arg7, char arg8, int32_t arg9)
{
    // 第一条实际指令: uint32_t result_1
    uint32_t result_1
    void* var_c = __security_cookie ^ &result_1
    void* eax_1
    eax_1.b = arg5
    result_1 = arg3
    
    if (arg4 == arg2[4] && *(arg2 + 0x21) == eax_1.b)
        sub_45aa00(eax_1, arg2, arg3, arg4, arg9)
        @__security_check_cookie@4(var_c ^ &result_1)
        return 0
    
    if (arg4 == 4)
        int32_t var_164_1 = arg9
        char var_168_1 = arg3.b
        uint32_t var_170_1 = arg3
        int32_t* eax_3 = sub_452cc0(arg2[7])
        sub_45a730(eax_3, arg2, result_1, eax_3, arg6, var_168_1)
        @__security_check_cookie@4(var_c ^ &result_1)
        return 0
    
    uint32_t eax_5
    uint32_t result_2
    
    if (arg4 == 1 || eax_1.b != 0)
        char var_164_3 = arg9.b
        uint32_t esi = arg6
        *(arg2 + 0x21) = 0
        sub_45a470(eax_1, arg2, arg3, esi, var_164_3)
        char var_16c_2 = arg9.b
        *(arg2 + 0x21) = arg5
        
        if (arg5 != 0)
            esi = 2
        
        uint32_t eax_7 = esi != 0
        result_2 = sub_45a5a0(eax_7, arg2, result_1, arg4, eax_7.b, var_16c_2)
        eax_5.b = arg5
        
        if (eax_5.b != 0)
            result_2 = 0xffffffff
    else
        result_2 = sub_45a640(eax_1, arg2, arg3, arg4, arg6, arg9.b)
        eax_5.b = arg5
    
    result_1 = result_2
    
    if (arg2[4] != arg4)
        sub_489550(eax_5, &data_5b2591, "gfx.die.where == where", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x229b, "QueueMoveDie")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* var_164_4 = 0x8c
    *(arg2 + 0x21) = eax_5.b
    char var_168_4 = 0
    uint32_t var_13c[0x8][0x4]
    uint32_t (* var_16c_3)[0x8][0x4] = &var_13c
    arg2[7] = 0
    int32_t var_144 = 0
    _memset(var_16c_3, var_168_4, var_164_4)
    char var_164_5 = arg9.b
    int32_t var_14c = sub_459da0(arg4)
    void var_b0
    void* edx_2 = &var_b0
    int32_t eax_9 = arg2[6]
    uint32_t result_3 = result_2
    int32_t var_150 = eax_9
    int32_t var_140 = 0xffffffff
    __builtin_memcpy(&var_b0, &var_150, 0xa0)
    
    if (arg8 == 0)
        sub_452980(eax_9, edx_2, &arg2[0x1c], arg7, var_164_5)
    else
        sub_4528c0(eax_9, edx_2, &arg2[0x1c], arg7, var_164_5)
    
    uint32_t result = result_1
    @__security_check_cookie@4(var_c ^ &result_1)
    return result
}
