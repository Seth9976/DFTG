// 函数名称: sub_431180
// 虚拟地址: 0x431180
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_431180(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ esi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d718
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_1c = arg4
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&result_1, "BtnBack")
    char* const result_8 = &data_5b2591
    char* result_3 = result_1
    
    if (result_3 != 0)
        result_8 = result_3
    
    char* edx = *(arg5 + 4)
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_8
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_8[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_8 = &result_8[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_8, result_8, c_1) | 1
        break
    
    if (ecx_2 == 0 || *(arg5 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_48a080(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        if (data_62b24c != 0x1b)
            data_62b220 = 3
        else
            sub_4361a0(4)
    
    sub_48a2c0(&result_1, "BtnOK")
    char* result_4 = result_1
    char* const result_9 = &data_5b2591
    char* edx_3 = *(arg5 + 4)
    
    if (result_4 != 0)
        result_9 = result_4
    
    int32_t esi
    
    while (true)
        ebx.b = *result_9
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi = 0
                break
            
            ebx.b = result_9[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                result_9 = &result_9[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(arg4, arg4, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_4 = sub_48a080(&result_1)
        int32_t temp5_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi == 0)
        sub_48a560(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x23c, &data_62c408)
        char* const ecx_13 = &data_5b2591
        char* eax_7 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x23c)
        
        if (eax_7 != 0)
            ecx_13 = eax_7
        
        sub_422b80(ecx_13)
        bool cond:0_1 = data_62b24c != 0x1b
        data_62c40c.b = 1
        
        if (cond:0_1)
            sub_4361a0(3)
            data_62b220 = 3
        else
            sub_4361a0(esi + 4)
    
    sub_48a2c0(&result_1, "btnAge")
    char* result_5 = result_1
    char* const result_10 = &data_5b2591
    char* edx_6 = *(arg5 + 4)
    
    if (result_5 != 0)
        result_10 = result_5
    
    int32_t esi_2
    
    while (true)
        ebx.b = *result_10
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_2 = 0
                break
            
            ebx.b = result_10[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_10 = &result_10[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_8 = sub_48a080(&result_1)
        int32_t temp8_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_2 == 0)
        data_62c40c:1.b = data_62c40c:1.b == 0
    
    sub_48a2c0(&result_1, "BtnPaste")
    char* result_6 = result_1
    char* const result_11 = &data_5b2591
    char* edx_9 = *(arg5 + 4)
    
    if (result_6 != 0)
        result_11 = result_6
    
    int32_t esi_4
    
    while (true)
        ebx.b = *result_11
        char temp9_1 = *edx_9
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                esi_4 = 0
                break
            
            ebx.b = result_11[1]
            char temp10_1 = edx_9[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                result_11 = &result_11[2]
                edx_9 = &edx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_4 = 0
                break
        
        esi_4 = sbb.d(esi_2, esi_2, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_9 = sub_48a080(&result_1)
        int32_t temp11_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_4 == 0)
        sub_489fc0(&data_62c408)
    
    sub_48a2c0(&result_1, "btnEdit")
    char* result = result_1
    char* result_2 = &data_5b2591
    char* edx_12 = *(arg5 + 4)
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_6
    
    while (true)
        ebx.b = *result_2
        char temp12_1 = *edx_12
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                esi_6 = 0
                break
            
            ebx.b = result_2[1]
            char temp13_1 = edx_12[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                result_2 = &result_2[2]
                edx_12 = &edx_12[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_6 = 0
                break
        
        esi_6 = sbb.d(esi_4, esi_4, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp14_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp14_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_10 = 0xffffffff
    
    if (esi_6 == 0)
        void* ecx_24 = data_6d00d8
        data_62c40c = esi_6.w
        sub_48a5e0(sub_437f10(*(ecx_24 + 0xbe4)) + 0x23c, &data_5b2591)
        void* eax_11 = data_62c408
        
        if (eax_11 != 0 && eax_11 != &data_5b2591)
            if (data_aca1f4 != esi_6 && *eax_11 != 0)
                char* eax_12 = sub_48a080(&data_62c408)
                int32_t temp15_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp15_1 == 1)
                    sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
            
            data_62c408 = &data_5b2591
        
        sub_437ba0(data_6d00d8)
        int32_t eax_13
        
        if (data_62b224 != 0x1b)
            eax_13 = 0
            
            if (data_62b234 == 0x1b)
                eax_13 = data_62b238
        else
            eax_13 = data_62b228
        
        int32_t eax_14 = sub_426e60(0x1512838, eax_13, "Name")
        int32_t* result_7 = sub_48a2c0(&result_1, &data_5b2591)
        int32_t var_8_11 = 5
        
        if (eax_14 != 0)
            int32_t edx_17 = data_63e5ac
            uint32_t ecx_30 = zx.d(eax_14.w)
            
            if (ecx_30 u< edx_17)
                int32_t edi_1 = data_63e5a8
                result_7 = *(ecx_30 * 0x1418 + edi_1 + 0x1410)
                
                if (result_7 == eax_14)
                    if (ecx_30 u>= edx_17 || result_7 != eax_14)
                        sub_489550(result_7, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    void* ecx_32 = ecx_30 * 0x1418 + edi_1
                    
                    if (*(ecx_32 + 0xfec) == 3)
                        result_7 = sub_48a560(ecx_32 + 0x1134, &result_1)
        
        int32_t var_8_12 = 6
        
        if (data_aca1f4 != 0)
            result_7 = result_1
            
            if (result_7 != 0 && *result_7 != 0)
                result_7 = sub_48a080(&result_1)
                int32_t temp16_1 = result_7[1]
                result_7[1] -= 1
                
                if (temp16_1 == 1)
                    result_7 = sub_4984f0(result_7, result_7[3] + 0x10)
        
        int32_t var_8_13 = 0xffffffff
        sub_4aee70(result_7, nullptr, eax_14, 1)
        result = sub_422b80(&data_5b2591)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
