// 函数名称: sub_42d300
// 虚拟地址: 0x42d300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_42d300(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d5a9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_24 = nullptr
    char* const var_20
    sub_48a2c0(&var_20, "btn_screen")
    int32_t edi = 1
    int32_t var_8_1 = 0
    char* const eax_3 = &data_5b2591
    char* esi = var_20
    var_24 = 1
    char* ecx_1 = *(arg1 + 4)
    
    if (esi != 0)
        eax_3 = esi
    
    int32_t eax_5
    
    while (true)
        void* edx
        edx.b = *eax_3
        char temp0_1 = *ecx_1
        bool c_1 = edx.b u< temp0_1
        
        if (edx.b == temp0_1)
            if (edx.b == 0)
                eax_5 = 0
                break
            
            edx.b = eax_3[1]
            char temp1_1 = ecx_1[1]
            c_1 = edx.b u< temp1_1
            
            if (edx.b == temp1_1)
                eax_3 = &eax_3[2]
                ecx_1 = &ecx_1[2]
                
                if (edx.b != 0)
                    continue
                
                eax_5 = 0
                break
        
        eax_5 = sbb.d(eax_3, eax_3, c_1) | 1
        break
    
    char ebx = 1
    char* ecx_2 = 1
    char* var_18
    char var_11
    char* eax_7
    
    if (eax_5 == 0)
        eax_7 = var_18
        var_11 = 1
    else
        sub_48a2c0(&var_18, "btn_resume")
        char* const ecx_4 = &data_5b2591
        edi = 3
        char* edx_1 = *(arg1 + 4)
        eax_7 = var_18
        
        if (eax_7 != 0)
            ecx_4 = eax_7
        
        int32_t edx_3
        
        while (true)
            ebx = *ecx_4
            char temp2_1 = *edx_1
            bool c_2 = ebx u< temp2_1
            
            if (ebx == temp2_1)
                if (ebx == 0)
                    edx_3 = 0
                    break
                
                ebx = ecx_4[1]
                char temp3_1 = edx_1[1]
                c_2 = ebx u< temp3_1
                
                if (ebx == temp3_1)
                    ecx_4 = &ecx_4[2]
                    edx_1 = &edx_1[2]
                    
                    if (ebx != 0)
                        continue
                    
                    edx_3 = 0
                    break
            
            edx_3 = sbb.d(edx_1, edx_1, c_2) | 1
            break
        
        ebx = 3
        ecx_2 = 3
        
        if (edx_3 == 0 || *(arg1 + 0x18) == 2)
            var_11 = 1
        else
            var_11 = 0
    
    if ((ebx & 2) != 0)
        char* edi_1 = edi & 0xfffffffd
        var_24 = edi_1
        int32_t var_8_2 = 1
        ecx_2 = edi_1
        
        if (data_aca1f4 != 0)
            if (eax_7 == 0 || *eax_7 == 0)
                ecx_2 = edi_1
            else
                char* eax_8 = sub_48a080(&var_18)
                ecx_2 = edi_1
                int32_t temp4_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_18 = &data_5b2591
                    ecx_2 = edi_1
    
    int32_t var_8_3 = 0xffffffff
    
    if ((ecx_2.b & 1) != 0)
        var_24 = ecx_2 & 0xfffffffe
        int32_t var_8_4 = 2
        
        if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
            char* eax_9 = sub_48a080(&var_20)
            int32_t temp6_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
                var_20 = &data_5b2591
        
        int32_t var_8_5 = 0xffffffff
    
    if (var_11 != 0)
        sub_4361a0(3)
    
    sub_48a2c0(&var_24, "BtnOptions")
    char* const ecx_11 = &data_5b2591
    char* eax_10 = var_24
    
    if (eax_10 != 0)
        ecx_11 = eax_10
    
    char* edx_9 = *(arg1 + 4)
    int32_t esi_1
    
    while (true)
        ebx = *ecx_11
        char temp5_1 = *edx_9
        bool c_3 = ebx u< temp5_1
        
        if (ebx == temp5_1)
            if (ebx == 0)
                esi_1 = 0
                break
            
            ebx = ecx_11[1]
            char temp7_1 = edx_9[1]
            c_3 = ebx u< temp7_1
            
            if (ebx == temp7_1)
                ecx_11 = &ecx_11[2]
                edx_9 = &edx_9[2]
                
                if (ebx != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_6 = 3
    
    if (data_aca1f4 != 0 && eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_48a080(&var_24)
        int32_t temp8_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
            var_24 = &data_5b2591
    
    int32_t var_8_7 = 0xffffffff
    int32_t eax_12 = data_62b220
    
    if (esi_1 == 0)
        eax_12 = 0xc
    
    data_62b220 = eax_12
    sub_48a2c0(&var_24, "BtnRules")
    char* eax_13 = var_24
    char* const ecx_15 = &data_5b2591
    char* edx_12 = *(arg1 + 4)
    
    if (eax_13 != 0)
        ecx_15 = eax_13
    
    int32_t esi_3
    
    while (true)
        ebx = *ecx_15
        char temp9_1 = *edx_12
        bool c_4 = ebx u< temp9_1
        
        if (ebx == temp9_1)
            if (ebx == 0)
                esi_3 = 0
                break
            
            ebx = ecx_15[1]
            char temp10_1 = edx_12[1]
            c_4 = ebx u< temp10_1
            
            if (ebx == temp10_1)
                ecx_15 = &ecx_15[2]
                edx_12 = &edx_12[2]
                
                if (ebx != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_4) | 1
        break
    
    int32_t var_8_8 = 4
    
    if (data_aca1f4 != 0 && eax_13 != 0 && *eax_13 != 0)
        char* eax_14 = sub_48a080(&var_24)
        int32_t temp11_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
            var_24 = &data_5b2591
    
    int32_t var_8_9 = 0xffffffff
    int32_t eax_15 = data_62b220
    
    if (esi_3 == 0)
        eax_15 = 0x15
    
    data_62b220 = eax_15
    sub_48a2c0(&var_24, "BtnLog")
    char* eax_16 = var_24
    char* const ecx_19 = &data_5b2591
    char* edx_15 = *(arg1 + 4)
    
    if (eax_16 != 0)
        ecx_19 = eax_16
    
    int32_t esi_5
    
    while (true)
        ebx = *ecx_19
        char temp12_1 = *edx_15
        bool c_5 = ebx u< temp12_1
        
        if (ebx == temp12_1)
            if (ebx == 0)
                esi_5 = 0
                break
            
            ebx = ecx_19[1]
            char temp13_1 = edx_15[1]
            c_5 = ebx u< temp13_1
            
            if (ebx == temp13_1)
                ecx_19 = &ecx_19[2]
                edx_15 = &edx_15[2]
                
                if (ebx != 0)
                    continue
                
                esi_5 = 0
                break
        
        esi_5 = sbb.d(esi_3, esi_3, c_5) | 1
        break
    
    int32_t var_8_10 = 5
    
    if (data_aca1f4 != 0 && eax_16 != 0 && *eax_16 != 0)
        char* eax_17 = sub_48a080(&var_24)
        int32_t temp14_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
            var_24 = &data_5b2591
    
    int32_t var_8_11 = 0xffffffff
    int32_t eax_18 = data_62b220
    
    if (esi_5 == 0)
        eax_18 = 0x22
    
    data_62b220 = eax_18
    sub_48a2c0(&var_24, "BtnForfeit")
    char* eax_19 = var_24
    char* const ecx_23 = &data_5b2591
    char* edx_18 = *(arg1 + 4)
    
    if (eax_19 != 0)
        ecx_23 = eax_19
    
    int32_t esi_7
    
    while (true)
        ebx = *ecx_23
        char temp15_1 = *edx_18
        bool c_6 = ebx u< temp15_1
        
        if (ebx == temp15_1)
            if (ebx == 0)
                esi_7 = 0
                break
            
            ebx = ecx_23[1]
            char temp16_1 = edx_18[1]
            c_6 = ebx u< temp16_1
            
            if (ebx == temp16_1)
                ecx_23 = &ecx_23[2]
                edx_18 = &edx_18[2]
                
                if (ebx != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_5, esi_5, c_6) | 1
        break
    
    int32_t var_8_12 = 6
    
    if (data_aca1f4 != 0 && eax_19 != 0 && *eax_19 != 0)
        char* eax_20 = sub_48a080(&var_24)
        int32_t temp17_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_4984f0(eax_20, *(eax_20 + 0xc) + 0x10)
            var_24 = &data_5b2591
    
    int32_t var_8_13 = 0xffffffff
    
    if (esi_7 == 0)
        sub_4361a0(esi_7 + 3)
        sub_48a2c0(&var_24, &data_5b2591)
        int32_t var_8_14 = 7
        sub_48a2c0(&var_20, &data_5b2591)
        var_8_14.b = 8
        char* const var_1c
        sub_48a2c0(&var_1c, "Are you sure you want to forfeit this game?")
        var_8_14.b = 9
        sub_48a2c0(&var_18, "FORFEIT GAME")
        var_8_14.b = 0xa
        data_62b248 = 0x1c
        sub_48a560(&data_62b298, &var_18)
        sub_48a560(&data_62b29c, &var_1c)
        sub_48a560(&data_62b2a0, &var_20)
        sub_48a560(&data_62b2a4, &var_24)
        data_62b2a8 = sub_42da20
        data_62b2ac = esi_7
        var_8_14.b = 0xb
        
        if (data_aca1f4 != esi_7)
            char* eax_21 = var_18
            
            if (eax_21 != 0 && *eax_21 != 0)
                char* eax_22 = sub_48a080(&var_18)
                int32_t temp19_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp19_1 == 1)
                    sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                    var_18 = &data_5b2591
        
        var_8_14.b = 0xc
        
        if (data_aca1f4 != 0)
            char* eax_23 = var_1c
            
            if (eax_23 != 0 && *eax_23 != 0)
                char* eax_24 = sub_48a080(&var_1c)
                int32_t temp21_1 = *(eax_24 + 4)
                *(eax_24 + 4) -= 1
                
                if (temp21_1 == 1)
                    sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
                    var_1c = &data_5b2591
        
        var_8_14.b = 0xd
        
        if (data_aca1f4 != 0)
            char* const eax_25 = var_20
            
            if (eax_25 != 0 && *eax_25 != 0)
                char* eax_26 = sub_48a080(&var_20)
                int32_t temp22_1 = *(eax_26 + 4)
                *(eax_26 + 4) -= 1
                
                if (temp22_1 == 1)
                    sub_4984f0(eax_26, *(eax_26 + 0xc) + 0x10)
                    var_20 = &data_5b2591
        
        int32_t var_8_15 = 0xe
        
        if (data_aca1f4 != 0)
            char* eax_27 = var_24
            
            if (eax_27 != 0 && *eax_27 != 0)
                char* eax_28 = sub_48a080(&var_24)
                int32_t temp23_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp23_1 == 1)
                    sub_4984f0(eax_28, *(eax_28 + 0xc) + 0x10)
                    var_24 = &data_5b2591
        
        int32_t var_8_16 = 0xffffffff
    
    sub_48a2c0(&var_24, "BtnDebug")
    char* eax_29 = var_24
    char* ecx_40 = &data_5b2591
    char* edx_29 = *(arg1 + 4)
    
    if (eax_29 != 0)
        ecx_40 = eax_29
    
    int32_t esi_9
    
    while (true)
        ebx = *ecx_40
        char temp18_1 = *edx_29
        bool c_7 = ebx u< temp18_1
        
        if (ebx == temp18_1)
            if (ebx == 0)
                esi_9 = 0
                break
            
            ebx = ecx_40[1]
            char temp20_1 = edx_29[1]
            c_7 = ebx u< temp20_1
            
            if (ebx == temp20_1)
                ecx_40 = &ecx_40[2]
                edx_29 = &edx_29[2]
                
                if (ebx != 0)
                    continue
                
                esi_9 = 0
                break
        
        esi_9 = sbb.d(esi_7, esi_7, c_7) | 1
        break
    
    int32_t var_8_17 = 0xf
    
    if (data_aca1f4 != 0 && eax_29 != 0 && *eax_29 != 0)
        char* eax_30 = sub_48a080(&var_24)
        int32_t temp24_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp24_1 == 1)
            sub_4984f0(eax_30, *(eax_30 + 0xc) + 0x10)
            var_24 = &data_5b2591
    
    int32_t var_8_18 = 0xffffffff
    int32_t eax_31 = data_62b220
    
    if (esi_9 == 0)
        eax_31 = 0x18
    
    data_62b220 = eax_31
    sub_48a2c0(&var_24, "btn_exit")
    char* eax_32 = var_24
    char* ecx_44 = &data_5b2591
    char* edx_32 = *(arg1 + 4)
    
    if (eax_32 != 0)
        ecx_44 = eax_32
    
    int32_t esi_11
    
    while (true)
        ebx = *ecx_44
        char temp25_1 = *edx_32
        bool c_8 = ebx u< temp25_1
        
        if (ebx == temp25_1)
            if (ebx == 0)
                esi_11 = 0
                break
            
            ebx = ecx_44[1]
            char temp26_1 = edx_32[1]
            c_8 = ebx u< temp26_1
            
            if (ebx == temp26_1)
                ecx_44 = &ecx_44[2]
                edx_32 = &edx_32[2]
                
                if (ebx != 0)
                    continue
                
                esi_11 = 0
                break
        
        esi_11 = sbb.d(esi_9, esi_9, c_8) | 1
        break
    
    int32_t var_8_19 = 0x10
    
    if (data_aca1f4 != 0 && eax_32 != 0 && *eax_32 != 0)
        char* eax_33 = sub_48a080(&var_24)
        int32_t temp27_1 = *(eax_33 + 4)
        *(eax_33 + 4) -= 1
        
        if (temp27_1 == 1)
            sub_4984f0(eax_33, *(eax_33 + 0xc) + 0x10)
            var_24 = &data_5b2591
    
    int32_t var_8_20 = 0xffffffff
    
    if (esi_11 == 0)
        void* eax_34 = data_6cfe4c
        
        if (eax_34 == 0)
            sub_489550(eax_34, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        *(eax_34 + 0x82c) = 5
    
    char* result = sub_480890(arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
