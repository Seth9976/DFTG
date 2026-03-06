// 函数名称: ___acrt_initialize_command_line
// 虚拟地址: 0x5934c1
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

PWSTR___acrt_initialize_command_line()
{
    // 第一条实际指令: data_6cfe0c = GetCommandLineA()
    data_6cfe0c = GetCommandLineA()
    data_6cfe10 = GetCommandLineW()
    PWSTR result
    result.b = 1
    return result
}
