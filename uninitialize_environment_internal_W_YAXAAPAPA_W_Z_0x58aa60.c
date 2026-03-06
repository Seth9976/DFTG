// 函数名称: ??$uninitialize_environment_internal@_W@@YAXAAPAPA_W@Z
// 虚拟地址: 0x58aa60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*??$uninitialize_environment_internal@_W@@YAXAAPAPA_W@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = *arg1
    int32_t* result = *arg1
    
    if (result != data_6cf9dc)
        result = free_environment<char>(result)
    
    return result
}
