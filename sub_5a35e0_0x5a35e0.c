// 函数名称: sub_5a35e0
// 虚拟地址: 0x5a35e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_5a35e0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ccd0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 1
    sub_41d960(&data_62b020)
    var_8_1.b = 0
    void* result = `eh vector vbase constructor iterator'(0x62a5fc, 0x10, 0x80, sub_41c530)
    var_8_1.b = 2
    
    if (data_aca1f4 != 0)
        result = data_62a5f8
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&data_62a5f8)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                data_62a5f8 = &data_5b2591
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
