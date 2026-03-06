// 函数名称: sub_513380
// 虚拟地址: 0x513380
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_513380(int128_t* arg1)
{
    // 第一条实际指令: int32_t eax = sub_497d80(*arg1)
    int32_t eax = sub_497d80(*arg1)
    return zx.d(eax.b) | (zx.d((eax u>> 0x10).b) << 8 | zx.d((eax u>> 8).b)) << 8
}
