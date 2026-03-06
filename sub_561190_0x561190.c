// 函数名称: sub_561190
// 虚拟地址: 0x561190
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_561190(int32_t* arg1)
{
    // 第一条实际指令: void var_cc
    void var_cc
    int32_t eax_1 = __security_cookie ^ &var_cc
    int32_t* var_dc = arg1
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_587c01()
    void var_c8
    sub_560200(eax_2, edx, &var_c8, arg1)
    int32_t result = sub_56c6e0(&var_c8, "#?RADIANCE\n")
    int32_t var_18
    int32_t var_20 = var_18
    int32_t var_14
    int32_t var_1c = var_14
    
    if (result == 0)
        result = sub_56c6e0(&var_c8, "#?RGBE\n")
        int32_t var_20_1 = var_18
        int32_t var_1c_1 = var_14
    
    _fseek(arg1, eax_2, 0)
    @__security_check_cookie@4(eax_1 ^ &var_cc)
    return result
}
