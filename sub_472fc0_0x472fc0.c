// 函数名称: sub_472fc0
// 虚拟地址: 0x472fc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_472fc0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e168
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* eax_5 = sub_4bbad0(sub_4bbb50(sub_4bbb50(*(arg1 + 0x10))))
    
    if (eax_5 == 0)
        sub_489550(eax_5, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_14, eax_5)
    int32_t var_8_1 = 0
    char* const eax_6 = &data_5b2591
    char* esi = var_14
    char const* const ecx_4 = "tbl_trays_explore"
    
    if (esi != 0)
        eax_6 = esi
    
    int32_t eax_8
    char edx_1
    
    while (true)
        edx_1 = *eax_6
        char const temp0_1 = *ecx_4
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                eax_8 = 0
                break
            
            edx_1 = eax_6[1]
            char temp1_1 = ecx_4[1]
            c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                eax_6 = &eax_6[2]
                ecx_4 = &ecx_4[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_8 = 0
                break
        
        eax_8 = sbb.d(eax_6, eax_6, c_1) | 1
        break
    
    if (eax_8 == 0)
        int32_t var_8_2 = 1
        
        if (data_aca1f4 != eax_8 && esi != 0 && *esi != eax_8.b)
            char* eax_9 = sub_48a080(&var_14)
            int32_t temp3_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    char* eax_11 = &data_5b2591
    char const* const ecx_9 = "tbl_trays_develop"
    
    if (esi != 0)
        eax_11 = esi
    
    int32_t eax_13
    
    while (true)
        edx_1 = *eax_11
        char const temp2_1 = *ecx_9
        bool c_2 = edx_1 u< temp2_1
        
        if (edx_1 == temp2_1)
            if (edx_1 == 0)
                eax_13 = 0
                break
            
            edx_1 = eax_11[1]
            char temp4_1 = ecx_9[1]
            c_2 = edx_1 u< temp4_1
            
            if (edx_1 == temp4_1)
                eax_11 = &eax_11[2]
                ecx_9 = &ecx_9[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_13 = 0
                break
        
        eax_13 = sbb.d(eax_11, eax_11, c_2) | 1
        break
    
    if (eax_13 == 0)
        int32_t var_8_3 = 2
        
        if (data_aca1f4 != eax_13 && esi != 0 && *esi != eax_13.b)
            char* eax_14 = sub_48a080(&var_14)
            int32_t temp6_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    char* eax_16 = &data_5b2591
    char const* const ecx_14 = "tbl_trays_settle"
    
    if (esi != 0)
        eax_16 = esi
    
    int32_t eax_18
    
    while (true)
        edx_1 = *eax_16
        char const temp5_1 = *ecx_14
        bool c_3 = edx_1 u< temp5_1
        
        if (edx_1 == temp5_1)
            if (edx_1 == 0)
                eax_18 = 0
                break
            
            edx_1 = eax_16[1]
            char temp7_1 = ecx_14[1]
            c_3 = edx_1 u< temp7_1
            
            if (edx_1 == temp7_1)
                eax_16 = &eax_16[2]
                ecx_14 = &ecx_14[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_18 = 0
                break
        
        eax_18 = sbb.d(eax_16, eax_16, c_3) | 1
        break
    
    if (eax_18 == 0)
        int32_t var_8_4 = 3
        
        if (data_aca1f4 != eax_18 && esi != 0 && *esi != eax_18.b)
            char* eax_19 = sub_48a080(&var_14)
            int32_t temp8_1 = *(eax_19 + 4)
            *(eax_19 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 2
    
    if (sub_48a4a0(&var_14, "tbl_trays_produce") != 0)
        int32_t var_8_5 = 4
        
        if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
            char* eax_22 = sub_48a080(&var_14)
            int32_t temp9_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp9_1 == 1)
                sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 3
    
    int32_t eax_24 = sub_48a4a0(&var_14, "tbl_trays_ship")
    
    if (eax_24.b == 0)
        sub_489550(eax_24, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
            0x6a63, "CalcTrayIndex")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_8_6 = 5
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        char* eax_25 = sub_48a080(&var_14)
        int32_t temp10_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp10_1 == 1)
            sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 4
}
