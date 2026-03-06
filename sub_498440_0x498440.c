// 函数名称: sub_498440
// 虚拟地址: 0x498440
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_498440(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = data_aca1f4
    int32_t esi = data_aca1f4
    
    if (esi == 0)
        sub_498360()
        esi = data_aca1f4
    
    for (int32_t i = 0; i s< 7; i += 1)
        if (arg1 s<= 1 << (i.b + 4))
            return esi + i * 0x14
    
    return esi + 0x8c
}
