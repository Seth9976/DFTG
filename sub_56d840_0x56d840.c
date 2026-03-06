// 函数名称: sub_56d840
// 虚拟地址: 0x56d840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __fastcallsub_56d840(char* arg1)
{
    // 第一条实际指令: int32_t eax_7 = data_1151ae0
    int32_t eax_7 = data_1151ae0
    char* esi = arg1
    int128_t* result_1
    
    if (eax_7 == 0)
        int32_t var_c_1 = 0x10
        result_1 = _malloc()
    else
        result_1 =
            eax_7(0x10, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x24)
    
    int128_t* result = result_1
    
    if (result != 0)
        *result = zx.o(0)
    
    char* ecx = esi
    void* edx = &ecx[1]
    
    do
        result_1.b = *ecx
        ecx = &ecx[1]
    while (result_1.b != 0)
    
    int32_t eax = data_1151ae0
    int32_t eax_1
    
    if (eax == 0)
        void* var_c_2 = ecx - edx + 1
        eax_1 = _malloc()
    else
        eax_1 = eax(ecx - edx + 1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x25)
    
    *result = eax_1
    void* ecx_4 = eax_1 - esi
    
    do
        eax_1.b = *esi
        esi = &esi[1]
        *(ecx_4 + esi - 1) = eax_1.b
    while (eax_1.b != 0)
    
    int32_t eax_2 = data_1151ae0
    *(result + 8) = 0
    
    if (eax_2 != 0)
        *(result + 0xc) =
            eax_2(0, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x27)
        return result
    
    int32_t var_c_3 = 0
    *(result + 0xc) = _malloc()
    return result
}
