// 函数名称: sub_42cd80
// 虚拟地址: 0x42cd80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_42cd80(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d370
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&var_14, "BtnBack")
    char* const esi = &data_5b2591
    char* eax_3 = var_14
    char* const ecx_1 = &data_5b2591
    char* edx = *(arg4 + 4)
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    int32_t ecx_3
    
    while (true)
        ebx.b = *ecx_1
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_3 = 0
                break
            
            ebx.b = ecx_1[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                ecx_1 = &ecx_1[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_3 = 0
                break
        
        ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
        break
    
    if (ecx_3 == 0 || *(arg4 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_48a080(&var_14)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_5 = sub_4361a0(4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    sub_48a2c0(&var_14, "BtnOK")
    char* eax_6 = var_14
    char* ecx_9 = *(arg4 + 4)
    
    if (eax_6 != 0)
        esi = eax_6
    
    int32_t esi_2
    
    while (true)
        char edx_3 = *esi
        char temp3_1 = *ecx_9
        bool c_2 = edx_3 u< temp3_1
        
        if (edx_3 == temp3_1)
            if (edx_3 == 0)
                esi_2 = 0
                break
            
            edx_3 = esi[1]
            char temp4_1 = ecx_9[1]
            c_2 = edx_3 u< temp4_1
            
            if (edx_3 == temp4_1)
                esi = &esi[2]
                ecx_9 = &ecx_9[2]
                
                if (edx_3 != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && eax_6 != 0 && *eax_6 != 0)
        eax_6 = sub_48a080(&var_14)
        int32_t temp5_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp5_1 == 1)
            eax_6 = sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_2 == 0)
        eax_6 = sub_42cc80()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6
}
