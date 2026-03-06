// 函数名称: sub_4b81b0
// 虚拟地址: 0x4b81b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4b81b0(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f861
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    char** ecx = __alloca_probe(0x1070)
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_24 = eax_2
    int32_t var_2c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_1065
    char* result
    
    if (sub_4b6ba0(ecx, &var_1065).b == 0)
        result = *ecx
        
        if (result == 9)
            data_642644 = data_642644 * (_mm_cvtepi32_ps(zx.o(ecx[3])) * 0.00200000009f + 1f)
            result = *ecx
        
        char* var_1064
        bool cond:8_1
        
        if (result == 1)
            if (data_64365c.b == 0 && data_64365e == 0)
                if (data_64365c:1.b == 0 || ecx[1] != 0xd)
                    goto label_4b8289
                
                goto label_4b8274
            
            if (ecx[1] != 0xd)
            label_4b8289:
                result = ecx[1]
                
                if (result != 0x27)
                    int32_t xmm1_5
                    
                    if (result != 0x25)
                        if (result == 0x26)
                            if (data_643654 s> 0)
                                xmm1_5 = 0xbf800000
                                int32_t var_1060_5 = 0
                                int32_t var_105c_4 = 0xbf800000
                                
                                if ((ecx[2].b & 1) == 0)
                                    goto label_4b837e
                                
                                int32_t var_1060_6 = 0
                                goto label_4b8370
                            
                        labelid_2:
                            result.b = 1
                        else if (result != 0x28)
                            char eax_3
                            
                            if (result == 0x21)
                                eax_3 = sub_4a79d0()
                            
                            if (result != 0x21 || eax_3 == 0)
                                char eax_4
                                
                                if (ecx[1] == 0x22)
                                    eax_4 = sub_4a79d0()
                                
                                if (ecx[1] != 0x22 || eax_4 == 0)
                                    int32_t eax_5 = ecx[1]
                                    
                                    if (eax_5 == 0x21)
                                        sub_4b6ea0(eax_5 - 0x20)
                                    labelid_2:
                                        result.b = 1
                                    else if (eax_5 == 0x22)
                                        sub_4b6ea0(0xffffffff)
                                    labelid_2:
                                        result.b = 1
                                    else if (eax_5 == 0x27)
                                        result = sub_4a9730(data_643658)
                                        
                                        if (*(result + 0xfec) == 6 || *(result + 0x1190) != 0)
                                            sub_4b0a20(result, 1)
                                        
                                    labelid_2:
                                        result.b = 1
                                    else if (eax_5 == 0x25)
                                        void* eax_6 = sub_4a9730(data_643658)
                                        
                                        if (sub_4b0bd0(eax_6).b == 0)
                                            char* ecx_11 = *(eax_6 + 0x112c)
                                            
                                            if (ecx_11 != 0 && *(ecx_11 + 0x112c) != 0
                                                    && sub_4b0bd0(ecx_11).b != 0)
                                                sub_4b0a20(ecx_11, 0)
                                                data_643654 = 0
                                                sub_4ae6d0(*(*(eax_6 + 0x112c) + 0x1410))
                                                data_643658 = sub_4ad9d0(*(eax_6 + 0x112c))
                                        else
                                            sub_4b0a20(eax_6, 0)
                                        
                                    labelid_2:
                                        result.b = 1
                                    else if (eax_5 != 0x53)
                                    label_4b853e:
                                        char eax_9
                                        char* ecx_16
                                        
                                        if (ecx[1] == 0x53)
                                            eax_9, ecx_16 = sub_4a79d0()
                                        
                                        if (ecx[1] != 0x53 || eax_9 == 0)
                                            if (ecx[1] == 0x54)
                                                result = sub_4a79d0()
                                            
                                            if (ecx[1] != 0x54 || result.b == 0)
                                                char eax_10
                                                
                                                if (ecx[1] == 8)
                                                    eax_10 = sub_4a79d0()
                                                
                                                if (ecx[1] != 8 || eax_10 == 0)
                                                    if (ecx[1] == 9)
                                                        char eax_11 = sub_4a79d0()
                                                        char eax_12
                                                        
                                                        if (eax_11 != 0)
                                                            eax_12 = sub_4a7950()
                                                        
                                                        if (eax_11 != 0 && eax_12 != 0)
                                                            result = sub_51af60()
                                                            goto label_4b862b
                                                        
                                                        if (ecx[1] != 9)
                                                            goto label_4b85d6
                                                        
                                                        if (sub_4a79d0() == 0)
                                                            goto label_4b85d6
                                                        
                                                        result = sub_51afc0()
                                                        goto label_4b862b
                                                    
                                                label_4b85d6:
                                                    
                                                    if (ecx[1] == 0x4f)
                                                        result = sub_4a79d0()
                                                    
                                                    if (ecx[1] != 0x4f || result.b == 0)
                                                        uint32_t esi_2
                                                        
                                                        if (ecx[1] != 0xdb)
                                                        label_4b86e5:
                                                            
                                                            if (ecx[1] != 0xdd)
                                                            label_4b876c:
                                                                
                                                                if (ecx[1] == 0xdb)
                                                                    result = sub_4a79d0()
                                                                
                                                                if (ecx[1] != 0xdb || result.b == 0)
                                                                    if (ecx[1] == 0xdd)
                                                                        result = sub_4a79d0()
                                                                    
                                                                    if (ecx[1] != 0xdd || result.b == 0)
                                                                        if (ecx[1] == 0x43)
                                                                            result = sub_4a79d0()
                                                                        
                                                                        if (ecx[1] != 0x43 || result.b != 0)
                                                                            char eax_30
                                                                            
                                                                            if (ecx[1] == 0x47)
                                                                                eax_30 = sub_4a79d0()
                                                                            
                                                                            if (ecx[1] != 0x47 || eax_30 == 0)
                                                                                char eax_31
                                                                                
                                                                                if (ecx[1] == 0x52)
                                                                                    eax_31 = sub_4a79d0()
                                                                                
                                                                                if (ecx[1] != 0x52 || eax_31 == 0)
                                                                                    if (ecx[1] == 0x4a)
                                                                                        result = sub_4a79d0()
                                                                                    
                                                                                    if (ecx[1] != 0x4a || result.b == 0)
                                                                                        int32_t eax_32 = ecx[1]
                                                                                        
                                                                                        if (eax_32 != 0x42)
                                                                                            if (eax_32 == 0xbb)
                                                                                                result = sub_4a79d0()
                                                                                            
                                                                                            if (eax_32 != 0xbb || result.b == 0)
                                                                                                if (ecx[1] == 0xbd)
                                                                                                    result = sub_4a79d0()
                                                                                                
                                                                                                if (ecx[1] != 0xbd || result.b == 0)
                                                                                                    char* ecx_46
                                                                                                    
                                                                                                    if (ecx[1] == 0x5a)
                                                                                                        result, ecx_46 = sub_4a79d0()
                                                                                                    
                                                                                                    int32_t eax_36
                                                                                                    
                                                                                                    if (ecx[1] != 0x5a || result.b == 0)
                                                                                                        char eax_37
                                                                                                        char* ecx_47
                                                                                                        
                                                                                                        if (ecx[1] == 0x59)
                                                                                                            eax_37, ecx_47 = sub_4a79d0()
                                                                                                        
                                                                                                        if (ecx[1] != 0x59 || eax_37 == 0)
                                                                                                            result = ecx[1]
                                                                                                            
                                                                                                            if (result == 0x2e)
                                                                                                                int32_t var_30_5 = data_643654
                                                                                                                int32_t ecx_50 = data_642624
                                                                                                                int32_t* var_34_3 = &data_642654
                                                                                                                int32_t* var_38_3 = &var_1064
                                                                                                                var_1064 = nullptr
                                                                                                                int32_t var_1028[0x3f6]
                                                                                                                sub_4a9860(&var_1064, &var_1028, 
                                                                                                                    ecx_50, var_38_3, var_34_3, var_30_5)
                                                                                                                char* edi_5 = var_1064
                                                                                                                int32_t eax_41 = edi_5 << 2 s>> 2
                                                                                                                int32_t eax_42 = sub_436380(eax_41, 
                                                                                                                    &var_1028[edi_5], &var_1028, eax_41, 
                                                                                                                    sub_4a9970)
                                                                                                                int32_t esi_5 = 0
                                                                                                                
                                                                                                                if (edi_5 s> 0)
                                                                                                                    while (true)
                                                                                                                        int32_t edx_14 = var_1028[esi_5]
                                                                                                                        
                                                                                                                        if (edx_14 == 0)
                                                                                                                            sub_489550(eax_42, &data_5b2591, 
                                                                                                                                "id != DATAID_NULL", 
                                                                                                                                "
                                                                                                                                    d:\ax\trunk\ax2017\engine\dataarray.h", 
                                                                                                                                0x6c, 
                                                                                                                                "DataArray<struct UI2>::DataArrayGet")
                                                                                                                            
                                                                                                                            if (IsDebuggerPresent() == 1)
                                                                                                                                breakpoint
                                                                                                                            
                                                                                                                            sub_489700()
                                                                                                                            noreturn
                                                                                                                        
                                                                                                                        uint32_t eax_43 = zx.d(edx_14.w)
                                                                                                                        
                                                                                                                        if (eax_43 u< data_63e5ac)
                                                                                                                            void* ecx_55 =
                                                                                                                                eax_43 * 0x1418 + data_63e5a8
                                                                                                                            
                                                                                                                            if (*(ecx_55 + 0x1410) == edx_14)
                                                                                                                                edx_14.b = 0
                                                                                                                                eax_42 = sub_4a93d0(ecx_55, edx_14.b)
                                                                                                                                esi_5 += 1
                                                                                                                                
                                                                                                                                if (esi_5 s>= edi_5)
                                                                                                                                    break
                                                                                                                                
                                                                                                                                continue
                                                                                                                        
                                                                                                                        sub_489550(eax_43, &data_5b2591, 
                                                                                                                            "DataArrayTryToGet(id) != NULL", 
                                                                                                                            "
                                                                                                                                d:\ax\trunk\ax2017\engine\dataarray.h", 
                                                                                                                            0x6d, 
                                                                                                                            "DataArray<struct UI2>::DataArrayGet")
                                                                                                                        
                                                                                                                        if (IsDebuggerPresent() == 1)
                                                                                                                            breakpoint
                                                                                                                        
                                                                                                                        sub_489700()
                                                                                                                        noreturn
                                                                                                                
                                                                                                                data_643654 = 0
                                                                                                                sub_4a7e20(1)
                                                                                                            labelid_2:
                                                                                                                result.b = 1
                                                                                                            else if (result != 0x41)
                                                                                                            label_4b8c15:
                                                                                                                
                                                                                                                if (ecx[1] != 0x44)
                                                                                                                labelid_2:
                                                                                                                    result.b = 1
                                                                                                                else
                                                                                                                    if (sub_4a79d0().b != 0)
                                                                                                                        cond:8_1 = data_64365c.b != 0
                                                                                                                        goto label_4b8c33
                                                                                                                    
                                                                                                                labelid_2:
                                                                                                                    result.b = 1
                                                                                                            else
                                                                                                                if (sub_4a79d0().b == 0
                                                                                                                        || data_64365c.b != 0)
                                                                                                                    goto label_4b8c15
                                                                                                                
                                                                                                                int32_t i_1 = data_642618
                                                                                                                int32_t edx_15 = 0
                                                                                                                
                                                                                                                if (i_1 s> 0)
                                                                                                                    char** esi_6 = &data_63e618
                                                                                                                    int32_t i
                                                                                                                    
                                                                                                                    do
                                                                                                                        result = *esi_6
                                                                                                                        int32_t ecx_56 = edx_15 + 1
                                                                                                                        esi_6 = &esi_6[4]
                                                                                                                        
                                                                                                                        if (result[7] != 0)
                                                                                                                            ecx_56 = edx_15
                                                                                                                        
                                                                                                                        edx_15 = ecx_56
                                                                                                                        i = i_1
                                                                                                                        i_1 -= 1
                                                                                                                    while (i != 1)
                                                                                                                    i_1 = data_642618
                                                                                                                
                                                                                                                int32_t ecx_57 = data_643654
                                                                                                                
                                                                                                                if (ecx_57 == edx_15)
                                                                                                                    goto label_4b8c39
                                                                                                                
                                                                                                                int32_t edx_16 = 0
                                                                                                                
                                                                                                                if (i_1 s> 0)
                                                                                                                    char** esi_7 = &data_63e618
                                                                                                                    
                                                                                                                    do
                                                                                                                        result = *esi_7
                                                                                                                        
                                                                                                                        if (result[7] == 0)
                                                                                                                            (&data_642654)[ecx_57] =
                                                                                                                                *(result + 0xff8)
                                                                                                                            i_1 = data_642618
                                                                                                                            ecx_57 = data_643654 + 1
                                                                                                                            data_643654 = ecx_57
                                                                                                                        
                                                                                                                        edx_16 += 1
                                                                                                                        esi_7 = &esi_7[4]
                                                                                                                    while (edx_16 s< i_1)
                                                                                                                
                                                                                                            labelid_2:
                                                                                                                result.b = 1
                                                                                                        else
                                                                                                            if (data_6c4468 s< data_6c446c)
                                                                                                                data_6c4472 = 1
                                                                                                                sub_50c600(ecx_47)
                                                                                                                eax_36 = data_6c4468 + 1
                                                                                                                goto label_4b8a86
                                                                                                            
                                                                                                        labelid_2:
                                                                                                            result.b = 1
                                                                                                    else if (data_6c4468 s<= 1)
                                                                                                    labelid_2:
                                                                                                        result.b = 1
                                                                                                    else
                                                                                                        data_6c4472 = 1
                                                                                                        sub_50c600(ecx_46)
                                                                                                        eax_36 = data_6c4468 - 1
                                                                                                    label_4b8a86:
                                                                                                        data_6c4468 = eax_36
                                                                                                        sub_4a9080(
                                                                                                            &(&data_64264c)[eax_36 * 0x407])
                                                                                                        sub_49a5a0(&data_642624)
                                                                                                        data_6c4472 = 0
                                                                                                    labelid_2:
                                                                                                        result.b = 1
                                                                                                else
                                                                                                    data_642644 = data_642644 / 1.29999995f
                                                                                                labelid_2:
                                                                                                    result.b = 1
                                                                                            else
                                                                                                data_642644 = data_642644 * 1.29999995f
                                                                                            labelid_2:
                                                                                                result.b = 1
                                                                                        else
                                                                                            data_6c4468
                                                                                            void* var_30_4 = 0x1018
                                                                                            char* var_34_2 = &data_642650
                                                                                            data_643654 = 0
                                                                                            sub_579300(
                                                                                                &(&data_64264c)[data_6c4468 * 0x407], 
                                                                                                var_34_2, var_30_4)
                                                                                            data_64365c:1.w = 1
                                                                                            data_64365c.b = 0
                                                                                        labelid_2:
                                                                                            result.b = 1
                                                                                    else
                                                                                        if (data_643654 != 0)
                                                                                            int32_t var_30_3 = data_63e5b8
                                                                                            sub_4892e0("total uis before after %d")
                                                                                            sub_4b4fb0()
                                                                                            int32_t var_38_1 = data_63e5b8
                                                                                            sub_4892e0("total uis between %d")
                                                                                            int32_t var_40_1 = data_63e5b8
                                                                                            sub_4892e0("total uis after %d")
                                                                                            sub_4a7e20(1)
                                                                                        
                                                                                    labelid_2:
                                                                                        result.b = 1
                                                                                else
                                                                                    sub_4bb290()
                                                                                labelid_2:
                                                                                    result.b = 1
                                                                            else
                                                                                sub_4b7f80()
                                                                            labelid_2:
                                                                                result.b = 1
                                                                        else
                                                                            bool cond:11_1 = data_643654 != 1
                                                                            data_64365c = 0
                                                                            
                                                                            if (not(cond:11_1))
                                                                                data_64365e = 1
                                                                            
                                                                        labelid_2:
                                                                            result.b = 1
                                                                    else
                                                                        if (data_643654 != 0)
                                                                            uint32_t eax_27 = sub_4b68b0()
                                                                            uint32_t eax_28 = sub_4b64c0(eax_27)
                                                                            esi_2 = eax_28
                                                                            
                                                                            if (esi_2 == 0)
                                                                                sub_489550(eax_28, &data_5b2591, 
                                                                                    "elParent", 
                                                                                    "d:\ax\trunk\ax2017\engine\ui2.cpp", 
                                                                                    0x3859, "UI2MoveDownOne")
                                                                                
                                                                                if (IsDebuggerPresent() == 1)
                                                                                    breakpoint
                                                                                
                                                                                sub_489700()
                                                                                noreturn
                                                                            
                                                                            void* eax_29 = sub_4b6780(eax_27)
                                                                            
                                                                            if (eax_29 != 0)
                                                                                *(eax_29 + 0xfec) == 6
                                                                                    && *(eax_29 + 8) == 0
                                                                                goto label_4b8889
                                                                            
                                                                            if (*(esi_2 + 0x112c) != eax_29)
                                                                                goto label_4b8889
                                                                            
                                                                            sub_4b66e0()
                                                                            goto label_4b889b
                                                                        
                                                                    labelid_2:
                                                                        result.b = 1
                                                                else
                                                                    if (data_643654 != 0)
                                                                        uint32_t eax_24 = sub_4b6950()
                                                                        void* eax_25 = sub_4b64c0(eax_24)
                                                                        
                                                                        if (eax_25 == 0)
                                                                            sub_489550(eax_25, &data_5b2591, 
                                                                                "elParent", 
                                                                                "d:\ax\trunk\ax2017\engine\ui2.cpp", 
                                                                                0x37dd, "UI2MoveUpOne")
                                                                            
                                                                            if (IsDebuggerPresent() == 1)
                                                                                breakpoint
                                                                            
                                                                            sub_489700()
                                                                            noreturn
                                                                        
                                                                        void* eax_26 = sub_4b6550(eax_24)
                                                                        
                                                                        if (eax_26 != 0)
                                                                            if (*(eax_26 + 0xfec) != 6
                                                                                    || *(eax_26 + 8) != 0)
                                                                                sub_4b6640(eax_26)
                                                                            else
                                                                                sub_4b69f0(eax_26)
                                                                        else if (*(eax_25 + 0x112c) != eax_26)
                                                                            sub_4b6640(eax_25)
                                                                        else
                                                                            sub_4b5ca0(eax_25, &data_5d27f8)
                                                                        
                                                                        sub_49a5a0(&data_642624)
                                                                        data_642624 = 0
                                                                        sub_4a7e20(1)
                                                                    
                                                                labelid_2:
                                                                    result.b = 1
                                                            else
                                                                if (sub_4a79d0() == 0)
                                                                    goto label_4b876c
                                                                
                                                                result = sub_4a7950()
                                                                
                                                                if (result.b == 0)
                                                                    goto label_4b876c
                                                                
                                                                if (data_643654 != 0)
                                                                    uint32_t eax_20 = sub_4b68b0()
                                                                    void* eax_21 = sub_4b64c0(eax_20)
                                                                    void* eax_22 = sub_4b6780(eax_20)
                                                                    
                                                                    if (eax_21 != 0)
                                                                        if (eax_22 != 0)
                                                                            sub_4b69f0(eax_21)
                                                                        else
                                                                            void* eax_23 = sub_4b64c0(eax_21)
                                                                            
                                                                            if (eax_23 == 0)
                                                                                sub_4b66e0()
                                                                            else
                                                                                sub_4b69f0(eax_23)
                                                                    else
                                                                        sub_4b66e0()
                                                                    
                                                                    sub_49a5a0(&data_642624)
                                                                    data_642624 = 0
                                                                    sub_4a7e20(1)
                                                                
                                                            labelid_2:
                                                                result.b = 1
                                                        else
                                                            if (sub_4a79d0() == 0)
                                                                goto label_4b86e5
                                                            
                                                            result = sub_4a7950()
                                                            
                                                            if (result.b == 0)
                                                                goto label_4b86e5
                                                            
                                                            if (data_643654 == 0)
                                                            labelid_2:
                                                                result.b = 1
                                                            else
                                                                esi_2 = sub_4b68b0()
                                                                void* eax_16 = sub_4b64c0(esi_2)
                                                                int32_t* const var_30_1
                                                                
                                                                if (eax_16 != 0
                                                                        && sub_4b6550(esi_2) == 0)
                                                                    var_30_1 = &data_5d27f8
                                                                    sub_4b64c0(eax_16)
                                                                else
                                                                label_4b8889:
                                                                    var_30_1 = &data_5d27f8
                                                                
                                                                sub_4b5ca0(esi_2, var_30_1)
                                                            label_4b889b:
                                                                sub_49a5a0(&data_642624)
                                                                data_642624 = 0
                                                                sub_4a7e20(1)
                                                            labelid_2:
                                                                result.b = 1
                                                    else if (data_643654 != 1)
                                                    labelid_2:
                                                        result.b = 1
                                                    else
                                                        result = sub_4a7d60(data_642654)
                                                        int32_t ecx_18 = *(result + 0xfec)
                                                        char* ecx_22
                                                        
                                                        if (ecx_18 == 1)
                                                            ecx_22 = *(result + 0xf18)
                                                            
                                                            if (ecx_22 != 0 && *(ecx_22 + 4) == 0x1d)
                                                            label_4b8626:
                                                                result = sub_51b030(ecx_22, 0)
                                                                goto label_4b862b
                                                            
                                                        labelid_2:
                                                            result.b = 1
                                                        else if (ecx_18 == 2)
                                                            ecx_22 = *(result + 0xf48)
                                                        label_4b861c:
                                                            
                                                            if (ecx_22 != 0)
                                                                goto label_4b8626
                                                            
                                                        labelid_2:
                                                            result.b = 1
                                                        else
                                                            if (ecx_18 == 9)
                                                                ecx_22 = *(result + 0xf10)
                                                                goto label_4b861c
                                                            
                                                        labelid_2:
                                                            result.b = 1
                                                else
                                                    result = sub_51af60()
                                                label_4b862b:
                                                    
                                                    if (result.b == 0)
                                                    labelid_2:
                                                        result.b = 1
                                                    else
                                                        sub_49a5a0(&data_642624)
                                                    labelid_2:
                                                        result.b = 1
                                            else
                                                data_64365c:1.w = 0
                                                
                                                if (data_643654 s> 0)
                                                    data_64365c.b = 1
                                                
                                            labelid_2:
                                                result.b = 1
                                        else
                                            sub_5175f0(ecx_16)
                                        labelid_2:
                                            result.b = 1
                                    else
                                        if (sub_4a79d0() == 0)
                                            goto label_4b853e
                                        
                                        char eax_8
                                        char* ecx_15
                                        eax_8, ecx_15 = sub_4a7950()
                                        
                                        if (eax_8 == 0)
                                            goto label_4b853e
                                        
                                        sub_517940(ecx_15)
                                    labelid_2:
                                        result.b = 1
                                else
                                    sub_4b6ce0(0xffffffff)
                                    sub_4a7e20(0)
                                labelid_2:
                                    result.b = 1
                            else
                                sub_4b6ce0(1)
                                sub_4a7e20(0)
                            labelid_2:
                                result.b = 1
                        else
                            if (data_643654 s> 0)
                                int32_t var_1060_7 = 0
                                int32_t var_105c_6 = 0x3f800000
                                
                                if ((ecx[2].b & 1) != 0)
                                    int32_t var_1060_8 = 0
                                    float var_105c_7 = 1f * 10f
                                
                                sub_4a9fc0(ecx)
                                sub_4a7e20(1)
                            
                        labelid_2:
                            result.b = 1
                    else if (data_643654 s<= 0)
                    labelid_2:
                        result.b = 1
                    else
                        xmm1_5 = (zx.o(0)).d
                        int32_t var_1060_3 = 0xbf800000
                        int32_t var_105c_3 = 0
                        
                        if ((ecx[2].b & 1) == 0)
                            goto label_4b837e
                        
                        int32_t var_1060_4 = 0xc1200000
                    label_4b8370:
                        float var_105c_5 = xmm1_5 f* 10f
                    label_4b837e:
                        sub_4a9fc0(ecx)
                        sub_4a7e20(1)
                    labelid_2:
                        result.b = 1
                else if (data_643654 s<= 0)
                labelid_2:
                    result.b = 1
                else
                    int32_t var_1060_1 = 0x3f800000
                    int32_t var_105c_1 = 0
                    
                    if ((ecx[2].b & 1) == 0)
                        goto label_4b837e
                    
                    int32_t var_1060_2 = 0x41200000
                    float var_105c_2 = 0f * 10f
                    sub_4a9fc0(ecx)
                    sub_4a7e20(1)
                labelid_2:
                    result.b = 1
            else
            label_4b8274:
                data_64365c = 0
                data_64365e = 0
            labelid_2:
                result.b = 1
        else if (result == 7)
            sub_4b7480()
        labelid_2:
            result.b = 1
        else
            void var_1090
            float var_1078
            void var_1058
            int128_t var_1038
            
            if (result == 0x1b)
                char* eax_46 = ecx[6]
                char* edx_17 = &data_5b2591
                
                if (eax_46 != 0)
                    edx_17 = eax_46
                
                char* result_1
                sub_4e5700(&result_1, edx_17)
                int32_t var_14_1 = 0
                char* result_5 = &data_5b2591
                char* result_3 = result_1
                
                if (result_3 != 0)
                    result_5 = result_3
                
                int32_t* eax_47 = sub_518420(result_5)
                char* result_2
                sub_4b6a30(&result_2, &ecx[6])
                var_14_1.b = 1
                result = sub_498eb0(data_642620)
                
                if (eax_47[1] != 3)
                    var_14_1.b = 6
                    
                    if (data_aca1f4 != 0)
                        result = result_2
                        
                        if (result != 0 && *result != 0)
                            result = sub_48a080(&result_2)
                            int32_t temp0_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_4984f0(result, *(result + 0xc) + 0x10)
                                result_2 = &data_5b2591
                    
                    int32_t var_14_3 = 7
                    
                    if (data_aca1f4 != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_48a080(&result_1)
                            int32_t temp2_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_4984f0(result, *(result + 0xc) + 0x10)
                    
                    result.b = 0
                else
                    int32_t edi_7
                    
                    if (data_643654 != 0)
                        void* eax_49 = sub_498ef0(sub_4a7d60((&data_642654)[data_642654]))
                        *(eax_49 + 0x10) += 1
                        edi_7 = data_642654 + 1
                    else
                        edi_7 = *(result + 8)
                    
                    char* result_4 = result_2
                    char* result_6 = &data_5b2591
                    
                    if (result_4 != 0)
                        result_6 = result_4
                    
                    char* result_7 = result_6
                    sub_48a9d0(&var_1064, "img_%s")
                    var_14_1.b = 2
                    float eax_50
                    int32_t edx_19
                    eax_50, edx_19 = sub_48f600(eax_47)
                    float var_1030_1 = eax_50
                    int32_t var_102c_1 = edx_19
                    sub_489e40(&var_1078)
                    float xmm2_2 = 1f f/ data_642644
                    int32_t* edx_20 = &var_1038:8
                    int128_t* var_30_8 = &var_1090
                    float var_1074
                    float xmm0_11 = data_64264c + var_1074 * xmm2_2
                    var_1078 = data_642648 + var_1078 * xmm2_2
                    float var_1074_1 = xmm0_11
                    int128_t* var_30_9 = &var_1058
                    var_1038 = *sub_4829a0(&var_1090, edx_20, &var_1078, var_30_8)
                    int128_t* eax_54 = sub_4be600(&var_1058, edx_20, &var_1038, var_30_9)
                    void* ecx_69 = data_12bac58
                    int32_t var_30_10 = 1
                    int128_t var_1048 = *eax_54
                    int32_t* eax_55 = sub_4cf8e0(ecx_69, 0)
                    sub_518980(eax_55, eax_55, result, edi_7, var_30_10)
                    int32_t* esi_9 = *result + edi_7 * 0x18
                    char* eax_57 = var_1064
                    char* const ecx_72 = &data_5b2591
                    
                    if (eax_57 != 0)
                        ecx_72 = eax_57
                    
                    char* const var_38_6 = ecx_72
                    int32_t var_40_2 = 1
                    int32_t* var_48_1 = eax_47
                    sub_4f0a90(
                        sub_4f0a90(sub_4f0a90(eax_57, esi_9, &data_6218dc, 0x64), esi_9, &data_6218dc, 
                            0x66), 
                        esi_9, &data_6218dc, 0x88)
                    sub_4a9db0(&var_1048, 0x75, esi_9, &var_1048)
                    var_14_1.b = 3
                    
                    if (data_aca1f4 != 0)
                        char* eax_61 = var_1064
                        
                        if (eax_61 != 0 && *eax_61 != 0)
                            char* eax_62 = sub_48a080(&var_1064)
                            int32_t temp3_1 = *(eax_62 + 4)
                            *(eax_62 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_4984f0(eax_62, *(eax_62 + 0xc) + 0x10)
                    
                    var_14_1.b = 1
                    data_642654 = edi_7
                    data_643654 = 1
                    sub_49a5a0(&data_642624)
                    sub_4a7e20(1)
                    var_14_1.b = 8
                    
                    if (data_aca1f4 != 0)
                        result = result_2
                        
                        if (result != 0 && *result != 0)
                            result = sub_48a080(&result_2)
                            int32_t temp4_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_4984f0(result, *(result + 0xc) + 0x10)
                                result_2 = &data_5b2591
                    
                    int32_t var_14_2 = 9
                    
                    if (data_aca1f4 != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_48a080(&result_1)
                            int32_t temp5_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_4984f0(result, *(result + 0xc) + 0x10)
                    
                labelid_2:
                    result.b = 1
            else if (result != 3)
            labelid_2:
                result.b = 1
            else
                if (sub_489e40(&var_1078) != 0)
                    struct InputHitResult::UI2HitResult::VTable** eax_65 =
                        sub_49f910(&var_1078, data_642640, &var_1090, &var_1078)
                    data_642630 = eax_65[1]
                    data_642634 = eax_65[2]
                    data_642638 = eax_65[3]
                    data_64263c = eax_65[4]
                
                if (sub_41f7d0(&data_64262c, &data_63c744).b == 0)
                labelid_2:
                    result.b = 1
                else
                    data_643660 = 0xffffffff
                    data_643664 = 0xffffffff
                    int32_t var_1030
                    int32_t var_102c
                    
                    if (sub_4aa820() != 0)
                        data_6c4470 = 1
                        data_6c4474 = 1
                        sub_489e40(&var_1038:8)
                        data_6c4478 = var_1030
                        data_6c447c = var_102c
                        data_6c4488 = 0
                        data_6c4480 = var_1030
                        data_6c4484 = var_102c
                    labelid_2:
                        result.b = 1
                    else if (data_64365c.b != 0 || data_64365e != 0)
                    label_4b92f1:
                        sub_4b56f0()
                    label_4b92f6:
                        result.b = 1
                    else
                        char* var_105c_9
                        int32_t esi_10
                        char* esi_11
                        
                        if (data_642624 != 0)
                            sub_489e40(&var_1038:8)
                            esi_10 = data_642618
                            esi_11 = esi_10 - 1
                            var_105c_9 = esi_11
                        
                        if (data_642624 != 0 && esi_10 - 1 s>= 0)
                            void* edi_11 = (esi_11 << 4) + &data_63e618
                            
                            while (true)
                                var_1064 = esi_11
                                void* esi_12 = *edi_11
                                
                                if (*(esi_12 + 6) == 0 && *(esi_12 + 7) == 0)
                                    void* ecx_92 = *(esi_12 + 0x112c)
                                    char eax_68
                                    
                                    if (ecx_92 != 0)
                                        eax_68 = sub_4a8170(ecx_92)
                                    
                                    if (ecx_92 == 0 || eax_68 != 0)
                                        int128_t* eax_70 = sub_4bc3a0(esi_12 + 0x54c, 
                                            *(data_114e818 + 0x2c), &var_1058)
                                        float xmm3_1 = *(esi_12 + 0x10a0)
                                        float xmm2_6 = *(esi_12 + 0x10a4)
                                        float xmm1_11 = *(esi_12 + 0x10a8) - xmm3_1
                                        float xmm0_16 = *(esi_12 + 0x10ac) - xmm2_6
                                        float xmm5_3 = *eax_70 * xmm1_11 + xmm3_1
                                        float xmm6_3 = *(eax_70 + 8) * xmm1_11 + xmm3_1
                                        float xmm4_3 = *(eax_70 + 4) * xmm0_16 + xmm2_6
                                        float xmm1_14 = *(eax_70 + 0xc) * xmm0_16 + xmm2_6
                                        
                                        if (xmm6_3 < xmm5_3 || xmm1_14 < xmm4_3)
                                            sub_489550(eax_70, &data_5b2591, "RectIsNormalized(r)", 
                                                "d:\ax\trunk\ax2017\engine\rect.cpp", 0xa4, 
                                                "RectContains")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_489700()
                                            noreturn
                                        
                                        if (not(var_1030 f< xmm5_3) && not(var_102c f< xmm4_3)
                                                && not(xmm6_3 f< var_1030) && not(xmm1_14 f< var_102c))
                                            float xmm0_18 = *(esi_12 + 0x1080)
                                            xmm0_18 f- 0
                                            eax_70:1.b = (xmm0_18 == 0f ? 1 : 0) << 6
                                                | (is_unordered.d(xmm0_18, 0f) ? 1 : 0) << 2
                                                | (xmm0_18 < 0f ? 1 : 0)
                                            bool p_2 = unimplemented  {test ah, 0x44}
                                            
                                            if (p_2)
                                                int32_t esi_14 = *(esi_12 + 0x1410)
                                                result = sub_4a79d0()
                                                int32_t edi_14
                                                
                                                if (result.b == 0)
                                                    int32_t edx_36 = 0
                                                    
                                                    if (data_643654 s<= 0)
                                                    label_4b92c7:
                                                        
                                                        if (sub_4a7990() != 0 && data_643654 s> 0)
                                                            break
                                                        
                                                        sub_4a81a0(esi_14)
                                                        edi_14 = data_643654
                                                        data_6c4491 = 1
                                                    else
                                                        while (true)
                                                            if (esi_14 == 0)
                                                                sub_489550(result, &data_5b2591, 
                                                                    "id != DATAID_NULL", 
                                                                    "
                                                                        d:\ax\trunk\ax2017\engine\dataarray.h", 
                                                                    0x6c, 
                                                                    "DataArray<struct UI2>::DataArrayGet")
                                                                
                                                                if (IsDebuggerPresent() == 1)
                                                                    breakpoint
                                                                
                                                                sub_489700()
                                                                noreturn
                                                            
                                                            uint32_t ecx_95 = zx.d(esi_14.w)
                                                            
                                                            if (ecx_95 u< data_63e5ac)
                                                                result = ecx_95 * 0x1418 + data_63e5a8
                                                                
                                                                if (*(result + 0x1410) == esi_14)
                                                                    result = (&data_642654)[edx_36]
                                                                    edi_14 = data_643654
                                                                    
                                                                    if (result == *
                                                                            (ecx_95 * 0x1418 + data_63e5a8 + 0xff8))
                                                                        data_6c4491 = 0
                                                                        break
                                                                    
                                                                    edx_36 += 1
                                                                    
                                                                    if (edx_36 s>= edi_14)
                                                                        goto label_4b92c7
                                                                    
                                                                    continue
                                                            
                                                            sub_489550(result, &data_5b2591, 
                                                                "DataArrayTryToGet(id) != NULL", 
                                                                "
                                                                    d:\ax\trunk\ax2017\engine\dataarray.h", 
                                                                0x6d, 
                                                                "DataArray<struct UI2>::DataArrayGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_489700()
                                                            noreturn
                                                else
                                                    sub_4ae780(esi_14)
                                                    edi_14 = data_643654
                                                    data_6c4491 = 1
                                                
                                                if (edi_14 s<= 0)
                                                    goto label_4b92f6_2
                                                
                                                break
                                
                                edi_11 -= 0x10
                                esi_11 = var_105c_9 - 1
                                var_105c_9 = esi_11
                                
                                if (var_1064 s<= 0)
                                    goto label_4b9246
                            
                            goto label_4b92f1
                        
                    label_4b9246:
                        cond:8_1 = sub_4a79d0().b != 0
                    label_4b8c33:
                        
                        if (cond:8_1)
                        label_4b92f6_1:
                            result.b = 1
                        else
                        label_4b8c39:
                            data_6c4468
                            void* var_30_7 = 0x1018
                            char* var_34_5 = &data_642650
                            data_643654 = 0
                            sub_579300(&(&data_64264c)[data_6c4468 * 0x407], var_34_5, var_30_7)
                        label_4b92f6_2:
                            result.b = 1
    else
        result.b = var_1065
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
