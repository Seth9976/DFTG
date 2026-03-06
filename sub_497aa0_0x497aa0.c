// 函数名称: sub_497aa0
// 虚拟地址: 0x497aa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_497aa0(int128_t* arg1)
{
    // 第一条实际指令: float var_48[0x10]
    float var_48[0x10]
    int32_t* ecx
    int32_t* edx
    float* eax_1 = sub_497e60(&var_48, edx, ecx, &var_48)
    *arg1 = *eax_1
    arg1[1] = *(eax_1 + 0x10)
    arg1[2] = *(eax_1 + 0x20)
    arg1[3] = *(eax_1 + 0x30)
    return arg1
}
