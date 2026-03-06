// 函数名称: sub_4741d0
// 虚拟地址: 0x4741d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4741d0(int32_t arg1, int32_t* arg2, void* arg3, void* arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = arg2[4]
    *(arg2 + 0x21) = 0
    sub_45a470(arg4, arg2, arg3, 3, arg5)
    *(arg2 + 0x21) = 0
    sub_45a5a0(arg2, arg2, arg3, 2, 1, arg5)
    int32_t var_ac
    _memset(&var_ac, 0, 0xa0)
    int32_t eax_4
    eax_4.b = edi == 4
    int32_t var_a8 = eax_4 + 0x1a
    int32_t var_34 = *(arg4 + 0x8a8)
    int32_t eax_8 = arg2[6]
    var_ac = eax_8
    int32_t result = sub_4528c0(eax_8, &var_ac, &arg2[0x1c], 5, arg5)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
