// 函数名称: sub_527ce0
// 虚拟地址: 0x527ce0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_527ce0(int32_t* arg1)
{
    // 第一条实际指令: char* eax_11 = *arg1
    char* eax_11 = *arg1
    int32_t ebx
    ebx:1.b = *eax_11
    *arg1 = &eax_11[1]
    int16_t edx
    edx:1.b = eax_11[1]
    *arg1 = &eax_11[2]
    edx.b = eax_11[2]
    *arg1 = &eax_11[3]
    ebx.b = eax_11[3]
    *arg1 = &eax_11[4]
    return ((zx.d(ebx:1.b) << 8 | zx.d(edx:1.b)) << 8 | zx.d(edx.b)) << 8 | zx.d(ebx.b)
}
