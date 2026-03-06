// 函数名称: sub_4897d0
// 虚拟地址: 0x4897d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4897d0(char* arg1, WIN32_FIND_DATAA* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59eba8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const lpFileName_2 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    lpFileName_2 = &data_5b2591
    char* var_28 = arg1
    int32_t var_8_1 = 0
    sub_48a910(&lpFileName_2, "%s*.*")
    char* const lpFileName_1 = lpFileName_2
    char* const lpFileName = &data_5b2591
    
    if (lpFileName_1 != 0)
        lpFileName = lpFileName_1
    
    char* result = FindFirstFileA(lpFileName, arg2)
    arg2->__offset(0x140).d = result
    int32_t var_8_2 = 2
    int32_t ebx
    ebx.b = result != 0xffffffff
    
    if (data_aca1f4 != 0 && lpFileName_1 != 0 && *lpFileName_1 != 0)
        result = sub_48a080(&lpFileName_2)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
