// 函数名称: sub_420430
// 虚拟地址: 0x420430
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct InputHitResult::HitResult::VTable**sub_420430(struct InputHitResult::HitResult::VTable** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_3c = 0
    int32_t var_3c = 0
    int32_t var_38 = 0
    
    if (sub_4c4810(arg2, &var_3c) != 0)
        sub_420280(arg1, &var_3c)
        return arg1
    
    int32_t ecx_2 = var_3c
    arg1[2] = var_3c
    int32_t eax_3 = var_3c
    *arg1 = &HitResult::`vftable'{for `InputHitResult'}
    arg1[1] = 0
    arg1[6] = ecx_2
    int32_t ecx_3 = var_3c
    arg1[5] = eax_3
    arg1[7] = ecx_3
    arg1[3] = &UI2HitResult::`vftable'{for `InputHitResult'}
    arg1[4] = 0
    int64_t var_14
    *(arg1 + 0x20) = var_14
    int32_t var_c
    arg1[0xa] = var_c
    return arg1
}
