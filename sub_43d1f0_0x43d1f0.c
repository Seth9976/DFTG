// 函数名称: sub_43d1f0
// 虚拟地址: 0x43d1f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_43d1f0(void* arg1, int128_t* arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t var_18 = 0x38
    int32_t* result = _malloc()
    int32_t eax_8
    char* ebx
    
    if (arg1 == 0)
        eax_8 = 0
        ebx = nullptr
    else
        int32_t var_18_1 = (*(arg1 + 0x34) + 1) * 0x2c
        ebx = _malloc()
        sub_579300(ebx, *(arg1 + 0x30), *(arg1 + 0x34) * 0x2c)
        int128_t* ecx_1 = *(arg1 + 0x34) * 0x2c + ebx
        *ecx_1 = *arg2
        ecx_1[1] = arg2[1]
        ecx_1[2].q = arg2[2].q
        *(ecx_1 + 0x28) = *(arg2 + 0x28)
        eax_8 = *(arg1 + 0x34) + 1
    
    result[0xc] = ebx
    result[0xd] = eax_8
    data_60ccc0
    *result = 1
    __builtin_memcpy(&result[2], 
        "\x00\x00\x00\x00\x00\x00\xf0\xbf\x00\x00\x00\x00\x00\x00\xf0\xbf\x00\x00\x00\x00\x00\x00\xf0\xbf", 
        0x18)
    result[9] = 0
    result[0xa] = 0
    result[0xb] = 0
    result[8] = 0
    return result
}
