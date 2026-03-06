// 函数名称: sub_4ac920
// 虚拟地址: 0x4ac920
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4ac920(int32_t arg1, void* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_4 = *(arg3 + 0xfec) - 1
    char const* const var_134
    int32_t var_130
    char const* const var_12c
    int32_t result
    char* ecx_1
    int32_t result_1
    
    switch (eax_4)
        case 0
            __builtin_memcpy(arg2, &data_621f90, 0x12c)
            result_1 = 0xf
            result = 0xf
        case 1
            __builtin_memcpy(arg2, &data_621c30, 0x12c)
            result_1 = 0xf
            result = 0xf
        case 2
            __builtin_memcpy(arg2, &data_622290, 0x12c)
            result_1 = 0xf
            result = 0xf
        case 4
            __builtin_memcpy(arg2, &data_621d98, 0x1f4)
            result_1 = 0x19
            result = 0x19
        case 5
            __builtin_memcpy(arg2, &data_621b68, 0x8c)
            result_1 = 7
            result = 7
        case 6
            __builtin_memcpy(arg2, &data_621a00, 0xc8)
            result_1 = 0xa
            result = 0xa
        case 7
            __builtin_memcpy(arg2, &data_622160, 0x8c)
            result_1 = 7
            result = 7
        case 8
            __builtin_memcpy(arg2, &data_6221f0, 0xa0)
            result_1 = 8
            result = 8
        case 9
            __builtin_memcpy(arg2, &data_6220c0, 0xa0)
            int32_t* ecx = *(arg3 + 0xee8)
            result_1 = 8
            result = 8
            
            if (ecx != 0)
                if (ecx[1] != 0x23)
                    var_12c = "SpineDefGet"
                    var_130 = 0x1bd
                    var_134 = "d:\ax\trunk\ax2017\engine\spine.cpp"
                    ecx_1 = "assetPtr->assetType == ASSET_TYPE_SPINE"
                    goto label_4acc19
                
                int32_t edi_3 = 0x38
                void* edx_1 = *(sub_4981f0(ecx) + 0x28)
                
                if (*(edx_1 + 0x28) s< 0x38)
                    edi_3 = *(edx_1 + 0x28)
                
                int32_t ecx_2 = 0
                int32_t var_10c[0x41]
                
                if (edi_3 s> 0)
                    int32_t edx_2 = *(edx_1 + 0x2c)
                    
                    do
                        var_10c[ecx_2] = *(*(edx_2 + (ecx_2 << 2)) + 4)
                        ecx_2 += 1
                    while (ecx_2 s< edi_3)
                
                int32_t edx_3 = 0
                
                if (edi_3 s> 0)
                    char** edi_4 = arg2 + 0xa0
                    result = edi_3 + 8
                    
                    do
                        int32_t eax_8 = var_10c[edx_3]
                        char** ecx_3 = edi_4
                        edi_4 = &edi_4[5]
                        ecx_3[4] = edx_3
                        edx_3 += 1
                        *ecx_3 = "Slot"
                        ecx_3[2] = eax_8
                        ecx_3[1] = 0xf9
                        ecx_3[3] = 5
                    while (edx_3 s< edi_3)
                    
                    result_1 = result
        default
            var_12c = "GetPropDefs"
            var_130 = 0x280b
            var_134 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_1 = "Halt"
        label_4acc19:
            sub_489550(eax_4, &data_5b2591, ecx_1, var_134, var_130, var_12c)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    if (arg4 != 0)
        *arg4 = result_1
    
    void* ecx_4 = *(arg3 + 0xfc8)
    
    if (ecx_4 == 0)
    label_4aca95:
        int128_t* edx_4 = arg2 + result_1 * 0x14
        result = result_1 + 1
        *edx_4 = data_621ac8.o
        edx_4[1].d = data_621ad8
    else
        int32_t ecx_5 = *(ecx_4 + 0x10)
        int32_t var_114_1 = ecx_5
        
        if (ecx_5 s>= 3)
            ecx_5 = 3
            var_114_1 = 3
        else if (ecx_5 == 0)
            goto label_4aca95
        
        int32_t edx_5 = 0
        
        if (ecx_5 s> 0)
            void* ebx_2 = arg2 + result_1 * 0x14 + 0x24
            
            do
                void* edi_12 = ebx_2 - 0x24
                ebx_2 += 0x64
                __builtin_memcpy(edi_12, &data_621ac8, 0x64)
                *(ebx_2 - 0x78) = edx_5
                *(ebx_2 - 0x64) = edx_5
                *(ebx_2 - 0x50) = edx_5
                *(ebx_2 - 0x3c) = edx_5
                *(ebx_2 - 0x28) = edx_5
                edx_5 += 1
            while (edx_5 s< var_114_1)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return ecx_5 * 5 + result_1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
