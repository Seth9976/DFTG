// 函数名称: sub_48e960
// 虚拟地址: 0x48e960
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_48e960()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59edc0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t __saved_ebp
    (*(*data_aca1ec + 4))(__security_cookie ^ &__saved_ebp)
    
    if (*(data_aca1f0 + 0x2c) != 0)
        sub_4c3340()
    
    void* ecx_1 = DeleteCriticalSection(data_114e830 + 0x26c)
    void* esi = data_114e830
    char* eax_7 = *(esi + 0x268)
    void* edi = esi + 0x268
    
    if (eax_7 != 0 && eax_7 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_7 != 0)
            ecx_1 = edi
            char* eax_8 = sub_48a080(ecx_1)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                ecx_1 = sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
                *edi = &data_5b2591
            
            esi = data_114e830
        
        *edi = &data_5b2591
    
    if (esi != 0)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        
        if (data_aca1f4 != 0)
            char* eax_9 = *(esi + 0x268)
            
            if (eax_9 != 0 && *eax_9 != 0)
                char* eax_10 = sub_48a080(esi + 0x268)
                int32_t temp1_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                    *(esi + 0x268) = &data_5b2591
        
        var_8_1.b = 0
        `eh vector vbase constructor iterator'(esi, 0x4c, 8, sub_4224e0)
        int32_t var_8_2 = 0xffffffff
        ecx_1 = sub_4984f0(data_114e830, 0x284)
        data_114e830 = 0
    
    sub_48b690(ecx_1)
    sub_4d0500(data_114e840)
    int32_t* ecx_7 = data_114e840
    
    if (ecx_7 != 0)
        int32_t var_8_3 = 2
        sub_4d0500(ecx_7)
        int32_t var_8_4 = 0xffffffff
        sub_4984f0(data_114e840, 0x1c)
        data_114e840 = 0
    
    int32_t* ecx_9 = data_114e84c
    
    while (ecx_9[2] != 0)
        int32_t* edi_1 = *ecx_9
        void* eax_11 = edi_1[1]
        *ecx_9 = eax_11
        
        if (eax_11 == 0)
            ecx_9[1] = 0
        else
            *(eax_11 + 8) = 0
        
        void* esi_1 = *edi_1
        ecx_9[2] -= 1
        sub_4984f0(edi_1, 0xc)
        ecx_9 = data_114e84c
        *(esi_1 + 0x1c) -= 1
    
    sub_436340(ecx_9)
    int32_t* ecx_11 = data_114e84c
    
    if (ecx_11 != 0)
        int32_t var_8_5 = 3
        sub_436340(ecx_11)
        int32_t var_8_6 = 0xffffffff
        sub_4984f0(data_114e84c, 0xc)
        data_114e84c = 0
    
    int32_t* i_3 = data_1150ecc:4
    
    if (i_3 != 0)
        int32_t* i
        
        do
            i = *i_3
            _aligned_free_base(i_3)
            i_3 = i
        while (i != 0)
    
    data_1150ecc:4 = 0
    data_1150ecc:0xc = 0
    sub_4de2f0()
    int32_t* ecx_13 = data_1150db8
    
    if (ecx_13 != 0)
        (*(*ecx_13 + 8))()
        int32_t* ecx_14 = data_1150db8
        
        if (ecx_14 != 0)
            (**ecx_14)(0)
            int32_t eax_14 = data_1150db8
            
            if (eax_14 != 0)
                _aligned_free_base(eax_14)
        
        data_1150db8 = 0
        data_1150de0 = 0
    
    int32_t* ecx_15 = data_1150edc
    
    if (ecx_15 != 0)
        (*(*ecx_15 + 0xc))()
        int32_t* ecx_16 = data_1150edc
        
        if (ecx_16 != 0)
            (**ecx_16)(1)
        
        data_1150edc = 0
    
    if (data_a9fb7d != 0)
        void* ecx_17 = data_6c9d74
        
        if (ecx_17 != 0)
            void* esi_2 = nullptr
            
            while (true)
                if (esi_2 != 0)
                    esi_2 += 0x1c0
                else
                    esi_2 = ecx_17
                
                void* eax_18 = data_6c9d78 * 0x1c0 + ecx_17
                
                if (esi_2 u>= eax_18)
                    break
                
                while ((*(esi_2 + 0x1bc) & 0xffff0000) == 0)
                    esi_2 += 0x1c0
                    
                    if (esi_2 u>= eax_18)
                        goto label_48ec5a
                
                sub_4c99f0(esi_2)
                int32_t ecx_19 = data_6c9d80
                data_6c9d80 = zx.d(*(esi_2 + 0x1bc))
                *(esi_2 + 0x1bc) = ecx_19
                data_6c9d84 -= 1
                ecx_17 = data_6c9d74
            
        label_48ec5a:
            data_6c9d78 = 0
            data_6c9d80 = 0
            
            if (ecx_17 != 0)
                _aligned_free_base(ecx_17)
            
            __builtin_memset(&data_6c9d74, 0, 0x14)
            data_6c9d8c = 0
        
        void* esi_3 = data_6c9d90
        
        if (esi_3 != 0)
            void* edx_5 = nullptr
            
            while (true)
                if (edx_5 != 0)
                    edx_5 += 0x438
                else
                    edx_5 = esi_3
                
                void* ecx_21 = data_6c9d94 * 0x438 + esi_3
                
                if (edx_5 u>= ecx_21)
                    break
                
                while (true)
                    int32_t eax_20 = *(edx_5 + 0x434)
                    
                    if ((eax_20 & 0xffff0000) != 0)
                        int32_t ecx_23 = data_6c9d9c
                        data_6c9d9c = zx.d(eax_20.w)
                        *(edx_5 + 0x434) = ecx_23
                        data_6c9da0 -= 1
                        esi_3 = data_6c9d90
                        break
                    
                    edx_5 += 0x438
                    
                    if (edx_5 u>= ecx_21)
                        goto label_48ed37
            
        label_48ed37:
            data_6c9d94 = 0
            data_6c9d9c = 0
            
            if (esi_3 != 0)
                _aligned_free_base(esi_3)
            
            __builtin_memset(&data_6c9d90, 0, 0x14)
            data_6c9da8 = 0
    
    void* ecx_22 = data_63e5a8
    
    if (ecx_22 != 0)
        void* esi_4 = nullptr
        
        while (true)
            if (esi_4 != 0)
                esi_4 += 0x1418
            else
                esi_4 = ecx_22
            
            void* eax_23 = data_63e5ac * 0x1418 + ecx_22
            
            if (esi_4 u>= eax_23)
                break
            
            while ((*(esi_4 + 0x1410) & 0xffff0000) == 0)
                esi_4 += 0x1418
                
                if (esi_4 u>= eax_23)
                    goto label_48ee06
            
            sub_4bd6d0(esi_4)
            int32_t ecx_26 = data_63e5b4
            data_63e5b4 = zx.d(*(esi_4 + 0x1410))
            *(esi_4 + 0x1410) = ecx_26
            data_63e5b8 -= 1
            ecx_22 = data_63e5a8
        
    label_48ee06:
        data_63e5ac = 0
        data_63e5b4 = 0
        
        if (ecx_22 != 0)
            _aligned_free_base(ecx_22)
        
        __builtin_memset(&data_63e5a8, 0, 0x14)
        data_63e5c0 = 0
    
    void* ecx_24 = data_63e5c4
    
    if (ecx_24 != 0)
        void* esi_5 = nullptr
        
        while (true)
            if (esi_5 != 0)
                esi_5 += 0x248
            else
                esi_5 = ecx_24
            
            void* eax_26 = data_63e5c8 * 0x248 + ecx_24
            
            if (esi_5 u>= eax_26)
                break
            
            while ((*(esi_5 + 0x244) & 0xffff0000) == 0)
                esi_5 += 0x248
                
                if (esi_5 u>= eax_26)
                    goto label_48eeea
            
            int32_t var_8_7 = 4
            `eh vector vbase constructor iterator'(esi_5 + 0xc, 0x34, 2, sub_498c00)
            int32_t var_8_8 = 0xffffffff
            int32_t ecx_27 = data_63e5d0
            data_63e5d0 = zx.d(*(esi_5 + 0x244))
            *(esi_5 + 0x244) = ecx_27
            data_63e5d4 -= 1
            ecx_24 = data_63e5c4
        
    label_48eeea:
        data_63e5c8 = 0
        data_63e5d0 = 0
        
        if (ecx_24 != 0)
            ecx_24 = _aligned_free_base(ecx_24)
        
        __builtin_memset(&data_63e5c4, 0, 0x14)
        data_63e5dc = 0
    
    if (data_1150c9f != 0)
        void* esi_6 = data_6cacf4
        
        if (esi_6 != 0)
            void* edx_6 = nullptr
            
            while (true)
                if (edx_6 != 0)
                    edx_6 += 0x4d0
                else
                    edx_6 = esi_6
                
                ecx_24 = data_6cacf8 * 0x4d0 + esi_6
                
                if (edx_6 u>= ecx_24)
                    break
                
                while (true)
                    int32_t eax_29 = *(edx_6 + 0x4cc)
                    
                    if ((eax_29 & 0xffff0000) != 0)
                        int32_t ecx_33 = data_6cad00
                        data_6cad00 = zx.d(eax_29.w)
                        *(edx_6 + 0x4cc) = ecx_33
                        data_6cad04 -= 1
                        esi_6 = data_6cacf4
                        break
                    
                    edx_6 += 0x4d0
                    
                    if (edx_6 u>= ecx_24)
                        goto label_48efeb
            
        label_48efeb:
            data_6cacf8 = 0
            data_6cad00 = 0
            
            if (esi_6 != 0)
                ecx_24 = _aligned_free_base(esi_6)
            
            __builtin_memset(&data_6cacf4, 0, 0x14)
            data_6cad0c = 0
    
    int32_t* esi_7 = data_1150b90
    
    if (esi_7 != 0)
        int32_t var_8_9 = 5
        
        if (data_aca1f4 != 0)
            char* eax_30 = *esi_7
            
            if (eax_30 != 0 && *eax_30 != 0)
                char* eax_31 = sub_48a080(esi_7)
                int32_t temp2_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_31, *(eax_31 + 0xc) + 0x10)
                    *esi_7 = &data_5b2591
                
                esi_7 = data_1150b90
        
        int32_t var_8_10 = 0xffffffff
        ecx_24 = sub_4984f0(esi_7, 4)
        data_1150b90 = 0
    
    sub_4e5380(ecx_24)
    int32_t* ecx_32 = data_114e834
    
    if (ecx_32 != 0)
        (*(*ecx_32 + 4))()
        int32_t var_24_8 = 4
        operator new(data_114e834)
        int32_t* eax_33 = data_114e838
        int32_t* esi_8 = eax_33
        data_114e834 = 0
        
        if (*esi_8 != 0)
            int32_t edx_9 = 0
        label_48f0f4:
            int32_t edi_2 = *esi_8
            int32_t ebx_1 = edi_2
            
            if (edx_9 != 0)
                edx_9 += 0x64
            else
                edx_9 = edi_2
            
            int32_t ecx_35 = esi_8[1] * 0x64 + ebx_1
            
            if (edx_9 u< ecx_35)
                do
                    int32_t eax_35 = *(edx_9 + 0x60)
                    
                    if ((eax_35 & 0xffff0000) != 0)
                        int32_t ecx_43 = esi_8[3]
                        esi_8[3] = zx.d(eax_35.w)
                        *(edx_9 + 0x60) = ecx_43
                        esi_8[4] -= 1
                        goto label_48f0f4
                    
                    edx_9 += 0x64
                while (edx_9 u< ecx_35)
                
                ebx_1 = edi_2
            
            esi_8[1] = 0
            esi_8[3] = 0
            
            if (ebx_1 != 0)
                _aligned_free_base(ebx_1)
            
            eax_33 = data_114e838
            __builtin_memset(esi_8, 0, 0x14)
            esi_8[6] = 0
        
        if (eax_33 != 0)
            sub_4984f0(eax_33, 0x28)
            data_114e838 = 0
    
    char* ecx_37 = data_114e848
    
    if (*ecx_37 != 0)
        HANDLE hSemaphore = *(ecx_37 + 0x20)
        ecx_37[1] = 1
        ReleaseSemaphore(hSemaphore, 1, nullptr)
        WaitForSingleObject(*(data_114e848 + 0x1c), 0xffffffff)
        DeleteCriticalSection(data_114e848 + 4)
        CloseHandle(*(data_114e848 + 0x20))
        CloseHandle(*(data_114e848 + 0x1c))
        ecx_37 = data_114e848
        *ecx_37 = 0
    
    sub_4984f0(ecx_37, 0x74)
    int32_t* ecx_38 = data_114ec78
    data_114e848 = 0
    
    if (ecx_38 != 0)
        (*(*ecx_38 + 4))()
    
    int32_t* i_4 = data_1150da4:4
    
    if (i_4 != 0)
        int32_t* i_1
        
        do
            i_1 = *i_4
            _aligned_free_base(i_4)
            i_4 = i_1
        while (i_1 != 0)
    
    int32_t* ecx_39 = data_aca1f0
    data_1150da4:4 = 0
    data_1150da4:0xc = 0
    
    if (ecx_39 != 0)
        sub_4984f0(ecx_39, 0x30)
        data_aca1f0 = 0
    
    int32_t ecx_40 = data_aca1f4
    
    for (void* i_2 = nullptr; i_2 s< 0xa0; )
        int32_t* j_1 = *(i_2 + ecx_40 + 4)
        void* ebx_2 = i_2 + ecx_40
        
        if (j_1 != 0)
            int32_t* j
            
            do
                j = *j_1
                _aligned_free_base(j_1)
                j_1 = j
            while (j != 0)
            ecx_40 = data_aca1f4
        
        i_2 += 0x14
        *(ebx_2 + 4) = 0
    
    if (ecx_40 != 0)
        _aligned_free_base(ecx_40)
    
    int32_t* result = data_a7561c
    data_aca1f4 = 0
    
    if (result != 0)
        result = _fclose(result)
        data_a7561c = 0
    
    data_aca1ec = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
