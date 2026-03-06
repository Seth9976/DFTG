// 函数名称: sub_4840f0
// 虚拟地址: 0x4840f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4840f0(int32_t arg1, int32_t arg2, char** arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e491
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_1c = 0
    int32_t esi = *arg4
    int32_t edi = *(*(data_632804 + esi * 0xc + 0x8c4) + 4)
    int32_t var_30 = sub_482da0(sub_480c10(esi, 1), *(*(data_632804 + esi * 0xc + 0x8c4) + 0x14))
    int32_t var_34 = edi
    int32_t var_38 = arg2
    sub_48a9d0(arg3, "{normal_log}%s places %s {%s}")
    int32_t* eax_8 = arg4
    int32_t i = 0
    int32_t var_8_2 = 0
    int32_t var_1c_1 = 1
    
    if (eax_8[0x3d] s> 0)
        void* edi_1 = &eax_8[1]
        
        do
            char* var_14
            sub_4838d0(eax_8, edi_1, &var_14, arg5)
            int32_t var_8_3 = 1
            char* eax_9 = var_14
            int32_t var_8_4
            
            if (eax_9 == 0 || *eax_9 == 0)
                var_8_4 = 2
                
                if (data_aca1f4 != 0)
                    goto label_48422f
            else
                int32_t eax_11 = arg4[0x3d]
                char* var_30_2
                
                if (eax_11 == 1)
                    var_30_2 = &data_5d59f8
                else if (eax_11 s< 2 || i != eax_11 - 1)
                    var_30_2 = &data_5ee4a4
                else
                    var_30_2 = " and "
                
                sub_48a670(arg3, var_30_2)
                char* eax_13 = var_14
                char* ecx_6 = &data_5b2591
                
                if (eax_13 != 0)
                    ecx_6 = eax_13
                
                sub_48a670(arg3, ecx_6)
                var_8_4 = 3
                
                if (data_aca1f4 != 0)
                    eax_9 = var_14
                label_48422f:
                    
                    if (eax_9 != 0 && *eax_9 != 0)
                        char* eax_14 = sub_48a080(&var_14)
                        int32_t temp0_1 = *(eax_14 + 4)
                        *(eax_14 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                            var_14 = &data_5b2591
            
            eax_8 = arg4
            i += 1
            var_8_4.b = 0
            edi_1 += 0x28
        while (i s< eax_8[0x3d])
    
    sub_48a670(arg3, ".{br}")
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
