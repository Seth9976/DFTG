// 函数名称: sub_4459f0
// 虚拟地址: 0x4459f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4459f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_418
    int32_t var_414
    sub_444560(&var_414, arg2, arg1, 0, &var_414, &var_418, 0, nullptr)
    int32_t ebx = var_414
    int32_t eax_3 = ebx * 3
    *(arg1 + (eax_3 << 2) + 0x8cb) = 0
    sub_445280(eax_3, ebx, arg1, arg2, 3, 0)
    int32_t var_410
    int32_t eax_4 = var_410 * 3
    *(arg1 + (eax_4 << 2) + 0x8cb) = 1
    int32_t result
    int32_t ecx_3
    int32_t edx_2
    result, ecx_3, edx_2 = sub_445280(eax_4, var_410, arg1, arg2, 4, 0)
    
    if (*(arg1 + 0x10) == 0)
        int32_t var_428_1 = *(*(arg1 + var_410 * 0xc + 0x8c4) + 4)
        int32_t var_42c_1 = **(arg1 + ebx * 0xc + 0x8c4)
        int32_t var_430_3 = *(arg2 * 0x1bc + arg1 + 0x18)
        void var_40c
        sub_41da20(&var_40c, edx_2, ecx_3, &var_40c, "%s takes %s and %s.\n")
        result = sub_444430(sub_4892e0(&var_40c), 0xa, arg1, arg2, ebx, var_410, 0, 0)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
