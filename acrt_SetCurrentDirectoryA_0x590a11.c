// 函数名称: ___acrt_SetCurrentDirectoryA
// 虚拟地址: 0x590a11
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___acrt_SetCurrentDirectoryA(int32_t arg1)
{
    // 第一条实际指令: BOOL result = 0
    BOOL result = 0
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, nullptr)
    int32_t var_2c
    __builtin_memset(&var_2c, 0, 0x15)
    PWSTR lpPathName
    
    if (sub_59094e(arg1, &var_2c, 0) == 0)
        result = SetCurrentDirectoryW(lpPathName)
    
    char var_18
    
    if (var_18 != 0)
        __free_base(lpPathName)
    
    char var_8
    
    if (var_8 != 0)
        void* eax_2 = var_14
        *(eax_2 + 0x350) &= 0xfffffffd
    
    return result
}
