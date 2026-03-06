// 函数名称: ??$common_initialize_environment_nolock@D@@YAHXZ
// 虚拟地址: 0x58a8cc
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t??$common_initialize_environment_nolock@D@@YAHXZ()
{
    // 第一条实际指令: if (data_6cf9d0 != 0)
    if (data_6cf9d0 != 0)
        return 0
    
    ___acrt_initialize_multibyte()
    PSTR eax_1 = ___dcrt_get_narrow_environment_from_os()
    int32_t result
    
    if (eax_1 != 0)
        void* eax_2 = create_environment<char>(eax_1)
        
        if (eax_2 != 0)
            data_6cf9dc = eax_2
            result = 0
            data_6cf9d0 = eax_2
        else
            result = 0xffffffff
        
        __free_base(0)
    else
        result = 0xffffffff
    
    __free_base(eax_1)
    return result
}
