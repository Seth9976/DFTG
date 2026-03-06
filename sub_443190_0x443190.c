// 函数名称: sub_443190
// 虚拟地址: 0x443190
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_443190(int32_t arg1, void* arg2, void* arg3, int32_t* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int64_t xmm0 = -0x4010000000000000
    int32_t* eax_2 = arg4
    int32_t* esi = arg5
    int32_t* var_e14 = esi
    int64_t var_e40 = xmm0
    int32_t var_e1c = 0
    int32_t var_e04 = 0
    
    if (*esi != 0)
        if (*(arg3 + 0x10) != 0 && *(arg3 + 0x14) != arg2)
            int32_t eax_3
            eax_3.b = arg6 != 0
            *esi = eax_3
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_3
        
        int32_t* eax_4 = sub_442d70(arg3, arg2)
        
        if (eax_4[2] != 0)
            data_13902ec += 1
            int32_t* eax_5 = var_e14
            void var_1b0
            __builtin_memcpy(&var_1b0, eax_4, 0x1a0)
            int32_t i = 0
            
            if (*eax_5 s> 0)
                int32_t ebx_1 = arg2 * 0x1bc
                int32_t var_e28_1 = ebx_1
                
                do
                    int32_t edi_1 = eax_2[i]
                    void* eax_7 = arg3
                    int32_t ecx_2 = ebx_1 + (edi_1 << 3)
                    void* edx
                    edx.b = *(ecx_2 + eax_7 + 0x25)
                    int32_t var_1a4[0xb]
                    
                    if (edx.b == 5)
                        if (var_1a4[zx.d(*(ecx_2 + eax_7 + 0x24))] == 0)
                            eax_7 = arg3
                        else
                            eax_2[var_e04] = edi_1
                            var_e04 += 1
                            uint32_t eax_10 = zx.d(*(ecx_2 + arg3 + 0x24))
                            var_1a4[eax_10] -= 1
                            eax_7 = arg3
                            edx.b = *(ecx_2 + eax_7 + 0x25)
                    int32_t var_178[0xb]
                    int32_t* edi_2
                    
                    if (edx.b != 6)
                        edi_2 = eax_2
                    label_443321:
                        
                        if (edx.b == 3)
                            edx = *(*(arg3 + (sx.d(*(ecx_2 + eax_7 + 0x2a)) + 0xbb) * 0xc) + 0x18) * 0xb
                            int32_t var_14c[0x50]
                            
                            if (var_14c[zx.d(*(ecx_2 + arg3 + 0x24)) + edx] != 0)
                                int32_t ebx_2 = var_e04
                                var_e04 += 1
                                edi_2[ebx_2] = edi_2[i]
                                ebx_1 = var_e28_1
                                void* eax_25 = zx.d(*(ecx_2 + arg3 + 0x24)) + edx
                                var_14c[eax_25] -= 1
                    else if (var_178[zx.d(*(ecx_2 + eax_7 + 0x24))] != 0)
                        edi_2 = eax_2
                        edi_2[var_e04] = edi_2[i]
                        var_e04 += 1
                        uint32_t eax_13 = zx.d(*(ecx_2 + arg3 + 0x24))
                        var_178[eax_13] -= 1
                        eax_7 = arg3
                        edx.b = *(ecx_2 + eax_7 + 0x25)
                        goto label_443321
                    eax_5 = var_e14
                    i += 1
                while (i s< *eax_5)
            
            *eax_5 = var_e04
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_5
        
        data_13902e0 += 1
        void var_e00
        
        if (arg6 == 0)
            sub_43a6c0(eax_4, arg3, &var_e00, arg2)
            var_e40 = sub_43c700()
        
        int32_t edx_8 = 0
        int32_t esi_4
        
        while (true)
            int64_t xmm0_2 = xmm0
            int32_t edi_3 = *esi
            int32_t eax_26 = 0xffffffff
            int32_t ecx_7 = 0
            int64_t var_e38_1 = xmm0_2
            int32_t var_e28_2 = 0xffffffff
            int32_t ebx_4 = not.d(edx_8)
            int32_t var_e2c_1 = ebx_4
            int32_t var_e18_1 = 0
            
            if (edi_3 s<= 0)
                esi_4 = edi_3
            else
                do
                    esi_4 = edi_3
                    int32_t eax_27 = 1 << ecx_7.b
                    
                    if ((ebx_4 & eax_27) != 0)
                        sub_43a6c0(eax_27, arg3, &var_e00, arg2)
                        int32_t i_1 = 0
                        char var_ddb[0x5]
                        char var_dd6[0x8a2]
                        char var_534[0x1e4]
                        
                        if (edi_3 s> 0)
                            do
                                if ((var_e1c & 1 << i_1.b) != 0)
                                    int32_t ecx_11 = arg2 * 0x1bc + (eax_2[i_1] << 3)
                                    
                                    if (var_ddb[ecx_11] == 3)
                                        int32_t eax_31 = sx.d(var_dd6[ecx_11]) * 3
                                        var_534[eax_31 << 2] -= 1
                                        var_dd6[ecx_11] = 0xff
                                    
                                    var_ddb[ecx_11] = 1
                                
                                i_1 += 1
                            while (i_1 s< *var_e14)
                            
                            ebx_4 = var_e2c_1
                        
                        int32_t ecx_12 = arg2 * 0x1bc
                        int32_t edi_4 = ecx_12 + (eax_2[var_e18_1] << 3)
                        
                        if (var_ddb[edi_4] == 3)
                            int32_t eax_36 = sx.d(var_dd6[edi_4]) * 3
                            var_534[eax_36 << 2] -= 1
                            var_dd6[edi_4] = 0xff
                        
                        var_ddb[edi_4] = 1
                        xmm0_2 = sub_43c700()
                        
                        if (xmm0_2 f<= var_e38_1)
                            xmm0_2 = var_e38_1
                        else
                            var_e38_1 = xmm0_2
                            var_e28_2 = var_e18_1
                        
                        int32_t ecx_13 = var_e18_1 + 1
                        esi_4 = *var_e14
                        
                        if (ecx_13 s< esi_4)
                            do
                                int32_t edx_12 = ecx_12 + (eax_2[ecx_13] << 3)
                                void var_ddc
                                int32_t eax_39
                                eax_39.b = *(&var_ddc + edi_4)
                                
                                if (eax_39.b == *(&var_ddc + edx_12))
                                    eax_39.b = var_ddb[edi_4]
                                    
                                    if (eax_39.b == var_ddb[edx_12])
                                        eax_39.b = var_dd6[edi_4]
                                        
                                        if (eax_39.b == var_dd6[edx_12])
                                            ebx_4 &= not.d(1 << (ecx_13 u% 0x20))
                                
                                ecx_13 += 1
                            while (ecx_13 s< esi_4)
                            
                            var_e2c_1 = ebx_4
                        
                        ecx_7 = var_e18_1
                    
                    ecx_7 += 1
                    edi_3 = esi_4
                    var_e18_1 = ecx_7
                while (ecx_7 s< esi_4)
                
                edx_8 = var_e1c
                eax_26 = var_e28_2
            
            if (xmm0_2 f<= var_e40)
                break
            
            esi = var_e14
            edx_8 |= 1 << (eax_26 u% 0x20)
            var_e40 = xmm0_2
            var_e1c = edx_8
        
        int32_t i_2 = 0
        int32_t* eax_42
        
        if (esi_4 s<= 0)
            eax_42 = var_e14
        else
            do
                if ((edx_8 & 1 << i_2.b) != 0)
                    eax_2[var_e04] = eax_2[i_2]
                    edx_8 = var_e1c
                    var_e04 += 1
                
                eax_42 = var_e14
                i_2 += 1
            while (i_2 s< *eax_42)
        
        int32_t ecx_14 = var_e04
        int32_t esi_5 = 0
        *eax_42 = ecx_14
        
        if (ecx_14 s> 0)
            do
                int32_t edx_14 = arg2 * 0x1bc + (eax_2[esi_5] << 3)
                uint32_t eax_44
                eax_44.b = *(edx_14 + arg3 + 0x25)
                
                if (eax_44.b == 5)
                    eax_44 = zx.d(*(edx_14 + arg3 + 0x24))
                    eax_4[eax_44 + 3] += 1
                    eax_44.b = *(edx_14 + arg3 + 0x25)
                    ecx_14 = var_e04
                
                if (eax_44.b == 6)
                    eax_44 = zx.d(*(edx_14 + arg3 + 0x24))
                    eax_4[eax_44 + 0xe] += 1
                    eax_44.b = *(edx_14 + arg3 + 0x25)
                    ecx_14 = var_e04
                
                if (eax_44.b == 3)
                    int32_t ecx_18 =
                        *(*(arg3 + (sx.d(*(edx_14 + arg3 + 0x2a)) + 0xbb) * 0xc) + 0x18) * 0xb
                        + zx.d(*(edx_14 + arg3 + 0x24))
                    eax_4[ecx_18 + 0x19] += 1
                    ecx_14 = var_e04
                
                esi_5 += 1
            while (esi_5 s< ecx_14)
        
        eax_2 = eax_4
        eax_2[2] = 1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_2
}
