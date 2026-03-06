// 函数名称: sub_4893e0
// 虚拟地址: 0x4893e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4893e0(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_408
    void arg_8
    void* eax_3 = Mod1::CheckFCreateWriter(&arg_8, 0x400, &var_408, arg1, &arg_8)
    int32_t __saved_esi
    
    if (*(&__saved_esi:3 + eax_3) != 0xa)
        if (eax_3 s>= 0x3ff)
            *(&__saved_esi:3 + eax_3) = 0xa
        else
            *(&var_408 + eax_3) = 0xa
    
    void* esi = data_a7561c
    
    if (esi == 0)
        sub_4cf720(&data_aca0e0)
        esi = _fopen(&data_aca0e0, U"a")
        
        if (esi == 0)
            int32_t eax_4 = OutputDebugStringA("Failed to open log file\n")
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_4
    
    void* ecx_3 = &var_408
    data_a7561c = esi
    
    do
        eax_3.b = *ecx_3
        ecx_3 += 1
    while (eax_3.b != 0)
    
    void* var_410_1 = esi
    void var_407
    
    if (_fwrite(&var_408, ecx_3 - &var_407, 1) != 1)
        OutputDebugStringA("Failed to write to log file\n")
    
    int32_t eax_6 = _fflush(esi)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_6
}
