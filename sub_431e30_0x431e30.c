// 函数名称: sub_431e30
// 虚拟地址: 0x431e30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_431e30(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d760
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
    char* const result_8 = &data_5b2591
    char* edx = *(arg4 + 4)
    
    if (result_3 != 0)
        result_8 = result_3
    
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
            result_1 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    int32_t eax_4 = data_62b220
    
    if (ebx.b != 0)
        eax_4 = 0x13
    
    data_62b220 = eax_4
    sub_48a2c0(&result_1, "btnBuy")
    char* result_4 = result_1
    char* const result_9 = &data_5b2591
    char* edx_3 = *(arg4 + 4)
    
    if (result_4 != 0)
        result_9 = result_4
    
    int32_t edi_1
    
    while (true)
        ebx.b = *result_9
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_1 = 0
                break
            
            ebx.b = result_9[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                result_9 = &result_9[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_1 = 0
                break
        
        edi_1 = sbb.d(arg4, arg4, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_5 = sub_48a080(&result_1)
        int32_t temp5_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_4 = 0xffffffff
    
    if (edi_1 == 0)
        sub_430920(&data_6cfe74)
    
    sub_48a2c0(&result_1, "btnCardList")
    char* const result_10 = &data_5b2591
    char* edx_6 = *(arg4 + 4)
    char* result_5 = result_1
    
    if (result_5 != 0)
        result_10 = result_5
    
    int32_t edi_3
    
    while (true)
        ebx.b = *result_10
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                edi_3 = 0
                break
            
            ebx.b = result_10[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_10 = &result_10[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_3 = 0
                break
        
        edi_3 = sbb.d(edi_1, edi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_7 = sub_48a080(&result_1)
        int32_t temp8_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (edi_3 == 0)
        int32_t eax_8 = sub_429080(&data_6cfe74)
        
        if (eax_8 u> 1)
            sub_489550(eax_8, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x13b6, "StoreItemClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        data_6cfe6c = data_6cfe6c == 0
    
    sub_48a2c0(&result_1, "btn_zoom_dismiss")
    char* const result_11 = &data_5b2591
    char* edx_9 = *(arg4 + 4)
    char* result_6 = result_1
    
    if (result_6 != 0)
        result_11 = result_6
    
    int32_t edi_5
    
    while (true)
        ebx.b = *result_11
        char temp9_1 = *edx_9
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                edi_5 = 0
                break
            
            ebx.b = result_11[1]
            char temp10_1 = edx_9[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                result_11 = &result_11[2]
                edx_9 = &edx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_5 = 0
                break
        
        edi_5 = sbb.d(edi_3, edi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_10 = sub_48a080(&result_1)
        int32_t temp11_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
    
    int32_t var_8_8 = 0xffffffff
    
    if (edi_5 == 0)
        sub_41e3c0(data_6cfe70, 0xffffffff)
    
    sub_48a2c0(&result_1, "btn_zoomed_lArrow")
    char* result_12 = &data_5b2591
    char* edx_12 = *(arg4 + 4)
    char* result_7 = result_1
    
    if (result_7 != 0)
        result_12 = result_7
    
    int32_t edi_7
    
    while (true)
        ebx.b = *result_12
        char temp12_1 = *edx_12
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                edi_7 = 0
                break
            
            ebx.b = result_12[1]
            char temp13_1 = edx_12[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                result_12 = &result_12[2]
                edx_12 = &edx_12[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_7 = 0
                break
        
        edi_7 = sbb.d(edi_5, edi_5, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_aca1f4 != 0 && result_7 != 0 && *result_7 != 0)
        char* eax_12 = sub_48a080(&result_1)
        int32_t temp15_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp15_1 == 1)
            sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
    
    int32_t var_8_10 = 0xffffffff
    
    if (edi_7 == 0)
        void* edi_9 = data_6cfe70
        int32_t edx_15 = *(edi_9 + 0xbd0)
        int32_t edx_16 = edx_15 - 1
        
        if (edx_15 - 1 s< 0)
        label_432183:
            edx_16 = 0xffffffff
        else
            void* eax_15 = (edx_16 << 4) + edi_9
            
            while (true)
                if (edx_16 s>= *(edi_9 + 0x960))
                    goto label_432183
                
                if (*eax_15 != 0)
                    break
                
                eax_15 -= 0x10
                int32_t temp18_1 = edx_16
                edx_16 -= 1
                
                if (temp18_1 - 1 s< 0)
                    goto label_432183
        
        sub_41e3c0(edi_9, edx_16)
    
    sub_48a2c0(&result_1, "btn_zoomed_rArrow")
    char* ecx_21 = *(arg4 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_1
    
    while (true)
        char edx_17 = *result_2
        char temp16_1 = *ecx_21
        bool c_6 = edx_17 u< temp16_1
        
        if (edx_17 == temp16_1)
            if (edx_17 == 0)
                esi_1 = 0
                break
            
            edx_17 = result_2[1]
            char temp17_1 = ecx_21[1]
            c_6 = edx_17 u< temp17_1
            
            if (edx_17 == temp17_1)
                result_2 = &result_2[2]
                ecx_21 = &ecx_21[2]
                
                if (edx_17 != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(result_2, result_2, c_6) | 1
        break
    
    int32_t var_8_11 = 5
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp20_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp20_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_12 = 0xffffffff
    
    if (esi_1 == 0)
        void* esi_2 = data_6cfe70
        int32_t edx_20 = *(esi_2 + 0xbd0)
        int32_t edx_21 = edx_20 + 1
        
        if (edx_20 + 1 s< 0)
        label_432241:
            edx_21 = 0xffffffff
        else
            void* eax_19 = (edx_21 << 4) + esi_2
            
            while (true)
                if (edx_21 s>= *(esi_2 + 0x960))
                    goto label_432241
                
                if (*eax_19 != 0)
                    break
                
                eax_19 += 0x10
                int32_t temp21_1 = edx_21
                edx_21 += 1
                
                if (temp21_1 + 1 s< 0)
                    goto label_432241
        
        result = sub_41e3c0(esi_2, edx_21)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
