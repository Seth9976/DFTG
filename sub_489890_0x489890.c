// 函数名称: sub_489890
// 虚拟地址: 0x489890
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_489890(PSTR arg1, BOOL* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void fileInformation
    BOOL eax_2 = GetFileAttributesExA(arg1, GetFileExInfoStandard, &fileInformation)
    
    if (eax_2 != 0)
        BOOL var_18
        *arg2 = var_18
        int32_t var_14
        arg2[1] = var_14
        int32_t eax_4
        eax_4.b = 1
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_4
    
    *arg2 = eax_2
    arg2[1] = eax_2
    eax_2.b = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_2
}
