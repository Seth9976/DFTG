// 函数名称: ___acrt_AreFileApisANSI@0
// 虚拟地址: 0x58b7a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___acrt_AreFileApisANSI@0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = try_get_AreFileApisANSI()
    int32_t result
    
    if (eax_2 == 0)
        result = 1
    else
        result = eax_2()
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
