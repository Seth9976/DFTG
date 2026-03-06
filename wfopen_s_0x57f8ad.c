// 函数名称: __wfopen_s
// 虚拟地址: 0x57f8ad
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__wfopen_s(int32_t* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    int32_t eax_1 = common_fsopen<char>(arg2, arg3, 0x80)
    *arg1 = eax_1
    
    if (eax_1 != 0)
        return 0
    
    return *__errno()
}
