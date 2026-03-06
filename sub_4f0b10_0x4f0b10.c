// 函数名称: sub_4f0b10
// 虚拟地址: 0x4f0b10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_4f0b10(int32_t arg1, int32_t* arg2, int32_t arg3 @ xmm3, int32_t arg4)
{
    // 第一条实际指令: char* eax_1
    char* eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg3)
    return sub_4f0910(eax_1, arg2, &data_6218dc, arg4, eax_1, edx)
}
