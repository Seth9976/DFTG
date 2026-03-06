// 函数名称: sub_469690
// 虚拟地址: 0x469690
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_469690(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59dfc8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_4 = sub_452b90(arg2)
    sub_466060(eax_4, arg4, arg3, arg5)
    int32_t i = *(eax_4 + 0x2a8)
    int32_t esi = 0
    
    for (; i != 0; i = *(sub_452de0(i) + 0x10))
        esi += 1
    
    int32_t eax_6
    eax_6.b = esi s> 6
    sub_4a8830(eax_6 + 1, &data_6386f8, arg3, eax_6 + 1, 0xffffffff)
    int32_t eax_8 = esi - 6
    
    if (esi s<= 0xc)
        eax_8 = 0
    
    sub_4a8830(eax_8, &data_6386dc, arg3, eax_8, 0xffffffff)
    sub_4689d0(arg3, eax_4)
    sub_465e80(arg3)
    sub_465bc0(arg3)
    sub_469230(arg3)
    int32_t var_2c
    void* result_1
    sub_4652b0(&var_2c, data_632804, &result_1, eax_4, &var_2c)
    int32_t var_8_1 = 0
    sub_4a8930(&result_1, &data_637bb4, arg3, &result_1, 0xffffffff)
    
    if (var_2c != 0)
        int32_t var_40_1 = 0xffffffff
        sub_4a8570(arg3)
    
    void* eax_11 = sub_452b90(arg2)
    int32_t eax_12
    
    if (data_632590 != 6)
        eax_12 = sub_453650(eax_11)
    
    char* ebx
    
    if (data_632590 == 6 || eax_12 == 0x17)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t i_2 = *(eax_11 + 0x2ac)
    int32_t edi_1 = 0
    char var_11 = ebx.b
    
    if (i_2 == 0)
    label_4697d6:
        
        if (ebx.b != 0)
            int32_t i_1 = *(eax_11 + 0x2c8)
            int32_t edi_2 = 0
            
            if (i_1 != 0)
                do
                    edi_2 += 1
                    i_1 = *(sub_452d50(i_1) + 0x20)
                while (i_1 != 0)
                
                if (edi_2 != 0)
                    goto label_469807
    else
        do
            edi_1 += 1
            i_2 = *(sub_452de0(i_2) + 0x10)
        while (i_2 != 0)
        
        if (edi_1 == 0)
            goto label_4697d6
        
    label_469807:
        int32_t i_3 = *(eax_11 + 0x2c0)
        ebx = nullptr
        
        for (; i_3 != 0; i_3 = *(sub_452d50(i_3) + 0x20))
            ebx = &ebx[1]
        
        int32_t edi_4 = *(eax_11 + 0x308) + *(eax_11 + 0x300)
        
        if (ebx s< edi_4)
            int32_t i_4 = *(eax_11 + 0x2c0)
            edi_4 = 0
            
            for (; i_4 != 0; i_4 = *(sub_452d50(i_4) + 0x20))
                edi_4 += 1
        
        int32_t eax_17
        
        if (data_632590 != 6 || edi_4 != 0)
            eax_17 = sub_453650(eax_11)
        
        char* edi_6
        
        if ((data_632590 != 6 || edi_4 != 0) && eax_17 != 0x17)
            edi_6 = arg3
        else
            int32_t i_5 = *(eax_11 + 0x2c8)
            int32_t edi_5 = 0
            
            if (i_5 == 0)
                edi_6 = arg3
            else
                do
                    edi_5 += 1
                    i_5 = *(sub_452d50(i_5) + 0x20)
                while (i_5 != 0)
                
                if (edi_5 s<= 0)
                    edi_6 = arg3
                else
                    edi_6 = arg3
                    
                    if (sub_453650(eax_11) == 0x17)
                        int32_t var_40_2 = 0xffffffff
                        sub_4a8570(edi_6)
                    
                    int32_t var_40_3 = 0xffffffff
                    sub_4a8570(edi_6)
        
        int32_t var_40_4 = 0xffffffff
        sub_4a8570(edi_6)
        ebx.b = var_11
    
    int32_t i_6 = *(eax_11 + 0x2b0)
    int32_t edi_7 = 0
    char* ebx_2
    
    if (i_6 == 0)
    label_4698f3:
        
        if (ebx.b == 0)
            ebx_2 = arg3
        else
            i_6 = *(eax_11 + 0x2cc)
            int32_t edi_8 = 0
            
            if (i_6 == 0)
                ebx_2 = arg3
            else
                do
                    edi_8 += 1
                    i_6 = *(sub_452d50(i_6) + 0x20)
                while (i_6 != 0)
                
                if (edi_8 != 0)
                    goto label_469927
                
                ebx_2 = arg3
    else
        do
            edi_7 += 1
            i_6 = *(sub_452de0(i_6) + 0x10)
        while (i_6 != 0)
        
        if (edi_7 == 0)
            goto label_4698f3
        
    label_469927:
        int32_t i_7 = *(eax_11 + 0x2c0)
        int32_t ebx_1 = 0
        
        for (; i_7 != 0; i_7 = *(sub_452d50(i_7) + 0x20))
            ebx_1 += 1
        
        int32_t edi_10 = *(eax_11 + 0x308) + *(eax_11 + 0x300)
        
        if (ebx_1 s< edi_10)
            int32_t i_8 = *(eax_11 + 0x2c0)
            edi_10 = 0
            
            for (; i_8 != 0; i_8 = *(sub_452d50(i_8) + 0x20))
                edi_10 += 1
        
        int32_t eax_24
        
        if (data_632590 != 6 || edi_10 != 0)
            eax_24 = sub_453650(eax_11)
        
        if ((data_632590 != 6 || edi_10 != 0) && eax_24 != 0x17)
            ebx_2 = arg3
        else
            int32_t i_9 = *(eax_11 + 0x2cc)
            int32_t edi_11 = 0
            
            if (i_9 == 0)
                ebx_2 = arg3
            else
                do
                    edi_11 += 1
                    i_9 = *(sub_452d50(i_9) + 0x20)
                while (i_9 != 0)
                
                if (edi_11 s<= 0)
                    ebx_2 = arg3
                else
                    ebx_2 = arg3
                    
                    if (sub_453650(eax_11) == 0x17)
                        int32_t var_40_5 = 0xffffffff
                        sub_4a8570(ebx_2)
                    
                    int32_t var_40_6 = 0xffffffff
                    sub_4a8570(ebx_2)
        
        int32_t var_40_7 = 0xffffffff
        i_6 = sub_4a8570(ebx_2)
    
    void* ecx_33 = data_6cfe4c
    
    if (ecx_33 == 0)
        sub_489550(i_6, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_27
    int32_t edx_10
    eax_27, edx_10 = sub_452b90(*(ecx_33 + 0xa68))
    int32_t eax_28
    char* ecx_36
    eax_28, ecx_36 = sub_453650(eax_27)
    int32_t edi_12 = data_632590
    
    if (eax_28 == 0x17 || edi_12 == 6)
        if (sub_453510(arg2, 7) != 0 && edi_12 != 6)
            if (sub_453650(eax_11) == 0x17)
                int32_t var_40_8 = 0xffffffff
                sub_4a8570(ebx_2)
            
            int32_t var_40_9 = 0xffffffff
            sub_4a8570(ebx_2)
        
        void* eax_31 = sub_452b90(arg2)
        
        if (sub_453510(arg2, 3) != 0)
        label_469a97:
            
            if (sub_453650(eax_11) == 0x17)
                int32_t var_40_10 = 0xffffffff
                sub_4a8570(ebx_2)
            
            int32_t var_40_11 = 0xffffffff
            sub_4a8570(ebx_2)
        else if (data_632590 == 6 && *(eax_31 + 0xc) != 0x6a)
            goto label_469a97
        
        int32_t eax_34 = sub_453510(arg2, 9)
        
        if (eax_34 != 0)
        label_469b1e:
            
            if (sub_453650(eax_11) == 0x17)
                int32_t var_40_12 = 0xffffffff
                sub_4a8570(ebx_2)
            
            int32_t var_40_13 = 0xffffffff
            ecx_36, edx_10 = sub_4a8570(ebx_2)
        else
            int32_t eax_35 = sub_453510(arg2, eax_34 + 0xa)
            
            if (eax_35 != 0)
                goto label_469b1e
            
            int32_t eax_36 = sub_453510(arg2, eax_35 + 0xb)
            
            if (eax_36 != 0)
                goto label_469b1e
            
            int32_t eax_37 = sub_453510(arg2, eax_36 + 0xc)
            
            if (eax_37 != 0)
                goto label_469b1e
            
            int32_t eax_38 = sub_453510(arg2, eax_37 + 0xd)
            
            if (eax_38 != 0)
                goto label_469b1e
            
            int32_t eax_39
            eax_39, ecx_36, edx_10 = sub_453510(arg2, eax_38 + 8)
            
            if (eax_39 != 0)
                goto label_469b1e
    
    int32_t esi_2 = 0
    char* i_10 = *(eax_4 + 0x2d4)
    
    if (i_10 != 0)
        do
            void* eax_42
            eax_42, edx_10 = sub_452d50(i_10)
            esi_2 += 1
            i_10 = *(eax_42 + 0x20)
        while (i_10 != 0)
        
        if (esi_2 s< 0)
        label_469b93:
            int32_t var_40_16 = 0xffffffff
            int32_t var_40_17 = 0xffffffff
            sub_4a8830(sub_4a8570(ebx_2), &data_638ed8, ebx_2, esi_2, 0xffffffff)
        else if (esi_2 s> 1)
            if (esi_2 != 2)
                goto label_469b93
            
            int32_t var_40_14 = 0xffffffff
            int32_t var_40_15 = 0xffffffff
            sub_4a8830(sub_4a8570(ebx_2), &data_638ed8, ebx_2, esi_2, 0xffffffff)
    
    void* ebx_3 = eax_4
    int32_t eax_44 = *(ebx_3 + 0x10)
    var_2c = eax_44
    
    if (eax_44 != 0 && *(ebx_3 + 0xb4) == 0)
        bool cond:3_1 = *(ebx_3 + 0x14) == 0
        *(ebx_3 + 0x10) = 0
        
        if (not(cond:3_1))
            *(ebx_3 + 8) = eax_44
        
        ecx_36.b = 0
        *(ebx_3 + 0xc) = eax_44
        char var_12_1 = 0
        void* edi_15 = ebx_3 + 0x18
        char var_11_1 = 0
        int32_t var_28_1 = 0xd
        
        while (true)
            ecx_36.b = 0
            char* esi_3 = &data_5ed398
            
            while (true)
                if (*(esi_3 - 0x20) != eax_44)
                label_469c4a:
                    esi_3 = &esi_3[0x3c]
                    
                    if (esi_3 != "17\jams\roll\code\rolllog.cpp")
                        eax_44 = var_2c
                        continue
                    else if (ecx_36.b == 0)
                        *(edi_15 + 8) = 2
                    else
                        *(edi_15 + 8) = 1
                else
                    int32_t i_11 = *(esi_3 - 0x1c)
                    void* ecx_57 = &esi_3[0xffffffe4]
                    
                    if (i_11 == 0)
                    label_469c26:
                        ebx_3.b = 0
                    else
                        while (i_11 != *edi_15)
                            i_11 = *(ecx_57 + 4)
                            ecx_57 += 4
                            
                            if (i_11 == 0)
                                goto label_469c26
                        
                        ebx_3.b = 1
                    
                    int32_t i_12 = *esi_3
                    ecx_36 = esi_3
                    
                    if (i_12 == 0)
                    label_469c40:
                        ecx_36.b = 0
                    else
                        while (i_12 != *edi_15)
                            i_12 = *(ecx_36 + 4)
                            ecx_36 = &ecx_36[4]
                            
                            if (i_12 == 0)
                                goto label_469c40
                        
                        ecx_36.b = 1
                    
                    if (ebx_3.b != 0)
                        edx_10.b = var_11_1
                        *(edi_15 + 8) = 3
                        var_12_1 = 1
                        break
                    
                    if (ecx_36.b == 0)
                        goto label_469c4a
                    
                    *(edi_15 + 8) = 1
                
                edx_10.b = 1
                var_11_1 = 1
                break
            
            eax_44 = var_2c
            edi_15 += 0xc
            int32_t temp1_1 = var_28_1
            var_28_1 -= 1
            
            if (temp1_1 == 1)
                break
        
        ebx_3 = eax_4
        *(ebx_3 + 0xb4) = 1
        eax_44.b = data_632a09.b
        data_632a09.b = 0
        
        if (eax_44.b == 0)
            if (edx_10.b != 0)
                data_126be28
                eax_44 = sub_4c5ce0()
            
            if (var_12_1 != 0)
                data_126be2c
                eax_44 = sub_4c5ce0()
    
    char eax_46
    void* i_15
    eax_46, i_15 = sub_453300(eax_44, 5, ebx_3, 0x80, nullptr)
    
    if (eax_46 != 0)
        int32_t var_40_18 = 0xffffffff
        i_15 = sub_4a8570(arg3)
    
    void* i_13 = *(ebx_3 + 0x2d4)
    int32_t esi_4 = 0
    
    if (i_13 != 0)
        do
            i_15 = i_13
            esi_4 += 1
            i_13 = *(sub_452d50(i_15) + 0x20)
        while (i_13 != 0)
        
        if (esi_4 != 0)
            int32_t var_40_19 = 0xffffffff
            i_15 = sub_4a8570(arg3)
    
    int32_t edi_17 = 0
    void* i_18 = ebx_3 + 0x18
    int32_t i_16 = 0xd
    int32_t eax_49
    int32_t i_14
    
    do
        void* i_17 = i_15
        i_15 = i_18
        eax_49 = sub_45d700(i_15, *eax_4)
        edi_17 += eax_49
        i_18 += 0xc
        i_14 = i_16
        i_16 -= 1
    while (i_14 != 1)
    char* ebx_4
    
    if (data_632a09:1.b != i_16.b)
    label_469d96:
        ebx_4 = arg3
        int32_t var_40_20 = 0xffffffff
        sub_4a8570(ebx_4)
    else
        void* ecx_63 = data_6cfe4c
        
        if (ecx_63 == 0)
            sub_489550(eax_49, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t esi_5 = i_16 + 5
        void* eax_51 = sub_452b90(*(ecx_63 + 0xa68)) + 0x58
        
        while (true)
            int32_t ecx_65 = *eax_51
            
            if (ecx_65 == 2 || ecx_65 == 3)
                ebx_4 = arg3
                break
            
            esi_5 += 1
            eax_51 += 0xc
            
            if (esi_5 s> 9)
                goto label_469d96
            
            continue
    
    if (data_632a09:1.b == 0 && sub_425e70() == 2 && data_632560 != 0)
        int32_t eax_53 = data_632590
        
        if (eax_53 == 4 || eax_53 == 5)
            int32_t var_40_21 = 0xffffffff
            sub_4a8570(ebx_4)
    
    if (edi_17 == 0 && *(eax_4 + 0xb4) == 1)
        *(eax_4 + 0xb4) = edi_17
    
    int32_t eax_55 = data_632590
    
    if (eax_55 u> 8)
        sub_489550(eax_55, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
            0x52f0, "PlayerUIUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_40_22
    
    switch (eax_55)
        case 0
            data_632590 = 1
            var_40_22 = 0xffffffff
            eax_55 = sub_4a8570(ebx_4)
        case 8
            var_40_22 = 0xffffffff
            eax_55 = sub_4a8570(ebx_4)
    
    void* result = sub_466610(eax_55, arg2, ebx_4, data_632590)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
