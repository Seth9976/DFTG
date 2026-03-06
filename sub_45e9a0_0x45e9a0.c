// 函数名称: sub_45e9a0
// 虚拟地址: 0x45e9a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_45e9a0(int32_t* arg1)
{
    // 第一条实际指令: void* esi = data_632804
    void* esi = data_632804
    int32_t* var_18 = arg1
    int32_t edx = *arg1
    int32_t var_8 = arg1[0x201]
    sub_45bde0(&var_8, edx, esi, 6, 0, &var_8, 1, 0, 0)
    void* result = sub_45bde0(&arg1[0x19c], *arg1, esi, 7, 0, &arg1[0x19c], arg1[0x200], 0, 0)
    arg1[1] = 0xa
    arg1[0x200] = 0
    return result
}
