// 函数名称: sub_4c0be0
// 虚拟地址: 0x4c0be0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4c0be0(float* arg1)
{
    // 第一条实际指令: void var_48
    void var_48
    int128_t* eax_1 = sub_482820(&var_48, arg1, arg1, &var_48)
    void* ecx = data_114ec70
    int128_t xmm1 = eax_1[1]
    int128_t xmm2 = eax_1[2]
    int128_t xmm3 = eax_1[3]
    int32_t eax_2 = arg1[7]
    *(ecx + 0xa4) = *eax_1
    *(ecx + 0xa0) = eax_2
    *(ecx + 0xb4) = xmm1
    *(ecx + 0xe4) = 1
    *(ecx + 0xc4) = xmm2
    *(ecx + 0xd4) = xmm3
    return sub_496500(&arg1[5])
}
