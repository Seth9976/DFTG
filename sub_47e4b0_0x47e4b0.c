// 函数名称: sub_47e4b0
// 虚拟地址: 0x47e4b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_47e4b0(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d860
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&result_1, "btnBack")
    char* const result_2 = &data_5b2591
    char* result_3 = result_1
    char* const result_14 = &data_5b2591
    char* edx = *(arg4 + 4)
    
    if (result_3 != 0)
        result_14 = result_3
    
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_14
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_14[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_14 = &result_14[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_14, result_14, c_1) | 1
        break
    
    if (ecx_2 == 0 || *(arg4 + 0x18) == 2)
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
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_4 = 0xe
        
        if (data_6d00a4 == 0)
            eax_4 = 0x15
        
        data_62b220 = eax_4
    
    sub_48a2c0(&result_1, "btn_tutorial_overview")
    char* result_4 = result_1
    char* const result_15 = &data_5b2591
    char* edx_3 = *(arg4 + 4)
    
    if (result_4 != 0)
        result_15 = result_4
    
    int32_t esi_1
    
    while (true)
        ebx.b = *result_15
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi_1 = 0
                break
            
            ebx.b = result_15[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                result_15 = &result_15[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(arg4, arg4, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_5 = sub_48a080(&result_1)
        int32_t temp5_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_1 == 0)
        sub_426f60(esi_1 + 0x65)
    
    sub_48a2c0(&result_1, "btn_tutorial_factions")
    char* const result_16 = &data_5b2591
    char* edx_6 = *(arg4 + 4)
    char* result_5 = result_1
    
    if (result_5 != 0)
        result_16 = result_5
    
    int32_t esi_3
    
    while (true)
        ebx.b = *result_16
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_3 = 0
                break
            
            ebx.b = result_16[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_16 = &result_16[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_7 = sub_48a080(&result_1)
        int32_t temp8_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_3 == 0)
        sub_426f60(esi_3 + 0x66)
    
    sub_48a2c0(&result_1, "btn_tutorial_construction")
    char* const result_17 = &data_5b2591
    char* edx_9 = *(arg4 + 4)
    char* result_6 = result_1
    
    if (result_6 != 0)
        result_17 = result_6
    
    int32_t esi_5
    
    while (true)
        ebx.b = *result_17
        char temp9_1 = *edx_9
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                esi_5 = 0
                break
            
            ebx.b = result_17[1]
            char temp10_1 = edx_9[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                result_17 = &result_17[2]
                edx_9 = &edx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_5 = 0
                break
        
        esi_5 = sbb.d(esi_3, esi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_9 = sub_48a080(&result_1)
        int32_t temp11_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_5 == 0)
        sub_426f60(esi_5 + 0x67)
    
    sub_48a2c0(&result_1, "btn_tutorial_Assignment")
    char* const result_18 = &data_5b2591
    char* edx_12 = *(arg4 + 4)
    char* result_7 = result_1
    
    if (result_7 != 0)
        result_18 = result_7
    
    int32_t esi_7
    
    while (true)
        ebx.b = *result_18
        char temp12_1 = *edx_12
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                esi_7 = 0
                break
            
            ebx.b = result_18[1]
            char temp13_1 = edx_12[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                result_18 = &result_18[2]
                edx_12 = &edx_12[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_5, esi_5, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_aca1f4 != 0 && result_7 != 0 && *result_7 != 0)
        char* eax_11 = sub_48a080(&result_1)
        int32_t temp14_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
    
    int32_t var_8_10 = 0xffffffff
    
    if (esi_7 == 0)
        sub_426f60(esi_7 + 0x68)
    
    sub_48a2c0(&result_1, "btn_tutorial_reassign")
    char* const result_19 = &data_5b2591
    char* edx_15 = *(arg4 + 4)
    char* result_8 = result_1
    
    if (result_8 != 0)
        result_19 = result_8
    
    int32_t esi_9
    
    while (true)
        ebx.b = *result_19
        char temp15_1 = *edx_15
        bool c_6 = ebx.b u< temp15_1
        
        if (ebx.b == temp15_1)
            if (ebx.b == 0)
                esi_9 = 0
                break
            
            ebx.b = result_19[1]
            char temp16_1 = edx_15[1]
            c_6 = ebx.b u< temp16_1
            
            if (ebx.b == temp16_1)
                result_19 = &result_19[2]
                edx_15 = &edx_15[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_9 = 0
                break
        
        esi_9 = sbb.d(esi_7, esi_7, c_6) | 1
        break
    
    int32_t var_8_11 = 5
    
    if (data_aca1f4 != 0 && result_8 != 0 && *result_8 != 0)
        char* eax_13 = sub_48a080(&result_1)
        int32_t temp17_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
    
    int32_t var_8_12 = 0xffffffff
    
    if (esi_9 == 0)
        sub_426f60(esi_9 + 0x69)
    
    sub_48a2c0(&result_1, "btn_tutorial_explore")
    char* const result_20 = &data_5b2591
    char* edx_18 = *(arg4 + 4)
    char* result_9 = result_1
    
    if (result_9 != 0)
        result_20 = result_9
    
    int32_t esi_11
    
    while (true)
        ebx.b = *result_20
        char temp18_1 = *edx_18
        bool c_7 = ebx.b u< temp18_1
        
        if (ebx.b == temp18_1)
            if (ebx.b == 0)
                esi_11 = 0
                break
            
            ebx.b = result_20[1]
            char temp19_1 = edx_18[1]
            c_7 = ebx.b u< temp19_1
            
            if (ebx.b == temp19_1)
                result_20 = &result_20[2]
                edx_18 = &edx_18[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_11 = 0
                break
        
        esi_11 = sbb.d(esi_9, esi_9, c_7) | 1
        break
    
    int32_t var_8_13 = 6
    
    if (data_aca1f4 != 0 && result_9 != 0 && *result_9 != 0)
        char* eax_15 = sub_48a080(&result_1)
        int32_t temp20_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
    
    int32_t var_8_14 = 0xffffffff
    
    if (esi_11 == 0)
        sub_426f60(esi_11 + 0x6a)
    
    sub_48a2c0(&result_1, "btn_tutorial_develop")
    char* const result_21 = &data_5b2591
    char* edx_21 = *(arg4 + 4)
    char* result_10 = result_1
    
    if (result_10 != 0)
        result_21 = result_10
    
    int32_t esi_13
    
    while (true)
        ebx.b = *result_21
        char temp21_1 = *edx_21
        bool c_8 = ebx.b u< temp21_1
        
        if (ebx.b == temp21_1)
            if (ebx.b == 0)
                esi_13 = 0
                break
            
            ebx.b = result_21[1]
            char temp22_1 = edx_21[1]
            c_8 = ebx.b u< temp22_1
            
            if (ebx.b == temp22_1)
                result_21 = &result_21[2]
                edx_21 = &edx_21[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_13 = 0
                break
        
        esi_13 = sbb.d(esi_11, esi_11, c_8) | 1
        break
    
    int32_t var_8_15 = 7
    
    if (data_aca1f4 != 0 && result_10 != 0 && *result_10 != 0)
        char* eax_17 = sub_48a080(&result_1)
        int32_t temp23_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp23_1 == 1)
            sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
    
    int32_t var_8_16 = 0xffffffff
    
    if (esi_13 == 0)
        sub_426f60(esi_13 + 0x6b)
    
    sub_48a2c0(&result_1, "btn_tutorial_settle")
    char* result_22 = &data_5b2591
    char* edx_24 = *(arg4 + 4)
    char* result_11 = result_1
    
    if (result_11 != 0)
        result_22 = result_11
    
    int32_t esi_15
    
    while (true)
        ebx.b = *result_22
        char temp24_1 = *edx_24
        bool c_9 = ebx.b u< temp24_1
        
        if (ebx.b == temp24_1)
            if (ebx.b == 0)
                esi_15 = 0
                break
            
            ebx.b = result_22[1]
            char temp25_1 = edx_24[1]
            c_9 = ebx.b u< temp25_1
            
            if (ebx.b == temp25_1)
                result_22 = &result_22[2]
                edx_24 = &edx_24[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_15 = 0
                break
        
        esi_15 = sbb.d(esi_13, esi_13, c_9) | 1
        break
    
    int32_t var_8_17 = 8
    
    if (data_aca1f4 != 0 && result_11 != 0 && *result_11 != 0)
        char* eax_19 = sub_48a080(&result_1)
        int32_t temp26_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp26_1 == 1)
            sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
    
    int32_t var_8_18 = 0xffffffff
    
    if (esi_15 == 0)
        sub_426f60(esi_15 + 0x6c)
    
    sub_48a2c0(&result_1, "btn_tutorial_produce")
    char* result_23 = &data_5b2591
    char* edx_27 = *(arg4 + 4)
    char* result_12 = result_1
    
    if (result_12 != 0)
        result_23 = result_12
    
    int32_t esi_17
    
    while (true)
        ebx.b = *result_23
        char temp27_1 = *edx_27
        bool c_10 = ebx.b u< temp27_1
        
        if (ebx.b == temp27_1)
            if (ebx.b == 0)
                esi_17 = 0
                break
            
            ebx.b = result_23[1]
            char temp28_1 = edx_27[1]
            c_10 = ebx.b u< temp28_1
            
            if (ebx.b == temp28_1)
                result_23 = &result_23[2]
                edx_27 = &edx_27[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_17 = 0
                break
        
        esi_17 = sbb.d(esi_15, esi_15, c_10) | 1
        break
    
    int32_t var_8_19 = 9
    
    if (data_aca1f4 != 0 && result_12 != 0 && *result_12 != 0)
        char* eax_21 = sub_48a080(&result_1)
        int32_t temp29_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp29_1 == 1)
            sub_4984f0(eax_21, *(eax_21 + 0xc) + 0x10)
    
    int32_t var_8_20 = 0xffffffff
    
    if (esi_17 == 0)
        sub_426f60(esi_17 + 0x6d)
    
    sub_48a2c0(&result_1, "btn_tutorial_ship")
    char* result_24 = &data_5b2591
    char* edx_30 = *(arg4 + 4)
    char* result_13 = result_1
    
    if (result_13 != 0)
        result_24 = result_13
    
    int32_t esi_19
    
    while (true)
        ebx.b = *result_24
        char temp30_1 = *edx_30
        bool c_11 = ebx.b u< temp30_1
        
        if (ebx.b == temp30_1)
            if (ebx.b == 0)
                esi_19 = 0
                break
            
            ebx.b = result_24[1]
            char temp31_1 = edx_30[1]
            c_11 = ebx.b u< temp31_1
            
            if (ebx.b == temp31_1)
                result_24 = &result_24[2]
                edx_30 = &edx_30[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_19 = 0
                break
        
        esi_19 = sbb.d(esi_17, esi_17, c_11) | 1
        break
    
    int32_t var_8_21 = 0xa
    
    if (data_aca1f4 != 0 && result_13 != 0 && *result_13 != 0)
        char* eax_23 = sub_48a080(&result_1)
        int32_t temp32_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp32_1 == 1)
            sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
    
    int32_t var_8_22 = 0xffffffff
    
    if (esi_19 == 0)
        sub_426f60(esi_19 + 0x6e)
    
    sub_48a2c0(&result_1, "btn_tutorial_manage")
    char* ecx_46 = *(arg4 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_21
    
    while (true)
        char edx_33 = *result_2
        char temp33_1 = *ecx_46
        bool c_12 = edx_33 u< temp33_1
        
        if (edx_33 == temp33_1)
            if (edx_33 == 0)
                esi_21 = 0
                break
            
            edx_33 = result_2[1]
            char temp34_1 = ecx_46[1]
            c_12 = edx_33 u< temp34_1
            
            if (edx_33 == temp34_1)
                result_2 = &result_2[2]
                ecx_46 = &ecx_46[2]
                
                if (edx_33 != 0)
                    continue
                
                esi_21 = 0
                break
        
        esi_21 = sbb.d(esi_19, esi_19, c_12) | 1
        break
    
    int32_t var_8_23 = 0xb
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp35_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp35_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_24 = 0xffffffff
    
    if (esi_21 == 0)
        result = sub_426f60(esi_21 + 0x6f)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
