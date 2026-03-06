// 函数名称: sub_475060
// 虚拟地址: 0x475060
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_475060(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* var_374
    int32_t* var_374
    void* eax_1 = __security_cookie ^ &var_374
    void* var_c = eax_1
    int32_t* ebx = arg3
    void* ecx = data_6cfe4c
    var_374 = ebx
    ebx[0x1aa] = 0
    int32_t* edi = arg2
    int32_t* var_36c = edi
    char const* const var_38c_1
    int32_t var_388_1
    char const* const var_384_1
    char* ecx_1
    
    if (ecx == 0)
    label_47509d:
        var_384_1 = "GetClient"
        var_388_1 = 0x75
        var_38c_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    label_475e40:
        sub_489550(eax_1, &data_5b2591, ecx_1, var_38c_1, var_388_1, var_384_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    eax_1 = sub_452b90(*(ecx + 0xa68))
    void* esi_1 = eax_1
    void* var_370_1 = esi_1
    void* eax_6
    void* ecx_12
    
    switch (*edi - 1)
        case 0
            data_126bd6c
            uint32_t eax_53 = sub_45a830(sub_4c5ce0(), ebx, esi_1, 1, false, 0, 5, 1, 0)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_53
        case 1
            data_126bd68
            sub_4c5ce0()
            int32_t* eax_31 = sub_4530b0()
            uint32_t edi_1 = var_370_1
            int32_t esi_2 = sub_45f4d0(*esi_1, eax_31[0x11]) - 1
            int32_t eax_33 = sub_452ea0(edi_1, 5)
            
            if (eax_33 s>= esi_2)
                data_126bdec
                eax_33 = sub_4c5ce0()
            
            uint32_t eax_34 = sub_45a830(eax_33, ebx, edi_1, 5, false, 1, 5, 1, 0)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_34
        case 2
            data_126bd68
            sub_4c5ce0()
            int32_t* eax_35 = sub_4530d0()
            uint32_t edi_2 = var_370_1
            int32_t esi_3 = sub_45f4f0(*esi_1, eax_35[0x11]) - 1
            int32_t eax_37 = sub_452ea0(edi_2, 6)
            
            if (eax_37 s>= esi_3)
                data_126bdec
                eax_37 = sub_4c5ce0()
            
            uint32_t eax_38 = sub_45a830(eax_37, ebx, edi_2, 6, false, 1, 5, 1, 0)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_38
        case 3
            data_126bd78
            int32_t eax_15 = sub_45aa00(sub_4c5ce0(), ebx, esi_1, ebx[4], 0)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_15
        case 4
            int32_t eax_57 = edi[5] + 9
            
            if (eax_57 != ebx[4] || *(ebx + 0x21) != 0)
                sub_45a830(eax_57, ebx, esi_1, eax_57, false, 1, 0, 1, 0)
                data_126bd68
            else
                sub_45aa00(eax_57, ebx, esi_1, eax_57, 0)
                data_126bd78
            
            sub_4c5ce0()
            sub_46a420(8)
            sub_46a420(9)
            
            if (sub_45e8c0(esi_1) != 0)
                int32_t eax_59 = sub_46a1d0(ebx)
                
                if (ebx[4] != eax_59)
                    sub_46a420(0x10)
            
            if (sub_46a1d0(ebx) == 9)
                int32_t eax_61 = ebx[4]
                
                if (eax_61 != 9 && eax_61 != 8)
                    sub_46a420(0x11)
            
            eax_6 = sub_457400(&ebx[2])
            
            if (eax_6 != 0)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_6
            
            ecx_12 = eax_6 + 0x12
            goto label_47517a
        case 5
            data_126bd74
            int32_t var_384_29 = sub_4c5ce0()
            int32_t var_b0[0x29]
            int32_t* eax_65 = sub_45e6c0(esi_1, &var_b0)
            int32_t ecx_145 = edi[5] + 9
            var_374 = eax_65
            sub_45a830(eax_65, ebx, esi_1, ecx_145, true, 1, 0, 1, 0)
            void* eax_66 = nullptr
            void* var_364_1 = nullptr
            
            if (var_374 s> 0)
                do
                    int32_t* ecx_147 = var_b0[eax_66]
                    
                    if (ecx_147 != ebx)
                        int32_t edi_8 = ecx_147[4]
                        *(ecx_147 + 0x21) = 0
                        sub_45a470(eax_66, ecx_147, esi_1, 2, 0)
                        char var_38c_24 = 0
                        char var_390_21 = 1
                        *(ecx_147 + 0x21) = 0
                        uint32_t eax_68 =
                            sub_45a5a0(ecx_147, ecx_147, esi_1, edi_8, var_390_21, var_38c_24)
                        int32_t var_2b4_1 = 0
                        uint32_t var_2ac[0x4]
                        _memset(&var_2ac, 0, 0x8c)
                        int32_t var_2bc_1 = sub_459da0(edi_8)
                        uint32_t var_2b8_1 = eax_68
                        int32_t var_2b0_1 = 0xffffffff
                        int32_t eax_70 = ecx_147[6]
                        int32_t var_2c0 = eax_70
                        void var_150
                        __builtin_memcpy(&var_150, &var_2c0, 0xa0)
                        sub_4528c0(eax_70, &var_150, &ecx_147[0x1c], 0, 0)
                        esi_1 = var_370_1
                        eax_66 = var_364_1
                    
                    eax_66 += 1
                    var_364_1 = eax_66
                while (eax_66 s< var_374)
                
                edi = var_36c
            
            *(esi_1 + 0xbe0) = edi[5] + 1
            sub_46a420(0xa)
            sub_46a420(0xc)
            ecx_12 = 0xb
            goto label_47517a
        case 6
            data_126bd68
            int32_t* eax_63 = sub_453300(sub_4c5ce0(), 0, esi_1, 0x80, nullptr)
            
            if (eax_63.b == 0)
                eax_63 = *(esi_1 + 0x2d4)
                
                if (eax_63 != 0)
                    uint32_t ecx_137 = zx.d(eax_63.w)
                    
                    if (ecx_137 u< data_62d6c8)
                        int32_t* edi_7 = ecx_137 * 0x8ac + data_62d6c4
                        
                        if (edi_7[0x22a] == eax_63)
                            int32_t eax_64 = sub_45e3d0(edi_7, 1)
                            eax_63 = sub_45a830(eax_64, edi_7, esi_1, eax_64, false, 0, 5, 1, 0)
            
            sub_45a830(eax_63, ebx, esi_1, 8, false, 1, 0, 1, 0)
            ecx_12 = 0xe
            goto label_47517a
        case 7
            data_126bd68
            sub_4c5ce0()
            eax_1 = sub_453650(esi_1) - 8
            
            if (eax_1 u<= 0xd)
                eax_1 = zx.d(*(eax_1 + &lookup_table_475edc))
                
                switch (eax_1)
                    case nullptr
                        uint32_t eax_9 = sub_474db0(esi_1, ebx)
                        @__security_check_cookie@4(var_c ^ &var_374)
                        return eax_9
                    case 1
                        uint32_t eax_10 = sub_45a830(eax_1, ebx, esi_1, 0xa, false, 1, 0, 1, 0)
                        @__security_check_cookie@4(var_c ^ &var_374)
                        return eax_10
                    case 2
                        uint32_t eax_11 = sub_45a830(eax_1, ebx, esi_1, 0xb, false, 1, 0, 1, 0)
                        @__security_check_cookie@4(var_c ^ &var_374)
                        return eax_11
                    case 3
                        uint32_t eax_12 = sub_45a830(eax_1, ebx, esi_1, 0xc, false, 1, 0, 1, 0)
                        @__security_check_cookie@4(var_c ^ &var_374)
                        return eax_12
                    case 4
                        uint32_t eax_13 = sub_45a830(eax_1, ebx, esi_1, 0xd, false, 1, 0, 1, 0)
                        @__security_check_cookie@4(var_c ^ &var_374)
                        return eax_13
            
            var_384_1 = "RollDragStop"
            var_388_1 = 0x6e2a
            goto label_475e31
        case 8
            void* eax_7 = sub_474cc0(esi_1, ebx)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_7
        case 9
            data_126bd68
            sub_4c5ce0()
            int32_t eax_39 = ebx[4]
            
            if (eax_39 != 7)
                uint32_t ecx_92 = esi_1
                int32_t var_384_17 = 0
                
                if (eax_39 != 3)
                    uint32_t eax_43 = sub_45a830(eax_39, ebx, ecx_92, 3, false, 1, 0, 1, var_384_17)
                    @__security_check_cookie@4(var_c ^ &var_374)
                    return eax_43
                
                int32_t eax_42 = sub_45aa00(eax_39, ebx, ecx_92, eax_39, var_384_17)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_42
            
            eax_6 = *(esi_1 + 0x338)
            
            if (eax_6 == 0xc)
                uint32_t eax_40 = sub_45a830(eax_6, ebx, esi_1, 3, false, 1, 0, 1, 0)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_40
            
            if (eax_6 != 5)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_6
            
            uint32_t eax_41 = sub_4747e0(esi_1, ebx)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_41
        case 0xa
            data_126bd68
            sub_4c5ce0()
            eax_6 = sub_453650(esi_1)
            uint32_t ecx_55 = esi_1
            int32_t var_384_11
            int32_t* edx_13
            
            if (eax_6 == 0x19)
                edx_13 = ebx
                var_384_11 = 0
                
                if (ebx[4] != 7)
                    goto label_4754a6
                
                int32_t eax_23 = sub_45aa00(eax_6, edx_13, ecx_55, 7, var_384_11)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_23
            
            int32_t* ecx_58 = esi_1
            
            if (sub_453650(ecx_55) == 4)
                int32_t eax_25 = ebx[4]
                
                if (eax_25 == 7)
                    int32_t eax_26 = sub_45aa00(eax_25, ebx, ecx_58, eax_25, 0)
                    @__security_check_cookie@4(var_c ^ &var_374)
                    return eax_26
                
                if (eax_25 != 3)
                    int32_t eax_28 = sub_4749e0(ecx_58, ebx)
                    @__security_check_cookie@4(var_c ^ &var_374)
                    return eax_28
                
                int32_t var_384_13 = 0
                int32_t var_388_14 = 1
                var_374 = ebx
                void* eax_27 = sub_474a90(eax_25, &var_374, ecx_58, var_388_14, var_384_13)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_27
            
            eax_6 = sub_453650(ecx_58)
            
            if (eax_6 != 6)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_6
            
            edx_13 = ebx
            var_384_11 = 0
            ecx_55 = esi_1
            
            if (ebx[4] == 7)
                int32_t eax_29 = sub_45aa00(eax_6, edx_13, ecx_55, 7, var_384_11)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_29
            
        label_4754a6:
            uint32_t eax_30 = sub_45a830(eax_6, edx_13, ecx_55, 7, false, 1, 0, 1, var_384_11)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_30
        case 0xb
            data_126bd78
            sub_4c5ce0()
            uint32_t eax_22 = sub_4747e0(esi_1, ebx)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_22
        case 0xc
            if (ebx[4] == 0xf)
                int32_t edi_4 = neg.d(sub_45ea10(esi_1, ebx))
                
                if (edi_4 != 0)
                    if (edi_4 s> 0)
                        int32_t var_220[0xc]
                        sub_4c5670(data_126be7c, &var_220)
                        sub_4c5920(&var_220)
                    
                    sub_452770(esi_1, 0, edi_4, 0)
                    
                    if (edi_4 s<= 0)
                        *(esi_1 + 0x318) += edi_4
                    else
                        *(esi_1 + 0x310) += edi_4
                    
                    int32_t* eax_45 = sub_481490(&data_62d6c4)
                    int32_t var_354_1 = 0
                    void* var_384_19 = 0x8c
                    char var_388_23 = 0
                    *eax_45 = 3
                    eax_45[0x16] = 0
                    uint32_t var_34c[0x8][0x4]
                    uint32_t (* var_38c_15)[0x8][0x4] = &var_34c
                    eax_45[0x17] = *esi_1
                    eax_45[0x18] = edi_4
                    eax_45[0x19].b = 0
                    eax_45[0x1a] = 4
                    _memset(var_38c_15, var_388_23, var_384_19)
                    int32_t var_360 = *esi_1
                    int32_t var_35c_1 = 0x26
                    int32_t var_358_1 = 0xffffffff
                    int32_t var_350_1 = 0xffffffff
                    void var_1f0
                    __builtin_memcpy(&var_1f0, &var_360, 0xa0)
                    sub_452860(&eax_45[0x1c], &var_1f0)
                    ebx = var_374
                    esi_1 = var_370_1
                
                data_126be78
                eax_1 = sub_4c5ce0()
            
            sub_45a830(eax_1, ebx, esi_1, 0xe, false, 1, 5, 1, 0)
            int32_t ecx_105 = *esi_1
            *(esi_1 + 0x804) = ebx[0xb]
            
            if (sub_453570(ecx_105, 5) != neg.d(sub_453570(*var_370_1, 4)))
                int32_t ecx_108 = *var_370_1
                *(var_370_1 + 4) = 9
                void* eax_50 = sub_452b90(ecx_108)
                *(eax_50 + 0x10) = 0x65
                *(eax_50 + 0x14) = 1
            else
                sub_45e9a0(var_370_1)
            
            data_126bd7c
            sub_4c5ce0()
            ecx_12 = 0x15
            goto label_47517a
        case 0xd
            void* eax_51 = sub_474ed0(esi_1, ebx)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_51
        case 0xe
            data_126bdb0
            void* eax_16
            int32_t ecx_40
            eax_16, ecx_40 = sub_4c5ce0()
            
            if (arg4 == 2)
                int32_t var_384_9 = ecx_40
                int32_t eax_17 = sub_455d90(eax_16, ebx, esi_1, ebx[0xd])
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_17
            
            sub_454bf0(eax_16, ebx[0xe], ebx, 0, 0)
            int32_t ecx_45 = ebx[0x21f]
            int32_t eax_18 = 0
            
            if (ecx_45 s>= 0)
                eax_18 = ecx_45
            
            int32_t eax_19
            eax_19.b = ebx[0xe] != 0
            int32_t eax_21 = sub_4553d0(eax_19 + 4, ebx, esi_1, eax_19 + 4, 0, eax_18)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_21
        case 0xf
            sub_4554e0(eax_1, ebx, esi_1, 2, 1, 5, 0, 0, 0)
            data_126bdb4
            int32_t ecx_7 = sub_4c5ce0()
            eax_1 = sub_45d140()
            
            if (eax_1.b == 0)
                *(esi_1 + (*(esi_1 + 0x800) << 2) + 0x670) = ebx[0x11]
                ecx_12 = 0x1e
                *(esi_1 + 0x800) += 1
            label_47517a:
                eax_6 = sub_46a420(ecx_12)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_6
            
            if (*ebx != 0)
                var_384_1 = "RollDragStop"
                var_388_1 = 0x6dff
                ecx_1 = "gfx.type == ROLLGFX_TILE"
                goto label_475e36
            
            int32_t edx_1 = *esi_1
            int32_t var_384_3 = ecx_7
            void* ecx_8 = data_632804
            int32_t var_388_3 = 0
            int32_t var_38c_3 = 0
            var_36c = ebx[0x11]
            void* eax_4 = sub_45bde0(&var_36c, edx_1, ecx_8, 0x12, 0, &var_36c, 1, var_38c_3, var_388_3)
            *(esi_1 + 4) = 0x1e
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_4
        case 0x11
            data_126bdb0
            int32_t ecx_118
            eax_1, ecx_118 = sub_4c5ce0()
            
            if (ebx[0xd] == 5)
                eax_1, ecx_118 = sub_46a420(7)
            
            if (ebx[0xe] == 0)
                goto label_47586b
            
            if (data_6cfe4c == 0)
                goto label_47509d
            
            eax_1, ecx_118 = sub_46a420(6)
            ebx[0xe] = 0
            ebx[0x223] = 0
        label_47586b:
            int32_t var_384_22 = ecx_118
            int32_t eax_54 = sub_4553d0(eax_1, ebx, esi_1, 4, 0, ebx[0x21f])
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_54
        case 0x12
            data_126bdb0
            int32_t ecx_123
            eax_1, ecx_123 = sub_4c5ce0()
            
            if (ebx[0xd] == 4)
                eax_1, ecx_123 = sub_46a420(7)
            
            if (ebx[0xe] == 1)
                goto label_4758e0
            
            if (data_6cfe4c == 0)
                goto label_47509d
            
            eax_1, ecx_123 = sub_46a420(6)
            ebx[0xe] = 1
            ebx[0x223] = 0x3f800000
        label_4758e0:
            int32_t var_384_23 = ecx_123
            int32_t eax_55 = sub_4553d0(eax_1, ebx, esi_1, 5, 0, ebx[0x21f])
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_55
        case 0x13, 0x14
            eax_1 = *ebx
            
            if (eax_1 == 2)
            label_475e0d:
                int32_t eax_92 = sub_4683d0(esi_1, ebx)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_92
            
            if (eax_1 != 1)
                var_384_1 = "RollDragStop"
                var_388_1 = 0x6f5d
                ecx_1 = "gfx.type == ROLLGFX_DIE"
                goto label_475e36
            
            int32_t ecx_152 = edi[6]
            
            if (ecx_152 != 0)
                uint32_t edx_43 = zx.d(ecx_152.w)
                
                if (edx_43 u< data_62d6c8)
                    eax_1 = edx_43 * 0x8ac + data_62d6c4
                    
                    if (*(eax_1 + 0x8a8) == ecx_152)
                        int32_t* edi_10 = edx_43 * 0x8ac + data_62d6c4
                        
                        if (edi_10[0xe] == 2)
                            int32_t* eax_75
                            eax_75, edx_43 = sub_458560(sub_452b90(edi_10[0xf]), edi_10)
                            edi_10 = eax_75
                        
                        int32_t eax_76
                        char ecx_156
                        eax_76, ecx_156 = sub_453650(esi_1)
                        
                        if (eax_76 != 0x15)
                            int32_t var_384_35 = 0
                            sub_45a730(eax_76, ebx, esi_1, edi_10, 1, ecx_156)
                            data_126bd70
                            int32_t eax_80 = sub_4c5ce0()
                            @__security_check_cookie@4(var_c ^ &var_374)
                            return eax_80
                        
                        edx_43.b = *var_36c == 0x15
                        int32_t* eax_78 = sub_45b670(edi_10, edx_43.b)
                        sub_468190(eax_78, ebx, esi_1, eax_78, 0)
                        data_126bd80
                        int32_t eax_79 = sub_4c5ce0()
                        @__security_check_cookie@4(var_c ^ &var_374)
                        return eax_79
                
                var_384_1 = "DataArray<struct RollGfx>::DataArrayGet"
                var_388_1 = 0x6d
                var_38c_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                ecx_1 = "DataArrayTryToGet(id) != NULL"
            else
                var_384_1 = "DataArray<struct RollGfx>::DataArrayGet"
                var_388_1 = 0x6c
                var_38c_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                ecx_1 = "id != DATAID_NULL"
            
            goto label_475e40
        case 0x15, 0x19
            void* eax_90 = sub_46a6a0()
            
            if (eax_90 == 0)
                goto label_475e0d
            
            int32_t var_384_42 = ebx[0x12]
            int32_t eax_91 = sub_474690(eax_90, ebx, esi_1)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_91
        case 0x16
            data_126bd98
            sub_4c5ce0()
            int32_t eax_84 = sub_4677f0(ebx, 1)
            
            if (eax_84.b == 0)
                int32_t* var_384_39 = ebx
                int32_t eax_86 = sub_467b50(esi_1, ebx)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_86
            
            int32_t var_384_38 = 1
            int32_t eax_85 = sub_474690(eax_84, ebx, esi_1)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_85
        case 0x17
            data_126bd98
            sub_4c5ce0()
            int32_t eax_81 = sub_4677f0(ebx, 2)
            
            if (eax_81.b == 0)
                int32_t* var_384_37 = ebx
                int32_t eax_83 = sub_467830(esi_1, ebx)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_83
            
            int32_t var_384_36 = 2
            int32_t eax_82 = sub_474690(eax_81, ebx, esi_1)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_82
        case 0x18
            data_126bd98
            sub_4c5ce0()
            int32_t eax_87 = sub_4677f0(ebx, 3)
            
            if (eax_87.b == 0)
                int32_t* var_384_41 = ebx
                int32_t eax_89 = sub_467e70(esi_1, ebx)
                @__security_check_cookie@4(var_c ^ &var_374)
                return eax_89
            
            int32_t var_384_40 = 3
            int32_t eax_88 = sub_474690(eax_87, ebx, esi_1)
            @__security_check_cookie@4(var_c ^ &var_374)
            return eax_88
        default
            var_384_1 = "RollDragStop"
            var_388_1 = 0x6fbf
        label_475e31:
            ecx_1 = "Halt"
        label_475e36:
            var_38c_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            goto label_475e40
}
