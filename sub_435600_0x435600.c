// 函数名称: sub_435600
// 虚拟地址: 0x435600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_435600(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d928
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t result_1 = arg3
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg4, sub_434d20)
    sub_4b24c0(arg4, sub_4355d0)
    int32_t var_20 = sub_425de0()[0x3c]
    sub_48a9d0(&result_1, &data_5efc90)
    int32_t var_8_1 = 0
    int32_t result = sub_4a8930(&result_1, &data_62c81c, arg4, &result_1, 0xffffffff)
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
