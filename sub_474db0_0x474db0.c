// 函数名称: sub_474db0
// 虚拟地址: 0x474db0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_474db0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_15c
    void var_15c
    int32_t eax_1 = __security_cookie ^ &var_15c
    char eax_3
    uint32_t edi_1
    
    if (arg2[2] == 6)
        eax_3 = sub_453300(arg2, 1, arg1, 1, nullptr)
        edi_1 = 0xfffffffc
    
    if (arg2[2] != 6 || eax_3 == 0)
        edi_1 = 0xfffffffe
    
    sub_452770(arg1, 0, edi_1, 0)
    arg1[0xc6] += edi_1
    uint32_t (* eax_4)[0x4] = sub_481490(&data_62d6c4)
    int32_t var_144 = 0
    void* var_16c_3 = 0x8c
    char var_170_3 = 0
    *eax_4 = 3
    (*eax_4)[0x16] = 0
    uint32_t var_13c[0x8][0x4]
    uint32_t (* var_174_1)[0x8][0x4] = &var_13c
    (*eax_4)[0x17] = *arg1
    eax_4[6][0] = edi_1
    (*eax_4)[0x19].b = 0
    (*eax_4)[0x1a] = 4
    _memset(var_174_1, var_170_3, var_16c_3)
    int32_t var_150 = *arg1
    int32_t var_14c = 0x26
    int32_t var_148 = 0xffffffff
    int32_t var_140 = 0xffffffff
    void var_b0
    __builtin_memcpy(&var_b0, &var_150, 0xa0)
    uint32_t result = sub_45a830(sub_452860(&eax_4[7], &var_b0), arg2, arg1, 9, false, 1, 0, 1, 0)
    @__security_check_cookie@4(eax_1 ^ &var_15c)
    return result
}
