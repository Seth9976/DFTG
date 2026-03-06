// 函数名称: ___acrt_FlsFree@4
// 虚拟地址: 0x58b830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __stdcall___acrt_FlsFree@4(char* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* esi
    char* var_c = esi
    char const* const dwTlsIndex = "FlsFree"
    int32_t eax_2 = try_get_function(4, "FlsFree", 0x5ab678, dwTlsIndex)
    dwTlsIndex = arg1
    char const* const* esp = &dwTlsIndex
    BOOL result
    
    if (eax_2 == 0)
        result = TlsFree(dwTlsIndex)
        esp = &var_c
    else
        result = eax_2()
    
    *esp
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
