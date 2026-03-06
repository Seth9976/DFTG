// 函数名称: sub_4d62d0
// 虚拟地址: 0x4d62d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d62d0(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = sub_4d61a0(arg1, arg2)
    sub_48a2c0(&var_14, "UI2StateOverride")
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        char* ecx_1 = var_14
        
        if (ecx_1 != 0 && *ecx_1 != 0)
            char* eax_3 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    void* esi = data_114e86c
    *(esi + 0x1c) += 1
    int32_t* ecx_4 = *(esi + 0x10)
    
    if (ecx_4 == 0)
        sub_4d7960(esi + 0x10)
        ecx_4 = *(esi + 0x10)
    
    *(esi + 0x10) = *ecx_4
    ecx_4[2] = 0
    ecx_4[3] = 0
    ecx_4[4] = 0
    *ecx_4 = &data_5b2591
    ecx_4[1] = 0
    ecx_4[2] = 0
    ecx_4[3] = 0
    result[2] = ecx_4
    sub_48a5e0(ecx_4, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
