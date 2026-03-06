// 函数名称: sub_537420
// 虚拟地址: 0x537420
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_537420(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2b88
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 1
    char* var_24 = arg3
    int32_t* ecx = &var_24
    int32_t var_8_1 = 0
    char* arg_c
    char* eax_3 = arg_c
    var_24 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        eax_3 = sub_48a080(ecx)
        *(eax_3 + 4) += 1
    
    int32_t ebx
    ebx.b = sub_536fc0(eax_3, arg4, ecx.b).b
    int32_t var_8_2 = 1
    char* result
    
    if (data_aca1f4 != 0)
        char* ecx_1 = arg_c
        
        if (ecx_1 != 0 && *ecx_1 != 0)
            result = sub_48a080(&arg_c)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
