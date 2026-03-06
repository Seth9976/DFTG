// 函数名称: sub_490370
// 虚拟地址: 0x490370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_490370(int32_t arg1, uint32_t arg2, uint32_t arg3, int64_t arg4, float arg5, uint32_t arg6))[0x4]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t (* result)[0x4] = sub_490100()
    int128_t xmm0_1 = data_5d34d0
    *result = 1
    (*result)[0x13] = arg2
    *(result + 8) = xmm0_1
    (*result)[0x12] = arg6
    __builtin_memcpy(&(*result)[6], 
        "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
            3f", 
        0x30)
    (*result)[0x51] = data_114a77c
    (*result)[0x52] = arg3
    float xmm1_1 = data_aca2b8 - arg5
    int128_t var_3c = data_aca2a0
    int64_t xmm0_3 = data_aca2b0
    float xmm2_1 = xmm0_3.d f- arg4.d
    float xmm0_5 = xmm0_3:4.d f- arg4:4.d
    (*result)[0x55] = xmm2_1 * xmm2_1 + xmm0_5 * xmm0_5 + xmm1_1 * xmm1_1
    (*result)[0x53] = sub_490290()
    result[0x15][0] = sub_490300()
    (*result)[0x57] = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
