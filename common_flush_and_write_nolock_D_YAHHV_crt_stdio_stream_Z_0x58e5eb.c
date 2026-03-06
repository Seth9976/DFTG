// 函数名称: ??$common_flush_and_write_nolock@D@@YAHHV__crt_stdio_stream@@@Z
// 虚拟地址: 0x58e5eb
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t??$common_flush_and_write_nolock@D@@YAHHV__crt_stdio_stream@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t eax = __fileno(arg2)
    int32_t* eax_2
    
    if (((arg2[3]).b & 6) == 0)
        *__errno() = 9
        eax_2 = arg2
    else if (((arg2[3] u>> 0xc).b & 1) == 0)
        if (((arg2[3]).b & 1) == 0)
            goto label_58e67c
        
        arg2[2] = 0
        eax_2 = arg2
        
        if (((arg2[3] u>> 3).b & 1) != 0)
            *eax_2 = eax_2[1]
            arg2[3] &= 0xfffffffe
        label_58e67c:
            arg2[3] |= 2
            arg2[3] &= 0xfffffff7
            arg2[2] = 0
            
            if ((arg2[3] & 0x4c0) == 0)
                if (arg2 == ___acrt_iob_func(1))
                label_58e6be:
                    
                    if (__isatty(eax) == 0)
                        ___acrt_stdio_allocate_buffer_nolock(arg2)
                else
                    if (arg2 == ___acrt_iob_func(2))
                        goto label_58e6be
                    
                    ___acrt_stdio_allocate_buffer_nolock(arg2)
            
            int32_t* __saved_esi_1 = arg2
            
            if (write_buffer_nolock<char>(arg1) != 0)
                return zx.d(arg1.b)
            
            arg2[3] |= 0x10
            return 0xffffffff
    else
        *__errno() = 0x22
        eax_2 = arg2
    
    eax_2[3] |= 0x10
    return 0xffffffff
}
