// 函数名称: sub_4c7e50
// 虚拟地址: 0x4c7e50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4c7e50(int32_t arg1, char*** arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fc10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_90 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_24
    uint32_t result
    uint32_t var_1c
    
    if (sub_4c7b90(arg3, &var_24).b == 0)
        result.b = 0
    else if (var_1c != 0)
        int32_t edi_1 = var_1c * 0xa8
        uint32_t eax_3 = sub_4c2e40(edi_1)
        int32_t eax_4 = _fseek(*arg3, arg3[1], 0)
        uint32_t eax_5
        
        if (eax_4 == 0)
            eax_5 = _fread(eax_3, edi_1, 1, *arg3)
        
        if (eax_4 == 0 && eax_5 == 1)
            arg3[1] += edi_1
            char var_29_1 = eax_5.b
            int32_t var_30_1 = 0
            uint32_t ebx_1
            
            if (var_1c u<= 0)
            label_4c8135:
                ebx_1.b = var_29_1
            else
                ebx_1 = eax_3 + 4
                
                while (true)
                    int32_t eax_6 = *(ebx_1 - 4)
                    
                    if (eax_6 s< 0 || eax_6 s>= 0x25)
                        sub_489550(eax_6, &data_5b2591, 
                            "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
                            "d:\ax\trunk\ax2017\engine\assettyperegistry.cpp", 0xbc, "AssetTypeGetInfo")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_489700()
                            noreturn
                        
                        breakpoint
                    
                    void* edi_4 = (eax_6 << 5) + data_114ec7c
                    void* esi_1 = *(edi_4 + 0x1c)
                    char* var_28
                    sub_4d18a0(eax_6, ebx_1 + 0x24, &var_28, eax_6)
                    int32_t var_8_1 = 0
                    
                    if (*ebx_1 == *(esi_1 + 0x18))
                        if ((*(edi_4 + 0x18) & 1) != 0 || *(ebx_1 + 4) == *(edi_4 + 0x14))
                            char* const var_80 = &data_5b2591
                            var_8_1.b = 5
                            sub_48a560(&var_80, &var_28)
                            int32_t eax_11 = *(ebx_1 - 4)
                            int32_t var_7c_1 = eax_11
                            int32_t eax_12 = *(ebx_1 + 0x14)
                            int32_t var_68_1 = eax_12
                            int32_t eax_13 = *(ebx_1 + 0x18)
                            int32_t var_64_1 = eax_13
                            int32_t eax_14 = *(ebx_1 + 0x1c)
                            int32_t var_60_1 = eax_14
                            int32_t eax_15 = *(ebx_1 + 0x20)
                            int32_t var_5c_1 = eax_15
                            int32_t eax_16 = *(ebx_1 + 8)
                            int32_t var_78_1 = eax_16
                            int32_t eax_17 = *(ebx_1 + 0xc)
                            int32_t var_74_1 = eax_17
                            int32_t eax_18 = *(ebx_1 + 0x10)
                            int32_t var_70_1 = eax_18
                            char*** eax_19 = sub_498440(0x30)
                            eax_19[3] += 1
                            char** esi_2 = *eax_19
                            
                            if (esi_2 == 0)
                                sub_4982d0(eax_19)
                                esi_2 = *eax_19
                            
                            *eax_19 = *esi_2
                            _memset(esi_2, 0, 0x30)
                            char* const edi_6 = var_80
                            *esi_2 = edi_6
                            
                            if (edi_6 != 0 && *edi_6 != 0)
                                char* eax_21 = sub_48a080(esi_2)
                                *(eax_21 + 4) += 1
                            
                            esi_2[1] = eax_11
                            esi_2[2] = eax_16
                            esi_2[3] = eax_17
                            esi_2[4] = eax_18
                            esi_2[6] = eax_12
                            esi_2[7] = eax_13
                            esi_2[8] = eax_14
                            esi_2[9] = eax_15
                            esi_2[0xa] = 0
                            esi_2[0xb] = arg2[1]
                            void* eax_31 = arg2[1]
                            
                            if (eax_31 == 0)
                                *arg2 = esi_2
                            else
                                *(eax_31 + 0x28) = esi_2
                            
                            arg2[2] += 1
                            arg2[1] = esi_2
                            var_8_1.b = 6
                            
                            if (data_aca1f4 != 0 && edi_6 != 0 && *edi_6 != 0)
                                char* eax_32 = sub_48a080(&var_80)
                                int32_t temp2_1 = *(eax_32 + 4)
                                *(eax_32 + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                            
                            int32_t var_8_4 = 7
                            goto label_4c80e8
                        
                        char* eax_10 = var_28
                        char* ecx_3 = &data_5b2591
                        
                        if (eax_10 != 0)
                            ecx_3 = eax_10
                        
                        char* var_94_4 = ecx_3
                        sub_4892e0("Can't load pack asset because hash doesn't match '%s'")
                        
                        if (arg4 == 0)
                            int32_t var_8_3 = 4
                            goto label_4c80e8
                        
                        ebx_1.b = 0
                        int32_t var_8_7 = 3
                    else
                        char* eax_8 = var_28
                        char* const ecx_2 = &data_5b2591
                        
                        if (eax_8 != 0)
                            ecx_2 = eax_8
                        
                        char* const var_94_3 = ecx_2
                        sub_4892e0("Can't load pack asset because version doesn't match '%s'")
                        
                        if (arg4 != 0)
                            ebx_1.b = 0
                            int32_t var_8_6 = 1
                        else
                            int32_t var_8_2 = 2
                        label_4c80e8:
                            
                            if (data_aca1f4 != 0)
                                char* eax_33 = var_28
                                
                                if (eax_33 != 0 && *eax_33 != 0)
                                    char* eax_34 = sub_48a080(&var_28)
                                    int32_t temp1_1 = *(eax_34 + 4)
                                    *(eax_34 + 4) -= 1
                                    
                                    if (temp1_1 == 1)
                                        sub_4984f0(eax_34, *(eax_34 + 0xc) + 0x10)
                                        var_28 = &data_5b2591
                            
                            ebx_1 += 0xa8
                            int32_t ecx_13 = var_30_1 + 1
                            int32_t var_8_5 = 0xffffffff
                            var_30_1 = ecx_13
                            
                            if (ecx_13 u>= var_1c)
                                goto label_4c8135
                            
                            continue
                    
                    if (data_aca1f4 == 0)
                        break
                    
                    char* eax_35 = var_28
                    
                    if (eax_35 != 0 && *eax_35 != 0)
                        char* eax_36 = sub_48a080(&var_28)
                        int32_t temp0_1 = *(eax_36 + 4)
                        *(eax_36 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_36, *(eax_36 + 0xc) + 0x10)
                    
                    break
            
            if (eax_3 != 0)
                _aligned_free_base(eax_3)
            
            result.b = ebx_1.b
        else if (eax_3 == 0)
            result.b = 0
        else
            _aligned_free_base(eax_3)
            result.b = 0
    else
        result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
