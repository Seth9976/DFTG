// 函数名称: sub_436df0
// 虚拟地址: 0x436df0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_436df0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = data_6d00d0
    
    if (esi == 0)
        sub_489550(&ExceptionList, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_28 = sub_489c60()
    char* result_1
    sub_48a9d0(&result_1, "%slocalsettings.xml")
    int32_t var_8_1 = 0
    int32_t* eax_5 = sub_4d78e0(esi, data_126b918)
    char* result_3 = result_1
    char* const result_5 = &data_5b2591
    char* const result_4 = &data_5b2591
    
    if (result_3 != 0)
        result_4 = result_3
    
    if (sub_4d7b70(eax_5, data_126b918, eax_5, result_4) == 0)
        char* result_2 = result_1
        
        if (result_2 != 0)
            result_5 = result_2
        
        char* const result_6 = result_5
        sub_4892e0("Failed to write file: '%s'")
    
    char* result = sub_4d4bb0(eax_5)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
