// 函数名称: sub_4401c0
// 虚拟地址: 0x4401c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4401c0(int32_t arg1, int32_t arg2, int32_t** arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = arg5
    int32_t** esi = arg3
    int32_t* var_478 = eax_2
    int32_t* edi = arg4
    int32_t** var_468 = esi
    int32_t* var_46c = edi
    
    if (esi[4] == 0)
        eax_2 = *esi
        int32_t ecx_2 = 0
        int32_t edx = eax_2[1]
        
        if (edx s> 0)
            eax_2 = &esi[8]
            
            do
                if (*eax_2 == 0)
                    eax_2 = sub_43fbb0()
                    break
                
                ecx_2 += 1
                eax_2 = &eax_2[0x6f]
            while (ecx_2 s< edx)
    else if (esi[5] != arg2)
        *eax_2 = 1
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_2
    
    if (data_1390330 == 0)
        eax_2 = sub_43f970(esi, arg2)
        
        if (eax_2[2] == 0)
            data_138fd58 += 1
        else
            data_138fd5c += 1
            __builtin_memcpy(0x1390328, eax_2, 0x138)
            esi = var_468
            edi = var_46c
    
    int32_t* var_49c_4
    int32_t* var_498_4
    int32_t** ecx_10
    int32_t edx_8
    
    if (data_1390330 != 0 || data_1390330 != 0)
        var_498_4 = var_478
        edx_8 = arg2
        ecx_10 = esi
        var_49c_4 = edi
    else
        int32_t edi_2 = *var_478
        int32_t ebx_1 = 0
        void var_32c
        int32_t eax_4 = sub_4453c0(&var_32c, arg2, esi, &var_32c, 1)
        int32_t edx_3 = 0
        
        if (eax_4 s> 0)
            do
                int32_t var_328[0x2b]
                
                if ((*(var_328[edx_3 * 2] + 4) & 0x100) != 0)
                    ebx_1 = 1
                
                edx_3 += 1
            while (edx_3 s< eax_4)
            
            esi = var_468
        
        int32_t var_450_1 = edi_2 - 1
        int32_t var_454_1 = 1
        int32_t var_458_1 = 0
        int32_t var_334_1 = 0
        void var_464
        int64_t var_484_1 = sub_43ff00(&var_464, arg2, esi, var_46c, edi_2, &var_464)
        void var_144
        __builtin_memcpy(&var_144, &var_464, 0x138)
        int32_t** edi_3 = var_468
        
        if (ebx_1 != 0)
            int32_t var_458_2 = 1
            int64_t xmm0_2 = sub_43ff00(&var_464, arg2, edi_3, var_46c, edi_2, &var_464)
            
            if (not(xmm0_2 f<= var_484_1))
                var_484_1 = xmm0_2
                __builtin_memcpy(&var_144, &var_464, 0x138)
                edi_3 = var_468
        
        int32_t eax_8 = edi_2
        int32_t ebx_2 = 0
        
        if (eax_8 s>= 0)
            int32_t esi_2 = eax_8
            int32_t var_47c_1 = eax_8
            
            do
                if (ebx_2 != 1)
                    int32_t var_454_2 = ebx_2
                    int32_t var_450_2 = esi_2
                    int64_t xmm0_3 = sub_43fbf0(eax_8, arg2, edi_3, var_46c, eax_8, &var_464)
                    eax_8 = edi_2
                    
                    if (not(xmm0_3 f<= var_484_1))
                        var_484_1 = xmm0_3
                        __builtin_memcpy(&var_144, &var_464, 0x138)
                        esi_2 = var_47c_1
                
                edi_3 = var_468
                ebx_2 += 1
                esi_2 -= 1
                var_47c_1 = esi_2
            while (ebx_2 s<= eax_8)
        
        int32_t* edx_7 = eax_2
        int32_t var_134
        edx_7[4] = var_134
        int32_t var_130
        edx_7[5] = var_130
        int32_t* var_138
        eax_2 = var_138
        edx_7[3] = eax_2
        int32_t var_14
        edx_7[0x4c] = var_14
        void var_12c
        
        if (var_14 s> 0)
            __builtin_memcpy(&edx_7[6], &var_12c, var_14 << 2)
        var_498_4 = var_478
        edx_7[2] = 1
        var_49c_4 = var_46c
        edx_8 = arg2
        __builtin_memcpy(0x1390328, edx_7, 0x138)
        ecx_10 = var_468
    
    int32_t eax_11 = sub_440140(eax_2, edx_8, ecx_10, var_49c_4, var_498_4)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_11
}
