// 函数名称: ___report_gsfailure
// 虚拟地址: 0x577ab7
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void___report_gsfailure(uint64_t stack_cookie) __noreturn
{
    // 第一条实际指令: BOOL eax
    BOOL eax
    int32_t ecx
    int32_t edx
    eax, ecx, edx = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE)
    bool p = unimplemented  {test eax, eax}
    bool a = undefined
    bool z = eax == 0
    
    if (not(z))
        trap(0xd)
    
    data_6cf468 = eax
    data_6cf464 = ecx
    data_6cf460 = edx
    int32_t entry_ebx
    data_6cf45c = entry_ebx
    int32_t entry_esi
    data_6cf458 = entry_esi
    int32_t entry_edi
    data_6cf454 = entry_edi
    int16_t ss
    data_6cf480 = ss
    int16_t cs
    data_6cf474 = cs
    int16_t ds
    data_6cf450 = ds
    int16_t es
    data_6cf44c = es
    int16_t fs
    data_6cf448 = fs
    int16_t gs
    data_6cf444 = gs
    bool d
    data_6cf478 = (d ? 1 : 0) << 0xa | (eax s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4
        | (p ? 1 : 0) << 2
    int32_t entry_ebp
    data_6cf46c = entry_ebp
    data_6cf470 = __return_addr
    data_6cf47c = &stack_cookie
    data_6cf3b8 = 0x10001
    data_6cf374 = data_6cf470
    data_6cf368 = 0xc0000409
    data_6cf36c = 1
    data_6cf378 = 1
    int32_t var_32c_1 = 4
    data_6cf37c = 2
    int32_t var_32c_2 = 4
    uint32_t __security_cookie_1 = __security_cookie
    (&__security_cookie_1)[1] = data_61f068
    ___raise_securityfailure(&data_5a9244)
    noreturn
}
