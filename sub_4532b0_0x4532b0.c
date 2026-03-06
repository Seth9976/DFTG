// 函数名称: sub_4532b0
// 虚拟地址: 0x4532b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4532b0(int32_t** arg1)
{
    // 第一条实际指令: void var_c
    void var_c
    void* var_18 = &var_c
    int32_t var_8
    
    if (sub_4531b0(&var_c, &var_8, *arg1) == 0)
        return 1
    
    int32_t i = arg1[0xb3]
    int32_t esi = 0
    
    for (; i != 0; i = *(sub_452d50(i) + 0x20))
        esi += 1
    
    i.b = esi s>= var_8
    return i
}
