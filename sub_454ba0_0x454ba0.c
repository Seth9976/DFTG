// 函数名称: sub_454ba0
// 虚拟地址: 0x454ba0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_454ba0(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: void var_68
    void var_68
    int128_t* eax_1 = sub_481680(&var_68, arg2, arg3 + 0x174, &var_68)
    *arg4 = *eax_1
    arg4[1] = eax_1[1]
    arg4[2] = eax_1[2]
    arg4[3] = eax_1[3]
    arg4[4] = eax_1[4]
    arg4[5] = eax_1[5]
    return arg4
}
