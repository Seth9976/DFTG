// 函数名称: sub_42af70
// 虚拟地址: 0x42af70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_42af70(int32_t arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d3e0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_24 = ebx
    int32_t var_28 = arg1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_14
    sub_48a2c0(&var_14, "btn_back")
    char* const ecx_1 = &data_5b2591
    char* eax_3 = var_14
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    char* edx = *(arg2 + 4)
    int32_t ecx_3
    
    while (true)
        ebx.b = *edx
        char temp0_1 = *ecx_1
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_3 = 0
                break
            
            ebx.b = edx[1]
            char temp1_1 = ecx_1[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                edx = &edx[2]
                ecx_1 = &ecx_1[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_3 = 0
                break
        
        ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
        break
    
    if (ecx_3 == 0 || *(arg2 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && eax_3 != 0 && *eax_3 != 0)
        eax_3 = sub_48a080(&var_14)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            eax_3 = sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        data_62b220 = 4
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    sub_48a2c0(&var_14, "btn_trash")
    char* eax_4 = var_14
    char* const ecx_9 = &data_5b2591
    char* edx_3 = *(arg2 + 4)
    
    if (eax_4 != 0)
        ecx_9 = eax_4
    
    int32_t esi_1
    
    while (true)
        ebx.b = *edx_3
        char temp3_1 = *ecx_9
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi_1 = 0
                break
            
            ebx.b = edx_3[1]
            char temp4_1 = ecx_9[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                edx_3 = &edx_3[2]
                ecx_9 = &ecx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_48a080(&var_14)
        int32_t temp5_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_4 = 0xffffffff
    char* var_20
    int32_t* ecx_12 = &var_20
    char* eax_7
    
    if (esi_1 != 0)
        sub_48a2c0(ecx_12, "btn_profile")
        eax_7 = var_20
        char* ecx_26 = &data_5b2591
        char* edx_14 = *(arg2 + 4)
        
        if (eax_7 != 0)
            ecx_26 = eax_7
        
        int32_t esi_4
        
        while (true)
            ebx.b = *edx_14
            char temp6_1 = *ecx_26
            bool c_3 = ebx.b u< temp6_1
            
            if (ebx.b == temp6_1)
                if (ebx.b == 0)
                    esi_4 = 0
                    break
                
                ebx.b = edx_14[1]
                char temp8_1 = ecx_26[1]
                c_3 = ebx.b u< temp8_1
                
                if (ebx.b == temp8_1)
                    edx_14 = &edx_14[2]
                    ecx_26 = &ecx_26[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    esi_4 = 0
                    break
            
            esi_4 = sbb.d(esi_1, esi_1, c_3) | 1
            break
        
        int32_t var_8_7 = 0xa
        
        if (data_aca1f4 != 0 && eax_7 != 0 && *eax_7 != 0)
            eax_7 = sub_48a080(&var_20)
            int32_t temp12_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp12_1 == 1)
                eax_7 = sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                var_20 = &data_5b2591
        
        int32_t var_8_8 = 0xffffffff
        
        if (esi_4 == 0)
            sub_48a5e0(&data_62bbd8, &data_5b2591)
            data_62bbd4 = esi_4
            sub_42aec0()
            int32_t ecx_29 = *(arg2 + 8)
            
            if (ecx_29 == *(data_6d00d8 + 0xbe0))
                void* eax_10 = sub_42af10(esi_4 + 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10
            
            *(data_6d00d8 + 0xbe4) = *(sub_437ec0(ecx_29) + 0x240)
            void* eax_13 = sub_437f10(*(data_6d00d8 + 0xbe4))
            
            if (*(eax_13 + 0x248) == 2)
                *(eax_13 + 0x248) = 0
            
            if (*(sub_41c5b0() + 0x18) == 3)
                void* eax_15 = data_6cfe4c
                
                if (eax_15 == 0)
                    sub_489550(eax_15, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                *(eax_15 + 0xa80) = 1
            else
                sub_41fd00()
            
            data_62b220 = 4
            sub_42aec0()
            eax_7 = sub_437ba0(data_6d00d8)
    else
        data_62bbe4 = *(arg2 + 8)
        sub_48a2c0(ecx_12, &data_5b2591)
        int32_t var_8_5 = 2
        char* var_1c
        sub_48a2c0(&var_1c, &data_5b2591)
        var_8_5.b = 3
        char* var_18
        sub_48a2c0(&var_18, "Are you sure you want to delete this profile?")
        var_8_5.b = 4
        sub_48a2c0(&var_14, "DELETE PROFILE")
        var_8_5.b = 5
        data_62b248 = 0x1c
        sub_48a560(&data_62b298, &var_14)
        sub_48a560(&data_62b29c, &var_18)
        sub_48a560(&data_62b2a0, &var_1c)
        eax_7 = sub_48a560(&data_62b2a4, &var_20)
        data_62b2a8 = sub_42b400
        data_62b2ac = esi_1
        var_8_5.b = 6
        
        if (data_aca1f4 != esi_1)
            eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_48a080(&var_14)
                int32_t temp7_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp7_1 == 1)
                    eax_7 = sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
        
        var_8_5.b = 7
        
        if (data_aca1f4 != 0)
            eax_7 = var_18
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_48a080(&var_18)
                int32_t temp9_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp9_1 == 1)
                    eax_7 = sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
        
        var_8_5.b = 8
        
        if (data_aca1f4 != 0)
            eax_7 = var_1c
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_48a080(&var_1c)
                int32_t temp10_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp10_1 == 1)
                    eax_7 = sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
        
        int32_t var_8_6 = 9
        
        if (data_aca1f4 != 0)
            eax_7 = var_20
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_48a080(&var_20)
                int32_t temp11_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp11_1 == 1)
                    int32_t eax_8 = sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_8
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7
}
