// 函数名称: sub_4d4c60
// 虚拟地址: 0x4d4c60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4d4c60(void* arg1, void** arg2)
{
    // 第一条实际指令: char* eax_1 = *(arg1 + 4)
    char* eax_1 = *(arg1 + 4)
    int32_t ecx_1
    
    if (eax_1 == 0 || *eax_1 == 0)
        ecx_1 = 0
    else
        ecx_1 = *(sub_48a080(arg1 + 4) + 8)
    
    void* esi = sub_4c2e40(ecx_1 + 1)
    char* const ecx_3 = &data_5b2591
    *arg2 = esi
    char* edx = *(arg1 + 4)
    
    if (edx != 0)
        ecx_3 = edx
    
    void* result
    
    do
        result.b = *ecx_3
        ecx_3 = &ecx_3[1]
        *esi = result.b
        esi += 1
    while (result.b != 0)
    
    result.b = 1
    return result
}
