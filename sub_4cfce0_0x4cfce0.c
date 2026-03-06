// 函数名称: sub_4cfce0
// 虚拟地址: 0x4cfce0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4cfce0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fd91
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    arg1[1] = &data_5b2591
    int32_t var_14_1 = 1
    *arg1 = arg2
    char* arg_4
    sub_48a560(&arg1[1], &arg_4)
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0)
        char* eax_3 = arg_4
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* eax_4 = sub_48a080(&arg_4)
            int32_t temp0_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
