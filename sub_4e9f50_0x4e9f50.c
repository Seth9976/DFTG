// 函数名称: sub_4e9f50
// 虚拟地址: 0x4e9f50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4e9f50(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    var_14 = arg2
    int32_t* edi = arg1
    int32_t ebx = edi[2]
    char* esi = *edi
    
    if (esi[ebx] == 0x7b)
        for (int32_t i = ebx + 1; i s< edi[1]; i += 1)
            arg1.b = esi[i]
            
            if (arg1.b == 0x7d)
                int32_t* edx_1 = var_14
                var_14 = &data_5b2591
                *edx_1 = i - ebx + 1
                int32_t var_8_1 = 0
                sub_48a6e0(&var_14, edi[2] + *edi + 1, i - ebx - 1)
                int32_t* result = sub_4e9cf0(edi, &var_14)
                int32_t var_8_2 = 1
                
                if (data_aca1f4 != 0)
                    int32_t* ecx_7 = var_14
                    
                    if (ecx_7 != 0 && *ecx_7 != 0)
                        char* eax_8 = sub_48a080(&var_14)
                        int32_t temp0_1 = *(eax_8 + 4)
                        *(eax_8 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            if (arg1.b == 0xd)
                break
            
            if (arg1.b == 0x7b)
                break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
