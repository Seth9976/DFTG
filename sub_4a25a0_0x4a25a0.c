// 函数名称: sub_4a25a0
// 虚拟地址: 0x4a25a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4a25a0(int32_t arg1, void* arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = *(arg3 + 0xfec)
    int128_t* eax_4
    
    if (eax_2 == 2)
        int32_t var_254_5 = __builtin_memcpy(arg4, arg3 + 0x1014, 0xd4)
        void var_168
        int128_t* eax_20 = sub_49fd90(&var_168, *(arg2 + 0x109c), arg3, &var_168)
        bool cond:0_1 = data_114e804 == 0
        int128_t xmm1_3 = eax_20[1]
        int128_t xmm2_4 = eax_20[2]
        int128_t xmm3_4 = eax_20[3]
        int128_t xmm4_2 = eax_20[4]
        int128_t xmm5_2 = eax_20[5]
        eax_4 = arg4
        *eax_4 = *eax_20
        eax_4[1] = xmm1_3
        eax_4[2] = xmm2_4
        eax_4[3] = xmm3_4
        eax_4[4] = xmm4_2
        eax_4[5] = xmm5_2
        
        if (not(cond:0_1))
            char* const edi_5 = &data_5b2591
            int32_t var_254_6 = *(arg3 + 0x1094)
            char* eax_21 = *(arg2 + 0xfd8)
            char* const ecx_14 = &data_5b2591
            
            if (eax_21 != 0)
                ecx_14 = eax_21
            
            char* eax_22 = *(arg3 + 0xfd8)
            char* const var_258_5 = ecx_14
            
            if (eax_22 != 0)
                edi_5 = eax_22
            
            char* const var_25c_3 = edi_5
            eax_4 = sub_4892e0("%s %s tbl layer %d")
    else
        eax_4 = eax_2 - 0xa
        
        if (eax_2 == 0xa)
            int32_t* eax_7 = *(arg3 + 0xe60)
            int32_t* var_104 = eax_7
            void* edi_2
            
            if (eax_7 == 0)
            label_4a26e7:
                edi_2 = arg3 + 0x1014
            else
                int32_t* eax_8 = sub_498ef0(arg3)
                eax_7 = sub_4f0e70(eax_8, eax_8, &data_6218dc, data_12bab48, 0xf8)
                
                if (eax_7 == 0)
                label_4a26e7_1:
                    edi_2 = arg3 + 0x1014
                else
                    int32_t ecx_1 = eax_7[2]
                    int32_t esi_2 = 0
                    
                    if (ecx_1 s<= 0)
                    label_4a26e7_2:
                        edi_2 = arg3 + 0x1014
                    else
                        void* eax_9 = *eax_7
                        char* edx_1 = *(arg2 + 0xfd8)
                        int32_t* ecx_3 = eax_9 + 8
                        char* var_fc_1 = edx_1
                        int32_t* var_f4_1 = ecx_3
                        
                        while (true)
                            char* ecx_4 = *ecx_3
                            char* const eax_10 = &data_5b2591
                            
                            if (edx_1 != 0)
                                eax_10 = edx_1
                            
                            while (true)
                                edx_1.b = *ecx_4
                                char temp2_1 = *eax_10
                                bool c_1 = edx_1.b u< temp2_1
                                
                                if (edx_1.b == temp2_1)
                                    if (edx_1.b == 0)
                                        eax_7 = nullptr
                                        break
                                    
                                    edx_1.b = ecx_4[1]
                                    char temp3_1 = eax_10[1]
                                    c_1 = edx_1.b u< temp3_1
                                    
                                    if (edx_1.b == temp3_1)
                                        ecx_4 = &ecx_4[2]
                                        eax_10 = &eax_10[2]
                                        
                                        if (edx_1.b != 0)
                                            continue
                                        
                                        eax_7 = nullptr
                                        break
                                
                                eax_7 = sbb.d(eax_10, eax_10, c_1) | 1
                                break
                            
                            if (eax_7 == 0)
                                edi_2 = arg3 + 0x1014
                                float var_144
                                eax_7 = sub_4da320(&var_144, *(eax_9 + esi_2 * 0x10), var_104, &var_144)
                                
                                if (eax_7.b == 0)
                                    break
                                
                                uint32_t var_88[0x2][0x4]
                                _memset(&var_88, 0, 0x74)
                                int128_t xmm4_1 = *(edi_2 + 0x10)
                                int128_t var_e8 = *edi_2
                                int128_t var_c8 = *(edi_2 + 0x20)
                                int128_t xmm5_1 = *(edi_2 + 0x30)
                                int128_t xmm6 = *(edi_2 + 0x40)
                                int128_t xmm7 = *(edi_2 + 0x50)
                                float var_140
                                var_e8:4.d = var_140 - (*(arg2 + 0x10ac) f- *(arg2 + 0x10a4)) * 0.5f
                                int32_t var_134
                                var_e8:0xc.d = var_134
                                float xmm2_2 = *(arg2 + 0x10a8) f- *(arg2 + 0x10a0)
                                int32_t var_13c
                                var_c8.d = var_13c
                                int128_t var_240
                                __builtin_memcpy(&var_240, arg3 + 0x1014, 0xd4)
                                int32_t var_138
                                var_c8:4.d = var_138
                                int32_t var_68
                                int32_t var_1c0 = var_68
                                float var_12c
                                float var_1e0 = var_12c f* *(arg3 + 0x1074)
                                int32_t var_10c
                                int32_t var_1bc = var_10c
                                float var_128
                                float var_1dc = *(arg3 + 0x1078) * var_128
                                var_e8.d = var_144 - xmm2_2 * 0.5f
                                float var_124
                                float var_1d8 = *(arg3 + 0x107c) * var_124
                                int32_t var_1b8 = *(arg3 + 0x109c)
                                int32_t var_178 = *(arg3 + 0x10dc)
                                float var_120
                                float var_1d4 = *(arg3 + 0x1080) * var_120
                                int32_t var_174 = *(arg3 + 0x10e0)
                                int32_t eax_18
                                eax_18.b = *(arg3 + 0x10e4)
                                int128_t var_11c
                                int128_t var_1d0 = var_11c
                                char var_170 = eax_18.b
                                int128_t var_230 = xmm4_1
                                var_240 = var_e8
                                int128_t var_210 = xmm5_1
                                int128_t var_220 = var_c8
                                int128_t var_200 = xmm6
                                int128_t var_1a4
                                __builtin_memcpy(&var_1a4, 
                                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                                "3f", 
                                    0x24)
                                int128_t var_1f0 = xmm7
                                int64_t var_180 = *(arg3 + 0x10d4)
                                __builtin_memcpy(arg4, &var_240, 0xd4)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return eax_18
                            
                            esi_2 += 1
                            edx_1 = var_fc_1
                            ecx_3 = &var_f4_1[4]
                            var_f4_1 = ecx_3
                            
                            if (esi_2 s>= ecx_1)
                                goto label_4a26e7_2
            
            __builtin_memcpy(arg4, edi_2, 0xd4)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_7
        
        bool cond:3_1 = data_114e804 == 0
        __builtin_memcpy(arg4, arg3 + 0x1014, 0xd4)
        
        if (not(cond:3_1))
            char* eax_5 = *(arg2 + 0xfd8)
            char* const edi_1 = &data_5b2591
            int32_t var_254_1 = *(arg3 + 0x1094)
            char* const ecx = &data_5b2591
            
            if (eax_5 != 0)
                ecx = eax_5
            
            char* eax_6 = *(arg3 + 0xfd8)
            char* const var_258_1 = ecx
            
            if (eax_6 != 0)
                edi_1 = eax_6
            
            char* const var_25c_1 = edi_1
            eax_4 = sub_4892e0("%s %s layer %d")
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_4
}
