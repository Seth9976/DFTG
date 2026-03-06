// 函数名称: sub_42b750
// 虚拟地址: 0x42b750
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_42b750(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d410
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg4, sub_42a760)
    sub_4b24c0(arg4, sub_42a6d0)
    void* eax_3
    char* ecx_4
    eax_3, ecx_4 = sub_437f10(*(data_6d00d8 + 0xbe4))
    int32_t esi
    
    if (data_62bbd4 == 1)
        esi = 1
    else if (data_62bbe0 != 1)
        void* eax_4 = sub_437f10(*(data_6d00d8 + 0xbe4))
        ecx_4 = *(eax_4 + 0x238)
        
        if (ecx_4 == 0 || *ecx_4 == 0)
            int32_t eax_5 = data_62bbe0
            
            if (eax_5 == 2)
                esi = eax_5 + 2
            else if (eax_5 == 4)
                esi = eax_5 + 1
            else if (eax_5 != 3)
                char* eax_6 = *(eax_4 + 4)
                
                if (eax_6 == 0 || *eax_6 == 0)
                    esi = 0
                else
                    esi = 2
            else
                esi = eax_5 - 1
        else
            esi = 6
    else
        esi = 3
    
    int32_t* eax_8
    char* esi_1
    
    switch (esi)
        case 0
            int32_t var_28_2 = 0xffffffff
            int32_t eax_9 = sub_4a8570(arg4)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 1
            var_14 = &data_5b2591
            int32_t var_8_1 = 0
            
            if (sub_4bb1d0(ecx_4, &var_14) == 0)
                sub_48a560(&var_14, &data_62bbd8)
            
            sub_4a8930(&var_14, &data_62bd08, arg4, &var_14, 0xffffffff)
            int32_t var_30_2 = 0xffffffff
            sub_4a8570(arg4)
            esi_1 = var_14
            char* ecx_17 = &data_5b2591
            
            if (esi_1 != 0)
                ecx_17 = esi_1
            
            eax_8 = sub_42a4a0(ecx_17)
            
            if (eax_8.b == 0)
                int32_t var_28_3 = 0xffffffff
                eax_8 = sub_4a8570(arg4)
            
            int32_t var_8_2 = 1
        label_42b8ff:
            
            if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                eax_8 = sub_48a080(&var_14)
                int32_t temp0_1 = eax_8[1]
                eax_8[1] -= 1
                
                if (temp0_1 == 1)
                    int32_t eax_12 = sub_4984f0(eax_8, eax_8[3] + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_12
        case 2
            sub_4a8930(eax_3 + 4, &data_62bcec, arg4, eax_3 + 4, 0xffffffff)
            int32_t var_30_3 = 0xffffffff
            eax_8 = sub_4a8570(arg4)
        case 3
            int32_t var_28_4 = 0xffffffff
            int32_t ecx_26 = sub_4a8570(arg4)
            var_14 = &data_5b2591
            int32_t var_8_3 = 3
            
            if (sub_4bb1d0(ecx_26, &var_14) == 0)
                sub_48a560(&var_14, &data_62bbdc)
            
            sub_4a8930(&var_14, &data_62bd08, arg4, &var_14, 0xffffffff)
            sub_4a8930(eax_3 + 4, &data_62bcec, arg4, eax_3 + 4, 0xffffffff)
            esi_1 = var_14
            char* ecx_30 = &data_5b2591
            
            if (esi_1 != 0)
                ecx_30 = esi_1
            
            eax_8 = sub_42a4f0(ecx_30)
            
            if (eax_8.b == 0)
                int32_t var_28_5 = 0xffffffff
                eax_8 = sub_4a8570(arg4)
            
            int32_t var_8_4 = 4
            goto label_42b8ff
        case 4
            int32_t var_28_6 = 0xffffffff
            sub_4a8570(arg4)
            eax_8 = sub_4a8930(eax_3 + 4, &data_62bcec, arg4, eax_3 + 4, 0xffffffff)
            
            if (esi == 5)
                int32_t var_28_7 = 0xffffffff
                int32_t eax_18 = sub_4a8570(arg4)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_18
            
            if (esi == 4)
                int32_t var_28_8 = 0xffffffff
                int32_t eax_19 = sub_4a8570(arg4)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_19
        case 6
            int32_t var_28_1 = 0xffffffff
            sub_4a8570(arg4)
            eax_8 = sub_4a8930(eax_3 + 0x238, &data_62bcec, arg4, eax_3 + 0x238, 0xffffffff)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8
}
