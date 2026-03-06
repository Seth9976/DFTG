// 函数名称: sub_4c3f90
// 虚拟地址: 0x4c3f90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4c3f90(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fad8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result = arg1
    void* esi = data_114e81c
    
    if (esi != 0)
        int32_t esi_1 = *(esi + 0x120)
        sub_4c3cf0(&ExceptionList, result, &var_14, arg2)
        int32_t var_8_1 = 0
        int32_t ebx_2 = esi_1 * 0xc
        void* esi_2 = sub_4c4150(data_114e81c + 0x90 + ebx_2, &var_14)
        
        if (esi_2 != 0)
            goto label_4c405e
        
        esi_2 = sub_4c4150(ebx_2 + data_114e81c, &var_14)
        
        if (esi_2 == 0)
            sub_4c41e0(data_114e81c + 0x90 + ebx_2, &var_14, &data_5f44a8)
        else
            void* eax_6 = data_114e81c
            
            if (*(eax_6 + 0x124) == 0 || *(esi_2 + 4) == 0)
                sub_4c41e0(eax_6 + 0x90 + ebx_2, &var_14, esi_2)
            label_4c405e:
                char* result_1 = *esi_2
                
                if (result_1 != 0)
                    result = result_1
            else
                sub_4c41e0(eax_6 + 0x90 + ebx_2, &var_14, &data_5f44a8)
        
        int32_t var_8_2 = 4
        
        if (data_aca1f4 != 0)
            char* eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_48a080(&var_14)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
