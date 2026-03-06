// 函数名称: sub_527c10
// 虚拟地址: 0x527c10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_527c10(int32_t arg1, char* arg2, void* arg3, char* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* esi = arg2
    _free(*(arg3 + 8))
    char* ecx = esi
    void var_108
    char i
    
    do
        i = *ecx
        ecx = &ecx[1]
        *(&var_108 - esi + ecx - 1) = i
    while (i != 0)
    
    do
        i = *esi
        esi = &esi[1]
    while (i != 0)
    
    void* esi_1 = esi - &esi[1]
    
    if (arg4 != 0)
        _strncat(&var_108 + esi_1, arg4, 0xff - esi_1)
    
    void* ecx_2 = &var_108
    
    do
        i = *ecx_2
        ecx_2 += 1
    while (i != 0)
    
    int32_t eax_4 = data_1151ae0
    void* esi_2 = &var_108
    int32_t eax_5
    void var_107
    
    if (eax_4 == 0)
        int32_t var_118_2 = ecx_2 - &var_107 + 1
        eax_5 = _malloc()
    else
        eax_5 = eax_4(ecx_2 - &var_107 + 1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x58)
    *(arg3 + 8) = eax_5
    char i_1
    
    do
        i_1 = *esi_2
        esi_2 += 1
        *(eax_5 - &var_108 + esi_2 - 1) = i_1
    while (i_1 != 0)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_1
}
