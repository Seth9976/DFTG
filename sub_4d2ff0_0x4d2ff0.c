// 函数名称: sub_4d2ff0
// 虚拟地址: 0x4d2ff0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d2ff0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0078
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18
    int32_t* var_28 = &var_18
    int32_t* var_14
    sub_4889e0(&var_14, arg1, 3)
    int32_t var_8_1 = 0
    int32_t* esi = var_18
    void* ecx_1 = *esi
    int32_t* edx
    
    if (ecx_1 != 0)
        int32_t* ecx_2 = *(ecx_1 + 0x28)
        
        if (ecx_2 == 0)
            edx = esi[2]
            
            if (edx == 0)
                edx = sub_4d25b0(arg1)
                esi[2] = edx
            
            int32_t var_8_4 = 0xffffffff
            int32_t* eax_6 = var_14
            
            if (eax_6 != 0)
                eax_6[7] -= 1
        else
            int32_t var_8_3 = 0xffffffff
            edx = sub_4d2a30(ecx_2)
            int32_t* ecx_3 = var_14
            
            if (ecx_3 != 0)
                ecx_3[7] -= 1
    else
        int32_t var_8_2 = 0xffffffff
        int32_t* eax_3 = var_14
        
        if (eax_3 != 0)
            eax_3[7] -= 1
        
        edx = nullptr
    
    int32_t result = (*(*data_114ec78 + 0x20))(edx)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
