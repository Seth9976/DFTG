// 函数名称: sub_553d60
// 虚拟地址: 0x553d60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_553d60(char* arg1)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    
    if (esi == 0 || *esi == 0)
        esi = &data_5b2591
    
    char* ecx = esi
    char i
    
    do
        i = *ecx
        ecx = &ecx[1]
    while (i != 0)
    int32_t var_c = 1
    void* var_10 = ecx - &ecx[1] + 1
    char* result = _calloc()
    
    if (result == 0)
        int32_t var_c_1 = 1
        int32_t var_10_1 = 1
        return _calloc()
    
    char* ecx_2 = esi
    char* eax_1
    
    do
        eax_1.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_1.b != 0)
    sub_579a90(result, esi, ecx_2 - &ecx_2[1])
    return result
}
