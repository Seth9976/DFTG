// 函数名称: sub_56d710
// 虚拟地址: 0x56d710
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_56d710(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t eax = data_1151ae0
    int32_t eax = data_1151ae0
    char* esi = arg2
    int64_t* eax_1
    
    if (eax == 0)
        int32_t var_10_1 = 8
        eax_1 = _malloc()
    else
        eax_1 = eax(8, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spattachment.c", 0x2a)
    
    if (eax_1 != 0)
        *eax_1 = 0
    
    arg3[2] = eax_1
    *eax_1 = arg5
    *(arg3[2] + 4) = arg6
    char* ecx_2 = esi
    void* edx = &ecx_2[1]
    int32_t eax_3
    
    do
        eax_3.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_3.b != 0)
    int32_t eax_4 = data_1151ae0
    int32_t eax_5
    
    if (eax_4 == 0)
        void* var_10_2 = ecx_2 - edx + 1
        eax_5 = _malloc()
    else
        eax_5 = eax_4(ecx_2 - edx + 1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spattachment.c", 0x2e)
    
    *arg3 = eax_5
    void* ecx_6 = eax_5 - esi
    
    do
        eax_5.b = *esi
        esi = &esi[1]
        *(ecx_6 + esi - 1) = eax_5.b
    while (eax_5.b != 0)
    
    arg3[1] = arg4
    return arg4
}
