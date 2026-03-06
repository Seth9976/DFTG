// 函数名称: sub_536ea0
// 虚拟地址: 0x536ea0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_536ea0(int32_t** arg1, char* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a2b30
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_2c = &data_5b2591
    char* const var_28 = &data_5b2591
    int32_t var_14_1 = 0
    sub_48a5e0(&var_2c, arg2)
    int32_t var_40_1 = 1
    sub_48a910(&var_28, &data_5efc90)
    int32_t* eax_3 = sub_498440(0x10)
    int32_t* ecx_1 = eax_3
    eax_3[3] += 1
    int32_t* esi = *eax_3
    
    if (esi == 0)
        sub_4982d0(ecx_1)
        ecx_1 = eax_3
        esi = *ecx_1
    
    *ecx_1 = *esi
    char* const eax_5 = var_2c
    int32_t* var_24_1 = esi
    *esi = zx.o(0)
    *esi = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_48a080(esi)
        *(eax_6 + 4) += 1
    
    var_14_1.b = 1
    char* const eax_7 = var_28
    esi[1] = eax_7
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_48a080(&esi[1])
        *(eax_8 + 4) += 1
    
    esi[2] = 0
    esi[3] = arg1[1]
    void* eax_10 = arg1[1]
    
    if (eax_10 == 0)
        *arg1 = esi
    else
        *(eax_10 + 8) = esi
    
    arg1[2] += 1
    arg1[1] = esi
    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_50c150(&var_2c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
