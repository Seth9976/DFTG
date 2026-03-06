// 函数名称: sub_4c0210
// 虚拟地址: 0x4c0210
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4c0210(int32_t arg1, int128_t* arg2, int32_t* arg3, float* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: void* eax = data_114e814
    void* eax = data_114e814
    
    if (*(eax + 0x38) == 0)
        return sub_4bffb0(eax, arg2, arg3, arg4, arg5, arg6)
    
    void var_28
    void var_18
    char result = sub_4bfe40(eax + 0x28, arg4, arg2, eax + 0x28, &var_18, &var_28)
    
    if (result == 0)
        return result
    
    return sub_4bffb0(&var_28, &var_18, arg3, &var_28, arg5, arg6)
}
