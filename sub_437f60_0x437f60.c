// 函数名称: sub_437f60
// 虚拟地址: 0x437f60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_437f60(void** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59db31
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c34 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_498440(0xbf0)
    eax_3[3] += 1
    uint32_t (* esi)[0x4]
    
    if (eax_3[4] != 0xffffffff)
        esi = *eax_3
        
        if (esi == 0)
            sub_4982d0(eax_3)
            esi = *eax_3
        
        *eax_3 = *esi
    else
        esi = sub_4c2e40(0xbf0)
    
    char* var_c38 = 0xbf0
    _memset(esi, 0, var_c38)
    var_c38 = sub_437150
    var_c38 = `eh vector constructor iterator'(esi, 0x2f8, 4, sub_437960)
    *arg1 = esi
    sub_48a2c0(&var_c38, "profiles.xml")
    void var_c24
    sub_4cfce0(&var_c24, 0)
    int32_t var_8_1 = 0
    char** edi_1 = data_126b930
    int32_t* eax_6 = sub_4d8120(edi_1, &var_c24)
    int32_t* var_c14_1
    int32_t* ebx_1
    
    if (eax_6 != 0)
        ebx_1 = sub_4d60d0(eax_6, edi_1)
        var_c14_1 = ebx_1
        sub_4d4bb0(eax_6)
    
    if (eax_6 == 0 || ebx_1 == 0)
        int32_t* eax_8 = sub_4cf0b0(data_126b930)
        ebx_1 = eax_8
        var_c14_1 = eax_8
    
    void var_c04
    void* result_4 = sub_437610(&var_c04, ebx_1)
    void* result_2 = result_4
    var_8_1.b = 1
    int32_t i_1 = 4
    void* eax_10 = *arg1
    void* esi_2 = eax_10
    int32_t i
    
    do
        var_c38 = result_4 - eax_10 + esi_2
        sub_438270(esi_2, var_c38)
        esi_2 += 0x2f8
        i = i_1
        i_1 -= 1
    while (i != 1)
    void* result_5 = result_2
    *(eax_10 + 0xbe0) = *(result_5 + 0xbe0)
    *(eax_10 + 0xbe4) = *(result_5 + 0xbe4)
    *(eax_10 + 0xbe8) = *(result_5 + 0xbe8)
    var_c38 = sub_437150
    var_8_1.b = 2
    `eh vector vbase constructor iterator'(&var_c04, 0x2f8, 4, var_c38)
    var_8_1.b = 0
    data_126b930
    sub_4cead0(var_c14_1)
    void* esi_3 = data_6d00d8
    int32_t ecx_13 = 0
    int32_t edx_4 = *(esi_3 + 0xbe0)
    
    if (edx_4 s> 0)
        void* eax_16 = esi_3
        
        while (true)
            if (*(eax_16 + 0x240) == *(*arg1 + 0xbe4))
                if (eax_16 != 0)
                    goto label_438168
                
                goto label_438148
            
            ecx_13 += 1
            eax_16 += 0x2f8
            
            if (ecx_13 s>= edx_4)
            label_438148:
                
                if (edx_4 s<= 0)
                    goto label_438150
                
                if (esi_3 != 0)
                    break
                
                goto label_438150
        
        goto label_438168
    
    label_438150:
    sub_438640()
    sub_437ba0(*arg1)
    esi_3 = data_6d00d8
    label_438168:
    char* result = sub_437f10(*(esi_3 + 0xbe4))
    char* result_3 = result
    char* edx_5 = *(result_3 + 0x244)
    
    if (edx_5 != 0)
        void var_c0c
        sub_437d00(&var_c0c, edx_5)
        var_c38 = nullptr
        var_8_1.b = 3
        char* var_c1c
        result = sub_4cfba0(&var_c1c)
        
        if (result.b != 0)
            var_c38 = var_c1c
            result = _fclose(var_c38)
            var_8_1.b = 5
        else
            *(result_3 + 0x244) = 0
            var_8_1.b = 4
        
        if (data_aca1f4 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_48a080(&result_2)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                    result_2 = &data_5b2591
    
    int32_t var_8_2 = 6
    
    if (data_aca1f4 != 0)
        char* result_1
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
