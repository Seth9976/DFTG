// 函数名称: sub_4cfba0
// 虚拟地址: 0x4cfba0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4cfba0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fd50
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    char* result_2 = result_1
    void* const esi
    
    if (result_2 == 0)
        esi = &data_5f4fc0
    else
        if (result_2 != 1)
            sub_489550(result_2 - 1, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\engine\xplatformgeneric.cpp", 0x69, "HalOpen")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        esi = &data_5f5010
    
    int32_t* edx
    sub_4cfad0(&result_1, edx)
    char* result_3 = result_1
    char* result_4 = &data_5b2591
    
    if (result_3 != 0)
        result_4 = result_3
    
    char* result = _fopen(result_4, esi)
    *arg1 = result
    arg1[1] = 0
    
    if (result == 0)
        int32_t var_8_2 = 1
        
        if (data_aca1f4 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_48a080(&result_1)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(result, *(result + 0xc) + 0x10)
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
