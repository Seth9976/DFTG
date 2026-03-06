// 函数名称: sub_437d00
// 虚拟地址: 0x437d00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_437d00(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59daf1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = arg1
    int32_t var_18 = 0
    void* eax_3 = sub_437f10(*(data_6d00d8 + 0xbe4))
    char* var_30 = arg2
    int32_t var_34 = *(eax_3 + 0x240)
    char* var_14
    sub_48a9d0(&var_14, "gamelocal_%d_%d.xml")
    int32_t var_8_1 = 1
    char* eax_4 = var_14
    var_30 = eax_4
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_48a080(&var_30)
        *(eax_5 + 4) += 1
    
    sub_4cfce0(arg1, 0)
    int32_t var_18_1 = 1
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
