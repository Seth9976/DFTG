// 函数名称: ____mb_cur_max_func
// 虚拟地址: 0x589e17
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall____mb_cur_max_func(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* eax = sub_58c1b2()
    var_8 = eax[0x13]
    ___acrt_update_multibyte_info(eax, &var_8)
    return *var_8
}
