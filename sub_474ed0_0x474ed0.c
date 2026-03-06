// 函数名称: sub_474ed0
// 虚拟地址: 0x474ed0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_474ed0(uint32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_1b4
    void var_1b4
    int32_t eax_1 = __security_cookie ^ &var_1b4
    int32_t var_110[0xc]
    
    if (arg2[4] != 0xf)
        sub_45a830(eax_1, arg2, arg1, 0xf, false, 1, 5, 1, 0)
        sub_4c5670(data_126bd68, &var_110)
        int32_t eax_3 = sub_4c5920(&var_110)
        char eax_4
        uint32_t edi_1
        
        if (arg2[2] == 6)
            eax_4 = sub_453300(eax_3, 1, arg1, 1, nullptr)
            edi_1 = 4
        
        if (arg2[2] != 6 || eax_4 == 0)
            edi_1 = 2
        
        int32_t var_e0[0xc]
        sub_4c5670(data_126be7c, &var_e0)
        sub_4c5920(&var_e0)
        sub_452770(arg1, 0, edi_1, 0)
        *(arg1 + 0x310) += edi_1
        uint32_t (* eax_5)[0x4] = sub_481490(&data_62d6c4)
        int32_t var_1a4_1 = 0
        void* var_1c4_4 = 0x8c
        char var_1c8_4 = 0
        *eax_5 = 3
        (*eax_5)[0x16] = 0
        uint32_t var_19c[0x4][0x4]
        uint32_t (* var_1cc_3)[0x4][0x4] = &var_19c
        (*eax_5)[0x17] = *arg1
        eax_5[6][0] = edi_1
        (*eax_5)[0x19].b = 0
        (*eax_5)[0x1a] = 3
        _memset(var_1cc_3, var_1c8_4, var_1c4_4)
        int32_t var_1b0 = *arg1
        int32_t var_1ac_1 = 0x26
        int32_t var_1a8_1 = 0xffffffff
        int32_t var_1a0_1 = 0xffffffff
        void var_b0
        __builtin_memcpy(&var_b0, &var_1b0, 0xa0)
        sub_452860(&eax_5[7], &var_b0)
    else
        sub_4c5670(data_126bd78, &var_110)
        sub_45aa00(sub_4c5920(&var_110), arg2, arg1, 0xf, 0)
    void* result = sub_46a420(0x14)
    @__security_check_cookie@4(eax_1 ^ &var_1b4)
    return result
}
