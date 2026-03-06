// 函数名称: ___scrt_initialize_onexit_tables
// 虚拟地址: 0x577410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___scrt_initialize_onexit_tables(int32_t arg1)
{
    // 第一条实际指令: if (data_6cf321 != 0)
    if (data_6cf321 != 0)
        int32_t eax
        eax.b = 1
        return eax
    
    if (arg1 != 0 && arg1 != 1)
        ___scrt_fastfail(5)
        breakpoint
    
    int32_t eax_2
    
    if (___asan_report_present() == 0 || arg1 != 0)
        eax_2 = ror.d(0xffffffff, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
        int32_t var_c = eax_2
        int32_t var_8_1 = eax_2
        data_6cf324 = eax_2
        void* edi_1 = &data_6cf328
        int32_t* esi_1 = &var_c
        *edi_1 = *esi_1
        *(edi_1 + 4) = esi_1[1]
        var_c = eax_2
        int32_t var_8_2 = eax_2
        data_6cf330 = eax_2
        void* edi_4 = &data_6cf334
        int32_t* esi_4 = &var_c
        *edi_4 = *esi_4
        *(edi_4 + 4) = esi_4[1]
        data_6cf321 = 1
        eax_2.b = 1
    else if (__initialize_onexit_table(&data_6cf324) != 0)
        eax_2.b = 0
    else if (__initialize_onexit_table(&data_6cf330) == 0)
        data_6cf321 = 1
        eax_2.b = 1
    else
        eax_2.b = 0
    
    return eax_2
}
