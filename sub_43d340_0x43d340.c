// 函数名称: sub_43d340
// 虚拟地址: 0x43d340
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_43d340(void* arg1, int128_t* arg2)
{
    // 第一条实际指令: *(arg1 + 0x28) += 1
    *(arg1 + 0x28) += 1
    int32_t var_c = *(arg1 + 0x28) * 0x2c
    int32_t var_10 = *(arg1 + 0x24)
    int32_t eax_1 = sub_57fb2f()
    void* ecx = *(arg1 + 0x28) * 0x2c
    *(arg1 + 0x24) = eax_1
    void* ecx_1 = ecx + eax_1
    *(ecx_1 - 0x2c) = *arg2
    *(ecx_1 - 0x1c) = arg2[1]
    *(ecx_1 - 0xc) = arg2[2].q
    *(ecx_1 - 4) = *(arg2 + 0x28)
    int32_t var_14 = *(arg1 + 0x28) << 2
    int32_t var_18 = *(arg1 + 0x2c)
    int32_t result = sub_57fb2f()
    int32_t ecx_2 = *(arg1 + 0x28)
    *(arg1 + 0x2c) = result
    *(result + (ecx_2 << 2) - 4) = 0
    return result
}
