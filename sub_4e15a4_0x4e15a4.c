// 函数名称: sub_4e15a4
// 虚拟地址: 0x4e15a4
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_4e15a4(int16_t arg1, char* arg2, char* arg3, int32_t arg4 @ esi, void* arg5 @ edi) __noreturn
{
    // 第一条实际指令: data_100004e |= arg2.b
    data_100004e |= arg2.b
    *arg2 += arg1.b
    int16_t eax
    eax.b = (arg1 + (*arg2).w).b + 5
    eax.b += 6
    int16_t es
    uint32_t var_4 = zx.d(es)
    uint32_t var_8 = zx.d(es)
    uint32_t var_c = zx.d(es)
    uint32_t var_10 = zx.d(es)
    uint32_t var_14 = zx.d(es)
    uint32_t var_18 = zx.d(es)
    uint32_t var_1c = zx.d(es)
    uint32_t var_20 = zx.d(es)
    uint32_t var_24 = zx.d(es)
    uint32_t var_28 = zx.d(es)
    uint32_t var_2c = zx.d(es)
    uint32_t var_30 = zx.d(es)
    uint32_t var_34 = zx.d(es)
    uint32_t var_38 = zx.d(es)
    uint32_t var_3c = zx.d(es)
    uint32_t var_40 = zx.d(es)
    uint32_t var_44 = zx.d(es)
    uint32_t var_48 = zx.d(es)
    uint32_t var_4c = zx.d(es)
    uint32_t var_50 = zx.d(es)
    uint32_t var_54 = zx.d(es)
    uint32_t var_58 = zx.d(es)
    uint32_t var_5c = zx.d(es)
    uint32_t var_60 = zx.d(es)
    uint32_t var_64 = zx.d(es)
    uint32_t var_68 = zx.d(es)
    uint32_t var_6c = zx.d(es)
    uint32_t var_70 = zx.d(es)
    uint32_t var_74 = zx.d(es)
    uint32_t var_78 = zx.d(es)
    uint32_t var_7c = zx.d(es)
    uint32_t var_80 = zx.d(es)
    uint32_t var_84 = zx.d(es)
    uint32_t var_88 = zx.d(es)
    uint32_t var_8c = zx.d(es)
    uint32_t var_90 = zx.d(es)
    uint32_t var_94 = zx.d(es)
    uint32_t var_98 = zx.d(es)
    uint32_t var_9c = zx.d(es)
    uint32_t var_a0 = zx.d(es)
    uint32_t var_a4 = zx.d(es)
    uint32_t var_a8 = zx.d(es)
    uint32_t var_ac = zx.d(es)
    uint32_t var_b0 = zx.d(es)
    uint32_t var_b4 = zx.d(es)
    uint32_t var_b8 = zx.d(es)
    uint32_t var_bc = zx.d(es)
    uint32_t var_c0 = zx.d(es)
    uint32_t var_c4 = zx.d(es)
    uint32_t var_c8 = zx.d(es)
    uint32_t var_cc = zx.d(es)
    uint32_t var_d0 = zx.d(es)
    uint32_t var_d4 = zx.d(es)
    uint32_t var_d8 = zx.d(es)
    uint32_t var_dc = zx.d(es)
    uint32_t var_e0 = zx.d(es)
    uint32_t var_e4 = zx.d(es)
    uint32_t var_e8 = zx.d(es)
    uint32_t var_ec = zx.d(es)
    *arg3 += eax.b
    int16_t* entry_ebx
    int16_t ss
    *entry_ebx = ss
    char temp0 = eax:1.b
    eax:1.b += arg3.b
    eax.b = adc.b(eax.b, 0x4e, temp0 + arg3.b u< temp0)
    char temp1 = *(arg5 + 0x14004e14)
    *(arg5 + 0x14004e14) += arg3:1.b
    arg3.b = adc.b(arg3.b, *(arg4 - 1), temp1 + arg3:1.b u< temp1)
    trap(0xf)
}
