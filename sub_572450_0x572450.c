// 函数名称: sub_572450
// 虚拟地址: 0x572450
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_572450(int32_t* arg1))[0x4]
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    uint32_t (* result)[0x4] = sub_572540(*ebx)
    result[3][0] = ebx[0xc]
    (*result)[0x13] = ebx[0x13]
    result[5][0] = ebx[0x14]
    (*result)[0x15] = ebx[0x15]
    (*result)[0x16] = ebx[0x16]
    (*result)[0x17] = ebx[0x17]
    result[6][0] = ebx[0x18]
    (*result)[0xd] = ebx[0xd]
    (*result)[0xe] = ebx[0xe]
    (*result)[0xf] = ebx[0xf]
    result[4][0] = ebx[0x10]
    (*result)[0x11] = ebx[0x11]
    (*result)[0x12] = ebx[0x12]
    char* esi = ebx[0x19]
    char* ecx_3 = esi
    void* edx_3 = &ecx_3[1]
    uint32_t eax_7
    
    do
        eax_7.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_7.b != 0)
    int32_t eax_8 = data_1151ae0
    uint32_t eax_9
    
    if (eax_8 == 0)
        int32_t var_10_1 = ecx_3 - edx_3 + 1
        eax_9 = _malloc()
    else
        eax_9 = eax_8(ecx_3 - edx_3 + 1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\meshattachment.c", 0x6a)
    
    (*result)[0x19] = eax_9
    void* ecx_7 = eax_9 - esi
    
    do
        eax_9.b = *esi
        esi = &esi[1]
        *(ecx_7 + esi - 1) = eax_9.b
    while (eax_9.b != 0)
    
    (*result)[0x1e] = ebx[0x1e]
    (*result)[0x1f] = ebx[0x1f]
    result[8][0] = ebx[0x20]
    (*result)[0x21] = ebx[0x21]
    (*result)[0xa] = ebx[0xa]
    int32_t* eax_15 = ebx[0x23]
    
    if (eax_15 != 0)
        ebx = eax_15
    
    sub_5728c0(result, ebx)
    sub_5725e0(result)
    return result
}
