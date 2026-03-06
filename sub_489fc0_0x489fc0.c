// 函数名称: sub_489fc0
// 虚拟地址: 0x489fc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_489fc0(char** arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    BOOL eax_2
    
    if (IsClipboardFormatAvailable(1) != 0 && OpenClipboard(nullptr) != 0)
        BOOL hMem = GetClipboardData(1)
        
        if (hMem != 0)
            eax_2 = GlobalLock(hMem)
            
            if (eax_2 != 0)
                void var_208
                _memset(&var_208, 0, 0x200)
                _strncpy(&var_208, eax_2, 0x100)
                char var_109 = 0
                sub_48a5e0(arg1, &var_208)
                GlobalUnlock(hMem)
                CloseClipboard()
                BOOL eax_3
                eax_3.b = 1
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_3
    
    eax_2.b = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_2
}
