// 函数名称: sub_4f01c0
// 虚拟地址: 0x4f01c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4f01c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fb08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14
    int32_t* var_28 = &var_14
    int32_t* result_1
    sub_4889e0(&result_1, arg1, 4)
    int32_t var_8_1 = 0
    int32_t i = 0
    int32_t* esi_1 = var_14 + 0x18
    
    do
        int32_t edx_1 = esi_1[-2]
        
        if (edx_1 != 0)
            (*(*data_114ec78 + 0x48))(i, edx_1)
            esi_1[-2] = 0
        
        if (*esi_1 != 0)
            int32_t eax_4 = esi_1[2]
            *esi_1 = 0
            
            if (eax_4 != 0)
                _aligned_free_base(eax_4)
        
        i += 1
        esi_1 = &esi_1[0xa]
    while (i s< 2)
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
