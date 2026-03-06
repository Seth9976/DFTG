// 函数名称: sub_446900
// 虚拟地址: 0x446900
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_446900(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_3c8
    int32_t var_3c8
    int32_t eax_1 = __security_cookie ^ &var_3c8
    void* eax_3 = arg2 * 0x1bc
    int32_t esi = 0
    int32_t i_2 = *(eax_3 + arg3 + 0x164)
    void* eax_4 = eax_3 + arg3
    int32_t* var_3b8 = arg3
    int32_t result = 0
    int32_t result_1 = 0
    int128_t var_370
    __builtin_memset(&var_370, 0, 0x18)
    int64_t var_350 = 0
    int32_t var_348 = 0
    int128_t var_390
    __builtin_memset(&var_390, 0, 0x18)
    
    if (i_2 s> 0)
        char* ecx = eax_4 + 0x2b
        int32_t i
        
        do
            if (ecx[0xfffffffa] == 4 && (*ecx & 3) == 0)
                uint32_t eax_5 = zx.d(ecx[0xfffffff9])
                *(&var_370 + (eax_5 << 2)) += 1
                uint32_t eax_6 = zx.d(ecx[0xfffffffe])
                *(&var_390 + (eax_6 << 2)) += 1
                result += 1
            
            ecx = &ecx[8]
            i = i_2
            i_2 -= 1
        while (i != 1)
        arg3 = var_3b8
        result_1 = result
        result = 0
    
    int32_t var_338[0xc9]
    int32_t edx_1 = sub_4453c0(&var_338, arg2, arg3, &var_338, 0)
    int32_t var_39c = 0
    int32_t var_3a4 = edx_1
    int32_t ecx_1 = 0
    int32_t var_398 = 2
    int32_t var_394 = 1
    var_3c8 = 1
    var_334
    
    if (edx_1 s> 0)
        do
            if ((*(*(&var_334 + (ecx_1 << 3)) + 4) & 0x80) != 0)
                esi = 1
            
            ecx_1 += 1
        while (ecx_1 s< edx_1)
        
        result = 0
    
    if (result_1 s> 1 && (*(eax_4 + 0x188) == 0 || esi != 0))
        var_338[edx_1 * 2] = 0xffffffff
        *(&var_334 + (edx_1 << 3)) = &var_39c
        edx_1 += 1
        var_3a4 = edx_1
    
    int32_t eax_11 = 0
    int32_t var_3a8 = 0
    
    if (edx_1 s> 0)
        do
            void* ecx_2 = *(&var_334 + (eax_11 << 3))
            int32_t edx_2 = *(ecx_2 + 4)
            int32_t eax_12 = edx_2
            int32_t var_3b4_1 = edx_2
            
            if ((edx_2.b & 0x40) != 0)
                int32_t var_394_1 = *(ecx_2 + 8)
                edx_2 = *(ecx_2 + 4)
                eax_12 = edx_2
                var_3b4_1 = edx_2
            
            if ((eax_12.b & 2) == 0)
                if ((eax_12.b & 1) != 0)
                    if ((eax_12.b & 0x20) == 0)
                        goto label_446ad0
                    
                    if (sub_444f80(var_3b8, arg2) != 0)
                        eax_12 = edx_2
                    label_446ad0:
                        int32_t ecx_5
                        
                        if ((eax_12 & 0x200) != 0)
                            ecx_5 = 0
                            
                            for (int32_t i_1 = 0; i_1 s< 0xb; i_1 += 1)
                                if (i_1 != 1)
                                    ecx_5 += *(&var_370 + (i_1 << 2))
                        
                        int64_t var_360
                        
                        if (((eax_12 & 0x200) == 0 || ecx_5 != 0)
                                && ((var_3b4_1 & 0x100) == 0 || var_370:4.d != 0) && (
                                (var_3b4_1 & 0x2000) == 0 || var_370:0xc.d != 0 || var_360:4.d != 0)
                                && ((var_3b4_1 & 0x800) == 0 || var_370:8.d != 0 || var_360.d != 0))
                            if ((var_3b4_1 & 0x8000) == 0)
                            label_446bc8:
                                
                                if ((var_3b4_1 & 0x4000) == 0 || var_390:4.d != 0)
                                    *(arg4 + (result << 2)) = var_338[eax_11 * 2]
                                    result += 1
                            else
                                int32_t eax_16 = 0
                                int32_t ecx_7 = var_3b4_1 & 0x10000
                                
                                if ((ecx_7 == 0 || *(eax_4 + 0x180) != 1) && var_390:4.d s>= 2)
                                    eax_16 = var_3c8
                                
                                if ((ecx_7 == 0 || *(eax_4 + 0x180) != 2) && var_390:8.d s>= 2)
                                    eax_16 = var_3c8
                                
                                if ((ecx_7 == 0 || *(eax_4 + 0x180) != 3) && var_390:0xc.d s>= 2)
                                    eax_16 = var_3c8
                                
                                int64_t var_380
                                
                                if ((ecx_7 == 0 || *(eax_4 + 0x180) != 4) && var_380.d s>= 2)
                                    eax_16 = var_3c8
                                
                                if (ecx_7 == 0 || *(eax_4 + 0x180) != 5)
                                    if (var_380:4.d s>= 2 || eax_16 != 0)
                                        goto label_446bc8
                                else if (eax_16 != 0)
                                    goto label_446bc8
            else if (result_1 s>= 2)
                *(arg4 + (result << 2)) = var_338[eax_11 * 2]
                result += 1
            
            eax_11 = var_3a8 + 1
            var_3a8 = eax_11
        while (eax_11 s< var_3a4)
    
    @__security_check_cookie@4(eax_1 ^ &var_3c8)
    return result
}
