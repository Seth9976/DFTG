// 函数名称: sub_45b110
// 虚拟地址: 0x45b110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_45b110(int32_t arg1, uint32_t arg2, int32_t* arg3, uint32_t arg4, int32_t arg5, char arg6, uint32_t arg7)
{
    // 第一条实际指令: int32_t* var_1b4
    int32_t* var_1b4
    void* eax_1 = __security_cookie ^ &var_1b4
    void* var_c = eax_1
    var_1b4 = arg3
    
    if (arg4 != 0)
        int32_t var_1c8_1
        char const* const var_1c4_1
        uint32_t eax_2
        char* ecx
        
        if (arg6 == 1)
            eax_2 = arg7
            
            if (eax_2 == 0 || eax_2 == 6)
                eax_2.b = arg5 != 0
                int32_t eax_4 = sub_452770(arg3, arg2, arg4, eax_2.b)
                @__security_check_cookie@4(var_c ^ &var_1b4)
                return eax_4
            
            var_1c4_1 = "CreateFlyingToken"
            var_1c8_1 = 0x23fc
            ecx = "style == FLYING_RECRUIT || style == FLYING_SHIP"
            goto label_45b2f1
        
        if (arg2 != 0)
            if (arg2 == 1 && arg4 s> 0)
                void var_e0
                sub_4c5670(data_126be88, &var_e0)
                sub_4c5920(&var_e0)
                arg3 = var_1b4
        else if (arg4 s> 0)
            void var_110
            sub_4c5670(data_126be7c, &var_110)
            sub_4c5920(&var_110)
            arg3 = var_1b4
        
        eax_2 = arg7
        
        if (eax_2 == 2)
            if (arg4 s< 0)
                goto label_45b216
            
            var_1c4_1 = "CreateFlyingToken"
            var_1c8_1 = 0x2409
            ecx = "amount < 0"
        label_45b2f1:
            sub_489550(eax_2, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                var_1c8_1, var_1c4_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (eax_2 == 9 || eax_2 == 5 || eax_2 == 8 || eax_2 == 0xa)
        label_45b216:
            sub_452730(arg3, arg2, arg4)
        else
            eax_2.b = arg5 != 0
            sub_452770(arg3, arg2, arg4, eax_2.b)
        
        if (arg4 s<= 0)
            arg3[arg2 + 0xc6] += arg4
        else
            arg3[arg2 + 0xc4] += arg4
        
        uint32_t (* eax_6)[0x4] = sub_481490(&data_62d6c4)
        int32_t* ecx_6 = var_1b4
        void* var_1c4_5 = 0x8c
        *eax_6 = 3
        (*eax_6)[0x16] = arg2
        uint32_t ecx_7 = *ecx_6
        (*eax_6)[0x1a] = arg7
        (*eax_6)[0x17] = ecx_7
        ecx_7.b = arg5 != 0
        char var_1c8_5 = 0
        uint32_t var_19c[0x4][0x4]
        uint32_t (* var_1cc_3)[0x4][0x4] = &var_19c
        eax_6[6][0] = arg4
        (*eax_6)[0x19].b = ecx_7.b
        int32_t var_1a4_1 = 0
        _memset(var_1cc_3, var_1c8_5, var_1c4_5)
        int32_t var_1a8_1 = 0xffffffff
        int32_t var_1a0_1 = 0xffffffff
        int32_t edi_2 = neg.d(arg2 - 1)
        int32_t var_1b0 = *var_1b4
        int32_t var_1ac_1 = sbb.d(edi_2, edi_2, arg2 != 1) + 0x27
        void var_b0
        __builtin_memcpy(&var_b0, &var_1b0, 0xa0)
        eax_1 = sub_452860(&eax_6[7], &var_b0)
    
    @__security_check_cookie@4(var_c ^ &var_1b4)
    return eax_1
}
