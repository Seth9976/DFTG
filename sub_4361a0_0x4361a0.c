// 函数名称: sub_4361a0
// 虚拟地址: 0x4361a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4361a0(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = arg1 * 5
    int32_t esi = arg1 * 5
    sub_49a5a0(&(&data_62b1c0)[esi * 2])
    int128_t xmm0 = *((esi << 3) + &data_62b1ac)
    int32_t eax = *((esi << 3) + &data_62b1cc)
    *((esi << 3) + &data_62b1b4) = eax
    *((esi << 3) + &data_62b1bc) = xmm0
    (&data_62b1b0)[esi * 2] = 0
    (&data_62b1ac)[esi * 2] = 0
    *((esi << 3) + &data_62b1cc) = eax + 1
    (&data_62b1a8)[esi * 2] = 0
    return eax + 1
}
