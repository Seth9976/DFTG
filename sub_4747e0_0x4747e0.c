// 函数名称: sub_4747e0
// 虚拟地址: 0x4747e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4747e0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_194
    void var_194
    int32_t eax_1 = __security_cookie ^ &var_194
    int32_t var_190
    int32_t eax_3 = sub_474730(&var_190, arg2, arg1, &var_190)
    
    if (eax_3 == 4)
        int32_t* eax_4 = sub_452cc0(var_190)
        int32_t eax_5
        char ecx_2
        eax_5, ecx_2 = sub_453af0(arg1, arg2)
        int32_t var_1a4_1 = 0
        int32_t eax_6 = sub_45a730(eax_5, arg2, arg1, eax_4, 1, ecx_2)
        @__security_check_cookie@4(eax_1 ^ &var_194)
        return eax_6
    
    int32_t eax_11
    
    if (eax_3 != 3)
        eax_11 = sub_453af0(arg1, arg2)
    else
        int32_t var_e0[0xc]
        sub_4c5670(data_126be7c, &var_e0)
        sub_4c5920(&var_e0)
        sub_452770(arg1, 0, 1, 0)
        arg1[0xc4] += 1
        uint32_t (* eax_7)[0x4] = sub_481490(&data_62d6c4)
        int32_t var_174_1 = 0
        void* var_1a4_3 = 0x8c
        char var_1a8_3 = 0
        *eax_7 = 3
        (*eax_7)[0x16] = 0
        uint32_t var_16c[0x4]
        uint32_t (* var_1ac_3)[0x4] = &var_16c
        (*eax_7)[0x17] = *arg1
        eax_7[6][0] = 1
        (*eax_7)[0x19].b = 0
        (*eax_7)[0x1a] = 1
        _memset(var_1ac_3, var_1a8_3, var_1a4_3)
        int32_t var_180 = *arg1
        int32_t var_17c_1 = 0x26
        int32_t var_178_1 = 0xffffffff
        int32_t var_170_1 = 0xffffffff
        void var_b0
        __builtin_memcpy(&var_b0, &var_180, 0xa0)
        void* eax_9 = sub_452860(&eax_7[7], &var_b0)
        int32_t ecx_11 = 0
        int32_t edx_4 = arg1[0x39a]
        
        if (edx_4 s<= 0)
        label_4749b8:
            sub_489550(eax_9, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x63e, "RemoveDieRecruited")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_9 = &arg1[0x372]
        
        while (*eax_9 != arg2[0x22a])
            ecx_11 += 1
            eax_9 += 4
            
            if (ecx_11 s>= edx_4)
                goto label_4749b8
        
        arg1[0x39a] = edx_4 - 1
        eax_11 = arg1[edx_4 + 0x371]
        arg1[ecx_11 + 0x372] = eax_11
    
    uint32_t eax_12 = sub_45a830(eax_11, arg2, arg1, eax_3, false, 1, 5, 1, 0)
    @__security_check_cookie@4(eax_1 ^ &var_194)
    return eax_12
}
