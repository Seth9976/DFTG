// 函数名称: sub_441af0
// 虚拟地址: 0x441af0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_441af0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx_1 = arg2 * 0x1bc + arg1
    int32_t i = *(edx_1 + 0x170)
    int32_t esi = 0
    void* var_5a8 = edx_1
    int32_t var_5a0 = 0
    int32_t var_59c[0x23]
    __builtin_memset(&var_59c, 0, 0x134)
    void* var_5b0
    void var_40c
    void var_40b
    void var_40a
    
    if (i != 0xffffffff)
        int32_t edi_1 = arg1
        
        do
            *(&var_40c + esi) = i.b
            void* ecx = edi_1 + i * 0xc
            *(&var_40b + esi) = *(ecx + 0x8cc)
            *(&var_40a + esi) = *(ecx + 0x8cb)
            esi += 3
            var_5b0 = ecx
            
            if (*(edx_1 + 0x164) s> 0)
                int32_t j_1 = *(edx_1 + 0x164)
                void* eax_7 = edx_1 + 0x24
                int32_t j
                
                do
                    if (sx.d(*(eax_7 + 6)) == i)
                        int32_t edx_3 = *(*(edi_1 + (i + 0xbb) * 0xc) + 0x18) * 0xb + zx.d(*eax_7)
                        var_59c[edx_3] += 1
                    
                    eax_7 += 8
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                ecx = var_5b0
                edx_1 = var_5a8
                edi_1 = arg1
            
            i = sx.d(*(ecx + 0x8ca))
        while (i != 0xffffffff)
    
    void var_510
    uint32_t ecx_4 = &var_510
    int32_t i_4 = 4
    int64_t var_418
    char var_414
    int32_t i_6
    int32_t i_1
    
    do
        esi += 0xa
        *(&var_418:2 + esi) = *(ecx_4 - 4)
        void var_415
        *(&var_415 + esi) = *ecx_4
        (&var_414)[esi] = *(ecx_4 + 4)
        void var_413
        *(&var_413 + esi) = *(ecx_4 + 8)
        void var_412
        *(&var_412 + esi) = *(ecx_4 + 0xc)
        void var_411
        *(&var_411 + esi) = *(ecx_4 + 0x10)
        *(&i_6 + esi) = *(ecx_4 + 0x14)
        *(&i_6:1 + esi) = *(ecx_4 + 0x18)
        void var_40e
        *(&var_40e + esi) = *(ecx_4 + 0x1c)
        char eax_17 = *(ecx_4 + 0x20)
        ecx_4 += 0x2c
        void var_40d
        *(&var_40d + esi) = eax_17
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    char var_43c = i_4.b
    i_6 = i_4
    int128_t var_464
    __builtin_memset(&var_464, 0, 0x1d)
    int32_t i_5 = *(var_5a8 + 0x164)
    int40_t var_444 = 0
    var_418 = 0
    int128_t var_438
    __builtin_memset(&var_438, 0, 0x1d)
    
    if (i_5 s> 0)
        void* eax_18 = var_5a8 + 0x29
        int32_t i_2
        
        do
            ecx_4.b = *(eax_18 - 4)
            
            if (ecx_4.b == 2)
                var_5a0 += 1
            else if (ecx_4.b == 4 && *eax_18 == 5)
                ecx_4 = zx.d(*(eax_18 - 5)) << 2
                *(&var_438 + ecx_4) += 1
                
                if ((*(eax_18 + 2) & 2) != 0)
                    *(&var_464 + ecx_4) += 1
            
            eax_18 += 8
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    *(&var_40c + esi) = var_438:4.b
    *(&var_40b + esi) = var_464:4.b
    *(&var_40a + esi) = var_438:8.b
    void var_409
    *(&var_409 + esi) = var_464:8.b
    void var_408
    *(&var_408 + esi) = var_438:0xc.b
    void var_407
    *(&var_407 + esi) = var_464:0xc.b
    void var_406
    __builtin_memset(&var_406 + esi, 0, 8)
    void var_3fe
    *(&var_3fe + esi) = var_418.b
    void var_3fd
    *(&var_3fd + esi) = var_444.b
    void var_3fc
    *(&var_3fc + esi) = var_414
    void var_3fb
    *(&var_3fb + esi) = var_444:4.b
    void var_3fa
    *(&var_3fa + esi) = i_6.b
    void var_3f9
    *(&var_3f9 + esi) = var_43c
    void var_3f8
    *(&var_3f8 + esi) = *(var_5a8 + 0x18c)
    char var_3f7[0x3ef]
    var_3f7[esi] = var_5a0.b
    int64_t var_5bc
    int32_t* var_5d0 = &var_5bc
    var_5bc = 0
    int64_t var_5b4
    int32_t* var_5d4 = &var_5b4
    var_5b4 = 0
    sub_4517a0(&var_5b4, esi + 0x16, &var_40c, var_5d4, var_5d0)
    int32_t esi_2 = var_5b4.d
    uint32_t ebx = zx.d(esi_2.w)
    int32_t* i_3
    
    for (i_3 = *((ebx << 2) + &data_134a660); i_3 != 0; i_3 = i_3[0xa3])
        if (*i_3 == esi_2 && i_3[1] == var_5b0)
            goto label_441ecd
    
    int32_t var_5d0_1 = 0x290
    i_3 = _malloc()
    int32_t ecx_7 = *((ebx << 2) + &data_134a660)
    *((ebx << 2) + &data_134a660) = i_3
    *i_3 = esi_2
    i_3[1] = var_5b0
    i_3[0xa3] = ecx_7
    i_3[0xa2] = 0
    label_441ecd:
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_3
}
