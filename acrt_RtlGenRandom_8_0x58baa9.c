// 函数名称: ___acrt_RtlGenRandom@8
// 虚拟地址: 0x58baa9
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcall___acrt_RtlGenRandom@8(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_c = esi
    int32_t eax_2 = try_get_function(0x21, "SystemFunction036", 0x5ab758, "SystemFunction036")
    
    if (eax_2 == 0)
        sub_58a129()
        noreturn
    
    int32_t result = eax_2(arg1, arg2)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
