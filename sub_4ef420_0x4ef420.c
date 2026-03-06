// 函数名称: sub_4ef420
// 虚拟地址: 0x4ef420
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4ef420(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1160
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg2 = arg3
    void* var_18
    int32_t* var_38 = &var_18
    int32_t* result_1
    sub_4889e0(&result_1, arg3, 4)
    int32_t var_8_1 = 0
    int32_t esi_1 = arg5 * 0x28
    int32_t* var_38_1 = &var_18
    void* ebx_1 = var_18 + esi_1
    void* var_20 = ebx_1
    int32_t* var_1c
    sub_4889e0(&var_1c, arg3, 4)
    var_8_1.b = 1
    void* esi_2 = esi_1 + var_18
    
    if (*(esi_2 + 0x10) == 0)
        *(esi_2 + 0x10) = (*(*data_114ec78 + 0x44))(arg3, arg5)
    
    var_8_1.b = 0
    int32_t* eax_7 = var_1c
    
    if (eax_7 != 0)
        eax_7[7] -= 1
    
    int32_t i = 0
    
    if (*(ebx_1 + 0x18) s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t* ebx_3 = *(ebx_1 + 0x20) + edi_1
            int32_t ecx_3 = arg2[1]
            arg2[1] = ecx_3 + 1
            arg2[ecx_3 * 5 + 2] = ebx_3[2]
            arg2[ecx_3 * 5 + 3] = *ebx_3
            int32_t eax_12 = ebx_3[1]
            arg2[ecx_3 * 5 + 4] = eax_12
            sub_4ef1b0(eax_12, arg4, ebx_3[2], &arg2[ecx_3 * 5 + 2])
            
            if (*(arg2[ecx_3 * 5 + 5] + 0x10) == 0x21 && ebx_3[1] == 3)
                arg2[ecx_3 * 5 + 5] = data_12bac74
            
            ebx_1 = var_20
            i += 1
            edi_1 += 0xc
        while (i s< *(ebx_1 + 0x18))
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
