// 函数名称: sub_457930
// 虚拟地址: 0x457930
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_457930(int32_t arg1, void* arg2, void* arg3, int32_t arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59dcd6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result_2 = arg2
    uint32_t (* ebx)[0x4] = nullptr
    int32_t ecx = *(arg2 + 0x3c0)
    int32_t eax_5 = 0
    int32_t var_b8[0x28]
    
    if (ecx s> 0)
        void* edx = arg2 + 4
        
        do
            if (*edx == 0)
                var_b8[ebx] = eax_5
                ebx += 1
            
            eax_5 += 1
            edx += 0x18
        while (eax_5 s< ecx)
        
        arg2 = result_2
    
    void* esi = nullptr
    int32_t edi = 0
    void* var_488 = nullptr
    void* result
    
    if (ecx s<= 0)
        result = result_2
    else
        void* var_494_1 = arg2
        result = &var_b8[ebx]
        void* result_1 = result
        
        do
            void* esi_1 = *arg2
            
            if (*(esi_1 + 0xc) s> 6)
                sub_489550(result, &data_5b2591, "die.face <= 6", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x150b, "GetSide")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            esi = var_488
            
            if (*(sub_457270(*(esi_1 + 8)) + (*(esi_1 + 0xc) << 2)) == 0)
                esi += 1
                var_488 = esi
                *result_1 = edi
                result_1 += 4
            
            result = result_2
            edi += 1
            arg2 = var_494_1 + 0x18
            var_494_1 = arg2
            ecx = *(result + 0x3c0)
        while (edi s< ecx)
    
    if (arg4 s< *(arg3 + 0x578))
        if (ebx != 0)
            int32_t eax_11 = arg4 * 5
            int32_t* eax_12 = arg3 + (eax_11 << 2)
            uint32_t (* edx_3)[0x4]
            uint32_t (* edi_4)[0x4]
            
            if ((*(arg3 + (eax_11 << 2) + 0xc) & 0x8000) == 0)
                edi_4 = eax_12[4]
                edx_3 = 1
            else
                edx_3 = eax_12[4]
                edi_4 = edx_3
            
            uint32_t (* var_4b8_1)[0x4] = edx_3
            uint32_t (* eax_13)[0x4] = esi + ebx
            uint32_t (* esi_4)[0x4] = edx_3
            
            if (edx_3 s<= 1)
                eax_13 = ebx
            
            uint32_t (* var_488_1)[0x4] = esi_4
            uint32_t (* var_494_2)[0x4] = eax_13
            
            if (eax_13 s< edi_4)
                edi_4 = eax_13
            
            int32_t edi_5 = arg5
            void* result_4
            
            if (edx_3 s> edi_4)
                result_4 = result_2
            label_457dc8:
                int32_t edx_11 = 0
                result = nullptr
                
                if (ecx s> 0)
                    void* esi_7 = result_4 + 4
                    
                    do
                        if (*esi_7 == 0)
                            edx_11 += 1
                        
                        result += 1
                        esi_7 += 0x18
                    while (result s< ecx)
                
                if (edx_11 s> edi_5)
                    result = sub_457930(arg4 + 1, edi_5, arg6, eax_2)
                else
                    __builtin_memcpy(arg6, result_4, 0x3c8)
                    int32_t i = 0
                    
                    if (*(arg6 + 0x3c0) s<= 0)
                        result.b = 1
                    else
                        result = arg6 + 4
                        
                        do
                            if (*result == 0)
                                *result = 6
                            
                            i += 1
                            result += 0x18
                        while (i s< *(arg6 + 0x3c0))
                        
                        result.b = 1
            else
                uint32_t (* ecx_6)[0x4] = edi_4
                int32_t ebx_1 = edx_3 << 2
                int32_t var_490_1 = ebx_1
                
                while (true)
                    if (edx_3 s<= eax_13)
                        int32_t* var_4a0 = nullptr
                        int32_t var_49c_1 = 0
                        int32_t var_498_1 = 0
                        int32_t var_8_1 = 0
                        var_4a0 = sub_498490(ebx_1)
                        int32_t var_49c_2 = 0
                        sub_4817a0(&var_4a0, esi_4)
                        uint32_t (* var_4ac)[0x4] = nullptr
                        int32_t var_4a8_1 = 0
                        int32_t var_4a4_1 = 0
                        var_8_1.b = 1
                        var_4ac = sub_498490(ebx_1)
                        int32_t var_4a8_2 = 0
                        sub_4817a0(&var_4ac, esi_4)
                        int32_t eax_16 = 0
                        int32_t* esi_5 = var_4a0
                        
                        if (var_49c_2 s> 0)
                            while (true)
                                if (eax_16 s>= 0 && eax_16 s< var_49c_2)
                                    esi_5[eax_16] = eax_16
                                    eax_16 += 1
                                    
                                    if (eax_16 s>= var_49c_2)
                                        break
                                    
                                    continue
                                
                                sub_489550(eax_16, &data_5b2591, "index >= 0 && index < mSize", 
                                    "d:\ax\trunk\ax2017\engine\xarray.h", 0xb5, 
                                    "XArray<int>::operator []")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                        
                        uint32_t (* ecx_11)[0x4] = var_4ac
                        
                        while (true)
                            int32_t eax_17 = 0
                            
                            if (var_490_1 s> 0)
                                uint32_t (* edx_4)[0x4] = ecx_11
                                
                                while (true)
                                    if (eax_17 s< 0 || eax_17 s>= var_49c_2)
                                        sub_489550(eax_17, &data_5b2591, "index >= 0 && index < mSize", 
                                            "d:\ax\trunk\ax2017\engine\xarray.h", 0xb5, 
                                            "XArray<int>::operator []")
                                        
                                        if (IsDebuggerPresent() != 1)
                                            sub_489700()
                                            noreturn
                                        
                                        breakpoint
                                    
                                    if (eax_17 s>= var_4a8_2)
                                        sub_489550(eax_17, &data_5b2591, "index >= 0 && index < mSize", 
                                            "d:\ax\trunk\ax2017\engine\xarray.h", 0xb5, 
                                            "XArray<int>::operator []")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    eax_17 += 1
                                    *edx_4 = var_b8[*(esi_5 - ecx_11 + edx_4)]
                                    edx_4 = &(*edx_4)[1]
                                    
                                    if (eax_17 s>= var_488_1)
                                        break
                                    
                                    continue
                            
                            void var_480
                            
                            if (sub_457480(&var_4ac, eax_12, result_2, &var_4ac, &var_480) != 0
                                    && sub_457930(arg4 + 1, arg5, arg6, eax_2) == 1)
                                var_8_1.b = 2
                                result = data_aca1f4
                                
                                if (result != 0)
                                    uint32_t (* ecx_18)[0x4] = var_4ac
                                    
                                    if (ecx_18 != 0)
                                        sub_4984f0(ecx_18, esi_4 << 2)
                                        result = data_aca1f4
                                
                                int32_t var_8_4 = 3
                                
                                if (result != 0)
                                    int32_t* ecx_19 = var_4a0
                                    
                                    if (ecx_19 != 0)
                                        sub_4984f0(ecx_19, esi_4 << 2)
                                
                                break
                            
                            char eax_23 = sub_457750(&var_4a0, var_494_2)
                            ecx_11 = var_4ac
                            esi_5 = var_4a0
                            
                            if (eax_23 == 0)
                                var_8_1.b = 4
                                int32_t eax_24 = data_aca1f4
                                
                                if (eax_24 != 0 && ecx_11 != 0)
                                    int32_t var_4a8_3 = 0
                                    sub_4984f0(ecx_11, esi_4 << 2)
                                    eax_24 = data_aca1f4
                                
                                int32_t var_8_2 = 5
                                
                                if (eax_24 != 0)
                                    int32_t* ecx_17 = var_4a0
                                    
                                    if (ecx_17 != 0)
                                        int32_t var_49c_3 = 0
                                        sub_4984f0(ecx_17, esi_4 << 2)
                                
                                esi_4 = var_488_1
                                ebx_1 = var_490_1
                                eax_13 = var_494_2
                                edx_3 = var_4b8_1
                                ecx_6 = edi_4
                                int32_t var_8_3 = 0xffffffff
                                goto label_457d40
                        
                        break
                    
                label_457d40:
                    esi_4 += 1
                    ebx_1 += 4
                    var_488_1 = esi_4
                    var_490_1 = ebx_1
                    
                    if (esi_4 s> ecx_6)
                        result_4 = result_2
                        edi_5 = arg5
                        ecx = *(result_4 + 0x3c0)
                        goto label_457dc8
                
                result.b = 1
        else
            void* result_3 = result
            result.b = 1
            __builtin_memcpy(arg6, result_3, 0x3c8)
    else if (ebx s> arg5)
        ebx.b = sub_457810(arg6)
        
        if (ebx.b u< sub_457810(result_2).b)
            __builtin_memcpy(arg6, result_2, 0x3c8)
        
        result.b = 0
    else
        __builtin_memcpy(arg6, result, 0x3c8)
        sub_457450(arg6)
        result.b = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
