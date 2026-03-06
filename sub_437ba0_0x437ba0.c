// 函数名称: sub_437ba0
// 虚拟地址: 0x437ba0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_437ba0(void* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59da9b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a4c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t var_a08[0x9e][0x4]
    _memset(&var_a08, 0, 0x9e0)
    void var_a40
    int32_t* eax_4 = sub_437370(&var_a40, &var_a08, arg1, &var_a40)
    int128_t var_a28 = *eax_4
    int64_t var_a18 = *(eax_4 + 0x10)
    int32_t var_a50_1 = sub_489c60()
    char* result_1
    sub_48a9d0(&result_1, "%sprofiles.xml")
    int32_t var_14_1 = 0
    int32_t* eax_6 = sub_4d78e0(&var_a28, data_126b930)
    char* result_3 = result_1
    char* const result_5 = &data_5b2591
    char* const result_4 = &data_5b2591
    
    if (result_3 != 0)
        result_4 = result_3
    
    if (sub_4d7b70(eax_6, data_126b930, eax_6, result_4) == 0)
        char* result_2 = result_1
        
        if (result_2 != 0)
            result_5 = result_2
        
        char* const result_6 = result_5
        sub_4892e0("Failed to write file: '%s'")
    
    char* result = sub_4d4bb0(eax_6)
    int32_t var_14_2 = 1
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
