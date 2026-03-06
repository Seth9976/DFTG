// 函数名称: sub_438640
// 虚拟地址: 0x438640
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_438640()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59db68
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_4c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edx = data_6d00d8
    int32_t ecx = *(edx + 0xbe0)
    *(edx + 0xbe0) = ecx + 1
    void* result = ecx * 0x2f8 + edx
    char var_34
    
    for (int32_t i = 0; i s< 0x18; i += 1)
        (&var_34)[i] = (modu.dp.d(0:(sub_48dd80()), 0x1a)).b + 0x41
    
    char* ecx_1 = *(result + 0x224)
    char var_1c = 0
    
    if (ecx_1 == 0 || ecx_1 != &var_34)
        char* esi = &var_34
        uint32_t eax_5
        
        do
            eax_5.b = *esi
            esi = &esi[1]
        while (eax_5.b != 0)
        
        void var_33
        void* esi_1 = esi - &var_33
        
        if (esi != &var_33)
            sub_48a180(eax_5, esi_1, result + 0x224, 0)
            sub_579300(*(result + 0x224), &var_34, esi_1 + 1)
        else
            if (data_aca1f4 != esi_1 && ecx_1 != 0 && *ecx_1 != eax_5.b)
                char* eax_6 = sub_48a080(result + 0x224)
                int32_t temp5_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
            
            *(result + 0x224) = &data_5b2591
    
    char* var_38
    sub_48a2c0(&var_38, &data_5b2591)
    int32_t var_8_1 = 0
    sub_48a560(result, &var_38)
    *(result + 8) = sub_4258f0()
    *(result + 0x228) = modu.dp.d(0:(sub_48dd80()), 0x7fffffff)
    *(result + 0x210) = 4
    *(result + 0x240) = *(edx + 0xbe8)
    *(edx + 0xbe8) += 1
    *(data_6d00d8 + 0xbe4) = *(result + 0x240)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_12 = var_38
        
        if (eax_12 != 0 && *eax_12 != 0)
            char* eax_13 = sub_48a080(&var_38)
            int32_t temp4_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
