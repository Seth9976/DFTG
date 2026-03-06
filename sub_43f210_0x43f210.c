// 函数名称: sub_43f210
// 虚拟地址: 0x43f210
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_43f210(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = arg1
    void* edi_1 = arg2 * 0x1bc + esi
    int32_t var_448 = esi
    int32_t eax_2 = 0
    int32_t i = *(edi_1 + 0x170)
    int64_t var_444
    void var_40c
    void var_40b
    
    if (i != 0xffffffff)
        int32_t j_2 = *(edi_1 + 0x164)
        
        do
            *(&var_40c + eax_2) = i.b
            void* ecx_1 = esi + i * 0xc
            var_444:4.d = ecx_1
            ecx_1.b = *(ecx_1 + 0x8cc)
            *(&var_40b + eax_2) = ecx_1.b
            eax_2 += 2
            
            if (j_2 s> 0)
                int32_t j_1 = j_2
                void* edx = edi_1 + 0x24
                int32_t j
                
                do
                    if (sx.d(*(edx + 6)) == i)
                        int32_t ecx_2
                        ecx_2.b = *edx
                        *(&var_40c + eax_2) = ecx_2.b
                        eax_2 += 1
                    
                    edx += 8
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                j_2 = *(edi_1 + 0x164)
                esi = var_448
            
            i = sx.d(*(var_444:4.d + 0x8ca))
        while (i != 0xffffffff)
    
    int32_t i_3 = *(edi_1 + 0x164)
    *(&var_40c + eax_2) = *(edi_1 + 0x174)
    *(&var_40b + eax_2) = *(edi_1 + 0x178)
    int40_t var_418 = 0
    char var_410 = 0
    int128_t var_438
    __builtin_memset(&var_438, 0, 0x1d)
    
    if (i_3 s> 0)
        void* edx_1 = edi_1 + 0x2b
        int32_t i_1
        
        do
            if (*(edx_1 - 6) == 2 && (*edx_1 & 2) == 0)
                uint32_t ecx_6 = zx.d(*(edx_1 - 7))
                *(&var_438 + (ecx_6 << 2)) += 1
            
            edx_1 += 8
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int32_t edx_2 = eax_2 + 0xc
    void var_40a
    *(&var_40a + eax_2) = var_438:4.b
    void var_409
    *(&var_409 + eax_2) = var_438:8.b
    void var_408
    *(&var_408 + eax_2) = var_438:0xc.b
    void var_407
    __builtin_memset(&var_407 + eax_2, 0, 7)
    eax_2.b = *(edi_1 + 0x18c)
    *(&var_40c + edx_2) = eax_2.b
    int64_t var_44c = 0
    var_444 = 0
    sub_4517a0(&var_444, edx_2 + 1, &var_40c, &var_444, &var_44c)
    int32_t esi_1 = var_444.d
    int32_t edi_2 = var_444:4.d
    uint32_t ebx = zx.d(esi_1.w)
    int32_t* i_2
    
    for (i_2 = *((ebx << 2) + &data_14d0b68); i_2 != 0; i_2 = i_2[0xf])
        if (*i_2 == esi_1 && i_2[1] == edi_2)
            goto label_43f465
    
    int32_t var_460_1 = 0x40
    i_2 = _malloc()
    int32_t ecx_11 = *((ebx << 2) + &data_14d0b68)
    *((ebx << 2) + &data_14d0b68) = i_2
    *i_2 = esi_1
    i_2[1] = edi_2
    i_2[0xf] = ecx_11
    __builtin_memset(&i_2[2], 0, 0x34)
    label_43f465:
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_2
}
