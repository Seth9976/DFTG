// 函数名称: sub_4d4c30
// 虚拟地址: 0x4d4c30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d4c30(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    char* eax = *(arg1 + 4)
    char* const ecx = &data_5b2591
    int32_t edx
    int32_t var_8 = edx
    
    if (eax != 0)
        ecx = eax
    
    int32_t result
    result.b = sub_48d8d0(eax, edx, ecx, ecx, &data_5efc90) == 1
    return result
}
