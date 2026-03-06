// 函数名称: sub_5437d0
// 虚拟地址: 0x5437d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_5437d0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a31c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const i_11 = &data_5b2591
    char* result_2
    char* result_4 = result_2
    char* const result_11 = &data_5b2591
    char* const i_3 = 0x2e
    
    if (result_4 != 0)
        result_11 = result_4
    
    char* const result_3 = result_11
    void* eax_3 = _strrchr(result_3, i_3.b)
    
    if (eax_3 == 0)
        i_3 = "AtlasMakerMakeNoScan"
        result_3 = 0x7bd
        sub_489550(eax_3, &data_5b2591, "ext", "d:\ax\trunk\ax2017\engine\editor\atlasmaker.cpp", 
            result_3, i_3)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char const* const i_8
    
    if (data_1150c9d != 0)
        i_8 = "xbin/ios/"
    else if (data_1150c9c == 0)
        i_8 = "xbin/"
    else
        i_8 = "xbin/web/"
    
    i_3 = i_8
    var_8_1.b = 0
    result_3 = "%satlases/"
    char* const result_1
    sub_48a9d0(&result_1, result_3)
    var_8_1.b = 6
    char* const result_5 = result_2
    char* i_10
    
    if (result_5 != 0)
        i_10 = eax_3 - result_5
    else
        i_10 = eax_3 - &data_5b2591
        result_5 = &data_5b2591
    
    i_3 = i_10
    result_3 = result_5
    sub_48a6e0(&result_1, result_3, i_3)
    char* result_6 = result_2
    char* const result_12 = &data_5b2591
    
    if (result_6 != 0)
        result_12 = result_6
    
    int32_t** i_9 = sub_4d82a0(data_12badd0, result_12)
    char* result
    
    if (i_9 != 0)
        void** i_6 = nullptr
        void** i_4 = nullptr
        int32_t ebx_1 = 0
        int32_t var_2c_1 = 0
        int32_t var_28_1 = 0
        var_8_1.b = 9
        void** i = nullptr
        int32_t* eax_4 = data_114e844
        int32_t* eax_5 = *eax_4
        char** i_5
        
        do
            i_5 = *eax_5
            
            if (i_5 != 0)
                break
            
            i += 1
            eax_5 = &eax_5[1]
        while (i u<= eax_4[1])
        
        char* const* i_1 = i_5
        
        if (i_5 != 0)
            do
                i_3 = &i_1
                int32_t* eax_6
                eax_6, i = sub_4d1e40(i_3)
                void* eax_7 = eax_6[1]
                int32_t eax_8 = *(eax_7 + 4)
                
                if (eax_8 == 3 || eax_8 == 0x12)
                    void*** eax_9 = sub_498440(0xc)
                    eax_9[3] += 1
                    i = *eax_9
                    
                    if (i == 0)
                        sub_4982d0(eax_9)
                        i = *eax_9
                    
                    *eax_9 = *i
                    *i = eax_7
                    i[1] = 0
                    i[2] = i_6
                    
                    if (i_6 == 0)
                        i_4 = i
                    else
                        i_6[1] = i
                    
                    ebx_1 += 1
                    i_6 = i
                    int32_t var_28_2 = ebx_1
                    void** i_7 = i_6
            while (i_1 != 0)
        
        int32_t i_2 = 0
        int32_t* edi_3 = *i_9
        
        if (edi_3[2] s> 0)
            int32_t esi_1 = 0
            
            do
                int32_t eax_12 = *edi_3
                i_3 = i
                char* const* ecx_5 = &i_3
                bool cond:1_1 = *(esi_1 + eax_12 + 0x1c) != 1
                i_3 = result_1
                char* const result_8 = result_1
                
                if (cond:1_1)
                    char* const* var_24_1 = &i_3
                    
                    if (result_8 != 0 && *result_8 != 0)
                        char* eax_19 = sub_48a080(ecx_5)
                        *(eax_19 + 4) += 1
                    
                    var_8_1.b = 0xb
                    int32_t* eax_21 = *edi_3 + esi_1
                    result_3 = &i_3
                    result_3 = result_2
                    char* result_10 = result_2
                    
                    if (result_10 != 0 && *result_10 != 0)
                        char* eax_23 = sub_48a080(&result_3)
                        *(eax_23 + 4) += 1
                    
                    var_8_1.b = 9
                    i = sub_542a70(eax_21, &i_4)
                else
                    i_1 = &i_3
                    
                    if (result_8 != 0 && *result_8 != 0)
                        char* eax_14 = sub_48a080(ecx_5)
                        *(eax_14 + 4) += 1
                    
                    var_8_1.b = 0xa
                    int32_t* eax_16 = *edi_3 + esi_1
                    result_3 = &i_3
                    result_3 = result_2
                    char* result_9 = result_2
                    
                    if (result_9 != 0 && *result_9 != 0)
                        char* eax_18 = sub_48a080(&result_3)
                        *(eax_18 + 4) += 1
                    
                    var_8_1.b = 9
                    i = sub_5431c0(eax_16, &i_4)
                
                i_2 += 1
                esi_1 += 0x20
            while (i_2 s< edi_3[2])
        
        if ((i_9[2].b & 1) == 0)
            i_9[3]
            sub_4cead0(*i_9)
            *i_9 = nullptr
        
        char** ecx_11 = i_9[1]
        
        if (ecx_11 != 0)
            sub_4d4bb0(ecx_11)
            i_9[1] = 0
        
        i_3 = i_9
        _aligned_free_base(i_3)
        i_3 = "AtlasMaker: done."
        sub_4892e0(i_3)
        var_8_1.b = 0xc
        result = sub_436340(&i_4)
        var_8_1.b = 0xd
        
        if (data_aca1f4 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_48a080(&result_1)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5b2591
        
        int32_t var_8_3 = 0xe
    else
        char* result_7 = result_2
        
        if (result_7 != 0)
            i_11 = result_7
        
        i_3 = i_11
        result_3 = "failed to read %s"
        result = sub_4892e0(result_3)
        var_8_1.b = 7
        
        if (data_aca1f4 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_48a080(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5b2591
        
        int32_t var_8_2 = 8
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
