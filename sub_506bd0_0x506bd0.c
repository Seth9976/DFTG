// 函数名称: sub_506bd0
// 虚拟地址: 0x506bd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_506bd0(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a194b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_5c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    void* esi = *arg1
    char* result = nullptr
    void* var_24 = esi
    char* result_1 = nullptr
    
    if (*(esi + 8) s> 0)
        while (true)
            int32_t* edi_2 = result * 0x168 + *esi
            _memset(&edi_2[5], 0, 0x71)
            _memset(edi_2 + 0x85, 0, 0x71)
            void* edx_1 = data_12bac50
            edi_2[0x3f] = 1
            edi_2[0x3e] = 1
            edi_2[0x40] = 0x3c23d70a
            edi_2[0x41] = 0x3c23d70a
            edi_2[0x58] = 0
            sub_4cea80(&edi_2[0x44], edx_1, &edi_2[0x44], &data_626728)
            sub_4cea80(&edi_2[0x48], data_12bac50, &edi_2[0x48], &data_626728)
            sub_4cea80(&edi_2[0x4c], data_12bac50, &edi_2[0x4c], &data_626728)
            int32_t ecx_4 = 0
            int32_t var_30_1 = 0
            
            if (*edi_2 s> 0)
                int32_t* eax_9 = edi_2
                
                while (true)
                    int32_t* edi_5 = (ecx_4 << 4) + eax_9[2]
                    int32_t* ecx_5 = *edi_5
                    
                    if (ecx_5 u>= 0x71)
                        sub_489550(eax_9, &data_5b2591, 
                            "attribPair.tag >= 0 && attribPair.tag < NUM_PARTICLE_PARAM_TYPES", 
                            "d:\ax\trunk\ax2017\engine\particle.cpp", 0xaf3, "ParticleReimport")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    char* esi_1 = edi_5[2]
                    char* var_2c_1 = esi_1
                    
                    if (ecx_5 != 0x23 && ecx_5 != 0x24 && ecx_5 != 0x25 && ecx_5 != 0x26
                            && ecx_5 != 0x27 && ecx_5 != 0x28 && ecx_5 != 0x3c && ecx_5 != 0x29
                            && ecx_5 != 0x2a && ecx_5 != 0x2b && ecx_5 != 0x2c && ecx_5 != 0x2d
                            && ecx_5 != 0x2e && ecx_5 != 0x2f && ecx_5 != 0x30 && ecx_5 != 0x31
                            && ecx_5 != 0x37 && ecx_5 != 0x36 && ecx_5 != 0x32 && ecx_5 != 0x33
                            && ecx_5 != 0x34 && ecx_5 != 0x35 && ecx_5 != 0x41 && ecx_5 != 0x50
                            && ecx_5 != 0x38 && ecx_5 != 0x4b && ecx_5 != 0x4c && ecx_5 != 9
                            && ecx_5 != 0x68 && ecx_5 != 0x67 && ecx_5 != 0x69 && ecx_5 != 0x6b
                            && ecx_5 != 0x6a)
                        eax_9 = ecx_5
                    
                    if (ecx_5 == 0x23 || ecx_5 == 0x24 || ecx_5 == 0x25 || ecx_5 == 0x26
                            || ecx_5 == 0x27 || ecx_5 == 0x28 || ecx_5 == 0x3c || ecx_5 == 0x29
                            || ecx_5 == 0x2a || ecx_5 == 0x2b || ecx_5 == 0x2c || ecx_5 == 0x2d
                            || ecx_5 == 0x2e || ecx_5 == 0x2f || ecx_5 == 0x30 || ecx_5 == 0x31
                            || ecx_5 == 0x37 || ecx_5 == 0x36 || ecx_5 == 0x32 || ecx_5 == 0x33
                            || ecx_5 == 0x34 || ecx_5 == 0x35 || ecx_5 == 0x41 || ecx_5 == 0x50
                            || ecx_5 == 0x38 || ecx_5 == 0x4b || ecx_5 == 0x4c || ecx_5 == 9
                            || ecx_5 == 0x68 || ecx_5 == 0x67 || ecx_5 == 0x69 || ecx_5 == 0x6b
                            || ecx_5 == 0x6a || ecx_5 == 0x17)
                        sub_4f0910(eax_9, &edi_2[0x44], &data_626728, ecx_5, esi_1, edi_5[3])
                        ecx_5 = *edi_5
                        eax_9 = ecx_5
                    
                    if (eax_9 == 0x11 || eax_9 == 0x12 || eax_9 == 0x14 || eax_9 == 0xf || eax_9 == 0x10
                            || eax_9 == 0x13)
                        sub_4f0910(eax_9, &edi_2[0x48], &data_626728, eax_9, edi_5[2], edi_5[3])
                        ecx_5 = *edi_5
                        eax_9 = ecx_5
                    
                    if (eax_9 == 0x63 || eax_9 == 0x3d || eax_9 == 0x3e || eax_9 == 0x3f
                            || eax_9 == 0x40 || eax_9 == 0x41 || eax_9 == 0x52 || eax_9 == 0x42
                            || eax_9 == 0x43 || eax_9 == 0x44 || eax_9 == 0x45 || eax_9 == 0x46
                            || eax_9 == 0x47 || eax_9 == 0x48 || eax_9 == 0x49 || eax_9 == 0x4a
                            || eax_9 == 0x1f || eax_9 == 0x20 || eax_9 == 0x21 || eax_9 == 0x51
                            || eax_9 == 0x39 || eax_9 == 0x3a || eax_9 == 0x3b || eax_9 == 0x53)
                        sub_4f0910(eax_9, &edi_2[0x4c], &data_626728, ecx_5, edi_5[2], edi_5[3])
                        eax_9 = *edi_5
                    
                    int32_t* ecx_20
                    
                    if (eax_9 == 0xc)
                        int32_t edx_7 = *(esi_1 + 8)
                        int32_t eax_10 = 0
                        void* ecx_6
                        
                        if (edx_7 s> 0)
                            ecx_6 = *esi_1
                            int32_t* ecx_7 = ecx_6 + 8
                            
                            while (not(*ecx_7 f>= 0))
                                eax_10 += 1
                                ecx_7 = &ecx_7[4]
                                
                                if (eax_10 s>= edx_7)
                                    break
                        
                        int32_t xmm0_7
                        
                        if (edx_7 s<= 0 || eax_10 == 0)
                            xmm0_7 = sub_526140(*esi_1, *(esi_1 + 0xc), (zx.o(0)).d)
                        else
                            int32_t xmm1_1 = (zx.o(0)).d
                            
                            if (eax_10 != edx_7)
                                int32_t* esi_3 = ecx_6 + (eax_10 << 4)
                                float xmm2_2 = (0f f- esi_3[-2]) / (esi_3[2] f- esi_3[-2])
                                float xmm0_4 = sub_526140(&esi_3[-4], *(var_2c_1 + 0xc), xmm1_1)
                                float xmm0_5 = sub_526140(esi_3, *(var_2c_1 + 0xc), (zx.o(0)).d)
                                xmm0_7 = sub_41f140(esi_3[3], xmm2_2, xmm0_4, xmm0_5)
                                esi_1 = var_2c_1
                            else
                                xmm0_7 =
                                    sub_526140(*esi_1 + (edx_7 << 4) - 0x10, *(esi_1 + 0xc), xmm1_1)
                        
                        *(var_24 + 0xc) = xmm0_7
                        int32_t eax_14 = 0
                        int32_t edx_14 = *(esi_1 + 8)
                        
                        if (edx_14 s> 0)
                            int32_t* ecx_14 = *esi_1 + 8
                            
                            while (not(*ecx_14 f>= 0))
                                eax_14 += 1
                                ecx_14 = &ecx_14[4]
                                
                                if (eax_14 s>= edx_14)
                                    break
                        
                        int32_t xmm0_14
                        
                        if (edx_14 s<= 0 || eax_14 == 0)
                            xmm0_14 = sub_526140(*esi_1, *(esi_1 + 0xc), 1f)
                        else if (eax_14 != edx_14)
                            int32_t* esi_5 = *esi_1 + (eax_14 << 4)
                            float xmm2_5 = (0f f- esi_5[-2]) / (esi_5[2] f- esi_5[-2])
                            float xmm0_11 = sub_526140(&esi_5[-4], *(var_2c_1 + 0xc), 1f)
                            float xmm0_12 = sub_526140(esi_5, *(var_2c_1 + 0xc), 1f)
                            xmm0_14 = sub_41f140(esi_5[3], xmm2_5, xmm0_11, xmm0_12)
                        else
                            xmm0_14 = sub_526140(*esi_1 + (edx_14 << 4) - 0x10, *(esi_1 + 0xc), 1f)
                        
                        esi = var_24
                        *(esi + 0x18) = xmm0_14
                        ecx_20 = edi_2
                    else if (eax_9 == 0xd)
                        int32_t edx_20 = *(esi_1 + 8)
                        int32_t eax_24 = 0
                        void* ecx_22
                        
                        if (edx_20 s> 0)
                            ecx_22 = *esi_1
                            int32_t* ecx_23 = ecx_22 + 8
                            
                            while (not(*ecx_23 f>= 0))
                                eax_24 += 1
                                ecx_23 = &ecx_23[4]
                                
                                if (eax_24 s>= edx_20)
                                    break
                        
                        int32_t xmm0_21
                        
                        if (edx_20 s<= 0 || eax_24 == 0)
                            xmm0_21 = sub_526140(*esi_1, *(esi_1 + 0xc), (zx.o(0)).d)
                        else
                            int32_t xmm1_5 = (zx.o(0)).d
                            
                            if (eax_24 != edx_20)
                                int32_t* esi_7 = ecx_22 + (eax_24 << 4)
                                float xmm2_8 = (0f f- esi_7[-2]) / (esi_7[2] f- esi_7[-2])
                                float xmm0_18 = sub_526140(&esi_7[-4], *(var_2c_1 + 0xc), xmm1_5)
                                float xmm0_19 = sub_526140(esi_7, *(var_2c_1 + 0xc), (zx.o(0)).d)
                                xmm0_21 = sub_41f140(esi_7[3], xmm2_8, xmm0_18, xmm0_19)
                                esi_1 = var_2c_1
                            else
                                xmm0_21 =
                                    sub_526140(*esi_1 + (edx_20 << 4) - 0x10, *(esi_1 + 0xc), xmm1_5)
                        
                        *(var_24 + 0x10) = xmm0_21
                        int32_t eax_29 = 0
                        int32_t edx_26 = *(esi_1 + 8)
                        
                        if (edx_26 s> 0)
                            int32_t* ecx_30 = *esi_1 + 8
                            
                            while (not(*ecx_30 f>= 0))
                                eax_29 += 1
                                ecx_30 = &ecx_30[4]
                                
                                if (eax_29 s>= edx_26)
                                    break
                        
                        if (edx_26 s<= 0 || eax_29 == 0)
                            esi = var_24
                            *(esi + 0x1c) = sub_526140(*esi_1, *(esi_1 + 0xc), 1f)
                        else if (eax_29 != edx_26)
                            int32_t* esi_9 = *esi_1 + (eax_29 << 4)
                            float xmm2_11 = (0f f- esi_9[-2]) / (esi_9[2] f- esi_9[-2])
                            float xmm0_25 = sub_526140(&esi_9[-4], *(var_2c_1 + 0xc), 1f)
                            float xmm0_26 = sub_526140(esi_9, *(var_2c_1 + 0xc), 1f)
                            esi = var_24
                            *(esi + 0x1c) = sub_41f140(esi_9[3], xmm2_11, xmm0_25, xmm0_26)
                        else
                            esi = var_24
                            *(esi + 0x1c) =
                                sub_526140(*esi_1 + (edx_26 << 4) - 0x10, *(esi_1 + 0xc), 1f)
                        
                        ecx_20 = edi_2
                    else if (eax_9 == 0xe)
                        *(var_24 + 0x14) = sub_526200(esi_1, 0, (zx.o(0)).d, (zx.o(0)).d)
                        esi = var_24
                        *(esi + 0x20) = sub_526200(esi_1, 0, (zx.o(0)).d, 1f)
                        ecx_20 = edi_2
                    else if (eax_9 == 6)
                        float xmm0_33 = sub_526200(esi_1, 0, (zx.o(0)).d, (zx.o(0)).d)
                        float xmm1_13
                        
                        if (0 f<= xmm0_33)
                            xmm1_13 = xmm0_33 + 0.5f
                        else
                            xmm1_13 = xmm0_33 - 0.5f
                        
                        esi = var_24
                        int32_t eax_34 = 1
                        int32_t ecx_39 = int.d(xmm1_13)
                        
                        if (ecx_39 s> 1)
                            eax_34 = ecx_39
                        
                        ecx_20 = edi_2
                        ecx_20[0x3e] = eax_34
                    else if (eax_9 == 7)
                        float xmm0_34 = sub_526200(esi_1, 0, (zx.o(0)).d, (zx.o(0)).d)
                        float xmm1_16
                        
                        if (0 f<= xmm0_34)
                            xmm1_16 = xmm0_34 + 0.5f
                        else
                            xmm1_16 = xmm0_34 - 0.5f
                        
                        esi = var_24
                        int32_t eax_35 = 1
                        int32_t ecx_41 = int.d(xmm1_16)
                        
                        if (ecx_41 s> 1)
                            eax_35 = ecx_41
                        
                        ecx_20 = edi_2
                        ecx_20[0x3f] = eax_35
                    else if (eax_9 == 0x15)
                        ecx_20 = edi_2
                        esi = var_24
                        ecx_20[0x42] =
                            sub_526200(esi_1, 0, (zx.o(0)).d, (zx.o(0)).d) ^ (data_60cca0.o).d
                    else if (eax_9 != 0x16)
                        esi = var_24
                        
                        if (eax_9 == 8)
                            ecx_20 = edi_2
                            ecx_20[0x50] = edi_5[2]
                        else if (eax_9 == 0xa)
                            ecx_20 = edi_2
                            ecx_20[0x52] = edi_5[2]
                        else if (eax_9 == 0xb)
                            ecx_20 = edi_2
                            ecx_20[0x54] = edi_5[2]
                        else if (eax_9 == 5)
                            ecx_20 = edi_2
                            ecx_20[0x56] = edi_5[2]
                        else if (eax_9 == 0x55)
                            ecx_20 = edi_2
                            
                            if ((edi_5[2] | edi_5[3]) != 0)
                                ecx_20[0x58] = 1
                        else if (eax_9 == 0x56)
                            ecx_20 = edi_2
                            
                            if ((edi_5[2] | edi_5[3]) != 0)
                                ecx_20[0x58] = 2
                        else if (eax_9 == 0x57)
                            ecx_20 = edi_2
                            
                            if ((edi_5[2] | edi_5[3]) != 0)
                                ecx_20[0x58] = 3
                        else if (eax_9 != 0x58 || (edi_5[2] | edi_5[3]) == 0)
                            ecx_20 = edi_2
                        else
                            ecx_20 = edi_2
                            ecx_20[0x58] = 4
                    else
                        ecx_20 = edi_2
                        esi = var_24
                        ecx_20[0x43] =
                            sub_526200(esi_1, 0, (zx.o(0)).d, (zx.o(0)).d) ^ (data_60cca0.o).d
                    
                    int32_t eax_18 = *edi_5
                    *(eax_18 + ecx_20 + 0x14) = 1
                    char* ecx_21 = *edi_5
                    
                    if (ecx_21 s< 0 || ecx_21 s>= data_626738)
                        sub_489550(eax_18, &data_5b2591, 
                            "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                            "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_489700()
                            noreturn
                        
                        breakpoint
                    
                    void* eax_21 = *(*(data_626734 + (ecx_21 << 2)) + 0xc)
                    
                    if (eax_21 == 0)
                        sub_489550(eax_21, &data_5b2591, "pAttribField->pDefMap", 
                            "d:\ax\trunk\ax2017\engine\attribmap.cpp", 0x1fe, "AttribTagGetDefMap")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    if (*(eax_21 + 0x10) == 0xa)
                        int32_t eax_23
                        
                        if ((edi_5[2] | edi_5[3]) == 0)
                            eax_23.b = 0
                        else
                            eax_23.b = 1
                        
                        *(ecx_21 + edi_2 + 0x85) = eax_23.b
                    
                    eax_9 = edi_2
                    ecx_4 = var_30_1 + 1
                    var_30_1 = ecx_4
                    
                    if (ecx_4 s>= *eax_9)
                        break
                    
                    continue
            
            result = &result_1[1]
            result_1 = result
            
            if (result s>= *(esi + 8))
                break
    
    int32_t var_14_2 = 1
    
    if (data_aca1f4 != 0)
        char* result_2
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
