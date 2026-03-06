// 函数名称: ___dcrt_uninitialize_environments_nolock
// 虚拟地址: 0x58aa96
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___dcrt_uninitialize_environments_nolock()
{
    // 第一条实际指令: sub_58aa20(&data_6cf9d0, uninitialize_environment_internal<wchar_t>)
    sub_58aa20(&data_6cf9d0, uninitialize_environment_internal<wchar_t>)
    sub_58aa20(0x6cf9d4, uninitialize_environment_internal<char>)
    free_environment<char>(data_6cf9dc)
    return free_environment<char>(data_6cf9d8)
}
