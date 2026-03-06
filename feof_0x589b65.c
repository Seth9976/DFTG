// 函数名称: _feof
// 虚拟地址: 0x589b65
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t_feof(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return *(arg1 + 0xc) u>> 3 & 1
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0
}
