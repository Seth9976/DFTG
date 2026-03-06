// 函数名称: sub_456050
// 虚拟地址: 0x456050
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_456050(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* var_154
    void* var_154
    int32_t eax_1 = __security_cookie ^ &var_154
    
    if (*arg2 != 0)
        sub_489550(eax_1, &data_5b2591, "gfx.type == ROLLGFX_TILE", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0xec8, "QueueZoomTile")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    var_154 = &arg2[0x1c]
    int32_t var_144 = 0
    void* var_164 = 0x8c
    char var_168 = 0
    uint32_t var_13c[0x8][0x4]
    uint32_t (* var_16c)[0x8][0x4] = &var_13c
    void var_b0
    uint32_t (* eax_8)[0x4]
    int32_t var_150
    
    if (arg3 != arg4)
        int32_t edi_1 = arg2[0xe]
        
        if (arg3 s<= arg4)
            _memset(var_16c, var_168, var_164)
            int32_t var_140_2 = edi_1
            int32_t var_148_2 = arg4 - arg3 - 1
            int32_t var_14c_2 = 2
            var_150 = 0xffffffff
            eax_8 = arg5 - arg3 - 1
            __builtin_memcpy(&var_b0, &var_150, 0xa0)
            uint32_t (* var_a4_2)[0x4] = eax_8
        else
            eax_8 = _memset(var_16c, var_168, var_164)
            int32_t var_148_1 = arg4
            int32_t var_140_1 = edi_1
            int32_t var_14c_1 = 1
            var_150 = 0xffffffff
            __builtin_memcpy(&var_b0, &var_150, 0xa0)
            int32_t var_a4_1 = arg3
    else
        _memset(var_16c, var_168, var_164)
        int32_t* eax_3 = arg2[0xc]
        var_150 = 0xffffffff
        int32_t var_148 = 0
        int32_t eax_4 = *eax_3
        int32_t eax_5 = neg.d(eax_4)
        int32_t var_14c = sbb.d(eax_5, eax_5, eax_4 != 0) + 4
        eax_8 = arg2[0xe]
        uint32_t (* var_140)[0x4] = eax_8
        __builtin_memcpy(&var_b0, &var_150, 0xa0)
        int32_t var_a4 = 1
    int32_t result = sub_4528c0(eax_8, &var_b0, var_154, 5, 0)
    @__security_check_cookie@4(eax_1 ^ &var_154)
    return result
}
