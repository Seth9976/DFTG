// 函数名称: sub_4a9e30
// 虚拟地址: 0x4a9e30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4a9e30(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d928
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 - 0x64 u> 0x23)
    label_4a9e6c:
        void* eax_4 = sub_4a9c40(arg1)
        
        if (eax_4 != 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4 + 8
        
        if (sub_4a9b60(arg1, &var_14) == 1)
            sub_48a320(&var_14, var_14)
            int32_t var_8_1 = 0
            void* eax_7 = sub_4a9a50(arg1, &var_14)
            int32_t var_8_2 = 1
            
            if (data_aca1f4 != 0)
                char* ecx_5 = var_14
                
                if (ecx_5 != 0 && *ecx_5 != 0)
                    char* eax_8 = sub_48a080(&var_14)
                    int32_t temp0_1 = *(eax_8 + 4)
                    *(eax_8 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7 + 8
    else
        switch (arg2)
            case 0x65, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 
                    0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 
                    0x82, 0x83, 0x84
                goto label_4a9e6c
    
    int32_t result = sub_498ef0(arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
