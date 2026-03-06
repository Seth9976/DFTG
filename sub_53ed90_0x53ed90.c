// 函数名称: sub_53ed90
// 虚拟地址: 0x53ed90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_53ed90(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2f48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const edi = arg1
    char* const esi = &data_5b2591
    char* const var_14 = &data_5b2591
    int32_t var_8_1 = 0
    void* eax_3 = _strrchr(edi, 0x2a)
    char* const ecx = &data_5b2591
    uint32_t result
    void* ebx
    
    if (eax_3 == 0 || *(eax_3 + 1) == 0)
    label_53ee71:
        char* eax_11 = *(arg2 + 0x20)
        
        if (eax_11 != 0)
            ecx = eax_11
        
        ebx.b = sub_53ece0(edi, ecx).b
    else
        char* const edx = edi
        void* eax_5
        
        do
            eax_5.b = *edx
            edx = &edx[1]
        while (eax_5.b != 0)
        char* eax_7 = *(arg2 + 0x20)
        
        if (eax_7 != 0)
            ecx = eax_7
        
        void* eax_8
        
        do
            eax_8.b = *ecx
            ecx = &ecx[1]
        while (eax_8.b != 0)
        char* const eax_9 = &data_5b2591
        
        if (*(arg2 + 0x20) != 0)
            eax_9 = *(arg2 + 0x20)
        
        result = __stricmp(ecx - &ecx[1] - (edx - &edx[1] - (eax_3 - edi + 1)) + eax_9, eax_3 + 1)
        esi = var_14
        
        if (result == 0)
            sub_48a6e0(&var_14, edi, eax_3 - edi + 1)
            esi = var_14
            ecx = &data_5b2591
            edi = &data_5b2591
            
            if (esi != 0)
                edi = esi
            
            goto label_53ee71
        
        ebx.b = 0
    
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        result = sub_48a080(&var_14)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
