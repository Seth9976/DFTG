// 函数名称: sub_4f7440
// 虚拟地址: 0x4f7440
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4f7440(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a15d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = arg2
    int32_t var_1c = eax_3
    int32_t ebx = 0
    
    if (arg5 s> 0)
        while (true)
            void var_34
            int32_t* eax_6 = (*(arg4 + (ebx << 2)))(&var_34, eax_3, eax_2)
            int32_t var_8_1 = 0
            char* esi_1 = eax_6[2]
            int32_t ecx = eax_6[1]
            int32_t edi_1 = *eax_6
            int32_t var_28_1 = edi_1
            int32_t var_24_1 = ecx
            char* const var_20 = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_7 = sub_48a080(&var_20)
                *(eax_7 + 4) += 1
            
            var_8_1.b = 3
            
            if (data_aca1f4 != 0)
                char* const var_2c
                char* eax_8 = var_2c
                
                if (eax_8 != 0 && *eax_8 != 0)
                    char* eax_9 = sub_48a080(&var_2c)
                    int32_t temp0_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
                        var_2c = &data_5b2591
            
            var_8_1.b = 2
            int32_t* ebx_1
            
            if (edi_1 == 1)
                ebx_1 = arg3
                *ebx_1 = 1
                ebx_1[1] = ecx
                ebx_1[2] = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_14 = sub_48a080(&ebx_1[2])
                    *(eax_14 + 4) += 1
                
                int32_t var_8_5 = 4
            else
                if (edi_1 != 2 && edi_1 != 3 && edi_1 != 4)
                    int32_t var_8_2 = 6
                    
                    if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                        char* eax_10 = sub_48a080(&var_20)
                        int32_t temp2_1 = *(eax_10 + 4)
                        *(eax_10 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                            var_20 = &data_5b2591
                    
                    ebx += 1
                    int32_t var_8_3 = 0xffffffff
                    
                    if (ebx s>= arg5)
                        break
                    
                    eax_3 = var_1c
                    continue
                
                ebx_1 = arg3
                *ebx_1 = edi_1
                ebx_1[1] = ecx
                ebx_1[2] = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_12 = sub_48a080(&ebx_1[2])
                    *(eax_12 + 4) += 1
                
                int32_t var_8_4 = 5
            
            if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_15 = sub_48a080(&var_20)
                int32_t temp1_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return ebx_1
    
    *arg3 = data_12bacb8
    arg3[1] = data_12bacbc
    arg3[2] = data_12bacc0
    char* eax_20 = data_12bacc0
    
    if (eax_20 != 0 && *eax_20 != 0)
        char* eax_21 = sub_48a080(&arg3[2])
        *(eax_21 + 4) += 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
