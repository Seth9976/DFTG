// 函数名称: sub_442d70
// 虚拟地址: 0x442d70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_442d70(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx_1 = arg2 * 0x1bc + arg1
    int32_t i = *(edx_1 + 0x170)
    int32_t esi = 0
    void* var_548 = edx_1
    int128_t var_544
    __builtin_memset(&var_544, 0, 0x134)
    int32_t* var_550
    void var_40c
    void var_40b
    
    if (i != 0xffffffff)
        int32_t edi_1 = arg1
        
        do
            *(&var_40c + esi) = i.b
            int32_t eax_3 = (i + 0xbb) * 3
            int32_t* ecx = edi_1 + (eax_3 << 2)
            eax_3.b = *(edi_1 + (eax_3 << 2) + 8)
            *(&var_40b + esi) = eax_3.b
            esi += 2
            int32_t j_2 = *(edx_1 + 0x164)
            var_550 = ecx
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                void* eax_4 = edx_1 + 0x24
                int32_t j
                
                do
                    if (sx.d(*(eax_4 + 6)) == i)
                        int32_t edx_3 = *(*ecx + 0x18) * 0xb + zx.d(*eax_4)
                        *(&var_544 + (edx_3 << 2)) += 1
                    
                    eax_4 += 8
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                edx_1 = var_548
                edi_1 = arg1
            
            i = sx.d(*(edi_1 + i * 0xc + 0x8ca))
        while (i != 0xffffffff)
    
    void var_4b8
    void* ecx_4 = &var_4b8
    int32_t i_9 = 4
    int32_t i_1
    
    do
        esi += 0xa
        void var_416
        *(&var_416 + esi) = *(ecx_4 - 4)
        ecx_4 += 0x2c
        void var_415
        *(&var_415 + esi) = *(ecx_4 - 0x2c)
        void var_414
        *(&var_414 + esi) = *(ecx_4 - 0x28)
        void var_413
        *(&var_413 + esi) = *(ecx_4 - 0x24)
        void var_412
        *(&var_412 + esi) = *(ecx_4 - 0x20)
        void var_411
        *(&var_411 + esi) = *(ecx_4 - 0x1c)
        void var_410
        *(&var_410 + esi) = *(ecx_4 - 0x18)
        void var_40f
        *(&var_40f + esi) = *(ecx_4 - 0x14)
        void var_40e
        *(&var_40e + esi) = *(ecx_4 - 0x10)
        void var_40d
        *(&var_40d + esi) = *(ecx_4 - 0xc)
        i_1 = i_9
        i_9 -= 1
    while (i_1 != 1)
    *(&var_40c + esi) = *(edx_1 + 0x174)
    int32_t i_8 = *(edx_1 + 0x164)
    *(&var_40b + esi) = *(edx_1 + 0x178)
    int40_t var_524 = 0
    char var_51c = i_9.b
    __builtin_memset(&var_544, 0, 0x1d)
    
    if (i_8 s> 0)
        int32_t i_10 = i_8
        void* ecx_5 = var_548 + 0x24
        int32_t i_2
        
        do
            if (*(ecx_5 + 1) == 5)
                uint32_t eax_18 = zx.d(*ecx_5)
                *(&var_544 + (eax_18 << 2)) += 1
            
            ecx_5 += 8
            i_2 = i_10
            i_10 -= 1
        while (i_2 != 1)
    
    void var_40a
    *(&var_40a + esi) = var_544:4.b
    void var_409
    *(&var_409 + esi) = var_544:8.b
    void var_408
    *(&var_408 + esi) = var_544:0xc.b
    void var_407
    __builtin_memset(&var_407 + esi, 0, 6)
    void var_401
    *(&var_401 + esi) = var_51c
    int40_t var_524_1 = 0
    char var_51c_1 = 0
    __builtin_memset(&var_544, 0, 0x1d)
    
    if (i_8 s> 0)
        void* ecx_6 = var_548 + 0x24
        int32_t i_3
        
        do
            if (*(ecx_6 + 1) == 6)
                uint32_t eax_23 = zx.d(*ecx_6)
                *(&var_544 + (eax_23 << 2)) += 1
            
            ecx_6 += 8
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
    
    void var_400
    *(&var_400 + esi) = var_544:4.b
    void var_3ff
    *(&var_3ff + esi) = var_544:8.b
    void var_3fe
    *(&var_3fe + esi) = var_544:0xc.b
    void var_3fd
    __builtin_memset(&var_3fd + esi, 0, 7)
    char var_3f6[0x3ee]
    var_3f6[esi] = *(var_548 + 0x18c)
    int64_t var_55c
    int32_t* var_570 = &var_55c
    var_55c = 0
    int64_t var_554
    int32_t* var_574 = &var_554
    var_554 = 0
    sub_4517a0(&var_554, esi + 0x17, &var_40c, var_574, var_570)
    int32_t edi_2 = var_554.d
    uint32_t eax_29 = zx.d(edi_2.w)
    int32_t* i_4
    
    for (i_4 = *((eax_29 << 2) + &data_1450b60); i_4 != 0; i_4 = i_4[0x66])
        if (*i_4 == edi_2 && i_4[1] == var_550)
            goto label_44317e
    
    int32_t var_570_1 = 0x1a0
    int32_t* i_6 = _malloc()
    *i_6 = edi_2
    void* edx_5 = &i_6[3]
    int32_t ecx_8 = *((eax_29 << 2) + &data_1450b60)
    *((eax_29 << 2) + &data_1450b60) = i_6
    int32_t i_7 = 0xb
    i_6[1] = var_550
    i_6[0x66] = ecx_8
    i_6[2] = 0
    int32_t i_5
    
    do
        *(edx_5 + 0x2c) = 0
        edx_5 += 4
        *(edx_5 - 4) = 0
        i_5 = i_7
        i_7 -= 1
    while (i_5 != 1)
    int32_t ecx_9
    int32_t edi_4
    edi_4, ecx_9 = __memfill_u32(&i_6[0x19], i_7, 0x4d)
    i_4 = i_6
    label_44317e:
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_4
}
