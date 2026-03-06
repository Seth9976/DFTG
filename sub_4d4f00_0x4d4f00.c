// 函数名称: sub_4d4f00
// 虚拟地址: 0x4d4f00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d4f00(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    char* eax = *(arg2 + 4)
    char* const edx = &data_5b2591
    
    if (eax != 0)
        edx = eax
    
    int32_t var_8 = arg1 + 0xc
    int32_t var_c = arg1 + 8
    int32_t var_10 = arg1 + 4
    int32_t var_14 = arg1
    int32_t result
    result.b = sub_48d8d0(arg1 + 4, edx, arg1, edx, "%d %d %d %d") == 4
    return result
}
