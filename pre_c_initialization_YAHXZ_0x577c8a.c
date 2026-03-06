// 函数名称: ?pre_c_initialization@@YAHXZ
// 虚拟地址: 0x577c8a
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?pre_c_initialization@@YAHXZ()
{
    // 第一条实际指令: __set_pgmptr(2)
    __set_pgmptr(2)
    __set_fmode(0x4000)
    data_6cfa0c = 0
    
    if (___scrt_initialize_onexit_tables(1) != 0)
        __fnclex()
        sub_578570()
        _atexit(sub_57859c)
        int32_t var_8_1 = 1
        
        if (sub_58a8c1() == 0)
            sub_57850e()
            
            if (sub_578558() != 0)
                ___setusermatherr(sub_51c220)
            
            __initialize_default_precision()
            __configthreadlocale(0)
            
            if (sub_41c100() != 0)
                j_sub_58a8cc()
            
            j_sub_51c220()
            return 0
    
    ___scrt_fastfail(7)
    breakpoint
}
