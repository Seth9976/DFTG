// 函数名称: sub_42bb20
// 虚拟地址: 0x42bb20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_42bb20(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d458
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_2c = ebx
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_14
    sub_48a2c0(&var_14, "BtnBack")
    char* const edi = &data_5b2591
    char* eax_3 = var_14
    char* const ecx_1 = &data_5b2591
    char* edx = *(arg1 + 4)
    
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
    
    if (ecx_3 == 0 || *(arg1 + 0x18) == 2)
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
            var_14 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_5 = 4
        
        if (data_62b2b0 == 1)
            eax_5 = 0xe
        
        data_62b220 = eax_5
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    sub_48a2c0(&var_14, "btnPrev")
    char* eax_6 = var_14
    char* const ecx_9 = &data_5b2591
    char* edx_3 = *(arg1 + 4)
    
    if (eax_6 != 0)
        ecx_9 = eax_6
    
    int32_t ebx_3
    
    while (true)
        ebx.b = *ecx_9
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                ebx_3 = 0
                break
            
            ebx.b = ecx_9[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_9 = &ecx_9[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                ebx_3 = 0
                break
        
        ebx_3 = sbb.d(ebx, ebx, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && eax_6 != 0 && *eax_6 != 0)
        eax_6 = sub_48a080(&var_14)
        int32_t temp5_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp5_1 == 1)
            eax_6 = sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_4 = 0xffffffff
    
    if (ebx_3 == 0)
        data_62b2b4 -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    sub_48a2c0(&var_14, "btnFriendCopy")
    char* eax_7 = var_14
    char* const ecx_15 = &data_5b2591
    char* edx_6 = *(arg1 + 4)
    
    if (eax_7 != 0)
        ecx_15 = eax_7
    
    int32_t ebx_6
    
    while (true)
        ebx_3.b = *ecx_15
        char temp6_1 = *edx_6
        bool c_3 = ebx_3.b u< temp6_1
        
        if (ebx_3.b == temp6_1)
            if (ebx_3.b == 0)
                ebx_6 = 0
                break
            
            ebx_3.b = ecx_15[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx_3.b u< temp7_1
            
            if (ebx_3.b == temp7_1)
                ecx_15 = &ecx_15[2]
                edx_6 = &edx_6[2]
                
                if (ebx_3.b != 0)
                    continue
                
                ebx_6 = 0
                break
        
        ebx_6 = sbb.d(ebx_3, ebx_3, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_48a080(&var_14)
        int32_t temp8_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (ebx_6 == 0)
        char* eax_10 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x234)
        
        if (eax_10 != 0)
            edi = eax_10
        
        int32_t eax_11 = sub_489f60(edi)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_11
    
    sub_48a2c0(&var_14, "btnNext")
    char* eax_12 = sub_48a4a0(&var_14, *(arg1 + 4))
    ebx_6.b = eax_12.b
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0)
        char* ecx_25 = var_14
        
        if (ecx_25 != 0 && *ecx_25 != 0)
            eax_12 = sub_48a080(&var_14)
            int32_t temp9_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp9_1 == 1)
                eax_12 = sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_8 = 0xffffffff
    
    if (ebx_6.b != 0)
        data_62b2b4 += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12
    
    sub_48a2c0(&var_14, "btnFriend")
    ebx_6.b = sub_48a4a0(&var_14, *(arg1 + 4))
    int32_t var_8_9 = 4
    
    if (data_aca1f4 != 0)
        char* ecx_32 = var_14
        
        if (ecx_32 != 0 && *ecx_32 != 0)
            char* eax_14 = sub_48a080(&var_14)
            int32_t temp10_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp10_1 == 1)
                sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_10 = 0xffffffff
    char* eax_15
    char* var_20
    
    if (ebx_6.b == 0)
        sub_48a2c0(&var_14, "btnTrash")
        eax_15 = sub_48a4a0(&var_14, *(arg1 + 4))
        ebx_6.b = eax_15.b
        int32_t var_8_11 = 5
        
        if (data_aca1f4 != 0)
            char* ecx_48 = var_14
            
            if (ecx_48 != 0 && *ecx_48 != 0)
                eax_15 = sub_48a080(&var_14)
                int32_t temp11_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp11_1 == 1)
                    eax_15 = sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
        
        int32_t var_8_12 = 0xffffffff
        
        if (ebx_6.b != 0)
            void* esi_9 = data_62b2b4 * 6 + 0xffffffff + *(arg1 + 8)
            data_62b2bc = esi_9
            char* esi_11 = *(sub_41c5b0() + esi_9 * 0x10 + 0x2c)
            char* var_24 = esi_11
            
            if (esi_11 != 0 && *esi_11 != 0)
                char* eax_32 = sub_48a080(&var_24)
                *(eax_32 + 4) += 1
            
            int32_t var_8_13 = 6
            sub_48a2c0(&var_20, &data_5b2591)
            var_8_13.b = 7
            char* var_1c
            sub_48a2c0(&var_1c, &data_5b2591)
            var_8_13.b = 8
            sub_48a2c0(&var_14, "REMOVE FRIEND")
            var_8_13.b = 9
            
            if (esi_11 != 0)
                edi = esi_11
            
            char* const var_3c_2 = edi
            char* var_18
            int32_t* eax_33 =
                sub_48a9d0(&var_18, "Are you sure you want to remove %s from your friend list?")
            var_8_13.b = 0xa
            eax_15 = sub_436200(eax_33, eax_33, &var_14, 0x1c, &var_1c, &var_20, sub_42c1f0)
            var_8_13.b = 0xb
            
            if (data_aca1f4 != 0)
                eax_15 = var_18
                
                if (eax_15 != 0 && *eax_15 != 0)
                    eax_15 = sub_48a080(&var_18)
                    int32_t temp12_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        eax_15 = sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
                        var_18 = &data_5b2591
            
            var_8_13.b = 0xc
            
            if (data_aca1f4 != 0)
                eax_15 = var_14
                
                if (eax_15 != 0 && *eax_15 != 0)
                    eax_15 = sub_48a080(&var_14)
                    int32_t temp13_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        eax_15 = sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
            
            var_8_13.b = 0xd
            
            if (data_aca1f4 != 0)
                eax_15 = var_1c
                
                if (eax_15 != 0 && *eax_15 != 0)
                    eax_15 = sub_48a080(&var_1c)
                    int32_t temp14_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        eax_15 = sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
            
            var_8_13.b = 0xe
            
            if (data_aca1f4 != 0)
                eax_15 = var_20
                
                if (eax_15 != 0 && *eax_15 != 0)
                    eax_15 = sub_48a080(&var_20)
                    int32_t temp15_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        eax_15 = sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
            
            int32_t var_8_14 = 0xf
            
            if (data_aca1f4 != 0 && esi_11 != 0 && *esi_11 != 0)
                eax_15 = sub_48a080(&var_24)
                int32_t temp16_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp16_1 == 1)
                    eax_15 = sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
    else
        eax_15 = data_62b2b4
        
        if (eax_15 == 0 && *(arg1 + 8) == eax_15)
            char** eax_16 = sub_48a5e0(&data_62b2b8, &data_5b2591)
            data_62b248 = 9
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_16
        
        if (data_62b2b0 == 1)
            char* ebx_10 = data_6cfe4c
            int32_t eax_17 = *(arg1 + 8)
            var_20 = ebx_10
            
            if (ebx_10 == 0)
                sub_489550(eax_17, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* eax_18 = sub_426fb0()
            char* const ecx_38 = &data_5b2591
            int32_t esi_3 = (eax_15 * 6 + 0xffffffff + eax_17) << 4
            void* edi_2 = data_6d00bc * 0x2c + eax_18
            var_14 = esi_3
            *(edi_2 + 0x18) = *(esi_3 + ebx_10 + 0x30)
            char* eax_20 = *(esi_3 + ebx_10 + 0x2c)
            
            if (eax_20 != 0)
                ecx_38 = eax_20
            
            _strncpy(edi_2 + 8, ecx_38, 0x10)
            char* eax_21 = var_14
            *(edi_2 + 0x17) = 0
            *(edi_2 + 0x1c) = 1
            *(edi_2 + 0x20) = *(eax_21 + ebx_10 + 0x28)
            void* eax_23 = sub_437f10(*(data_6d00d8 + 0xbe4))
            int32_t edx_15 = 0
            int32_t eax_24 = *(eax_23 + 0x260)
            
            if (eax_24 s> 0)
                void* ecx_42 = eax_23 + 0x254
                
                do
                    if (*ecx_42 == *(var_14 + var_20 + 0x24))
                        goto label_42bf7b
                    
                    edx_15 += 1
                    ecx_42 += 4
                while (edx_15 s< eax_24)
            
            int32_t edi_3 = 3
            
            if (eax_24 + 1 s< 3)
                edi_3 = eax_24 + 1
            
            sub_579a90(eax_23 + 0x254, eax_23 + 0x258, (edi_3 << 2) + 0xfffffffc)
            eax_24 = *(var_14 + var_20 + 0x24)
            *(eax_23 + 0x254) = eax_24
            *(eax_23 + 0x260) = edi_3
        label_42bf7b:
            data_62b220 = 0xe
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_24
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_15
}
