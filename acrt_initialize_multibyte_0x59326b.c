// 函数名称: ___acrt_initialize_multibyte
// 虚拟地址: 0x59326b
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___acrt_initialize_multibyte()
{
    // 第一条实际指令: if (data_6cfdfc == 0)
    if (data_6cfdfc == 0)
        data_6cfdec = 0x61f478
        data_6cfdf4 = 0x61f7a0
        data_6cfdf0 = 0x61f698
        int32_t* var_4_1 = &data_6cfdec
        int32_t* var_8_1 = ___acrt_getptd_head()
        int32_t edi
        setmbcp_internal(edi, 0xfffffffd, 1)
        data_6cfdfc = 1
    
    int32_t result
    result.b = 1
    return result
}
