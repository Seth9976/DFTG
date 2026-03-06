// 函数名称: sub_526f70
// 虚拟地址: 0x526f70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_526f70(int32_t arg1, char* arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: char* esi = arg2
    char* esi = arg2
    _free(*arg3)
    _free(arg3[1])
    char* ecx = esi
    void* edx = &ecx[1]
    char i
    
    do
        i = *ecx
        ecx = &ecx[1]
    while (i != 0)
    int32_t eax = data_1151ae0
    int32_t eax_1
    
    if (eax == 0)
        void* var_10_1 = ecx - edx + 1
        eax_1 = _malloc()
    else
        eax_1 = eax(ecx - edx + 1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\attachmentloader.c", 0x58)
    
    *arg3 = eax_1
    void* ecx_4 = eax_1 - esi
    
    do
        eax_1.b = *esi
        esi = &esi[1]
        *(ecx_4 + esi - 1) = eax_1.b
    while (eax_1.b != 0)
    
    char* esi_1 = arg4
    char* ecx_5 = esi_1
    void* edx_1 = &ecx_5[1]
    
    do
        eax_1.b = *ecx_5
        ecx_5 = &ecx_5[1]
    while (eax_1.b != 0)
    
    int32_t eax_2 = data_1151ae0
    int32_t result
    
    if (eax_2 == 0)
        void* var_10_2 = ecx_5 - edx_1 + 1
        result = _malloc()
    else
        result = eax_2(ecx_5 - edx_1 + 1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\attachmentloader.c", 0x59)
    
    arg3[1] = result
    void* ecx_9 = result - esi_1
    
    do
        result.b = *esi_1
        esi_1 = &esi_1[1]
        *(ecx_9 + esi_1 - 1) = result.b
    while (result.b != 0)
    
    return result
}
