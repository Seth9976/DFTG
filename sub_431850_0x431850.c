// 函数名称: sub_431850
// 虚拟地址: 0x431850
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_431850(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d740
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
    char* const result_7 = &data_5b2591
    char* edx = *(arg4 + 4)
    
    if (result_3 != 0)
        result_7 = result_3
    
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_7
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_7[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_7 = &result_7[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_7, result_7, c_1) | 1
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
    
    if (ebx.b != 0)
        int32_t eax_4
        
        if (data_62b1ac != 0x21)
            if (data_62b1bc == 0x21)
                eax_4 = data_62b1c0
                goto label_431931
            
            data_62b220 = 3
        else
            eax_4 = data_62b1b0
        label_431931:
            
            if (eax_4 == 0)
                data_62b220 = 3
            else
                sub_4361a0(3)
    
    sub_48a2c0(&result_1, "btnTutorial")
    char* result_4 = result_1
    char* const result_8 = &data_5b2591
    char* edx_3 = *(arg4 + 4)
    
    if (result_4 != 0)
        result_8 = result_4
    
    int32_t edi_1
    
    while (true)
        ebx.b = *result_8
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_1 = 0
                break
            
            ebx.b = result_8[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                result_8 = &result_8[2]
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
        data_62b220 = 0x1f
        data_6d00a4 = edi_1
    
    sub_48a2c0(&result_1, "btnRulesItem")
    char* const result_9 = &data_5b2591
    char* edx_6 = *(arg4 + 4)
    char* result_5 = result_1
    
    if (result_5 != 0)
        result_9 = result_5
    
    int32_t edi_3
    
    while (true)
        ebx.b = *result_9
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                edi_3 = 0
                break
            
            ebx.b = result_9[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_9 = &result_9[2]
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
        int32_t temp10_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp10_1 == 1)
            sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (edi_3 == 0)
        int32_t eax_10 = *(arg4 + 8) * 3
        int32_t ecx_11 = *((eax_10 << 3) + &data_5b5698)
        
        if (ecx_11 == edi_3)
            ShellExecuteA(nullptr, "open", *((eax_10 << 3) + &data_5b569c), nullptr, nullptr, 
                SW_SHOWNORMAL)
        else
            if (ecx_11 - edi_3 != 1)
                sub_489550(eax_10, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x1365, "RulesClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            data_62b220 = *((eax_10 << 3) + &data_5b56a0)
    
    sub_48a2c0(&result_1, "btnTradeRate")
    char* result_10 = &data_5b2591
    char* edx_9 = *(arg4 + 4)
    char* result_6 = result_1
    
    if (result_6 != 0)
        result_10 = result_6
    
    int32_t edi_5
    
    while (true)
        ebx.b = *result_10
        char temp11_1 = *edx_9
        bool c_4 = ebx.b u< temp11_1
        
        if (ebx.b == temp11_1)
            if (ebx.b == 0)
                edi_5 = 0
                break
            
            ebx.b = result_10[1]
            char temp12_1 = edx_9[1]
            c_4 = ebx.b u< temp12_1
            
            if (ebx.b == temp12_1)
                result_10 = &result_10[2]
                edx_9 = &edx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_5 = 0
                break
        
        edi_5 = sbb.d(edi_3, edi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_13 = sub_48a080(&result_1)
        int32_t temp13_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp13_1 == 1)
            sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
    
    int32_t var_8_8 = 0xffffffff
    int32_t eax_14 = data_62b248
    
    if (edi_5 == 0)
        eax_14 = 0x27
    
    data_62b248 = eax_14
    sub_48a2c0(&result_1, "btnDiceDistributions")
    char* ecx_18 = *(arg4 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_1
    
    while (true)
        char edx_12 = *result_2
        char temp14_1 = *ecx_18
        bool c_5 = edx_12 u< temp14_1
        
        if (edx_12 == temp14_1)
            if (edx_12 == 0)
                esi_1 = 0
                break
            
            edx_12 = result_2[1]
            char temp15_1 = ecx_18[1]
            c_5 = edx_12 u< temp15_1
            
            if (edx_12 == temp15_1)
                result_2 = &result_2[2]
                ecx_18 = &ecx_18[2]
                
                if (edx_12 != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(result_2, result_2, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp16_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp16_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    if (esi_1 == 0)
        data_62b248 = 0x28
        data_632a0c = esi_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
