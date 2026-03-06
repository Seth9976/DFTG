// 函数名称: sub_440960
// 虚拟地址: 0x440960
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_440960(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    uint32_t var_8 = __security_cookie ^ &__saved_ebp
    void* edi = arg1
    int32_t esi = 0
    void* ecx_1 = arg2 * 0x1bc + edi
    void* var_478 = edi
    char var_480 = 0
    void* var_468 = ecx_1
    int32_t i = *(ecx_1 + 0x170)
    int128_t var_438
    void var_40c
    void var_40b
    void var_40a
    void var_409
    void var_408
    void var_407
    void var_406
    
    if (i != 0xffffffff)
        int32_t j_1 = *(ecx_1 + 0x164)
        int32_t j_2 = j_1
        
        do
            *(&var_40c + esi) = i.b
            char var_410_1 = 0
            void* edi_1 = edi + i * 0xc
            *(&var_40b + esi) = *(edi_1 + 0x8cc)
            *(&var_40a + esi) = *(edi_1 + 0x8cb)
            int40_t var_418_1 = 0
            __builtin_memset(&var_438, 0, 0x1d)
            
            if (j_1 s> 0)
                void* eax_5 = ecx_1 + 0x24
                int32_t j
                
                do
                    if (sx.d(*(eax_5 + 6)) == i)
                        uint32_t ecx_3 = zx.d(*eax_5)
                        *(&var_438 + (ecx_3 << 2)) += 1
                    
                    eax_5 += 8
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                ecx_1 = var_468
                j_1 = j_2
            
            *(&var_409 + esi) = var_438:4.b
            i = sx.d(*(edi_1 + 0x8ca))
            *(&var_408 + esi) = var_438:8.b
            edi = var_478
            *(&var_407 + esi) = var_438:0xc.b
            __builtin_memset(&var_406 + esi, 0, 6)
            void var_400
            *(&var_400 + esi) = var_410_1
            esi += 0xd
        while (i != 0xffffffff)
    
    int32_t i_4 = *(ecx_1 + 0x164)
    int40_t var_418_2 = 0
    char var_410_2 = 0
    int32_t i_6 = i_4
    __builtin_memset(&var_438, 0, 0x1d)
    
    if (i_4 s> 0)
        int32_t i_5 = i_4
        void* ecx_4 = ecx_1 + 0x29
        int32_t edx = 0
        int32_t i_1
        
        do
            uint32_t eax_1
            eax_1.b = *(ecx_4 - 4)
            
            if (eax_1.b == 2)
                edx += 1
            else if (eax_1.b == 4 && *ecx_4 == eax_1.b)
                eax_1 = zx.d(*(ecx_4 - 5))
                *(&var_438 + (eax_1 << 2)) += 1
            
            ecx_4 += 8
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        ecx_1 = var_468
        var_480 = edx.b
        i_4 = i_6
    
    *(&var_40c + esi) = var_438:4.b
    *(&var_40b + esi) = var_438:8.b
    *(&var_40a + esi) = var_438:0xc.b
    __builtin_memset(&var_409 + esi, 0, 7)
    int32_t esi_1 = esi + 0xa
    
    if (*(var_478 + 0xc2c) != 0)
        char var_410_3 = 0
        int40_t var_418_3 = 0
        int40_t var_444_1 = 0
        char var_43c_1 = 0
        __builtin_memset(&var_438, 0, 0x1d)
        int128_t var_464
        __builtin_memset(&var_464, 0, 0x1d)
        
        if (i_4 s> 0)
            void* eax_13 = ecx_1 + 0x29
            int32_t i_2
            
            do
                if (*(eax_13 - 4) == 4 && *eax_13 == 5)
                    uint32_t ecx_5 = zx.d(*(eax_13 - 5))
                    *(&var_438 + (ecx_5 << 2)) += 1
                    
                    if ((*(eax_13 + 2) & 2) != 0)
                        *(&var_464 + (ecx_5 << 2)) += 1
                
                eax_13 += 8
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        *(&var_40c + esi_1) = var_438:4.b
        *(&var_40b + esi_1) = var_464:4.b
        *(&var_40a + esi_1) = var_438:8.b
        *(&var_409 + esi_1) = var_464:8.b
        *(&var_408 + esi_1) = var_438:0xc.b
        *(&var_407 + esi_1) = var_464:0xc.b
        __builtin_memset(&var_406 + esi_1, 0, 0xe)
        esi_1 += 0x14
    
    int64_t var_474 = 0
    void* eax_20
    eax_20.b = *(var_468 + 0x18c)
    *(&var_40c + esi_1) = eax_20.b
    *(&var_40b + esi_1) = var_480
    int64_t var_484 = 0
    sub_4517a0(&var_474, esi_1 + 2, &var_40c, &var_474, &var_484)
    int32_t esi_2 = var_474.d
    uint32_t ebx = zx.d(esi_2.w)
    int32_t* i_3
    
    for (i_3 = *((ebx << 2) + &data_1390460); i_3 != 0; i_3 = i_3[0x7b])
        if (*i_3 == esi_2 && i_3[1] == i_6)
            goto label_440e2d
    
    int32_t var_498_1 = 0x1f0
    i_3 = _malloc()
    int32_t ecx_7 = *((ebx << 2) + &data_1390460)
    *((ebx << 2) + &data_1390460) = i_3
    *i_3 = esi_2
    i_3[1] = i_6
    i_3[0x7b] = ecx_7
    i_3[0x7a] = 0
    label_440e2d:
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return i_3
}
