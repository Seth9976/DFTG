// 函数名称: sub_4465f0
// 虚拟地址: 0x4465f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4465f0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = nullptr
    void* edi_1 = arg2 * 0x1bc + arg3
    uint32_t result = 0
    int32_t var_358 = 0
    int32_t var_354 = 2
    int32_t var_350 = 1
    int32_t var_34c[0xc9]
    int32_t eax_6 = sub_4453c0(&var_34c, arg2, arg3, &var_34c, 0)
    int32_t ecx = 0
    var_348
    
    if (eax_6 s> 0)
        do
            esi = *(&var_348 + (ecx << 3))
            
            if ((esi[1].b & 0x40) != 0)
                int32_t var_350_1 = esi[2]
            
            ecx += 1
        while (ecx s< eax_6)
    
    uint32_t eax_8 = 0
    
    if (eax_6 s> 0)
        do
            if (arg4 == var_34c[eax_8 * 2])
                esi = *(&var_348 + (eax_8 << 3))
                break
            
            eax_8 += 1
        while (eax_8 s< eax_6)
    
    int32_t i_3 = *(edi_1 + 0x164)
    int32_t* ebx = &var_358
    int128_t var_28 = zx.o(0)
    
    if (arg4 s>= 0)
        ebx = esi
    
    int128_t var_18 = zx.o(0)
    
    if (i_3 s> 0)
        int32_t i_2 = i_3
        void* ecx_3 = edi_1 + 0x2b
        int32_t i
        
        do
            if (*(ecx_3 - 6) == 4 && (*ecx_3 & 3) == 0)
                eax_8 = zx.d(*(ecx_3 - 2))
                *(&var_28 + (eax_8 << 2)) += 1
            
            ecx_3 += 8
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_1 = 0
    
    if (i_3 s> 0)
        void* ecx_4 = edi_1 + 0x29
        
        do
            if (*(ecx_4 - 4) == 4 && (*(ecx_4 + 2) & 3) == 0)
                int32_t edx_1 = ebx[1]
                
                if (((edx_1 & 0x200) == 0 || *(ecx_4 - 5) != 1)
                        && ((edx_1 & 0x100) == 0 || *(ecx_4 - 5) == 1))
                    if ((edx_1 & 0x2000) != 0)
                        eax_8.b = *(ecx_4 - 5)
                    
                    if ((edx_1 & 0x2000) == 0 || eax_8.b == 3 || eax_8.b == 5)
                        if ((edx_1 & 0x800) != 0)
                            eax_8.b = *(ecx_4 - 5)
                        
                        if (((edx_1 & 0x800) == 0 || eax_8.b == 2 || eax_8.b == 4)
                                && ((edx_1 & 0x4000) == 0 || *ecx_4 == 1)
                                && ((edx_1 & 0x10000) == 0 || zx.d(*ecx_4) != *(edi_1 + 0x180))
                                && ((edx_1 & 0x80000) == 0 || *ecx_4 != 1)
                                && ((edx_1 & 0x100000) == 0 || *ecx_4 != 2)
                                && ((edx_1 & 0x200000) == 0 || *ecx_4 != 3)
                                && ((edx_1 & &__dos_header) == 0 || *ecx_4 != 5)
                                && ((edx_1 & 0x8000) == 0 || *(&var_28 + (zx.d(*ecx_4) << 2)) s>= 2))
                            *(arg5 + (result << 2)) = i_1
                            result += 1
            
            i_1 += 1
            ecx_4 += 8
        while (i_1 s< *(edi_1 + 0x164))
    
    int32_t edx_3 = 0x3e
    *arg6 = 0x3e
    int32_t eax_10 = ebx[1]
    
    if ((eax_10 & 0x10000) != 0)
        edx_3 = 1 << (*(edi_1 + 0x180)).b
        *arg6 = edx_3
        eax_10 = ebx[1]
    
    if ((eax_10 & 0x20000) != 0)
        *arg6 = 0x12
        edx_3 = 0x12
        eax_10 = ebx[1]
    
    if ((eax_10 & 0x40000) != 0)
        *arg6 = 0xa
        edx_3 = 0xa
        eax_10 = ebx[1]
    
    if ((eax_10 & 0x80000) != 0)
        *arg6 = 2
        edx_3 = 2
        eax_10 = ebx[1]
    
    if ((eax_10 & 0x100000) != 0)
        *arg6 = 4
        edx_3 = 4
        eax_10 = ebx[1]
    
    if ((eax_10 & 0x200000) != 0)
        *arg6 = 8
        edx_3 = 8
        eax_10 = ebx[1]
    
    if ((eax_10 & &__dos_header) != 0)
        *arg6 = 0x20
        edx_3 = 0x20
        eax_10 = ebx[1]
    
    if ((eax_10 & 0x8000) != 0)
        *arg6 = edx_3 | 1
    
    *arg7 = ebx[2]
    
    if ((ebx[1].b & 0x20) != 0)
        *arg7 = sub_444f80(arg3, arg2)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
