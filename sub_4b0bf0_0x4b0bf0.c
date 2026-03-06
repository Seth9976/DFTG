// 函数名称: sub_4b0bf0
// 虚拟地址: 0x4b0bf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4b0bf0(int32_t arg1 @ esi, void* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f713
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    __alloca_probe(0x1060)
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_24 = eax_2
    int32_t var_2c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = arg2
    void* var_1040 = edi
    char* const result_1
    sub_48a2c0(&result_1, "propertyItemEdit_click")
    char* result_3 = result_1
    char* const result_19 = &data_5b2591
    char* edx = *(edi + 4)
    
    if (result_3 != 0)
        result_19 = result_3
    
    int32_t ecx_2
    
    while (true)
        result_3.b = *result_19
        char temp0_1 = *edx
        bool c_1 = result_3.b u< temp0_1
        bool z_1 = result_3.b == temp0_1
        char var_1029_1 = result_3.b
        result_3 = result_1
        
        if (z_1)
            if (var_1029_1 == 0)
                ecx_2 = 0
                break
            
            result_3.b = result_19[1]
            char temp1_1 = edx[1]
            c_1 = result_3.b u< temp1_1
            bool z_2 = result_3.b == temp1_1
            char var_1029_2 = result_3.b
            result_3 = result_1
            
            if (z_2)
                result_19 = &result_19[2]
                edx = &edx[2]
                
                if (var_1029_2 != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_19, result_19, c_1) | 1
        break
    
    char var_1029_3
    
    if (ecx_2 == 0)
        var_1029_3 = 1
    
    if (ecx_2 != 0 || data_643654 s<= ecx_2)
        var_1029_3 = 0
    
    int32_t var_14_1 = 0
    
    if (data_aca1f4 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_48a080(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_2 = 0xffffffff
    
    if (var_1029_3 != 0)
        data_643660 = 0xffffffff
        data_643664 = 0xffffffff
        data_643660 = *(edi + 8)
    
    sub_48a2c0(&result_1, "layerItemButtonHidden")
    char* const result_4 = result_1
    char* const result_20 = &data_5b2591
    char* edx_3 = *(edi + 4)
    
    if (result_4 != 0)
        result_20 = result_4
    
    void* esi
    
    while (true)
        result_4.b = *result_20
        char temp3_1 = *edx_3
        bool c_2 = result_4.b u< temp3_1
        bool z_3 = result_4.b == temp3_1
        char var_1029_4 = result_4.b
        result_4 = result_1
        
        if (z_3)
            if (var_1029_4 == 0)
                esi = nullptr
                break
            
            result_4.b = result_20[1]
            char temp4_1 = edx_3[1]
            c_2 = result_4.b u< temp4_1
            bool z_4 = result_4.b == temp4_1
            char var_1029_5 = result_4.b
            result_4 = result_1
            
            if (z_4)
                result_20 = &result_20[2]
                edx_3 = &edx_3[2]
                
                if (var_1029_5 != 0)
                    continue
                
                esi = nullptr
                break
        
        esi = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_14_3 = 1
    
    if (data_aca1f4 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_5 = sub_48a080(&result_1)
        int32_t temp5_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_4 = 0xffffffff
    bool var_1044
    char* i_4
    
    if (esi == 0)
        data_643660 = 0xffffffff
        data_643664 = 0xffffffff
        esi = sub_4a9730(*(edi + 8))
        var_1044 = *(esi + 6) == 0
        sub_4a9e30(esi, 0x85)
        sub_4f0ac0(0x85, var_1044)
        sub_4a3580(esi)
        sub_4ada50(esi)
        int32_t* var_103c_1 = &data_63e5a8
        int32_t* var_30_2 = &i_4
        i_4 = nullptr
        sub_4bc830(&data_63e5a8, var_30_2)
        
        for (char* i = i_4; i != 0xffffffff; i = i_4)
            *(i + 0xe2c) = 2
            sub_4bc830(var_103c_1, &i_4)
    
    sub_48a2c0(&result_1, "layerItemButtonLocked")
    char* const result_5 = result_1
    char* const result_21 = &data_5b2591
    char* edx_7 = *(edi + 4)
    
    if (result_5 != 0)
        result_21 = result_5
    
    void* esi_2
    
    while (true)
        result_5.b = *result_21
        char temp6_1 = *edx_7
        bool c_3 = result_5.b u< temp6_1
        bool z_5 = result_5.b == temp6_1
        char var_1029_6 = result_5.b
        result_5 = result_1
        
        if (z_5)
            if (var_1029_6 == 0)
                esi_2 = nullptr
                break
            
            result_5.b = result_21[1]
            char temp7_1 = edx_7[1]
            c_3 = result_5.b u< temp7_1
            bool z_6 = result_5.b == temp7_1
            char var_1029_7 = result_5.b
            result_5 = result_1
            
            if (z_6)
                result_21 = &result_21[2]
                edx_7 = &edx_7[2]
                
                if (var_1029_7 != 0)
                    continue
                
                esi_2 = nullptr
                break
        
        esi_2 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_14_5 = 2
    
    if (data_aca1f4 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_8 = sub_48a080(&result_1)
        int32_t temp8_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_6 = 0xffffffff
    
    if (esi_2 == 0)
        data_643660 = 0xffffffff
        data_643664 = 0xffffffff
        esi_2 = sub_4a9730(*(edi + 8))
        var_1044 = *(esi_2 + 7) == 0
        sub_4a9e30(esi_2, 0x86)
        sub_4f0ac0(0x86, var_1044)
        sub_4a3580(esi_2)
        sub_4ada50(esi_2)
        int32_t* var_103c_2 = &data_63e5a8
        void** var_30_5 = &i_4
        i_4 = nullptr
        sub_4bc830(&data_63e5a8, var_30_5)
        
        for (char* i_1 = i_4; i_1 != 0xffffffff; i_1 = i_4)
            *(i_1 + 0xe2c) = 2
            sub_4bc830(var_103c_2, &i_4)
    
    sub_48a2c0(&result_1, "layerItemButtonMinimized")
    char* const result_6 = result_1
    char* const result_22 = &data_5b2591
    char* edx_11 = *(edi + 4)
    
    if (result_6 != 0)
        result_22 = result_6
    
    int32_t esi_4
    
    while (true)
        result_6.b = *result_22
        char temp9_1 = *edx_11
        bool c_4 = result_6.b u< temp9_1
        bool z_7 = result_6.b == temp9_1
        char var_1029_8 = result_6.b
        result_6 = result_1
        
        if (z_7)
            if (var_1029_8 == 0)
                esi_4 = 0
                break
            
            result_6.b = result_22[1]
            char temp10_1 = edx_11[1]
            c_4 = result_6.b u< temp10_1
            bool z_8 = result_6.b == temp10_1
            char var_1029_9 = result_6.b
            result_6 = result_1
            
            if (z_8)
                result_22 = &result_22[2]
                edx_11 = &edx_11[2]
                
                if (var_1029_9 != 0)
                    continue
                
                esi_4 = 0
                break
        
        esi_4 = sbb.d(esi_2, esi_2, c_4) | 1
        break
    
    int32_t var_14_7 = 3
    
    if (data_aca1f4 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_11 = sub_48a080(&result_1)
        int32_t temp11_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_8 = 0xffffffff
    
    if (esi_4 == 0)
        data_643660 = 0xffffffff
        data_643664 = 0xffffffff
        void* eax_12 = sub_4a9730(*(edi + 8))
        char edx_14
        
        if (*(eax_12 + 8) == 0)
            edx_14 = 0
        else
            edx_14 = 1
        
        sub_4b0a20(eax_12, edx_14)
        int32_t* var_103c_3 = &data_63e5a8
        void** var_30_7 = &i_4
        i_4 = nullptr
        sub_4bc830(&data_63e5a8, var_30_7)
        
        for (char* i_2 = i_4; i_2 != 0xffffffff; i_2 = i_4)
            *(i_2 + 0xe2c) = 2
            sub_4bc830(var_103c_3, &i_4)
    
    sub_48a2c0(&result_1, "layerItemButton")
    char* const result_7 = result_1
    char* const result_23 = &data_5b2591
    char* edx_15 = *(edi + 4)
    
    if (result_7 != 0)
        result_23 = result_7
    
    int32_t i_3
    
    while (true)
        result_7.b = *result_23
        char temp12_1 = *edx_15
        bool c_5 = result_7.b u< temp12_1
        bool z_9 = result_7.b == temp12_1
        char var_1029_10 = result_7.b
        result_7 = result_1
        
        if (z_9)
            if (var_1029_10 == 0)
                i_3 = 0
                break
            
            result_7.b = result_23[1]
            char temp13_1 = edx_15[1]
            c_5 = result_7.b u< temp13_1
            bool z_10 = result_7.b == temp13_1
            char var_1029_11 = result_7.b
            result_7 = result_1
            
            if (z_10)
                result_23 = &result_23[2]
                edx_15 = &edx_15[2]
                
                if (var_1029_11 != 0)
                    continue
                
                i_3 = 0
                break
        
        i_3 = sbb.d(esi_4, esi_4, c_5) | 1
        break
    
    int32_t var_14_9 = 4
    
    if (data_aca1f4 != 0 && result_7 != 0 && *result_7 != 0)
        char* eax_13 = sub_48a080(&result_1)
        int32_t temp14_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_10 = 0xffffffff
    
    if (i_3 == 0)
        data_643660 = 0xffffffff
        data_643664 = 0xffffffff
        int32_t nVirtKey = 0x10
        i_3 = *(sub_4a9730(*(edi + 8)) + 0x1410)
        
        if ((0x8000 & GetKeyState(nVirtKey)) == 0)
        label_4b130d:
            
            if ((0x8000 & GetKeyState(0x11)) == 0)
                sub_4adc50(i_3)
            else
                void* eax_23
                eax_23.b = *(data_aca1f0 + 0x18)
                
                if (eax_23.b == 0)
                    sub_4adc50(i_3)
                else
                    HWND eax_24 = GetFocus()
                    
                    if (eax_24 == data_1150b8c || eax_24 == 0)
                        sub_4ae780(i_3)
                    else
                        sub_4adc50(i_3)
        else
            void* eax_16
            eax_16.b = *(data_aca1f0 + 0x18)
            
            if (eax_16.b == 0)
                goto label_4b130d
            
            HWND eax_17 = GetFocus()
            
            if ((eax_17 != data_1150b8c && eax_17 != 0) || data_643654 s<= 0)
                goto label_4b130d
            
            int32_t i_5 = data_643658
            int32_t i_6 = *(var_1040 + 8)
            i_3 = i_6
            
            if (i_6 s>= i_5)
                i_3 = i_5
            
            if (i_6 s<= i_5)
                i_6 = i_5
            
            char eax_18 = sub_4a79d0()
            int32_t ecx_32 = data_643654
            
            if (eax_18 == 0)
                ecx_32 = 0
            
            data_643654 = ecx_32
            
            for (; i_3 s<= i_6; i_3 += 1)
                sub_4ae6d0(*(sub_4a9730(i_3) + 0x1410))
            
            sub_579300(&(&data_64264c)[data_6c4468 * 0x407], &data_642650, 0x1018)
        
        edi = var_1040
    
    sub_48a2c0(&result_1, "propertyItem_click")
    char* const result_8 = result_1
    char* const result_24 = &data_5b2591
    char* edx_18 = *(edi + 4)
    
    if (result_8 != 0)
        result_24 = result_8
    
    int32_t ecx_39
    
    while (true)
        result_8.b = *result_24
        char temp15_1 = *edx_18
        bool c_6 = result_8.b u< temp15_1
        bool z_11 = result_8.b == temp15_1
        char var_1029_12 = result_8.b
        result_8 = result_1
        
        if (z_11)
            if (var_1029_12 == 0)
                ecx_39 = 0
                break
            
            result_8.b = result_24[1]
            char temp16_1 = edx_18[1]
            c_6 = result_8.b u< temp16_1
            bool z_12 = result_8.b == temp16_1
            char var_1029_13 = result_8.b
            result_8 = result_1
            
            if (z_12)
                result_24 = &result_24[2]
                edx_18 = &edx_18[2]
                
                if (var_1029_13 != 0)
                    continue
                
                ecx_39 = 0
                break
        
        ecx_39 = sbb.d(result_24, result_24, c_6) | 1
        break
    
    char var_1029_14
    
    if (ecx_39 == 0)
        var_1029_14 = 1
    
    if (ecx_39 != 0 || data_643654 s<= ecx_39)
        var_1029_14 = 0
    
    int32_t var_14_11 = 5
    
    if (data_aca1f4 != 0 && result_8 != 0 && *result_8 != 0)
        char* eax_25 = sub_48a080(&result_1)
        int32_t temp17_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_12 = 0xffffffff
    
    if (var_1029_14 != 0)
        data_643660 = 0xffffffff
        data_643664 = 0xffffffff
        data_643660 = *(edi + 8)
    
    sub_48a2c0(&result_1, "propBtnDropDown")
    char* const result_9 = result_1
    char* const result_25 = &data_5b2591
    char* edx_21 = *(edi + 4)
    
    if (result_9 != 0)
        result_25 = result_9
    
    int32_t esi_7
    
    while (true)
        result_9.b = *result_25
        char temp18_1 = *edx_21
        bool c_7 = result_9.b u< temp18_1
        bool z_13 = result_9.b == temp18_1
        char var_1029_15 = result_9.b
        result_9 = result_1
        
        if (z_13)
            if (var_1029_15 == 0)
                esi_7 = 0
                break
            
            result_9.b = result_25[1]
            char temp19_1 = edx_21[1]
            c_7 = result_9.b u< temp19_1
            bool z_14 = result_9.b == temp19_1
            char var_1029_16 = result_9.b
            result_9 = result_1
            
            if (z_14)
                result_25 = &result_25[2]
                edx_21 = &edx_21[2]
                
                if (var_1029_16 != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(i_3, i_3, c_7) | 1
        break
    
    int32_t var_14_13 = 6
    
    if (data_aca1f4 != 0 && result_9 != 0 && *result_9 != 0)
        char* eax_27 = sub_48a080(&result_1)
        int32_t temp20_1 = *(eax_27 + 4)
        *(eax_27 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_14 = 0xffffffff
    
    if (esi_7 == 0)
        data_643660 = *(edi + 8)
        int32_t eax_29 = *(edi + 8)
        
        if (data_643664 == eax_29)
            eax_29 = 0xffffffff
        
        data_643664 = eax_29
    
    sub_48a2c0(&result_1, "propBtnPlus")
    char* const result_10 = result_1
    char* const result_26 = &data_5b2591
    char* edx_24 = *(edi + 4)
    
    if (result_10 != 0)
        result_26 = result_10
    
    char* esi_9
    
    while (true)
        result_10.b = *result_26
        char temp21_1 = *edx_24
        bool c_8 = result_10.b u< temp21_1
        bool z_15 = result_10.b == temp21_1
        char var_1029_17 = result_10.b
        result_10 = result_1
        
        if (z_15)
            if (var_1029_17 == 0)
                esi_9 = nullptr
                break
            
            result_10.b = result_26[1]
            char temp22_1 = edx_24[1]
            c_8 = result_10.b u< temp22_1
            bool z_16 = result_10.b == temp22_1
            char var_1029_18 = result_10.b
            result_10 = result_1
            
            if (z_16)
                result_26 = &result_26[2]
                edx_24 = &edx_24[2]
                
                if (var_1029_18 != 0)
                    continue
                
                esi_9 = nullptr
                break
        
        esi_9 = sbb.d(esi_7, esi_7, c_8) | 1
        break
    
    int32_t var_14_15 = 7
    
    if (data_aca1f4 != 0 && result_10 != 0 && *result_10 != 0)
        char* eax_30 = sub_48a080(&result_1)
        int32_t temp23_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp23_1 == 1)
            sub_4984f0(eax_30, *(eax_30 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_16 = 0xffffffff
    void var_1068
    char* var_1034
    int32_t var_1028[0x3fc]
    
    if (esi_9 == 0)
        esi_9 = sub_4a7d60(data_642654)
        int128_t* var_30_11 = &var_1068
        var_1044.d = esi_9
        int32_t ecx_49 = *(esi_9 + 0x1410)
        *(esi_9 + 0xe24) = 0
        int128_t* eax_33 = sub_4add30(&var_1068, data_643660, ecx_49, var_30_11)
        int32_t var_1058_1 = eax_33[1].d
        
        if (_mm_bsrli_si128(*eax_33, 4) != 0x6e)
            sub_4b05d0(esi_9)
        else
            void* eax_36 = sub_4a9c40(esi_9)
            int32_t ecx_52 = sub_48a2c0(&var_1034, "newState")
            
            if (eax_36 == 0)
                int32_t var_30_15 = ecx_52
                int32_t var_14_19 = 0xc
                uint32_t eax_40 = sub_4af4a0(esi_9, &var_1028)
                int32_t esi_12 = 0
                
                if (eax_40 s> 0)
                    do
                        sub_4af0d0(var_1028[esi_12], &var_1034)
                        esi_12 += 1
                    while (esi_12 s< eax_40)
                
                sub_4a7e20(1)
                int32_t var_14_20 = 0xd
            else
                int32_t var_14_17 = 8
                int32_t var_30_13 = sub_48a320(&result_1, *eax_36)
                var_14_17.b = 9
                uint32_t eax_37 = sub_4af4a0(esi_9, &var_1028)
                int32_t esi_11 = 0
                
                if (eax_37 s> 0)
                    do
                        sub_4af240(&var_1034, &result_1, var_1028[esi_11], &var_1034)
                        esi_11 += 1
                    while (esi_11 s< eax_37)
                
                sub_4a7e20(1)
                var_14_17.b = 0xa
                
                if (data_aca1f4 != 0)
                    char* const result_11 = result_1
                    
                    if (result_11 != 0 && *result_11 != 0)
                        char* eax_39 = sub_48a080(&result_1)
                        int32_t temp26_1 = *(eax_39 + 4)
                        *(eax_39 + 4) -= 1
                        
                        if (temp26_1 == 1)
                            sub_4984f0(eax_39, *(eax_39 + 0xc) + 0x10)
                            result_1 = &data_5b2591
                
                int32_t var_14_18 = 0xb
            
            if (data_aca1f4 != 0)
                char* eax_41 = var_1034
                
                if (eax_41 != 0 && *eax_41 != 0)
                    char* eax_42 = sub_48a080(&var_1034)
                    int32_t temp28_1 = *(eax_42 + 4)
                    *(eax_42 + 4) -= 1
                    
                    if (temp28_1 == 1)
                        sub_4984f0(eax_42, *(eax_42 + 0xc) + 0x10)
                        var_1034 = &data_5b2591
            
            int32_t var_14_21 = 0xffffffff
            sub_48a2c0(&var_1034, "newState")
            int32_t var_14_22 = 0xe
            sub_4af530(var_1044.d, &var_1034)
            int32_t var_14_23 = 0xf
            
            if (data_aca1f4 != 0)
                char* eax_43 = var_1034
                
                if (eax_43 != 0 && *eax_43 != 0)
                    char* eax_44 = sub_48a080(&var_1034)
                    int32_t temp30_1 = *(eax_44 + 4)
                    *(eax_44 + 4) -= 1
                    
                    if (temp30_1 == 1)
                        sub_4984f0(eax_44, *(eax_44 + 0xc) + 0x10)
                        var_1034 = &data_5b2591
            
            char** ecx_67
            ecx_67.b = 1
            int32_t var_14_24 = 0xffffffff
            edi = var_1040
            int32_t eax_46 = sub_4ad220(sub_4a7e20(ecx_67.b), "propValue", data_642640, *(edi + 8))
            uint32_t eax_47 = sub_4aee70(eax_46, nullptr, eax_46, 0)
            
            if (eax_46 == 0)
                sub_489550(eax_47, &data_5b2591, "id != DATAID_NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                    "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            uint32_t ecx_71 = zx.d(eax_46.w)
            int32_t edx_39
            
            if (ecx_71 u< data_63e5ac)
                edx_39 = data_63e5a8
                eax_47 = ecx_71 * 0x1418
            
            if (ecx_71 u>= data_63e5ac || *(eax_47 + edx_39 + 0x1410) != eax_46)
                sub_489550(eax_47, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                    "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            esi_9 = ecx_71 * 0x1418 + edx_39
            sub_48a5e0(&esi_9[0x1134], "newState")
            *(esi_9 + 0x1140) = 0
            char* eax_48 = *(esi_9 + 0x1134)
            
            if (eax_48 == 0 || *eax_48 == 0)
                *(esi_9 + 0x1138) = 0
            else
                *(esi_9 + 0x1138) = *(sub_48a080(esi_9 + 0x1134) + 8)
    
    sub_48a2c0(&result_1, "propBtnMinus")
    char* const result_12 = result_1
    char* const result_27 = &data_5b2591
    char* edx_40 = *(edi + 4)
    
    if (result_12 != 0)
        result_27 = result_12
    
    char* result_15
    
    while (true)
        result_12.b = *result_27
        char temp24_1 = *edx_40
        bool c_9 = result_12.b u< temp24_1
        bool z_17 = result_12.b == temp24_1
        char var_1029_19 = result_12.b
        result_12 = result_1
        
        if (z_17)
            if (var_1029_19 == 0)
                result_15 = nullptr
                break
            
            result_12.b = result_27[1]
            char temp25_1 = edx_40[1]
            c_9 = result_12.b u< temp25_1
            bool z_18 = result_12.b == temp25_1
            char var_1029_20 = result_12.b
            result_12 = result_1
            
            if (z_18)
                result_27 = &result_27[2]
                edx_40 = &edx_40[2]
                
                if (var_1029_20 != 0)
                    continue
                
                result_15 = nullptr
                break
        
        result_15 = sbb.d(esi_9, esi_9, c_9) | 1
        break
    
    int32_t var_14_25 = 0x10
    
    if (data_aca1f4 != 0 && result_12 != 0 && *result_12 != 0)
        char* eax_51 = sub_48a080(&result_1)
        int32_t temp27_1 = *(eax_51 + 4)
        *(eax_51 + 4) -= 1
        
        if (temp27_1 == 1)
            sub_4984f0(eax_51, *(eax_51 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_26 = 0xffffffff
    
    if (result_15 == 0)
        result_15 = sub_4a7d60(data_642654)
        int128_t* var_30_19 = &var_1068
        var_1044.d = result_15
        int32_t ecx_78 = *(result_15 + 0x1410)
        *(result_15 + 0xe24) = 0
        int128_t* eax_54 = sub_4add30(&var_1068, data_643660, ecx_78, var_30_19)
        int32_t var_1058_2 = eax_54[1].d
        
        if (_mm_bsrli_si128(*eax_54, 4) != 0x6e)
            sub_4b0760(result_15, data_643660)
        else
            void* eax_57 = sub_4a9c40(result_15)
            
            if (eax_57 != 0)
                sub_48a320(&result_1, *eax_57)
                int32_t var_14_27 = 0x11
                char* const result_17 = &data_5b2591
                result_15 = result_1
                char* const ecx_81 = &data_5b2591
                
                if (result_15 != 0)
                    result_17 = result_15
                
                int32_t eax_59
                
                while (true)
                    char edx_44 = *result_17
                    char temp32_1 = *ecx_81
                    bool c_10 = edx_44 u< temp32_1
                    
                    if (edx_44 == temp32_1)
                        if (edx_44 == 0)
                            eax_59 = 0
                            break
                        
                        edx_44 = result_17[1]
                        char temp33_1 = ecx_81[1]
                        c_10 = edx_44 u< temp33_1
                        
                        if (edx_44 == temp33_1)
                            result_17 = &result_17[2]
                            ecx_81 = &ecx_81[2]
                            
                            if (edx_44 != 0)
                                continue
                            
                            eax_59 = 0
                            break
                    
                    eax_59 = sbb.d(result_17, result_17, c_10) | 1
                    break
                
                if (eax_59 != 0)
                    char* const var_30_21 = ecx_81
                    char* i_8
                    char* result_28
                    void* edx_46
                    i_8, result_28, edx_46 = sub_4af4a0(var_1044.d, &var_1028)
                    void* edi_4 = nullptr
                    i_4 = i_8
                    var_1034 = nullptr
                    
                    if (i_8 s> 0)
                        while (true)
                            result_28 = &data_5b2591
                            char* const eax_60 = &data_5b2591
                            
                            if (result_15 != 0)
                                result_28 = result_15
                            
                            int32_t eax_62
                            
                            while (true)
                                edx_46.b = *result_28
                                char temp39_1 = *eax_60
                                bool c_11 = edx_46.b u< temp39_1
                                
                                if (edx_46.b == temp39_1)
                                    if (edx_46.b == 0)
                                        eax_62 = 0
                                        break
                                    
                                    edx_46.b = result_28[1]
                                    char temp41_1 = eax_60[1]
                                    c_11 = edx_46.b u< temp41_1
                                    
                                    if (edx_46.b == temp41_1)
                                        result_28 = &result_28[2]
                                        eax_60 = &eax_60[2]
                                        
                                        if (edx_46.b != 0)
                                            continue
                                        
                                        eax_62 = 0
                                        break
                                
                                eax_62 = sbb.d(eax_60, eax_60, c_11) | 1
                                break
                            
                            if (eax_62 != 0)
                                int32_t var_30_22 = 0x68
                                int32_t var_34_4 = data_126cc78
                                int32_t* eax_63 = sub_498ef0(var_1028[edi_4])
                                char* eax_64 =
                                    sub_4f0e70(eax_63, eax_63, &data_6218dc, var_34_4, var_30_22)
                                
                                if (eax_64 != 0)
                                    int32_t edi_5 = 0
                                    
                                    if (*(eax_64 + 8) s> 0)
                                        int32_t* eax_65 = *eax_64
                                        int32_t* var_1048_1 = eax_65
                                        
                                        while (true)
                                            char* ecx_84 = *eax_65
                                            char* result_18 = &data_5b2591
                                            
                                            if (result_15 != 0)
                                                result_18 = result_15
                                            
                                            int32_t eax_67
                                            
                                            while (true)
                                                char edx_48 = *ecx_84
                                                char temp46_1 = *result_18
                                                bool c_12 = edx_48 u< temp46_1
                                                
                                                if (edx_48 == temp46_1)
                                                    if (edx_48 == 0)
                                                        eax_67 = 0
                                                        break
                                                    
                                                    edx_48 = ecx_84[1]
                                                    char temp48_1 = result_18[1]
                                                    c_12 = edx_48 u< temp48_1
                                                    
                                                    if (edx_48 == temp48_1)
                                                        ecx_84 = &ecx_84[2]
                                                        result_18 = &result_18[2]
                                                        
                                                        if (edx_48 != 0)
                                                            continue
                                                        
                                                        eax_67 = 0
                                                        break
                                                
                                                eax_67 = sbb.d(result_18, result_18, c_12) | 1
                                                break
                                            
                                            if (eax_67 == 0)
                                                uint32_t var_30_23 = 0
                                                int32_t* eax_69 = sub_4cf8e0(data_126cc78, 0)
                                                sub_518ab0(eax_69, eax_69, eax_64, edi_5, var_30_23)
                                                break
                                            
                                            edi_5 += 1
                                            eax_65 = &var_1048_1[8]
                                            var_1048_1 = eax_65
                                            
                                            if (edi_5 s>= *(eax_64 + 8))
                                                break
                            
                            edx_46 = &var_1034[1]
                            edi_4 = edx_46
                            var_1034 = edx_46
                            
                            if (edx_46 s>= i_4)
                                break
                    
                    result_28.b = 1
                    sub_4a7e20(result_28.b)
                    edi = var_1040
                
                int32_t var_14_28 = 0x12
                
                if (data_aca1f4 != 0 && result_15 != 0 && *result_15 != 0)
                    char* eax_70 = sub_48a080(&result_1)
                    int32_t temp37_1 = *(eax_70 + 4)
                    *(eax_70 + 4) -= 1
                    
                    if (temp37_1 == 1)
                        sub_4984f0(eax_70, *(eax_70 + 0xc) + 0x10)
                        result_1 = &data_5b2591
                
                int32_t var_14_29 = 0xffffffff
                sub_48a2c0(&var_1034, &data_5b2591)
                int32_t var_14_30 = 0x13
                sub_4af530(var_1044.d, &var_1034)
                int32_t var_14_31 = 0x14
                
                if (data_aca1f4 != 0)
                    char* eax_71 = var_1034
                    
                    if (eax_71 != 0 && *eax_71 != 0)
                        char* eax_72 = sub_48a080(&var_1034)
                        int32_t temp38_1 = *(eax_72 + 4)
                        *(eax_72 + 4) -= 1
                        
                        if (temp38_1 == 1)
                            sub_4984f0(eax_72, *(eax_72 + 0xc) + 0x10)
                            var_1034 = &data_5b2591
                
                char** ecx_91
                ecx_91.b = 1
                int32_t var_14_32 = 0xffffffff
                sub_4a7e20(ecx_91.b)
    
    sub_48a2c0(&result_1, "propBtnUndo")
    char* const result_13 = result_1
    char* const result_29 = &data_5b2591
    char* edx_57 = *(edi + 4)
    
    if (result_13 != 0)
        result_29 = result_13
    
    int32_t esi_16
    
    while (true)
        result_13.b = *result_29
        char temp29_1 = *edx_57
        bool c_13 = result_13.b u< temp29_1
        bool z_25 = result_13.b == temp29_1
        char var_1029_21 = result_13.b
        result_13 = result_1
        
        if (z_25)
            if (var_1029_21 == 0)
                esi_16 = 0
                break
            
            result_13.b = result_29[1]
            char temp31_1 = edx_57[1]
            c_13 = result_13.b u< temp31_1
            bool z_26 = result_13.b == temp31_1
            char var_1029_22 = result_13.b
            result_13 = result_1
            
            if (z_26)
                result_29 = &result_29[2]
                edx_57 = &edx_57[2]
                
                if (var_1029_22 != 0)
                    continue
                
                esi_16 = 0
                break
        
        esi_16 = sbb.d(result_15, result_15, c_13) | 1
        break
    
    int32_t var_14_33 = 0x15
    
    if (data_aca1f4 != 0 && result_13 != 0 && *result_13 != 0)
        char* eax_73 = sub_48a080(&result_1)
        int32_t temp34_1 = *(eax_73 + 4)
        *(eax_73 + 4) -= 1
        
        if (temp34_1 == 1)
            sub_4984f0(eax_73, *(eax_73 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_34 = 0xffffffff
    
    if (esi_16 == 0)
        char* eax_74 = sub_4a7d60(data_642654)
        int128_t* var_30_24 = &var_1068
        int32_t ecx_97 = *(eax_74 + 0x1410)
        *(eax_74 + 0xe24) = esi_16
        int128_t* eax_76 = sub_4add30(&var_1068, data_643660, ecx_97, var_30_24)
        int32_t var_1058_3 = eax_76[1].d
        esi_16 = _mm_bsrli_si128(*eax_76, 4)
        void* eax_78 = sub_4a9e30(eax_74, esi_16)
        sub_4f0b40(eax_78, eax_78, &data_6218dc, esi_16)
        sub_4a7e20(1)
        edi = var_1040
    
    sub_48a2c0(&result_1, "propBtnFile")
    char* const result_14 = result_1
    char* const result_30 = &data_5b2591
    char* edx_63 = *(edi + 4)
    
    if (result_14 != 0)
        result_30 = result_14
    
    char* const result_16
    
    while (true)
        result_14.b = *result_30
        char temp35_1 = *edx_63
        bool c_14 = result_14.b u< temp35_1
        bool z_27 = result_14.b == temp35_1
        char var_1029_23 = result_14.b
        result_14 = result_1
        
        if (z_27)
            if (var_1029_23 == 0)
                result_16 = nullptr
                break
            
            result_14.b = result_30[1]
            char temp36_1 = edx_63[1]
            c_14 = result_14.b u< temp36_1
            bool z_28 = result_14.b == temp36_1
            char var_1029_24 = result_14.b
            result_14 = result_1
            
            if (z_28)
                result_30 = &result_30[2]
                edx_63 = &edx_63[2]
                
                if (var_1029_24 != 0)
                    continue
                
                result_16 = nullptr
                break
        
        result_16 = sbb.d(esi_16, esi_16, c_14) | 1
        break
    
    int32_t var_14_35 = 0x16
    
    if (data_aca1f4 != 0 && result_14 != 0 && *result_14 != 0)
        char* eax_79 = sub_48a080(&result_1)
        int32_t temp40_1 = *(eax_79 + 4)
        *(eax_79 + 4) -= 1
        
        if (temp40_1 == 1)
            sub_4984f0(eax_79, *(eax_79 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_36 = 0xffffffff
    
    if (result_16 == 0)
        char* eax_80 = sub_4a7d60(data_642654)
        int128_t* var_30_26 = &var_1068
        int32_t ecx_104 = *(eax_80 + 0x1410)
        *(eax_80 + 0xe24) = result_16
        int128_t* eax_82 = sub_4add30(&var_1068, data_643660, ecx_104, var_30_26)
        int32_t var_1058_4 = eax_82[1].d
        int32_t xmm0_8 = _mm_bsrli_si128(*eax_82, 4)
        var_1044.d = xmm0_8
        uint32_t eax_85 = xmm0_8 - 0x88
        
        if (eax_85 u> 0x72)
        label_4b234c:
            sub_489550(eax_85, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x300d, 
                "UI2EditorClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_85 = zx.d(lookup_table_4b23c0[eax_85])
        char const* const ecx_105
        
        switch (eax_85)
            case 0
                ecx_105 = "Image (*.jpg, *.png, *.tga)"
            case 1
                ecx_105 = "Material (*.material.xml, *.materialFn.xml)"
            case 2
                ecx_105 = "Model (*.fbx)"
            case 3
                ecx_105 = "UI2 (*.ui2)"
            case 4
                ecx_105 = "Font (*.font.xml)"
            case 5
                ecx_105 = "Sound (*.wav, *.ogg, *.xmlsound)"
            case 6
                ecx_105 = "Flanim (*.flanim)"
            case 7
                ecx_105 = "Spine (*.skel, *.spine.json)"
            case 8
                ecx_105 = "Particle (*.particle)"
            case 9
                goto label_4b234c
        
        result_1 = &data_5b2591
        int32_t var_14_37 = 0x17
        char eax_86 = sub_518530(ecx_105, &result_1)
        result_16 = result_1
        
        if (eax_86 != 0)
            void* eax_87 = sub_4a9e30(eax_80, var_1044.d)
            char* const result_31 = &data_5b2591
            
            if (result_16 != 0)
                result_31 = result_16
            
            sub_4e5700(&var_1034, result_31)
            var_14_37.b = 0x18
            char* const ecx_108 = &data_5b2591
            char* eax_88 = var_1034
            
            if (eax_88 != 0)
                ecx_108 = eax_88
            
            int32_t* eax_89 = sub_518420(ecx_108)
            int32_t* var_30_27 = eax_89
            sub_4f0a90(eax_89, eax_87, &data_6218dc, var_1044.d)
            sub_4a7e20(1)
            var_14_37.b = 0x19
            
            if (data_aca1f4 != 0)
                char* eax_90 = var_1034
                
                if (eax_90 != 0 && *eax_90 != 0)
                    char* eax_91 = sub_48a080(&var_1034)
                    int32_t temp47_1 = *(eax_91 + 4)
                    *(eax_91 + 4) -= 1
                    
                    if (temp47_1 == 1)
                        sub_4984f0(eax_91, *(eax_91 + 0xc) + 0x10)
                        var_1034 = &data_5b2591
        
        int32_t var_14_38 = 0x1a
        
        if (data_aca1f4 != 0 && result_16 != 0 && *result_16 != 0)
            char* eax_92 = sub_48a080(&result_1)
            int32_t temp45_1 = *(eax_92 + 4)
            *(eax_92 + 4) -= 1
            
            if (temp45_1 == 1)
                sub_4984f0(eax_92, *(eax_92 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        edi = var_1040
        int32_t var_14_39 = 0xffffffff
    
    sub_48a2c0(&result_1, "comboBoxItem_click")
    char* result = result_1
    char* const result_2 = &data_5b2591
    char* edx_74 = *(edi + 4)
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_19
    
    while (true)
        result.b = *result_2
        char temp42_1 = *edx_74
        bool c_15 = result.b u< temp42_1
        bool z_29 = result.b == temp42_1
        char var_1029_25 = result.b
        result = result_1
        
        if (z_29)
            if (var_1029_25 == 0)
                esi_19 = 0
                break
            
            result.b = result_2[1]
            char temp43_1 = edx_74[1]
            c_15 = result.b u< temp43_1
            bool z_30 = result.b == temp43_1
            char var_1029_26 = result.b
            result = result_1
            
            if (z_30)
                result_2 = &result_2[2]
                edx_74 = &edx_74[2]
                
                if (var_1029_26 != 0)
                    continue
                
                esi_19 = 0
                break
        
        esi_19 = sbb.d(result_16, result_16, c_15) | 1
        break
    
    int32_t var_14_40 = 0x1b
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp44_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp44_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_14_41 = 0xffffffff
    
    if (esi_19 == 0)
        char* eax_93 = sub_4a7d60(data_642654)
        *(eax_93 + 0xe24) = esi_19
        
        if (data_643654 s<= esi_19)
            sub_489550(eax_93, &data_5b2591, "gUI2Editor.s.activeSetCount > 0", 
                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x3021, "UI2EditorClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        uint128_t* eax_95 = sub_4add30(&var_1068, data_643664, *(eax_93 + 0x1410), &var_1068)
        int32_t var_1058_5 = eax_95[1].d
        char* xmm0_10 = _mm_bsrli_si128(*eax_95, 4)
        void* eax_97 = sub_4a9e30(eax_93, xmm0_10)
        int32_t edx_79 = data_643664
        int32_t ecx_120 = *(eax_93 + 0x1410)
        var_1034 = eax_97
        int32_t xmm0_12 = _mm_bsrli_si128(*sub_4add30(&var_1068, edx_79, ecx_120, &var_1068), 0xc)
        char** ecx_126
        
        if (xmm0_12 != 2)
            if (xmm0_12 != 5)
                sub_489550(xmm0_12, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x3049, 
                    "UI2EditorClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            data_643664
            char* i_9 = *(sub_4adf30(*(eax_93 + 0x1410)) + (*(var_1040 + 8) << 2))
            i_4 = i_9
            
            if (xmm0_10 != 0x6e)
                int32_t eax_106 = sub_4af5d0(xmm0_10)
                
                if (eax_106 != 2)
                    char* i_10 = i_9
                    sub_4f0a90(eax_106, var_1034, &data_6218dc, xmm0_10)
                else
                    void var_1080
                    uint128_t* eax_108
                    int32_t ecx_135
                    eax_108, ecx_135 = sub_4add30(&var_1080, data_643664, *(eax_93 + 0x1410), &var_1080)
                    int32_t* edx_89 = var_1034
                    char* i_7 = i_4
                    char* xmm0_14 = _mm_bsrli_si128(*eax_108, 8)
                    sub_4af600(xmm0_14, edx_89, ecx_135, xmm0_10, xmm0_14)
            else
                sub_48a320(&var_1034, i_9)
                int32_t var_14_42 = 0x1c
                sub_4af530(eax_93, &var_1034)
                int32_t var_14_43 = 0x1d
                
                if (data_aca1f4 != 0)
                    char* eax_104 = var_1034
                    
                    if (eax_104 != 0 && *eax_104 != 0)
                        char* eax_105 = sub_48a080(&var_1034)
                        int32_t temp49_1 = *(eax_105 + 4)
                        *(eax_105 + 4) -= 1
                        
                        if (temp49_1 == 1)
                            sub_4984f0(eax_105, *(eax_105 + 0xc) + 0x10)
                
                int32_t var_14_44 = 0xffffffff
            
            ecx_126.b = 1
            result = sub_4a7e20(ecx_126.b)
        else
            data_643664
            *(eax_93 + 0x1410)
            int32_t eax_101 = sub_4ae550()
            
            if (xmm0_10 s< 0x71 || xmm0_10 s> 0x74)
                int32_t eax_102 = *(var_1040 + 8)
                int32_t var_30_31 = *(eax_101 + (eax_102 << 3))
                sub_4f0a90(eax_102, var_1034, &data_6218dc, xmm0_10)
                ecx_126.b = 1
                result = sub_4a7e20(ecx_126.b)
            else
                int32_t var_30_30 = *(eax_101 + (*(var_1040 + 8) << 3) + 4)
                result = sub_4af7e0(eax_101, var_1034, eax_93, xmm0_10, data_643664)
        data_643664 = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
