// 函数名称: _uninitialize_allocated_io_buffers
// 虚拟地址: 0x58af1e
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t_uninitialize_allocated_io_buffers()
{
    // 第一条实际指令: __free_base(data_6cfafc)
    __free_base(data_6cfafc)
    int32_t var_c = data_6cfb00
    data_6cfafc = 0
    __free_base(var_c)
    int32_t var_10 = data_6cfe04
    data_6cfb00 = 0
    __free_base(var_10)
    int32_t var_14 = data_6cfe08
    data_6cfe04 = 0
    __free_base(var_14)
    data_6cfe08 = 0
    int32_t result
    result.b = 1
    return result
}
