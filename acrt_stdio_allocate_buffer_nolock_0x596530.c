// 函数名称: ___acrt_stdio_allocate_buffer_nolock
// 虚拟地址: 0x596530
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___acrt_stdio_allocate_buffer_nolock(int32_t* arg1)
{
    // 第一条实际指令: data_6cf75c += 1
    data_6cf75c += 1
    int32_t edi
    int32_t var_c = edi
    int32_t edi_1 = 0x1000
    arg1[1] = __malloc_base(0x1000)
    __free_base(0)
    
    if (arg1[1] == 0)
        arg1[3] |= 0x400
        arg1[1] = &arg1[5]
        edi_1 = 2
    else
        arg1[3] |= 0x40
    
    arg1[6] = edi_1
    int32_t result = arg1[1]
    arg1[2] = 0
    *arg1 = result
    return result
}
